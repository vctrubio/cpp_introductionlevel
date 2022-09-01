#include "CardDeck.hpp"

ostream &operator<<(ostream &output, CardDeck &obj)
{
	output << "CardDeck"
		   << "\n";
	for (int i = 0; i < DECKSIZE; i++)
	{
		output << "Card ID: " << obj.card[i]->_id << " Value: " << obj.card[i]->_value << " | " << obj.card[i]->_out << endl;
	}
	return (output);
}

CardDeck::CardDeck(int i)
{
	_size = i;
	for (int i = 0; i < _size; i++)
	{
		card[i] = new Card(i, i);
	}
}

CardDeck::~CardDeck()
{
	for (int i = 0; i < _size; i++)
	{
		delete card[i];
	}
}

bool CardDeck::cardIsFree(int id)
{
	if (this->card[id]->_out == false)
	{
		cout << this->card[id]->_value << " Card is free -";
		this->card[id]->_out = true;
		cout << this->card[id]->_out << endl;
		return (true);
	}
	return (false);
}

Card &CardDeck::dealCard()
{
	srand(time(NULL));
	int i = rand() % DECKSIZE;
	cout << "Dealing--" << i << endl;
	if (cardIsFree(i))
		return ((*card[i]));
	i = i + 1 % DECKSIZE;
	cout << "Else we have " << i << endl;
	while (21)
	{
		cout << "Dealing||" << i << endl;
		if (cardIsFree(i))
			return ((*card[i]));
		i = i + 1 % DECKSIZE;
	}
	// should never reach here tho
	return ((*card[i]));
}

// Card&	CardDeck::deal()
// {
// 	int i = 0;

// 	while (i < DECKSIZE)
// 	{
// 		if (cardIsFree(i))
// 		{
// 			return (*this->card[i]);
// 		}
// 		i++;
// 	}
// 	return (*this->card[0]);
// }