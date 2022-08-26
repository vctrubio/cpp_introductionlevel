#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	std::string	name;
public:
	Dog();
	Dog& operator= (const Dog &oldDog);
	~Dog();

	void	whatClass(void);
	void	makeNoise(void);
};

#endif
