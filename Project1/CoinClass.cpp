#include "CoinClass.h"
#include <iostream>
#include <cstdio>
using namespace std;

void CoinClass::game() {
	while (continue_game)
	{
		for (size_t player = 0; player < players; player++)
		{
			cout << "Graczu nr " << player << ", co obstawiasz?\n0 - Orzel\n1 - Reszka\n";
			cin >> bets[player];
		}

		result = rand() % 2;

		for (size_t player = 0; player < players; player++)
		{
			cout << "Gracz " << player;

			if (bets[player] == result)
			{
				cout << " zgadnal!\n";
			}
			else
			{
				cout << " pomylil sie...\n";
			}
		}

		cout << "Czy chcesz grac dalej?\n0 - nie\n1 - tak\n";
		cin >> continue_game;
	}
}

