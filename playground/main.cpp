#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void	myOT(void)
{
	std::cout << "Helloworld.\n";
}

void op(int x, int y, void(*function)())
{

};

void myft(void *sef)
{
	HumanB *b;
	HumanA *a;
	std::cout << sef << std::endl;
	// b = static_cast<HumanB*>(sef);

	b = (HumanB *)(sef);
	op(2, 3, myOT());
	// b->attack();
	// b->setType("hand");
	// std::cout << "HERE: " << b->getType();
};

int main()
{
	// HumanA	*d = new Weapon();
	Weapon *w = new HumanA();
	HumanA *h = new HumanA("LoveGame", *w);

	w->setType("bitches");
	std::cout << w->getType() << std::endl;
	h->attack();
	myft(h);
	std::cout << "Here end\n";
}
