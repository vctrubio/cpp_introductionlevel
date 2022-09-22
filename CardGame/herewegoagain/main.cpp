#include "Headers.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Player.hpp"


int main()
{
	Deck	*deck = new Deck();
	Player	*p = new Player();
	Card	*c = deck->deal();
	Card	*c2 = deck->deal();
	Card	*c3 = deck->deal();


	cout << "Hello Card Game\n";

	// p->dealCard(c);
	// p->dealCard(c2);
	// p->dealCard(c3);

	// c->getWho();
	// c->setWho((void*)p);
	cout << *p << endl;


}
