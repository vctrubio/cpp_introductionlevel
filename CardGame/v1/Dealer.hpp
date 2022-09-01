#ifndef DEALER_HPP
#define	DEALER_HPP

#define FLUSH 3
#define	RIVER 5

#include "Game.hpp"
#include "Card.hpp"
#include "CardDeck.hpp"

class	Cards;

class	Dealer
{
protected:
	CardDeck&		_deck;
	Card			*_onTable[FLUSH];
	Card			*_card;
public:
	Dealer(CardDeck& deck);
	~Dealer();

	void	roll();
};

#endif