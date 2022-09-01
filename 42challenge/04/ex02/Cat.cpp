#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain;
	type = "Cat";
	std::cout << "Cat Class Constructor\n";
}

Cat::Cat(const Cat &oldCat)
{
	type = oldCat.type;
	brain = new Brain(*oldCat.brain);
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
	delete brain;
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