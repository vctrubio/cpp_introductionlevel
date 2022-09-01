#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain;
	type = "Dog";
	std::cout << "Dog Class Constructor\n";
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog DECONSTRUCT\n";
}

Dog::Dog(const Dog &oldDog)
{
	type = oldDog.type;
	brain = new Brain(*oldDog.brain);
	std::cout << "Dog cpy Constructor\n";
}

Dog&	Dog::operator=(const Dog &oldDog)
{
	std::cout << "= Opirator\n";
	type = oldDog.type;
	return (*this);
}


void	Dog::whatClass(void)
{
	std::cout << type << "what class called\n";
}

void	Dog::makeNoise(void)
{
	std::cout << "Barking dog\n";
}