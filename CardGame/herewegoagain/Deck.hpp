#ifndef DECK_HPP
#define DECK_HPP

#include "Headers.hpp"
#include "Card.hpp"

class Deck
{
public:
	Card	*cards[52];
	Deck();
	Deck(const Deck &oldDeck);
	Deck& operator= (const Deck &oldDeck);
	~Deck();


};

#endif
