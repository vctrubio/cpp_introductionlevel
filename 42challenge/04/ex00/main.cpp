#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	Animal		*c = new Cat();
	WrongAnimal	*c2 = new WrongCat();

	std::cout << "\n\n";
	c->makeNoise();
	c2->makeNoise();
	c2->getType();
	c2->makeNoise();
}
