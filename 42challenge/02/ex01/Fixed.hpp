#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

class	Fixed
{
	int			nb;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(int n);
	Fixed(const float n);
	~Fixed();
	Fixed(Fixed &oldnb);
	Fixed& operator= (Fixed &oldnb);
	int	getRawBits(void) const;
	void	setRawBits(int const rawbit);
	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream&	operator<< (std::ostream &oStream, Fixed const &f);

#endif
