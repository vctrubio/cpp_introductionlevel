#include "Deck.hpp"

Deck::Deck()
{
	char	c;
	int		i;
	int		count;

	c = 'A';
	count = 0;
	for (i = 1; i < 14; i++)
	{
		cards[count++] = new Card(c, i);
	};
	c = 'B';
	for (i = 1; i < 14; i++)
	{
		cards[count++] = new Card(c, i);
	};
	c = 'C';
	for (i = 1; i < 14; i++)
	{
		cards[count++] = new Card(c, i);
	};
	c = 'D';
	for (i = 1; i < 14; i++)
	{
		cards[count++] = new Card(c, i);
	};
}

Deck::Deck(const Deck &oldDeck)
{}

Deck& Deck::operator= (const Deck &oldDeck)
{
	return (*this);
}

Deck::~Deck()
{
	int		count;

	for (count = 0; count < 14; count++)
	{
		delete cards[count];
	};
}

Card*	Deck::deal()
{
	for (int i = 0; i < 52; i++)
	{
		if (!cards[i]->taken)
		{
			cards[i]->taken = true;
			return (cards[i]);
		}
	}
	return (cards[51]);
	//try catch statement missing for not finding card
}

