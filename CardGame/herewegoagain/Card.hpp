#ifndef CARD_HPP
#define CARD_HPP

#include "Headers.hpp"

class Card
{
	tuple <char, int> card;
public:
	Card(char c, int i);
	Card(const Card &oldCard);
	Card& operator= (const Card &oldCard);
	~Card();

	friend class Deck;
};

ostream& operator<<(ostream& os, const Card &card);

#endif
