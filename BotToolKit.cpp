#include "BotToolKit.h"
#include <cstdlib>
#include <ctime>

BotToolKit::BotToolKit() {
	//BotToolKit::instance = nullptr;
}

 std::string BotToolKit::randomResult(std::string playerResult) {
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
 std::string BotToolKit::handleToPlayerWin(std::string playerResult) {
	if (!playerResult.compare("keo")) {
		return "bao";
	}
	if (!playerResult.compare("bua")) {
		return "keo";
	}
	if (!playerResult.compare("bao")) {
		return "bua";
	}
}

BotToolKit::~BotToolKit(){}