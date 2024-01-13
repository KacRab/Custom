#pragma once

class CoinClass {
public:
	static const size_t players = 6;
	bool bets[players];
	bool result = true;
	bool continue_game = true;
	void game();
	CoinClass() {};
};