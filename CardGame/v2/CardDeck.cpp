#include "CardDeck.hpp"

CardDeck::CardDeck()
{
	_size = DECKSIZE;
	for (int i = 0; i < _size; i++)
	{
		card[i] = new Card();
	}
	cout << "CardDeck: \n";
}

CardDeck::~CardDeck()
{
	for (int i = 0; i < _size; i++)
	{
		delete card[i];
	}
}

Card &CardDeck::rtnCard(int id)
{
	return (*card[id]);
}

Card *CardDeck::nextCard()
{
	int i = 0;
	Card *c;

	srand(time(0));
	while (1)
	{
		c = &rtnCard(rand() % DECKSIZE);
		if (!c->_taken)
			break;
	} // needs more work to elimnate number called
	return (c);
}

void CardDeck::callDeck()
{
	cout << "CardDeckCallDeck:"
		 << "\n";
	for (int i = 0; i < DECKSIZE; i++)
	{
		cout << "Card ID: " << rtnCard(i)._id << " | " << rtnCard(i)._taken << endl;
	}
}

ostream &operator<<(ostream &output, CardDeck &obj)
{
	output << "CardDeck"
		   << "\n";
	for (int i = 0; i < DECKSIZE; i++)
	{
		output << "Card ID: " << obj.rtnCard(i)._id << " | " << obj.rtnCard(i)._taken << endl;
	}
	return (output);
}
