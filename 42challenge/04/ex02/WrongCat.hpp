#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &oldWrongCat);

	WrongCat& operator= (const WrongCat &oldWrongCat);
	~WrongCat();

	void	whatClass(void);
	void	makeNoise(void);
};


#endif
