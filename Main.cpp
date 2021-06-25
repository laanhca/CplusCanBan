#include "Main.h"
#include <iostream>
#include "Player.h"
#include "BotGame.h"
#include "BotToolKit.h"
using namespace std;
void main() {
	Player* player = new Player();
	 cout << "Player chon : "+ player->nhapKetQua()+ "\n";
	 BotGame* botGame = new BotGame();
	 BotGame* botGame1 = new BotGame();
	 //BotToolKit* tool = new BotToolKit;
	 cout << "Bot random ra ket qua: " +botGame->handlerResult(BotToolKit::randomResult, player->getResult())+ "\n";
	 cout << "Bot thua Player ra ket qua: " +botGame1->handlerResult(BotToolKit::handleToPlayerWin, player->getResult())+ "\n";


}


