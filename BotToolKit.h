#pragma once
#include <iostream>

 class  BotToolKit
{
public:
	
	BotToolKit();
	static std::string randomResult(std::string playerResult);
	static std::string handleToPlayerWin(std::string playerResult);
	//static BotToolKit* getInstance() {
		//if (instance == nullptr) {
			// instance = new BotToolKit();
		//}
		//return instance;
	//}
private:
	//static BotToolKit *instance;
	~BotToolKit();
};

