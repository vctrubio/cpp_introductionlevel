#include "Dealer.hpp"

// Dealer::Dealer(CardDeck* CardDeck)
Dealer::Dealer(CardDeck& deck)
	:_deck(deck)
{
	_card = nullptr;
}

Dealer::~Dealer()
{
}

void	Dealer::roll()
{
	if (!_card)
	{
		cout << "Nothing in Dealers Hand\n";
		_card = _deck.card[0];
		_card->_out = true;
		cout << "card nb: " << _card->_value << " out: " << _card->_out << endl;
	}
	else
	{
		cout << "Dealers Hand: " << _card->_value << endl;

	}
}