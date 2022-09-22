#ifndef CARD_HPP
#define CARD_HPP

#include "Headers.hpp"
#include "Player.hpp"

class Card
{
	char	c;
	int		nb;
	bool	taken;
	void	*who;
public:
	Card(char c, int i);
	Card(const Card &oldCard);
	Card& operator= (const Card &oldCard);
	~Card();

	void	getWho();
	void	setWho(void *ptr) {who = ptr; taken = true;};

	friend class Deck;
	friend ostream& operator<<(ostream& os, const Card &card);
};



#endif
