#ifndef TABLE_HPP
#define TABLE_HPP

#include "Header.hpp"

class Player;
class CardDeck;
class Dealer;

static int tID = 0;

class Table : virtual public CardDeck, virtual public Dealer
{
public:
	Table();
	~Table();

	Player *player[PLAYERSIZE];
	void	roll();
	void	pickWinner();
	void	resetTable();
};

ostream &operator<<(ostream &output, Table &obj);

Table::Table()
{
	for (int i = 0; i < PLAYERSIZE; i++)
	{
		player[i] = new Player();
	}
	cout << "Table: \n";
}
Table::~Table()
{
	for (int i = 0; i < PLAYERSIZE; i++)
	{
		delete player[i];
	}
}
/////

void Table::roll()
{
	if (tID >= ROUNDS)
	{
		tID = 0;
		// Reset rount or pick winner
	}
	Card *c;
	for (int i = 0; i < PLAYERSIZE; i++)
	{
		c = nextCard();
		player[i]->takeCard(c);
	}
	c = nextCard();
	takeCard(c);

	cout << tID << " Rolling the dice" << endl;
	tID++;
}

void	Table::pickWinner()
{
	void	*ptr;
	int		highestCard = 0;
	int		i;
	int		pid;
	Card	*c;

	for (i = 0; i < PLAYERSIZE; i++)
	{
		c = player[i]->getHand();
		if (c->_id > highestCard)
		{
			ptr = (void *)player[i];
			pid = i;
			highestCard = c->_id;
		}
	}
	if (_inHand->_id > highestCard)
		cout << "Dealer Wins\n";
	else
		cout << "High Card: " << highestCard << "| Plyaer " << pid << endl; //ptr to show ID!!!?¿
}


void	Table::resetTable()
{
	int i;

	for (i = 0; i < PLAYERSIZE; i++)
	{
		player[i]->removeCard();
	}
	removeCard();
}
#endif