#pragma once
#include "_Cell.h"

class _Grid
{
public:
	~_Grid();
	_Grid(int Size);
	int  getRowArr(int Column, int Row);
	int  getColumnArr(int Column, int Row);
	int  getOwnedArr(int Column, int Row);
	int  getSize();
	void DrawGrid();
	void ResetData();
	int  checkOwned(int CurrColumn, int CurrRow, bool CurrTurn);
	int  ScanGrid(int C_Column, int C_Row);
	//kiem tra chien thang
	int checkWinRow(int Column, int Row, int own);
	int checkWinColumn(int Column, int Row, int own);
	int checkRightDiagonal(int Column, int Row, int own);
	int checkLeftDiagonal(int Column, int Row, int own);
	//load data
	void loadData(int i, int j, int k);
	// xử lý AI
	_Cell Calculate_Next_Step_Easy();
	_Cell Calculate_Next_Step_Hard();
	long Attack_Score_Column(long, long, const long Defend_Score[], const long Attack_Score[]);
	long Attack_Score_Row(long, long, const long Defend_Score[], const long Attack_Score[]);
	long Attack_Score_Diagonal_1(long, long, const long Defend_Score[], const long Attack_Score[]);
	long Attack_Score_Diagonal_2(long, long, const long Defend_Score[], const long Attack_Score[]);
	long Defend_Score_Column(long, long, const long Defend_Score[], const long Attack_Score[]);
	long Defend_Score_Row(long, long, const long Defend_Score[], const long Attack_Score[]);
	long Defend_Score_Diagonal_1(long, long, const long Defend_Score[], const long Attack_Score[]);
	long Defend_Score_Diagonal_2(long, long, const long Defend_Score[], const long Attack_Score[]);
	// 2 mảng điểm tấn công phòng thủ cho máy dễ
	const  long Defend_Score_Easy[6] = { 0, 1, 4, 8, 4000, 6000 };
	const  long Attack_Score_Easy[6] = { 2, 3, 4, 5, 6, 7 };
	// 2 mảng điểm tấn công phòng thủ cho máy khó
	const  long Defend_Score_Hard[6] = { 0, 8, 512, 32768, 2097152, 134217728 };
	const  long Attack_Score_Hard[6] = { 0, 64, 4096, 262144, 16777216, 1073741824 };
public:
	int _stepX;
	int _stepO;
private:
	_Cell** _pArr;
	int _size;
};

