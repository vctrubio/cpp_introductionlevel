#include "Shuffle.hpp"

Shuffle::Shuffle()
{}

Shuffle::Shuffle(const Shuffle &oldShuffle)
{}

Shuffle& Shuffle::operator= (const Shuffle &oldShuffle)
{
	return (*this);
}

Shuffle::~Shuffle()
{}

void	Shuffle::shuffle() //WHY THE FUCK IS IT THE SAME OUTPUT EVERYTIME
{
		srand(time(0));
		random_shuffle(deck.begin(), deck.end());
};

void	Shuffle::makeDeck()
{
	int		i;
	char	l;
	int		count;

	l = 'A';
	count = 0;
	for (i = 1; i <= 13; i++)
			deck[count++] = make_tuple(l, i);
	l = 'B';
	for (i = 1; i <= 13; i++)
			deck[count++] = make_tuple(l, i);
	l = 'C';
	for (i = 1; i <= 13; i++)
			deck[count++] = make_tuple(l, i);
	l = 'D';
	for (i = 1; i <= 13; i++)
			deck[count++] = make_tuple(l, i);
};

void	Shuffle::print()
{
		for (int i = 0; i < 52; i++)
			cout << deck[i];
};

ostream& operator<<(ostream& os, const card &c)
{
	os << "[" << get<0>(c) << get<1>(c) << "]" << endl;
	return os;
};

void	moveCard(card *c1, card *c2)
{
	cout << "moveCard: " << *c1 << endl;
	*c2 = *c1;


};


int main()
{
		Shuffle	s;
		Player	p;


		s.makeDeck();
		s.shuffle();
		
		cout << s.deck.front();
		cout << "HEllo\n";
		moveCard(&s.deck.front(), &p.hand[0]);
		cout << p.hand[0];
		remove.s.deck.front();	
		s.print();
};
