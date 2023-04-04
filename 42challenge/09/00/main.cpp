#include "BitcoinExchange.hpp"


//Class Map Date with Price:
//input text, print result
int main(int ac, char **av)
{  
    if (ac != 2)
    {
        std::cout << "program needs input txt as an argument.\n";
        return 0;
    }
    //parse_csv
    std::string filename = "../data.csv";
    BitcoinExchange p_csv(&filename[0]);
    // p_csv.print_all_prices();
    p_csv.init(av[1]);

    return 1;
}