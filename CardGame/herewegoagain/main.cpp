#include "Headers.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Player.hpp"

int main()
{
	Deck	*deck = new Deck();

	cout << "Hello Card Game\n";

	Player	*p = new Player();

	cout << *p << endl;
}
