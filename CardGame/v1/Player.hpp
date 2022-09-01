#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>

#define	PLAYERS 2
using namespace std;

#include "Game.hpp"
#include "Card.hpp"

class	Card;

class	Player
{
	unsigned int	_pos;
	Card*			_card;
public:
	Player(int i): _pos(i){};
	~Player(){};

	Player&	rtnPlayer(int p);
	Card&	rtnCard();
	int 	getPos(){return _pos;};
	void	assignCard(Card* card);
};

ostream  &operator<<(ostream  &output, Player &obj);


#endif
