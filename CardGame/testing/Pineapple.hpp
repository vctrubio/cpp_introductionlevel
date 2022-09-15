#ifndef PINEAPPLE_HPP
#define PINEAPPLE_HPP

#include "Headers.hpp"

using namespace	std;

class Pineapple
{
	int	price;
public:
	Pineapple();
	Pineapple(const Pineapple &oldPineapple);
	Pineapple& operator= (const Pineapple &oldPineapple);
	~Pineapple();

	int	getPrice() const;
};

int	Pineapple::getPrice() const
{
	//price++; not allowed because its a const
	return price;
};

#endif
