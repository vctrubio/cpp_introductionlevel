#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	:type("xWrongAnimal")
{
	std::cout << type << " Constructed\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " WrongAnimal Deconstructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& oldWrongAnimal)
	:type(oldWrongAnimal.type)
{
	std::cout << type << " WrongAnimal Copied Constructor\n";
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal &oldWrongAnimal)
{
	std::cout << "= Operator\n";
	type = oldWrongAnimal.type;
	return (*this);
}

void	WrongAnimal::getType(void)
{
	std::cout << type << " Aniaml Type\n";
}

void	WrongAnimal::makeNoise(void)
{
	std::cout << "WrongAnimal Noise\n";
}