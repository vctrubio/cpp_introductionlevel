#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &oldWrongAnimal);
	WrongAnimal &operator=(const WrongAnimal &oldWrongAnimal);
	~WrongAnimal();

	void getType(void);
	void makeNoise(void);
};

#endif
