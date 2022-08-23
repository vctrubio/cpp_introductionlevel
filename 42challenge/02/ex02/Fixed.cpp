#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	nb = 0;
}

Fixed::Fixed(int i)
{
	std::cout << i << " :int constructor called" << std::endl;
	nb = i << bits;
}

Fixed::Fixed(const float i)
{
	std::cout << i << " :float constructor called" << std::endl;
	nb = (int)roundf(i * (1 << bits));
}

Fixed::~Fixed()
{
        std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(Fixed &oldnb)
{
	std::cout << "Copy constructor called" << std::endl;
	nb = oldnb.getRawBits();
}

Fixed& Fixed::operator= (Fixed &oldNb )
{
	std::cout << "Assignation operator called" << std::endl;
	nb = oldNb.getRawBits();
	return (*this);
}
//
std::ostream&	operator<< (std::ostream &oStream, Fixed const &f)
{
	oStream << f.toFloat();
	return (oStream);
}
//
Fixed	Fixed::operator+ (Fixed &oldNb)
{
	Fixed	tmp;
	
	std::cout << "HERE TMP IS" << tmp << "::\n";
	tmp.setRawBits(nb + oldNb.nb);
	return (tmp);
}

Fixed	Fixed::operator- (Fixed &oldNb)
{
	Fixed	tmp;

	tmp.setRawBits(nb - oldNb.nb);
	return (tmp);
}

Fixed	Fixed::operator/ (Fixed &oldNb)
{
	Fixed	tmp;

	tmp.setRawBits(nb / oldNb.nb);
	return (tmp);
}

Fixed	Fixed::operator* (Fixed &oldNb)
{
	Fixed	tmp;

	tmp.setRawBits(nb * oldNb.nb);
	return (tmp);
}
//
Fixed	Fixed::operator++ ()
{
	nb++;
	return (*this);
}

Fixed	Fixed::operator-- ()
{
	Fixed	tmp;

	nb--;
	return (tmp);
}

Fixed	Fixed::operator++ (int)
{
	nb++;
	return (*this);
}

Fixed	Fixed::operator-- (int)
{
	Fixed	tmp;

	nb--;;
	return (tmp);
}
//
Fixed& Fixed::min( Fixed &a, Fixed&b )
{
	if (a.nb <= b.nb)
		return (a);
	return (b);
}

Fixed& Fixed::max( Fixed &a, Fixed&b )
{
	if (a.nb >= b.nb)
		return (a);
	return (b);
}

const Fixed& Fixed::min( const Fixed &a, const Fixed&b )
{
	if (a.nb <= b.nb)
		return (a);
	return (b);
}

const Fixed& Fixed::max( const Fixed &a, const Fixed&b )
{
	if (a.nb >= b.nb)
		return (a);
	return (b);
}
//
int     Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (nb);
}

void    Fixed::setRawBits(int const rawbit)
{
	std::cout << "setRawBits member function called" << std::endl;
	nb = rawbit;
}
//
float	Fixed::toFloat(void) const
{
	return ((float)(nb) / (1 << bits));
}

int	Fixed::toInt(void) const
{
	return (nb >> bits); 
}

