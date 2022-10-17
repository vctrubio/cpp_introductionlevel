#include "Zombie.hpp"

std::string	ft_stradd(std::string str, int i)
{
	str += " numero:: ";
	str += '0' + i;
	return (str);
}

Zombie* zombieHorde(int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *list = new Zombie[N];
	for (int i = 0; i < N; i++)
		list[i].setName(name);
	return (list);
}
