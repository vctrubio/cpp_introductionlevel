#include "Card.hpp"

Card::Card(char c, int i)
	:c(c), nb(i)
{

	// cout << card << endl;
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
	os << "Card| " << card.c << " " << card.nb << " |";
	return (os);
}