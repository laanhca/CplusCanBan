#include "Player.h"
std::string Player::nhapKetQua() {
	cout << "Moi ban nhap:  keo bua bao \n";
	cin >> result;
	while (result.compare("keo") && result.compare("bua") && result.compare("bao"))
	{
		cout << "Moi ban nhap:  keo bua bao \n";
		cin >> result;
		//result = "ok";
		
	}
	return result;
	
}
Player::Player() {
}
Player::~Player() {
}