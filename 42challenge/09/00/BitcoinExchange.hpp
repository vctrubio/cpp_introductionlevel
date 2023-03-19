#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include "Headers.hpp"

class BitcoinExchange
{
	std::map<time_t, long> prices;
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &oldBitcoinExchange);
	BitcoinExchange& operator= (const BitcoinExchange &oldBitcoinExchange);
	~BitcoinExchange();

   void add_price(time_t date, long price) {
        prices[date] = price;
    }

    long get_price(time_t date) const {
        std::map<time_t, long>::const_iterator it = prices.find(date);
        if (it == prices.end()) {
            return 0; // or some other default value
        }
        return it->second;
    }

    void print_all_prices() const {
        std::map<time_t, long>::const_iterator it;
        for (it = prices.begin(); it != prices.end(); ++it) {
            std::cout << "Date: " << std::ctime(&it->first) << "Price: " << it->second << std::endl;
        }
    }
};

#endif
