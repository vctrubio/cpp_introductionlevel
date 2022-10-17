#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	nb = 0;
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

Fixed& Fixed::operator= (Fixed &oldNb )
{
	std::cout << "Assignation operator called" << std::endl;
	nb = oldNb.getRawBits();
	return (*this);
}
