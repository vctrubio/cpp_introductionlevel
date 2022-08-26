#include "Animal.hpp"

Animal::Animal()
	:type("Underfined")
{
	std::cout << type << " Constructed\n";
}

Animal::~Animal()
{
	std::cout << type << " Animal Deconstructor\n";
}

Animal::Animal(const Animal& oldAnimal)
	:type(oldAnimal.type)
{
	std::cout << type << " Animal Copied Constructor\n";
}

Animal&	Animal::operator= (const Animal &oldAnimal)
{
	std::cout << "= Operator\n";
	type = oldAnimal.type;
	return (*this);
}

void	Animal::getType(void)
{
	std::cout << type << " Aniaml Type\n";
}

void	Animal::makeNoise(void)
{
	std::cout << "Animal Noise\n";
}