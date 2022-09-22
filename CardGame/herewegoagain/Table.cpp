#include "Table.hpp"

Table::Table()
{
	for (int i = 0; i < 3; i++)
	{
		hand[i] = nullptr;
	};
}

Table::Table(const Table &oldTable)
{}

Table& Table::operator= (const Table &oldTable)
{
	return (*this);
}

Table::~Table()
{}

// I NEED  dealCard(Card *card).
	//but i dont want to repeat myself