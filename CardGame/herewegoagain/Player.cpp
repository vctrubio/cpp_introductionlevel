#include "Player.hpp"

Player::Player()
{
	seat = ++seat_number;
	name = "PeterPan";
	hand[0] = nullptr;
	hand[1] = nullptr;
}

Player::Player(const Player &oldPlayer)
{}

Player& Player::operator= (const Player &oldPlayer)
{
	return (*this);
}

Player::~Player()
{}

ostream&	operator<<(ostream &os, const Player &player)
{
	os << player.name << " sitting at " << player.seat << " has: ";
	if (!player.hand[0] && !player.hand[1])
		os << "empty hands";
	if (player.hand[0])
		os << *(player.hand[0]) << " ";
	if (player.hand[1])
		os << *(player.hand[1]) << " ";
	return (os);
}

void		Player::dealCard(Card *card)
{
	if (hand[0] && hand[1])
		cout << "Hands are full\n";
	else
	{
		if (!hand[0])
		{
			hand[0] = card; 
			//aka deal
			card->setWho((void*) this);
		}
			/* we need to go from card to deck to deal; or have virtua void deal in card and deck */
		else 
			hand[1] = card;
	}
}