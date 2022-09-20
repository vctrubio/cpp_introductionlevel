#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Headers.hpp"

class Player
{
public:
	Player();
	Player(const Player &oldPlayer);
	Player& operator= (const Player &oldPlayer);
	~Player();
};

#endif
