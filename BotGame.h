#pragma once
#include <iostream>
class BotGame
{

public:
	BotGame();
	//void(*handlerResult)(std::string playerResult);
	std::string (*handlerTool)(std::string) =nullptr;
	std::string handlerResult(std::string (*handlerTool)(std::string), std::string playerResult);
private:
	~BotGame();
	std::string result;
};

