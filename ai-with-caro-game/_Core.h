#pragma once
#include "_Grid.h"
#include"_Display.h"
#include"_GamePlay.h"
#include <fstream>


class _Core
{
public:
	int getCommand();
	int getColumn();
	int getRow();
	void setCommand(int command);
	void setColumn(int Column);
	void setRow(int Row);
	bool getTurn();
	void Start();
	bool CheckContinue();
	char WaitKeyboard();
	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();
	bool HandleOwned();
	int HandleWinner(int Curr_Column, int Curr_Row);
	// load/save GAME
	void SaveGame(int n, int mode, int score1, int score2);
	void setTurn_O();
	void LoadGame(char Save_Game[30]);
	// Xử lý tính năng AI
	int Count_All_Owned_Cell();
	void Calculate_Next_Step_Easy();
	void Calculate_Next_Step_Hard();
private:
	_Grid* _grid;  // Khởi tạo 1 bàn cờ
	bool   _loop, _turn;
	int _Curr_column, _Curr_row;
	int _command;
	int Score_X, Score_O, Mode;  // Đọc file tính năng load/save
public:
	_Core(int pSize);
	~_Core();
};

