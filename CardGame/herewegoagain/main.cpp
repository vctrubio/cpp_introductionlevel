#include "Headers.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Player.hpp"

int main()
{
	Deck	*deck = new Deck();

	cout << "Hello Card Game\n";

	Card	*c = deck->rtnCard(0);

	Player	*p = new Player();

	c->setWho((void*)p);
	c->getWho();

	cout << *p << endl;
}
