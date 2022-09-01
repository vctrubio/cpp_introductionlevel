#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

// forward declaration of 'ICharacter'
class ICharacter;

class AMateria
{
protected:
	std::string	type;
public:
	AMateria();
	AMateria(const AMateria &oldAMateria);
	AMateria& operator= (const AMateria &oldAMateria);
	virtual ~AMateria();

	std::string const&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif