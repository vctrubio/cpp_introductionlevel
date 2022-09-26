#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Headers.hpp"
#include "Card.hpp"

static int	seat_number = 0;

class Card;
class Deck;
struct score;

class Player
{
	int		seat;
	string	name;
public:
	Card	*hand[2];
	score	*combo;
	Player();
	Player(const Player &oldPlayer);
	Player& operator= (const Player &oldPlayer);
	~Player();

	string	getName(){return name;};
	int		dealCard(Card *card); //can be looked at being virtual void deal();
	friend ostream&	operator<<(ostream &os, const Player &player);
};


#endif
