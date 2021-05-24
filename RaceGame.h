#include <iostream>
#include <string>
#include "Horse.h"
#ifndef  RACEGAME_H
#define RACEGAME_H
using namespace std;
class RaceGame {
private:
	int time;
	int horses;
	int pick;
	int winner;
	int winner_cnt[];
	int horseInsert()const;
	int pickInsert()const;
public:
	void run();		
	RaceGame() {};	//기본생성자
	~RaceGame() {};	//소멸자
};
#endif
