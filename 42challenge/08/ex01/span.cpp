#include "span.hpp"



void	Span::add_number(int n)
{
	std::cout << "Number adding: " << n << std::endl;

	std::vector<int>	ptr;

	ptr.push_back(n);

	std::cout << ptr.at(0) << std::endl;

};
