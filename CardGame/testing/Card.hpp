#ifndef CARD_HPP
#define CARD_HPP

#include "Headers.hpp"

class Card
{
public:
	Card();
	Card(const Card &oldCard);
	Card& operator= (const Card &oldCard);
	~Card();
};

#endif
