#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <iomanip>
#include <string>

class	Fixed
{
	int			nb;
	static const int	bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed &oldnb);
	Fixed& operator= (Fixed &oldnb);
	int	getRawBits(void) const;
	void	setRawBits(int const rawbit);
};



#endif
