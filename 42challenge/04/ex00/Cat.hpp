#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &oldCat);
	Cat& operator= (const Cat &oldCat);
	~Cat();

	void	whatClass(void);
	void	makeNoise(void);
};

#endif
