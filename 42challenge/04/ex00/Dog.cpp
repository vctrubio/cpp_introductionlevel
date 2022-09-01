#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Class Constructor\n";
}

Dog::Dog(const Dog &oldDog)
{
	type = oldDog.type;
	std::cout << "Dog cpy Constructor\n";
}

Dog&	Dog::operator=(const Dog &oldDog)
{
	std::cout << "= Opirator\n";
	type = oldDog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog DECONSTRUCT\n";
}

void	Dog::whatClass(void)
{
	std::cout << type << "what class called\n";
}

void	Dog::makeNoise(void)
{
	std::cout << "Barking dog\n";
}