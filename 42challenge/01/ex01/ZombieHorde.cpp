#include "Zombie.hpp"

std::string	ft_stradd(std::string str, int i)
{
	str += " numero:: ";
	str += '0' + i;
	return (str);
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*z;
	int		i;

	std::string	str= "hello";
	i = -1;
	z = new Zombie[N];
	while (++i < N)
	{
		z[N].setName(ft_stradd(name, i));
		z[N].announce();
	}
	return (z);
}