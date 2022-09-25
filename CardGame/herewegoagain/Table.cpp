#include "Table.hpp"

Table::Table(Player *players[], int size) //Unable to find array size otherwise
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
{
	cout << "Table deconstructor\n";
}


void	Table::tDeal(Card *card)
{
	if (!hand[0])
		hand[0] = card;
	else if (!hand[1])
		hand[1] = card;
	else if (!hand[2])
		hand[2] = card;
	else
		cout << "Error CHECK- table is full\n";
}