#include "Card.hpp"

// void	Card::giveCard(Card& card, (void *) user)
// {
// 	user->card
// }

ostream &operator<<(ostream &output, Card &obj)
{
	output << "Card ID: " << obj._id << " Value: " << obj._value << " | " << obj._out << endl;
	return (output);
}
