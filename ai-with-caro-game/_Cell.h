#pragma once
#include "_Custom.h"
class _Cell
{
private:

	int _row;
	int _column;	// Tọa độ dòng và cột của 1 ô cờ trên bàn cờ
	int _owned;    // Biến kiểm tra là X hay O ( -1 = X , 1 = O, 0 = trống )
public:
	int getRow();
	int getColumn();
	int getOwned();
	void setRow(int);
	void setColumn(int);
	bool setOwned(int);
public:
	_Cell();
	_Cell(int, int);
	~_Cell();
};
