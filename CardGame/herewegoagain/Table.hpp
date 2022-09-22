#ifndef TABLE_HPP
#define TABLE_HPP

#include "Headers.hpp"

class Card;

class Table
{
	Card	*hand[3]; //just the river.
public:
	Table();
	Table(const Table &oldTable);
	Table& operator= (const Table &oldTable);
	~Table();
};

#endif
