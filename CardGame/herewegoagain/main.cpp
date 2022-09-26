#include "Headers.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Player.hpp"
#include "Round.hpp"
#include "Table.hpp"

list<Player *> createPlayers(int size)
{
	int j;
	list<Player *> players;

	for (j = 0; j < size; j++)
	{
		Player *ptr = new Player();
		players.push_back(ptr);
	}
	return (players);
};

void printPlayers(list<Player *> p)
{
	list<Player *>::iterator ptrB;
	list<Player *>::iterator ptrE;

	ptrB = p.begin();
	ptrE = p.end();
	while (ptrB != ptrE)
	{
		cout << **ptrB << "\n";
		ptrB++;
	}
};

void	dealRoundOne(Deck *deck, list<Player *> p) // 2 cards to player, 3 on the table
{
	//Deal 2 cards to each player and set the River
	for (auto itr : p)
		itr->dealCard(deck->deal());
	for (auto itr : p)
		itr->dealCard(deck->deal());

	for (int i = 0; i < 3; i++)
		deck->tDeal(deck->deal());
};

void	printTable(Deck *deck)
{
	Table *table = deck;
	cout << "Table::\n";
	cout << *table << endl;
	// cout << static_cast<const Table &>(*deck); This also works!
};

int main()
{
	list<Player *> lstPlayers;
	lstPlayers = createPlayers(4);

	Deck *deck = new Deck();
	dealRoundOne(deck, lstPlayers);

	printPlayers(lstPlayers);
	printTable(deck);

	//so far we have cards to each player, cards on table.
	//NEED- shuffling, combo, pick winner



	return (22);
}

/* lst of players, the head is the person that talks first,
after round, push head to tail
*/