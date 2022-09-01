#ifndef CARD_HPP
#define CARD_HPP

#include "Game.hpp"
#include "Player.hpp"
#include "CardDeck.hpp"


class	Card 
{
public:
	unsigned int	_id;
	unsigned int	_value;
	bool			_out;
	Card(int i, int v): _id(i), _value(++v), _out(false){};
	~Card(){};

	// void	Card::giveCard(Card& card, (void *) (void)user);

	// Card&	rtnCard(int id);
	// Card&	deal();
	// bool	freeCard(int id);
	// void	Card::assignCard(Card &card, Player &user);

};

ostream &operator<<(ostream &output, Card &obj);

#endif
