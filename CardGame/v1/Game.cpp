#include "Game.hpp"

ostream &operator<<(ostream &output, Game &obj)
{

	output << "Game: " << "\n";
	return (output);
}

Game::Game()
{
	for (int i = 0; i < PLAYERS; i++)
	{
		player[i] = new Player(i);
		cout << "player created with pos" << player[i]->getPos() << endl;
	}
}

Game::~Game()
{
	for (int i = 0; i < PLAYERS; i++)
	{
		delete player[i];
	}
}


Player&	Game::rtnPlayer(int i)
{
	return (*player[i]);
}
//

void	Game::myAnnounce()
{
	cout << "Game Start\n";

}