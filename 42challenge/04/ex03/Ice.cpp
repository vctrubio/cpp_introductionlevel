#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::~Ice()
{ // std::cout << type << " Deconstruct\n";
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		use(ICharacter& target)
{
	std::cout << "shoots an ice bold at " << target.getName() << " BAMBAM" << std::endl;
}