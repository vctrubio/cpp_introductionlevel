#ifndef GAME_HPP
#define	GAME_HPP


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

#include "Player.hpp"

using namespace std;
class Player;

class	Game
{
	Player*	player[PLAYERS];
public:
	Game();
	~Game();

	Player&	rtnPlayer(int i);
	// int		getTotalPlayers();
	virtual void	myAnnounce();
};

ostream &operator<<(ostream &output, Game &obj);

#endif
