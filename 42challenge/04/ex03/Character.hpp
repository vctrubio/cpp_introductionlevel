#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#define	INVENTORY 4

# include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	std::string	name;
	AMateria*	inventory[INVENTORY];
public:
	Character();
	Character(std::string name);
	Character(const Character &oldCharacter);
	Character& operator=(const Character &oldCharacter);
	~Character();

	std::string	const& getName() const = 0;
	void		equip(AMateria* m) = 0;
	void		unequip(int idx) = 0;
	void 		use(int idx, ICharacter& target) = 0;
};

#endif