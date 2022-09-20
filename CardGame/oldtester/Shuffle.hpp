#ifndef SHUFFLE_HPP
#define SHUFFLE_HPP

#include "Headers.hpp"

using namespace std;

// template <typename T>
typedef tuple<char, int> card;


class Player
{
	string name;

public:
	Player() : name("Player1"){};
	~Player(){};

	string getName() { return name; };
};



template <class T>
class Ncard {
public:
	typedef tuple<char, int, T> card; //FUCK WHY NOT
	array<card, 52>				deck;
	Ncard(){};
	~Ncard(){};
};


class Shuffle
{
public:
	Shuffle();
	Shuffle(const Shuffle &oldShuffle);
	Shuffle &operator=(const Shuffle &oldShuffle);
	~Shuffle();

	// array<card, 52> deck;
	void changeCard();
	// void rtnCard();

	map<card, void> mycard;

};

ostream &operator<<(ostream &os, const card &c);

#endif
