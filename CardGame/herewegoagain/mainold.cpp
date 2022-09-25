#include "Headers.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Player.hpp"
#include "Round.hpp"
#include "Table.hpp"


class Tst {
	Tst *next = nullptr;
	Player	*player;
public:
	Tst(Player *p) {player = p;};

	void appendTail(Player *p)
	{
		Tst *end = new Tst(p);
		Tst *ptr = this;
		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}
		ptr->next = end;
	};
	list<Player*> ply;
};

int main2()
{
	Deck	*deck = new Deck();
	Player	*p = new Player();
	Player	*p2 = new Player();
	// Card	*c = deck->deal();
	// Card	*c2 = deck->deal();
	// Card	*c3 = deck->deal();
	// Card	*c4 = deck->deal();

	cout << "Hello Card Game\n";

	Player	*array[] = {p, p2};
	Round	*round = new Round();

	Tst		test(p);
	test.appendTail(p2);
	test.ply.push_front(p);

	cout << *test.ply.front();
	round++;

	return (1);
}

/* make a round ft that deals
-cards to player
-cards to table
*/