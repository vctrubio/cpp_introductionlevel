#include "Card.hpp"

Card::Card(char c, int i)
	:c(c), nb(i), taken(false)
{
	who = nullptr;
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

void	Card::getWho()
{

	if (who != nullptr)
	{
		Player	*p;
		p = static_cast<Player*>(who);
		cout << p->getName() << " has " << *this << endl;
	}
	else
		cout << "Card in Deck\n";

	// try //SOMETHING FUNNY IS HERE
	// {
	// 	Player	*p;
	// 	p = static_cast<Player*>(who);
	// 	cout << p->getName() << " :\n";
	// }
	// catch(...)
	// {
	// 	cout << "Error getName\n";
	// }
	
}


ostream& operator<<(ostream& os, const Card &card)
{
	os << "Card| " << card.c << " " << card.nb << " |";
	return (os);
}