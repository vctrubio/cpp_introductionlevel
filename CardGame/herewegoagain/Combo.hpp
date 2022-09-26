#ifndef COMBO_HPP
#define COMBO_HPP

#include "Headers.hpp"
#include "Card.hpp"

#define ROYALFLUSH		1
#define STRAIGHTFLUSH	2
#define FOUROFAKIND		3
#define FULLHOUSE		4
#define FLUSH			5
#define STRAIGHT 		6
#define THREEOFAKIND 	7
#define TWOPAIR 		8
#define PAIR 			9
#define PAIRINHAND 		10

class Card;

score	*calc_pair(Card *hand[2], Card *table[3])
{
	score	*s = new score();

	// cout << "Calc: " << *hand[0] << *hand[1] << endl;
	s->card = 0;
	s->rank = 0;
	if (hand[0]->getNB() == hand[1]->getNB())
	{
		s->rank = PAIRINHAND;
		s->card = hand[1]->getNB();
		// cout << "PAIR IN HAND" << s.rank << s.card << endl;
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			// cout << "TESTING " << *table[i] << " VS: " << *hand[0] << *hand[1] << endl;
			if ((table[i]->getNB() == hand[0]->getNB()) || (table[i]->getNB() == hand[1]->getNB()))
			{
				// cout << "FOUND !:"  << table[i]->getNB() << " VS: " << hand[0]->getNB() <<  " OR " << hand[1]->getNB() << endl;
				s->card = table[i]->getNB();
				s->rank = PAIR;
				break;
			}
		}
	};
	// cout << "COMBO of " << s->card << " ," << s->rank << endl;
	return (s);
};

int		combo(Card *hand[2], Card *table[3])
{

	calc_pair(hand, table);

	// cout << "S: " << s.card  << ", " << s.rank << ": \n";
	return (0);
};

	// Card	*all[5];
	// int		i = 0;
	// for (int j; j < 2; j++)
	// 	all[i++] = hand[j];
	// for (int j; j < 3; j++)
	// 	all[i++] = table[j];
	// all[i] = 0;

#endif
