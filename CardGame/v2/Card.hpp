#ifndef CARD_HPP
#define CARD_HPP

#include "Header.hpp"
static int	cID = 0;

class Card
{
protected:
public:
	Card();
	~Card();

	int			_id;
	bool		_taken;
};

#endif