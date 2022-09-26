#include "Headers.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Player.hpp"
#include "Round.hpp"
#include "Table.hpp"
#include "Combo.hpp"

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
		cout << **ptrB;
		if ((*ptrB)->combo->rank)
			cout << "COMBO OF CARD:" << (*ptrB)->combo->card << " OF RANK: " << (*ptrB)->combo->rank;
		cout << endl;
		ptrB++;
	}
};

void	dealRoundOne(Deck *deck, list<Player *> p) // 2 cards to player, 3 on the table
{
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
	cout << "Table:: ";
	cout << *table << endl;
	// cout << static_cast<const Table &>(*deck); ALSO works!
};

void	dealBlind(list<Player*> *players)
{
	players->push_back(players->front());
	players->pop_front();
}

/*
1.Shuffle cards
1b.change blinds ->list.player.push
2.Deal cards
3.Speak, -fold, raise, check
4.Combination / Stake (money, or cards)
5.Complete Round (award winner, keep records)
*/
void	loop_round(Deck *deck, list<Player*> *players)
{
	deck->shuffle();
	dealBlind(players);
	dealRoundOne(deck, *players);
	combo(players->front()->hand, deck->hand);
	for (auto p : *players)
		p->combo = calc_pair(p->hand, deck->hand);
}

int main()
{
	list<Player *> lstPlayers;
	lstPlayers = createPlayers(4);

	Deck *deck = new Deck();
	loop_round(deck, &lstPlayers);

	printPlayers(lstPlayers);
	printTable(deck);

	//so far we have cards to each player, cards on table.
	//NEED- shuffling, combo, pick winner



	return (22);
}

/* lst of players, the head is the person that talks first,
after round, push head to tail
*/