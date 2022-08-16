# include "Zombie.hpp"


int main()
{
	Zombie *p = newZombie("peter");
	randomChump("ricky");

	p->announce();
	delete p;
}