#ifndef DECK_HPP
#define DECK_HPP

#include "Headers.hpp"
#include "Card.hpp"

class Deck
{
	Card	*cards[13];
public:
	Deck();
	Deck(const Deck &oldDeck);
	Deck& operator= (const Deck &oldDeck);
	~Deck();


};

#endif
