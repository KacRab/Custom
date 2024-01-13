#pragma once

class DiceClass {
public:
	static const size_t players = 6;
	short score[players];
	bool draw = true;
	size_t winner;
	void game();
	DiceClass() {};
};
