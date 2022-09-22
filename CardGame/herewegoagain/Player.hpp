#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Headers.hpp"
#include "Card.hpp"

static int	seat_number = 0;

class Card;

class Player
{
	int		seat;
	string	name;
	Card	*hand[2];
public:
	Player();
	Player(const Player &oldPlayer);
	Player& operator= (const Player &oldPlayer);
	~Player();

	string	getName(){return name;};
	friend ostream&	operator<<(ostream &os, const Player &player);
};


#endif
