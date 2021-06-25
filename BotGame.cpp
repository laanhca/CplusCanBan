#include "BotGame.h"
BotGame::BotGame(){
	
}
std::string BotGame::handlerResult(std::string (*handlerTool)(std::string), std::string playerResult) {
	
	 return result = (*handlerTool)(playerResult);
	  
}
BotGame::~BotGame(){}
