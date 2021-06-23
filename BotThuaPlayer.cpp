#include "BotThuaPlayer.h"
BotThuaPlayer::BotThuaPlayer(){}
BotThuaPlayer::~BotThuaPlayer(){}
std::string BotThuaPlayer::thuaPlayer(std::string resultPlayer) {
	if (!resultPlayer.compare("keo")) {
		return "bao";
	}
	if (!resultPlayer.compare("bua")) {
		return "keo";
	}
	if (!resultPlayer.compare("bao")) {
		return "bua";
	}
}
