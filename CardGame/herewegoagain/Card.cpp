#include "Card.hpp"

Card::Card(char c, int i)
{
	card = make_tuple(c, i);
	cout << card << endl;
}

Card::Card(const Card &oldCard)
{}

Card& Card::operator= (const Card &oldCard)
{
	return (*this);
}

Card::~Card()
{}


ostream& operator<<(ostream& os, const Card &card)
{
	os << "Card| " << get<0>(card) << " " << get<1>(card) << " |";
	return (os);
}