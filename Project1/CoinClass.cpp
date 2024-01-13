#include "CoinClass.h"
#include <iostream>
#include <cstdio>
using namespace std;

void CoinClass::game() {
	while (continue_game)
	{
		for (size_t player = 0; player < players; player++)
		{
			try {
				cout << "Graczu nr " << player << ", co obstawiasz?\n0 - Orzel\n1 - Reszka\n";
				cin >> bet;
				if (bet!=0 && bet!=1)
				{
					throw invalid_argument("Bledna wartosc\n");
				}
				else
				{
					bets[player] = bet;
				}
			}
			catch (exception& ex) {
				cout << ex.what() << "Przyjmuje wartosc domyslna 0\n";
				bets[player] = 0;
			}
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
		try {
			cout << "Czy chcesz grac dalej?\n0 - nie\n1 - tak\n";
			cin >> again;
			if (again!=0 && again!=1)
			{
				throw invalid_argument("Bledna wartosc\n");
			}
			else
			{
				continue_game = again;
			}
		}
		catch (exception& ex) {
			cout << ex.what() << "Koniec";
			continue_game = 0;
		}
	}
}

