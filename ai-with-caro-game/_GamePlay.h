#pragma once
#include "_Display.h"
#include "_Core.h"
#include <vector>
struct Score
{
	int score1;
	int score2;
};

int SelectModeCom();
int SelectModePlayer();
void ReadNameFile();
void LoadGame();
void MenuGame(int n);
int Two_Player(Score& a, int mode, int load, char data[30]);
int One_Player(Score& score, int mode, int load, char Save_Name[30]);


