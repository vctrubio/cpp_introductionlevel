#ifndef DEALER_HPP
#define DEALER_HPP

#include "Header.hpp"

#include "CardDeck.hpp"

class Dealer
{
public:
	Dealer(){cout << "Dealer: \n";};
	~Dealer(){};

	Card*	_inHand;
	virtual	void	takeCard(Card *card);
	virtual	void	removeCard();
	virtual	void	Announce();
};

void	Dealer::takeCard(Card *card)
{
	// cout << "Dealer Take card\n";
	card->_taken = true;
	_inHand = card;
}

void	Dealer::removeCard()
{
	_inHand->_taken = false;
	_inHand = nullptr;
}

void	Dealer::Announce()
{
	cout << "Hi I'm Dealer I have " << _inHand->_id << " in hand" <<endl;

}

#endif