#include "Card.hpp"

Card::Card()
{
	_id = ++cID;
	_taken = false;
	// cout << "Created Card: " << _id << endl;
}

Card::~Card()
{
}
