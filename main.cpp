#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "RaceGame.h"
#include "Horse.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	srand(time(nullptr)); //난수의 무작위성을 위해 현재시간에 따라 변하게 선언
	RaceGame rg;	//RaceGame클래스 rg선언
	rg.run();	//RaceGame클래스의 run메소드 실행

	return 0;
}