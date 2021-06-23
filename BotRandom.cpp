#include "BotRandom.h"
#include <cstdlib>
#include <ctime>

BotRandom::BotRandom(){}
BotRandom::~BotRandom(){}
std::string BotRandom::randomKetQua() {
	srand(time(NULL));
	int r = rand() % 3;
	//cout << r;
	switch (r) {
		case 0:
			return "keo";
		case 1:
			return "bua";
		default:
			return "bao";
	}

}
