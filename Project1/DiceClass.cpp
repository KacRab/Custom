#include "DiceClass.h"
#include <iostream>
#include <cstdio>
using namespace std;


void DiceClass::game() {
	while (draw)
	{
		for (size_t player = 0; player < players; player++)
		{
			score[player] = rand() % 6 + 1;
		}

		draw = false;
		winner = 0;

		cout << "Wyniki w tej turze:\nGracz 0 wyrzucil " << score[winner] << endl;
		
		for (size_t player = 1; player < players; player++)
		{
			cout << "Gracz " << player << " wyrzucil " << score[player] << endl;
			
			if (score[player] > score[winner])
			{
				draw = false;
				winner = player;
			}
			else if (score[player] == score[winner])
			{
				draw = true;
			}
		}

		if (draw)
		{
			cout << "Nie udalo sie wylonic zwyciezcy, rozpoczynamy nastepna ture!" << endl;
			draw = true;
		}
		else
		{
			cout << "Zwyciezyl gracz " << winner << endl;
		}
	}
}