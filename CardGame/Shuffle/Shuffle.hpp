#ifndef SHUFFLE_HPP
#define SHUFFLE_HPP

#include "Headers.hpp"

using namespace std;

typedef tuple<char, int>	card;

class Shuffle
{
public:
	Shuffle();
	Shuffle(const Shuffle &oldShuffle);
	Shuffle& operator= (const Shuffle &oldShuffle);
	~Shuffle();
	
	array<card, 52>			deck;

	void	makeDeck();
	void	shuffle();
	void	print();
};
ostream& operator<<(ostream& os, const card &c);

class Player
{
public:
		Player(){};
		~Player(){}
	card	hand[2];
};

#endif
