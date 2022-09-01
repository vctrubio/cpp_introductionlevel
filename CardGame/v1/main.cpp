#include "Game.hpp"
#include "Card.hpp"
#include "CardDeck.hpp"
#include "Player.hpp"
#include "Dealer.hpp"

// #include "GameRounds.hpp"


int main()
{
	Game		game;
	CardDeck	deck(DECKSIZE);
	Player		&p2 = game.rtnPlayer(2);
	// Player		&p1 = game.rtnPlayer(1);
	// Card		*c;
	// Dealer		d(deck);
	// // Dealer		d;

	// // cout << p1;
	// // c =  &(p.rtnCard());
	// cout << "hello & welcome\n";

	// //1. INIT GAME
	// // cout << game.rtnPlayer(1);
	// game.myAnnounce();
	
	p2.assignCard(&deck.dealCard());
	p2.assignCard(&deck.dealCard());
	p2.assignCard(&deck.dealCard());
	p2.assignCard(&deck.dealCard());
	p2.assignCard(&deck.dealCard());
	p2.assignCard(&deck.dealCard());
	p2.assignCard(&deck.dealCard());
	// p1.assignCard(&deck.dealCard());

	// // cout << game.rtnPlayer(1);
	// cout << "GAMEOK\n\n";
	// cout << p1;
	// cout << p2;


	// //2. Print number of player with card handed

	// //3. ROll the flop, print the flop
	// d.roll();
	// d.roll();
	// //4. Calculate the winner- and Print it

	cout << "PLAYEROK\n\n";
	cout << deck;
	// cout << "Round Completed\n";

}
