#include "Zombie.hpp"

int main(void)
{
	Zombie *list;
	int size = 10;
	
	list = zombieHorde(size, "Willy");
	if (list)
	{
		for(int i = 0; i < size; i++)
			list[i].announce();
		delete[] list;
	}	
}
