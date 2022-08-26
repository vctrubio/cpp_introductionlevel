#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
	Animal 	p;
	Animal	*d = new Dog();
	Dog		myDog;

	std::cout << "\n\n";
	d->getType();
	myDog.whatClass();
}


