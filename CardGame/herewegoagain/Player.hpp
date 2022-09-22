#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Headers.hpp"
#include "Card.hpp"

static int	seat_number = 0;

class Player
{
	int		seat;
	char	name;
	Card	*hand[2];
public:
	Player();
	Player(const Player &oldPlayer);
	Player& operator= (const Player &oldPlayer);
	~Player();
};

#endif
