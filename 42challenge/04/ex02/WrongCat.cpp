#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Class Constructor\n";
}

WrongCat::WrongCat(const WrongCat &oldWrongCat)
{
	type = oldWrongCat.type;
	std::cout << "WrongCat cpy Constructor\n";
}


WrongCat&	WrongCat::operator=(const WrongCat &oldWrongCat)
{
	std::cout << "= Opirator\n";
	type = oldWrongCat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat DECONSTRUCT\n";
}

void	WrongCat::whatClass(void)
{
	std::cout << type << "what class called\n";
}

void	WrongCat::makeNoise(void)
{
	std::cout << "Wrong Barking cat\n";
}