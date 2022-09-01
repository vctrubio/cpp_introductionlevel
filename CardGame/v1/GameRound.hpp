#ifndef GAMEROUND_HPP
#define	GAMEROUND_HPP

#include "Game.hpp"

//PLAYERS
//CARDS

//ROUNDS
	//ON_TABLE
	//COMBINATION
	//WINNER_OF_ROUND

class GameRound
{
	(void*)_winner;
	int		highestCard;
public:
	GameRound():highestCard(0){};
	~GameRound(){};
};

#endif
