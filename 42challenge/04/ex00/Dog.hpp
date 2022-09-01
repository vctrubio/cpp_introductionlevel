#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &oldDog);
	Dog& operator= (const Dog &oldDog);
	~Dog();

	void	whatClass(void);
	void	makeNoise(void);
};

#endif
