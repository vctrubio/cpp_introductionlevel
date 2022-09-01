#include "Player.hpp"

void	Player::assignCard(Card *card)
{
	_card = card;
}

Player&	Player::rtnPlayer(int p)
{
	for (int i = 0; i < PLAYERS; i++)
	{
		if (i == p)
			return (*this);
	}
	return (*this);
}

Card&	Player::rtnCard()
{
	return (*(_card));
}

ostream &operator<<(ostream &output, Player &obj)
{
	output << "Player: " << obj.getPos() << "card: " << obj.rtnCard()._value << "\n";
	return (output);
}