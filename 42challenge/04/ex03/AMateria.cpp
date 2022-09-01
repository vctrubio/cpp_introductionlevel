#include "AMateria.hpp"

/*
	AMateria();
	AMateria(const AMateria &oldAMateria);
	AMateria& operator= (const AMateria &oldAMateria);
	virtual ~AMateria();
*/

AMateria::AMateria()
{
	// std::cout << "AMateria defualt constructor\n";
}

AMateria::AMateria(const AMateria &oldAMateria)
{
	type = oldAMateria.type;
	// std::cout << "AMateria cpy constructor\n";
}

AMateria&	AMateria::operator= (const AMateria &oldAMateria)
{
	type = oldAMateria.type;
	// std::cout << "AMateria =operator\n";
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << "AMateria descutor\n";
}
//

std::string const& AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "USE: AMateira on "<< target.getName() << " *" << std::endl;
}
