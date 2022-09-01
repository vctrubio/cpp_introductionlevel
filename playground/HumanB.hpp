#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class	HumanB: virtual public Weapon
{
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanB(std::string name): _name(name){};
	~HumanB();
	void	setWeapon(Weapon &w);
	void	attack();
};

#endif
