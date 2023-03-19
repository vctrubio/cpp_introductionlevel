#include "Headers.hpp"
#include "BitcoinExchange.hpp"
#include <ctime>
#include <iostream>
#include <sstream>

void    parse_csv(char *filename)
{

    BitcoinExchange prices;

    std::ifstream file(filename);
    std::string line;

    // Skip header line
    std::getline(file, line);

    // Parse data lines
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date_str, price_str;

        if (std::getline(ss, date_str, ',') && std::getline(ss, price_str)) {
            // Parse date and price
            struct tm tm = {0};
            strptime(date_str.c_str(), "%Y-%m-%d", &tm);
            time_t date = mktime(&tm);
            long price = std::stol(price_str);

            // Add to price map
            prices.add_price(date, price);
        }
    }

    // Print all prices
    prices.print_all_prices();
}


int main(int ac, char **av)
{  
    if (ac == 2)
        parse_csv(av[1]);
    return 1;
}