#ifndef TABLE_HPP
#define TABLE_HPP

#include "Headers.hpp"

#include "Player.hpp"

class Card;
class Player;

class Table
{
	Card			*hand[3]; //just the river.
public:
	Table(Player *players[], int size);
	Table(const Table &oldTable);
	Table& operator= (const Table &oldTable);
	~Table();
	
	void	deal(Card *card);
};


#endif
