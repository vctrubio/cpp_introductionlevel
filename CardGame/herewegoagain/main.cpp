#include "Headers.hpp"
#include "Deck.hpp"
#include "Card.hpp"

int main()
{
	Deck	*deck = new Deck();

	cout << "Hello Card Game\n";

	Card	*card;

	// card = deck->cards[0];
	card = deck->deal();
	card = deck->deal();
	card = deck->deal();
	cout << *card;
}


