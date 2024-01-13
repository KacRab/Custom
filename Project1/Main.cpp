#include "CoinClass.h"
#include "DiceClass.h"
#include "RouletteClass.h"
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

	short game = 0;
	cout << "Salon gier\n";
	cout << "W co gramy?\n1 - kosci\n2 - rzut moneta\n3 - rosyjska ruletka\n";
	cin >> game;
	const short roulette = 3,
		dice = 1,
		coin = 2;

	srand(time(0));

	switch (game)
	{

		case dice:
		{
			DiceClass diceGame;
			diceGame.game();
		}
		break;
		case coin:
		{
			CoinClass coinGame;
			coinGame.game();
		}
		break;
		case roulette:
		{
			RouletteClass rouletteGame;
			rouletteGame.game();
		}
		break;
		default:
			break;
	}

}

