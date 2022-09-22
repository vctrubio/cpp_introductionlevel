#include "Player.hpp"

Player::Player()
{
	seat = ++seat_number;
	name = "PeterPan";
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
	os << player.name << " sitting at " << player.seat << " has card 1 & 2 ";
	return (os);
}
