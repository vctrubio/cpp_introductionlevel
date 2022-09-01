#ifndef CARDDECK_HPP
#define CARDDECK_HPP

#define DECKSIZE 8
#include "Game.hpp"
#include "Card.hpp"

class Card;

class	CardDeck
{
public:
	int		_size;
	Card*	card[DECKSIZE];
public:
	CardDeck(int i);
	~CardDeck();

	// Card&	rtnCard(int id) const;
	bool	cardIsFree(int id);
	Card&	dealCard();
};

ostream &operator<<(ostream &output, CardDeck &obj);

#endif
