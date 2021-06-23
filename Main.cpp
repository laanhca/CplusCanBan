#include "Main.h"
#include <iostream>
#include "Player.h"
#include "BotRandom.h"
#include "BotThuaPlayer.h"
using namespace std;
void main() {
	Player* player = new Player();
	 cout << "Player chon : "+ player->nhapKetQua()+ "\n";

	 BotRandom* botR = new BotRandom();
	 cout << "Bot 1 random ra: " + botR->randomKetQua() + "\n";

	 BotThuaPlayer* botT = new BotThuaPlayer();
	 cout << "Bot thua Player cho ket qua: "+botT->thuaPlayer(player->getResult())+ " \n" ;
}
