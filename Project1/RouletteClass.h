#pragma once
#include <iostream>

class RouletteClass {
public:
	static const short magcap = 6;
	static const size_t players = 6;
	bool iffired = false;
	bool gun[magcap] = {};
	void game();

	RouletteClass() {
		gun[rand() % magcap] = true;
	}
};
