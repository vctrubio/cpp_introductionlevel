#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Header.hpp"
#include "CardDeck.hpp"

static int	pID = 0;

class Player
{
protected:
	int		_id;
	Card*	_inHand;
public:
	Player():_id(++pID){cout << "Player: " << _id << endl;};
	~Player(){};

	int				getId() {return (_id);};
	Card*			getHand() {return (_inHand);};
	virtual	void	takeCard(Card *card);
	virtual	void	removeCard();
	virtual	void	Announce();
};

void	Player::takeCard(Card *card)
{
	// cout << "Player Take card\n";
	card->_taken = true;
	_inHand = card;
}

void	Player::removeCard()
{
	_inHand->_taken = false;
	_inHand = nullptr;
}

void	Player::Announce()
{
	cout << "Hi I'm Player " << getId() <<": I have " << _inHand->_id << " in hand" <<endl;

}
#endif