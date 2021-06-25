#pragma once
#include <iostream>
class BotGame
{

public:
	BotGame();
	std::string handlerResult(std::string (*handlerTool)(std::string), std::string playerResult);
private:
	~BotGame();
	std::string result;
};

