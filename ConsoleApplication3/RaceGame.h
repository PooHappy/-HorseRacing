#include <iostream>
#include <string>
#include "Horse.h"
#ifndef  RACEGAME_H
#define RACEGAME_H
using namespace std;
class RaceGame {
	int time;
	int horses;
	int pick;
	int winner;
	int winner_cnt[];
	void horseInsert();
	void pickInsert();
public:
	void run();		
	RaceGame() {};	//�⺻������
	~RaceGame() {};	//�Ҹ���
};
#endif
