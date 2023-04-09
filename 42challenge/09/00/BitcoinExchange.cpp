#include "BitcoinExchange.hpp"

void cleanParse(std::string &str)
{
	str.erase(0, str.find_first_not_of(" "));
	str.erase(str.find_last_not_of(" ") + 1);
}

bool is_valid_date(const std::string &date_str)
{
	std::tm date = {};
	std::istringstream ss(date_str);
	ss >> std::get_time(&date, "%Y-%m-%d"); // format of the input string

	std::string output = ss.str();

	if (ss.fail())
		return false;
	if (date.tm_year < 0 || date.tm_mon < 0 || date.tm_mon > 11 || date.tm_mday < 1 || date.tm_mday > 31)
		return false;

	return true;
}

void BitcoinExchange::print(std::string line)
{
	std::stringstream ss(line);
	std::string date, price;

	if (std::getline(ss, date, '|') && std::getline(ss, price))
	{
		cleanParse(date);
		cleanParse(price);
	}
	if (!is_valid_date(date))
		std::cout << RED << "Invalid Date: " << date << std::endl
				  << ENDC;
	else
		std::cout << date << " => " << price << " = " << value(date, price) << std::endl;
	// we have date, and price, now need to find it........
}

bool formatDate(std::string str)
{
	std::regex date_regex("^\\d{4}-\\d{2}-\\d{2}$");
	if (!std::regex_match(str, date_regex))
		return false;
	return true;
}

float BitcoinExchange::find_date(std::string date_str) {
    // Parse the input date string
    std::tm date = {};
    std::istringstream ss(date_str);
    ss >> std::get_time(&date, "%Y-%m-%d");
    time_t input_timestamp = std::mktime(&date);

	float rtn;

    // Find the closest date in the map
    time_t min_diff = std::numeric_limits<time_t>::max();
    std::map<time_t, float>::iterator it;
	
	if (prices.empty())
	{
		std::cout << "Please check parsing file: EMPTY\n";
		exit (19);
	}


    for (it = prices.begin(); it != prices.end(); ++it) {
		// std::cout << "IT ON" << it->first << " : " << it->second << std::endl;
        time_t diff = std::abs(input_timestamp - it->first);
        if (diff < min_diff) {
            min_diff = diff;
            rtn = it->second;
        }
    }
    return rtn;
}

float BitcoinExchange::value(std::string date, std::string price)
{
	float tmp = std::stof(price);
	// std::cout << "DO MATH: " << tmp << " (" << price << ") " << std::endl; 
	//////Find price to make ; 
	// std::cout << "TESTING: " <<  " END OF WEORLD|\n"<<  std::endl;
	return tmp * find_date(date);
}

BitcoinExchange::BitcoinExchange(char *filename)
{
	std::cout << "Getting DB from " << filename << std::endl;
	file.open(filename);
	std::string line;

	// Skip header line
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string date_str, price_str;

		if (std::getline(ss, date_str, ',') && std::getline(ss, price_str))
		{
			// Parse date and price
			struct tm tm = {0};
			strptime(date_str.c_str(), "%Y-%m-%d", &tm);
			time_t date = mktime(&tm);
			float price = std::stof(price_str);

			// Add to price map
			add_price(date, price);
		}
	}
	std::cout << GREEN << "SUCCESS\n"
			  << ENDC;
	file.close();
}

bool BitcoinExchange::val_line(std::string line, int mod)
{
	std::string date, price;
	std::stringstream ss(line);

	if (std::getline(ss, date, '|') && std::getline(ss, price))
	{
		cleanParse(date);
		cleanParse(price);
	}
	else
		return false;

	if (mod == 0)
	{
		if (date.compare("date") || price.compare("value"))
			return false;
	}
	else
	{
		if (!formatDate(date))
			return false;
		if (std::stof(price) < 0)
		{
			std::cout << RED << "Error: not a positive number: " << ENDC;
			return false;
		}
		if (std::stof(price) >= 2147483647)
		{
			std::cout << RED << "Error: too large of a number: " << ENDC;
			return false;
		}
	}
	return true;
}

void BitcoinExchange::init(char *filename)
{
	std::string ptr;
	int i = 0;

	file.open(filename);

	if (!file.is_open())
	{
		std::cerr << RED << "Failed to READ\n" << ENDC;
		exit(1);
	}
	else
	{
		std::getline(file, ptr);
		if (!val_line(ptr, i++))
		{
			std::cerr << RED << "Please make sure, proper format -- Date | INT \n";
			exit(1);
		}
	}

	while (std::getline(file, ptr))
	{
		if (val_line(ptr, i++))
			print(ptr);
		else
			std::cerr << RED << ptr << " BAD INPUT \n" << ENDC;
	}
	file.close();
}
