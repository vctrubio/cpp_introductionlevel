#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal( const Animal &oldAnimal );
	Animal& operator= ( const Animal &oldAnimal );
	~Animal();

	void			getType(void);
	virtual void	makeNoise(void);
};

#endif
