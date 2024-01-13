#include "RouletteClass.h"
using namespace std;

void RouletteClass::game() {
	while (iffired == false)
	{
		for (size_t player = 0; player < players; player++)
		{
			cout << "Gracz " << player << " celuje, pociaga za spust i...\n";
			iffired = gun[rand() % magcap];

			if (!iffired)
			{
				cout << " klik\n";
			}
			else
			{
				cout << " BANG!!!\n";
				break;
			}
		}
	}
}