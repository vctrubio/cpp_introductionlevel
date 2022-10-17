#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	std::string name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void	setName(std::string name);
	void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif