#pragma once
#include <iostream>
using namespace std;
class Player
{
public:
	 Player();
	 std::string nhapKetQua();
	 std::string getResult() {
		 return result;
	 }

private:
	~Player();
	std::string result;

};

