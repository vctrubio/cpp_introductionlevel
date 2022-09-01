#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
}

Cure::~Cure()
{ // std::cout << type << " Deconstruct\n";
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void		use(ICharacter& target)
{
	std::cout << "Cure " << target.getName() << " CLEANCLEAN" << std::endl;
}