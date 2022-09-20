#ifndef DECK_HPP
#define DECK_HPP

#include "Headers.hpp"

class Deck
{
public:
	Deck();
	Deck(const Deck &oldDeck);
	Deck& operator= (const Deck &oldDeck);
	~Deck();
};

#endif
