#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <string>

# include "Brain.hpp"

class	Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal &oldAnimal);
	Animal& operator= (const Animal &oldAnimal);
	virtual ~Animal();
	
	void			getType(void);
	virtual void	makeNoise(void) = 0;
};

#endif
