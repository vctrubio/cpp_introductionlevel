#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Class Constructor\n";
}

Cat::Cat(const Cat &oldCat)
{
	type = oldCat.type;
	std::cout << "Cat cpy Constructor\n";
}

Cat&	Cat::operator=(const Cat &oldCat)
{
	std::cout << "= Opirator\n";
	type = oldCat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat DECONSTRUCT\n";
}

void	Cat::whatClass(void)
{
	std::cout << type << "what class called\n";
}

void	Cat::makeNoise(void)
{
	std::cout << "Barking cat\n";
}