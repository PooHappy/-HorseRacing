#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "RaceGame.h"
#include "Horse.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	srand(time(nullptr)); //������ ���������� ���� ����ð��� ���� ���ϰ� ����
	RaceGame rg;	//RaceGameŬ���� rg����
	rg.run();	//RaceGameŬ������ run�޼ҵ� ����

	return 0;
}