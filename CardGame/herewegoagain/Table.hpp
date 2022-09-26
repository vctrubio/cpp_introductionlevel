#ifndef TABLE_HPP
#define TABLE_HPP

#include "Headers.hpp"

#include "Player.hpp"

class Card;
class Player;

class Table
{
public:
	Card			*hand[3]; //just the river.
	Table();
	Table(const Table &oldTable);
	Table& operator= (const Table &oldTable);
	~Table();
	
	void	tDeal(Card *card);
	friend ostream&	operator<<(ostream &os, const Table &table);
};


#endif
