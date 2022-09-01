#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*p = new Dog();

	p->getType();
}