#ifndef CARDDECK_HPP
#define CARDDECK_HPP

#include "Header.hpp"
#include "Card.hpp"

class CardDeck
{
protected:
	int		_size;
	Card*	card[DECKSIZE];
public:
	CardDeck();
	~CardDeck();

	Card&	rtnCard(int id);
	Card*	nextCard();
	void	callDeck();
};

ostream &operator<<(ostream &output, CardDeck &obj);

#endif