#ifndef DECK_HPP
#define DECK_HPP

#include "Headers.hpp"
#include "Card.hpp"

class Deck
{
	Card	*cards[52];
public:
	Deck();
	Deck(const Deck &oldDeck);
	Deck& operator= (const Deck &oldDeck);
	~Deck();

	Card*	rtnCard(int i) {return cards[i];};
	virtual Card*	deal(); //study this part.
};

#endif
