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
	int	getRawBits(void) const;
	void	setRawBits(int const rawbit);
	float	toFloat(void) const;
	int	toInt(void) const;

	Fixed&	operator= (Fixed &oldnb);
	
	Fixed	operator+ (Fixed &oldnb);
	Fixed	operator- (Fixed &oldnb);
	Fixed	operator* (Fixed &oldnb);
	Fixed	operator/ (Fixed &oldnb);

	bool	operator> (const Fixed &oldnb);
	bool	operator< (const Fixed &oldnb);
	bool	operator>= (const Fixed &oldnb);
	bool	operator<= (const Fixed &oldnb);
	bool	operator!= (const Fixed &oldnb);
	bool	operator== (const Fixed &oldnb);

	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed& min( Fixed &a, Fixed&b );
	static Fixed& max( Fixed &a, Fixed&b );
	static const Fixed& min( const Fixed &a, const Fixed&b );
	static const Fixed& max( const Fixed &a, const Fixed&b );

};


std::ostream&	operator<< (std::ostream &oStream, Fixed const &f);

#endif
