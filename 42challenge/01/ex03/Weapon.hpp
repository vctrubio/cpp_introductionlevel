#ifndef WEAPON_H
#define WEAPON_H

# include <iostream>
# include <iomanip>
# include <string>

class	Weapon
{
protected:
	std::string	_type;
public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	void				setType(std::string type);
	const std::string	getType(void);
};

#endif
