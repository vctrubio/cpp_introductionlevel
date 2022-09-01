#include "Header.hpp"
#include "Card.hpp"
#include "CardDeck.hpp"
#include "Dealer.hpp"
#include "Player.hpp"
#include "Table.hpp"

int main()
{
	cout << "Staring\n";

	Table		*table = new Table();

	// table->callDeck();
	table->roll();
	table->pickWinner();
	table->resetTable();
	table->callDeck();
	table->roll();
	table->callDeck();
	table->pickWinner();

}