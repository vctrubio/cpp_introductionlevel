#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include "Headers.hpp"
#include <ctime>
#include <iostream>
#include <sstream>

class BitcoinExchange
{
	std::map<time_t, float> prices;
    std::ifstream file;
public:
	BitcoinExchange(char *);
	// BitcoinExchange(const BitcoinExchange &oldBitcoinExchange);
	// BitcoinExchange &operator=(const BitcoinExchange &oldBitcoinExchange);
	~BitcoinExchange(){file.close();};

	void	init(char *);
	void	print(std::string);
	bool	val_line(std::string, int);
	float	value(std::string, std::string);
	float	find_date(std::string date);

	void add_price(time_t date, float price)
	{
		prices[date] = price;
	}

	float get_price(time_t date) const
	{
		std::map<time_t, float>::const_iterator it = prices.find(date);
		if (it == prices.end())
		{
			return 0;
		}
		return it->second;
	}

	void print_all_prices() const
	{
		char buffer[80];
		std::map<time_t, float>::const_iterator it;
		std::time_t timestamp;
		std::tm *tm;

		std::cout << "Date | Value" << std::endl;
		for (it = prices.begin(); it != prices.end(); ++it)
		{
			// if (it->second > 0 && it->second < 1001)
			// {
				timestamp = it->first;
				tm = std::localtime(&timestamp);
				std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", tm);
				std::cout << buffer << " | " << it->second << std::endl;
			// }
		}
	}
};

#endif
