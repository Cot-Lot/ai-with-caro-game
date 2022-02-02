#include "_Grid.h"
#include "_Display.h"
#include <vector>
using namespace std;
vector <_Cell> win;

_Grid::~_Grid()
{
	for (int i = 0; i < _size; i++)
	{
		delete[] _pArr[i];
	}
	delete[] _pArr;
}
_Grid::_Grid(int Size)
{
	_size = Size;
	_pArr = new _Cell * [Size];
	for (int i = 0; i < Size; i++)
	{
		_pArr[i] = new _Cell[Size];
	}
	_stepX = 0;
	_stepO = 0;
}
int _Grid::getRowArr(int Column, int Row)
{
	return _pArr[Column][Row].getRow();
}
int _Grid::getColumnArr(int Column, int Row)
{
	return _pArr[Column][Row].getColumn();
}
int _Grid::getOwnedArr(int Column, int Row)
{
	return _pArr[Column][Row].getOwned();
}
int _Grid::getSize() { return _size; }
void _Grid::DrawGrid()
{
	//=============================================
	_Custom::SetColor(Red);
	for (int i = 0; i < SIZE * 2; i++)
	{
		//RIGHT COLUMM
		Sleep(1);
		_Custom::GotoXY(SIZE * 4, i + 1);
		if ((i + 1) % 2 == 1)
			cout << char(186);
		else
			cout << char(182);
	}

	//=============================================
	_Custom::SetColor(White);
	for (int i = 0; i < SIZE * 2; i = i + 2)
	{
		//ROW LINES
		Sleep(1);
		_Custom::GotoXY(0, i);
		for (int j = 0; j < SIZE * 4; j++)
		{
			if (j % 4 == 0)
				cout << char(197);
			else
				cout << char(196);
		}
	}
	//=============================================
	_Custom::SetColor(Red);
	for (int i = 0; i < SIZE * 2; i++)
	{
		//LEFT COLUMM
		//Sleep(1);
		_Custom::GotoXY(0, i + 1);
		if ((i + 1) % 2 == 1)
			cout << char(186);
		else
			cout << char(199);
	}
	//===========================================
	_Custom::SetColor(White);
	for (int i = 1; i < SIZE * 2; i = i + 2)
	{
		for (int j = 0; j < SIZE * 4; j = j + 4)
		{
			//LINE COLUMM
			//Sleep(1);
			_Custom::GotoXY(j, i);
			if (j == 0)
				continue;
			cout << char(179);
		}
	}
	//===========================================
	_Custom::SetColor(Red);
	_Custom::GotoXY(0, 0);
	for (int i = 0; i < SIZE * 4; i++)
	{
		//TOP ROW
		Sleep(1);
		if (i % 4 == 0)
			cout << char(209);
		else
			cout << char(205);
	}
	_Custom::GotoXY(0, 0); cout << char(201);
	_Custom::GotoXY(SIZE * 4, 0); cout << char(187);

	//===========================================
	_Custom::GotoXY(0, SIZE * 2);
	for (int i = 0; i < SIZE * 4; i++)
	{
		//BOTTOM ROW
		Sleep(1);
		if (i % 4 == 0)
			cout << char(207);
		else
			cout << char(205);
	}
	_Custom::GotoXY(0, SIZE * 2); cout << char(200);
	_Custom::GotoXY(SIZE * 4, SIZE * 2);
	cout << char(188);

	//===========================
}
void _Grid::ResetData()
{
	if (_size == 0) return;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			_pArr[i][j].setColumn(4 * j + 2);
			_pArr[i][j].setRow(2 * i + 1);
			_pArr[i][j].setOwned(0);
		}
	}

}
int  _Grid::checkOwned(int CurrColumn, int CurrRow, bool CurrTurn)
{
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			if (_pArr[i][j].getColumn() == CurrColumn && _pArr[i][j].getRow() == CurrRow && _pArr[i][j].getOwned() == 0)
			{
				if (CurrTurn)
				{
					_pArr[i][j].setOwned(-1);
					_stepX++;
				}
				else
				{
					_pArr[i][j].setOwned(1);
					_stepO++;
				}
				return _pArr[i][j].getOwned();
			}
		}
	}
	return 0;
}
int _Grid::ScanGrid(int C_Column, int C_Row)
{
	// Duyệt chiến thắng cho quân X
	if (checkWinRow(C_Column, C_Row, -1) == 1)
		return -1;
	if (checkWinColumn(C_Column, C_Row, -1) == 1)
		return -1;
	if (checkRightDiagonal(C_Column, C_Row, -1) == 1)
		return -1;
	if (checkLeftDiagonal(C_Column, C_Row, -1) == 1)
		return -1;
	// Duyệt chiến thắng cho quân O
	if (checkWinRow(C_Column, C_Row, 1) == 1)
		return 1;
	if (checkWinColumn(C_Column, C_Row, 1) == 1)
		return 1;
	if (checkRightDiagonal(C_Column, C_Row, 1) == 1)
		return 1;
	if (checkLeftDiagonal(C_Column, C_Row, 1) == 1)
		return 1;
	if (_stepX + _stepO == SIZE * SIZE)
		return 0;
	return 5;
}
int _Grid::checkWinRow(int Column, int Row, int own)
{
	int Arr_Column, Arr_Row;
	int loop = 1;
	int CheckWin = -1;
	int check2dau = 0;
	int countColumnLeft = 0, countColumnRight = 0;
	Arr_Column = (Column - 2) / 4;
	Arr_Row = (Row - 1) / 2;
	int Arr_Column_Left, Arr_Column_Right; // Đếm số quân cùng loại 2 chiều
	Arr_Column_Left = Arr_Column_Right = Arr_Column;
	// Đếm Ngang
	while (_pArr[Arr_Row][Arr_Column_Left].getOwned() == own)
	{
		win.push_back(_pArr[Arr_Row][Arr_Column_Left]);
		countColumnLeft++;
		if (Arr_Column_Left == 0)
			break;
		Arr_Column_Left--;
	}
	while (_pArr[Arr_Row][Arr_Column_Right].getOwned() == own)
	{
		win.push_back(_pArr[Arr_Row][Arr_Column_Right]);
		countColumnRight++;
		if (Arr_Column_Right == _size - 1)
			break;
		Arr_Column_Right++;
	}
	if (_pArr[Arr_Row][Arr_Column_Left].getOwned() == -own && _pArr[Arr_Row][Arr_Column_Right].getOwned() == -own)
		check2dau = 1;
	if ((countColumnLeft + countColumnRight - 1) == 5 && (check2dau == 0))
	{
		CheckWin = 1;
	}
	else
		CheckWin = 0;
	if (CheckWin == 1)
	{
		while (loop < 5)
		{
			_Custom::SetColor(rand() % 15 + 1);
			for (int i = 0; i < win.size(); i++)
			{
				_Custom::GotoXY(win[i].getColumn(), win[i].getRow());
				if (win[i].getOwned() == -1) {
					cout << "X";
					Sleep(100);
				}
				else {
					cout << "O";
					Sleep(100);

				}
			}
			loop++;
		}
	}
	else win.clear();
	return CheckWin;
}
int _Grid::checkWinColumn(int Column, int Row, int own) {
	int Arr_Column, Arr_Row;
	int CheckWin = -1, loop = 1;
	int check2dau = 0;
	int countRowTop = 0, countRowBottom = 0;
	Arr_Column = (Column - 2) / 4;
	Arr_Row = (Row - 1) / 2;
	int Arr_Row_Top, Arr_Row_Bottom; // Đếm số quân cùng loại hai chiều lên xuống
	Arr_Row_Top = Arr_Row_Bottom = Arr_Row;
	// Đếm dọc
	while (_pArr[Arr_Row_Top][Arr_Column].getOwned() == own)
	{
		countRowTop++;
		win.push_back(_pArr[Arr_Row_Top][Arr_Column]);
		if (Arr_Row_Top == 0)
			break;
		Arr_Row_Top--;
	}
	while (_pArr[Arr_Row_Bottom][Arr_Column].getOwned() == own)
	{
		countRowBottom++;
		win.push_back(_pArr[Arr_Row_Bottom][Arr_Column]);
		if (Arr_Row_Bottom == _size - 1)
			break;
		Arr_Row_Bottom++;
	}
	if (_pArr[Arr_Row_Top][Arr_Column].getOwned() == -own && _pArr[Arr_Row_Bottom][Arr_Column].getOwned() == -own)
		check2dau = 1;
	if ((countRowTop + countRowBottom - 1) == 5 && (check2dau == 0))
	{
		CheckWin = 1;
	}
	else
		CheckWin = 0;
	if (CheckWin == 1)
	{
		while (loop < 5)
		{
			_Custom::SetColor(rand() % 15 + 1);
			for (int i = 0; i < win.size(); i++)
			{
				_Custom::GotoXY(win[i].getColumn(), win[i].getRow());
				if (win[i].getOwned() == -1) {
					cout << "X";
					Sleep(100);
				}
				else {
					cout << "O";
					Sleep(100);

				}
			}
			loop++;
		}
	}
	else win.clear();
	return CheckWin;
}
int _Grid::checkRightDiagonal(int Column, int Row, int own) {
	int Arr_Column, Arr_Row;
	int CheckWin = -1, loop = 1;
	int check2dau = 0;
	int countDiaTop = 0, countDiaBot = 0;
	Arr_Column = (Column - 2) / 4;
	Arr_Row = (Row - 1) / 2;
	int Arr_Row_Top, Arr_Row_Bot;// Đếm hai đầu theo đường chéo ngược (Right)
	int Arr_Column_Right, Arr_Column_Left;
	Arr_Row_Top = Arr_Row_Bot = Arr_Row;
	Arr_Column_Right = Arr_Column_Left = Arr_Column;


	while (_pArr[Arr_Row_Top][Arr_Column_Right].getOwned() == own)
	{
		countDiaTop++;
		win.push_back(_pArr[Arr_Row_Top][Arr_Column_Right]);
		if (Arr_Row_Top == 0 || Arr_Column_Right == _size - 1)
			break;
		Arr_Row_Top--;
		Arr_Column_Right++;
	}
	while (_pArr[Arr_Row_Bot][Arr_Column_Left].getOwned() == own)
	{
		win.push_back(_pArr[Arr_Row_Bot][Arr_Column_Left]);
		countDiaBot++;
		if (Arr_Row_Bot == _size - 1 || Arr_Column_Left == 0)
			break;
		Arr_Row_Bot++;
		Arr_Column_Left--;
	}
	if (_pArr[Arr_Row_Top][Arr_Column_Right].getOwned() == -own && _pArr[Arr_Row_Bot][Arr_Column_Left].getOwned() == -own)
		check2dau = 1;
	if ((countDiaTop + countDiaBot - 1) == 5 && (check2dau == 0))
	{
		CheckWin = 1;
	}
	else
		CheckWin = 0;
	if (CheckWin == 1)
	{
		while (loop < 5)
		{
			_Custom::SetColor(rand() % 15 + 1);
			for (int i = 0; i < win.size(); i++)
			{
				_Custom::GotoXY(win[i].getColumn(), win[i].getRow());
				if (win[i].getOwned() == -1) {
					cout << "X";
					Sleep(100);
				}
				else {
					cout << "O";
					Sleep(100);

				}
			}
			loop++;
		}
	}
	else win.clear();
	return CheckWin;
}
int _Grid::checkLeftDiagonal(int Column, int Row, int own) {
	int Arr_Column, Arr_Row;
	int CheckWin = -1, loop = 1;
	int check2dau = 0;
	int countDiaTop = 0, countDiaBot = 0;
	Arr_Column = (Column - 2) / 4;
	Arr_Row = (Row - 1) / 2;
	int Arr_Row_Top, Arr_Row_Bot;// Xet dem X ve phia tren, va ve phia duoi
	int Arr_Column_Right, Arr_Column_Left;
	Arr_Row_Top = Arr_Row_Bot = Arr_Row;
	Arr_Column_Right = Arr_Column_Left = Arr_Column;

	while (_pArr[Arr_Row_Top][Arr_Column_Left].getOwned() == own)
	{
		win.push_back(_pArr[Arr_Row_Top][Arr_Column_Left]);
		countDiaTop++;
		if (Arr_Row_Top == 0 || Arr_Column_Left == 0)
			break;
		Arr_Row_Top--;
		Arr_Column_Left--;
	}

	while (_pArr[Arr_Row_Bot][Arr_Column_Right].getOwned() == own)
	{
		win.push_back(_pArr[Arr_Row_Bot][Arr_Column_Right]);
		countDiaBot++;
		if (Arr_Row_Bot == _size - 1 || Arr_Column_Right == _size - 1)
			break;
		Arr_Row_Bot++;
		Arr_Column_Right++;
	}
	if (_pArr[Arr_Row_Top][Arr_Column_Left].getOwned() == -own && _pArr[Arr_Row_Bot][Arr_Column_Right].getOwned() == -own)
		check2dau = 1;
	if ((countDiaTop + countDiaBot - 1) == 5 && (check2dau == 0))
	{
		CheckWin = 1;
	}
	else
		CheckWin = 0;
	if (CheckWin == 1)
	{
		while (loop < 5)
		{
			_Custom::SetColor(rand() % 15 + 1);
			for (int i = 0; i < win.size(); i++)
			{
				_Custom::GotoXY(win[i].getColumn(), win[i].getRow());
				if (win[i].getOwned() == -1) {
					cout << "X";
					Sleep(100);
				}
				else {
					cout << "O";
					Sleep(100);

				}
			}
			loop++;
		}
	}
	else win.clear();
	return CheckWin;
}
void _Grid::loadData(int Column, int Row, int k)
{
	if (_size == 0) return;
	_pArr[Column][Row].setColumn(4 * Row + 2);
	_pArr[Column][Row].setRow(2 * Column + 1);
	_pArr[Column][Row].setOwned(k);
	if (k == -1)
	{
		_Custom::SetColor(Red);	//X
		_Custom::GotoXY(4 * Row + 2, 2 * Column + 1);
		cout << "X";
		_stepX++;
	}
	if (k == 1)
	{
		_Custom::SetColor(Green);	//O
		_Custom::GotoXY(4 * Row + 2, 2 * Column + 1);
		cout << "O";
		_stepO++;
	}

}

// Xử lý AI
_Cell _Grid::Calculate_Next_Step_Easy()
{
	_Cell _cell;
	int T_Row = 0, T_Column = 0;
	long Sum_Score = 0;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			long T_AT_Score = 0;
			long T_DF_Score = 0;
			if (_pArr[i][j].getOwned() == 0)
			{
				T_AT_Score += Attack_Score_Column(i, j, Defend_Score_Easy, Attack_Score_Easy);
				T_AT_Score += Attack_Score_Row(i, j, Defend_Score_Easy, Attack_Score_Easy);
				T_AT_Score += Attack_Score_Diagonal_1(i, j, Defend_Score_Easy, Attack_Score_Easy);
				T_AT_Score += Attack_Score_Diagonal_2(i, j, Defend_Score_Easy, Attack_Score_Easy);

				T_DF_Score += Defend_Score_Column(i, j, Defend_Score_Easy, Attack_Score_Easy);
				T_DF_Score += Defend_Score_Row(i, j, Defend_Score_Easy, Attack_Score_Easy);
				T_DF_Score += Defend_Score_Diagonal_1(i, j, Defend_Score_Easy, Attack_Score_Easy);
				T_DF_Score += Defend_Score_Diagonal_2(i, j, Defend_Score_Easy, Attack_Score_Easy);

				if (T_AT_Score > T_DF_Score)
				{
					if (Sum_Score < T_AT_Score)
					{
						Sum_Score = T_AT_Score;
						T_Row = i;
						T_Column = j;
					}
				}
				else
				{
					if (Sum_Score < T_DF_Score)
					{
						Sum_Score = T_DF_Score;
						T_Row = i;
						T_Column = j;
					}
				}
			}
		}
	}
	_cell.setColumn(T_Column * 4 + 2);
	_cell.setRow(T_Row * 2 + 1);
	return _cell;
}
_Cell _Grid::Calculate_Next_Step_Hard()
{
	_Cell _cell;
	int T_Row = 0, T_Column = 0;
	long Sum_Score = 0;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			long T_AT_Score = 0;
			long T_DF_Score = 0;
			if (_pArr[i][j].getOwned() == 0)
			{
				T_AT_Score += Attack_Score_Column(i, j, Defend_Score_Hard, Attack_Score_Hard);
				T_AT_Score += Attack_Score_Row(i, j, Defend_Score_Hard, Attack_Score_Hard);
				T_AT_Score += Attack_Score_Diagonal_1(i, j, Defend_Score_Hard, Attack_Score_Hard);
				T_AT_Score += Attack_Score_Diagonal_2(i, j, Defend_Score_Hard, Attack_Score_Hard);

				T_DF_Score += Defend_Score_Column(i, j, Defend_Score_Hard, Attack_Score_Hard);
				T_DF_Score += Defend_Score_Row(i, j, Defend_Score_Hard, Attack_Score_Hard);
				T_DF_Score += Defend_Score_Diagonal_1(i, j, Defend_Score_Hard, Attack_Score_Hard);
				T_DF_Score += Defend_Score_Diagonal_2(i, j, Defend_Score_Hard, Attack_Score_Hard);

				if (T_AT_Score > T_DF_Score)
				{
					if (Sum_Score < T_AT_Score)
					{
						Sum_Score = T_AT_Score;
						T_Row = i;
						T_Column = j;
					}
				}
				else
				{
					if (Sum_Score < T_DF_Score)
					{
						Sum_Score = T_DF_Score;
						T_Row = i;
						T_Column = j;
					}
				}
			}
		}
	}
	_cell.setColumn(T_Column * 4 + 2);
	_cell.setRow(T_Row * 2 + 1);
	return _cell;
}

long _Grid::Attack_Score_Row(long T_Row, long T_Column, const long Defend_Score[], const long Attack_Score[])
{
	long DiemDuyetNgang = 0;
	int QuanTa_1 = 0;
	int QuanDich_1 = 0;
	int QuanTa_2 = 0;
	int QuanDich_2 = 0;

	// Duyệt qua phải
	for (int Count_1 = 1; Count_1 < 6 && T_Column + Count_1 < _size; Count_1++)
	{
		if (_pArr[T_Row][T_Column + Count_1].getOwned() == 1)
			QuanTa_1++;
		if (_pArr[T_Row][T_Column + Count_1].getOwned() == -1)
		{
			QuanDich_1++;
			break;
		}
		if (_pArr[T_Row][T_Column + Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column + Count_12 < _size; Count_12++)
			{
				if (_pArr[T_Row][T_Column + Count_12].getOwned() == 1)
					QuanTa_2++;
				if (_pArr[T_Row][T_Column + Count_12].getOwned() == -1)
				{
					QuanDich_2++;
					break;
				}
				if (_pArr[T_Row][T_Column + Count_12].getOwned() == 0)
					break;
			}
			break;
		}
	}
	// Duyệt qua trái
	for (int Count_1 = 1; Count_1 < 6 && T_Column - Count_1 >= 0; Count_1++)
	{
		if (_pArr[T_Row][T_Column - Count_1].getOwned() == 1)
			QuanTa_1++;
		if (_pArr[T_Row][T_Column - Count_1].getOwned() == -1)
		{
			QuanDich_1++;
			break;
		}
		if (_pArr[T_Row][T_Column - Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column - Count_12 >= 0; Count_12++)
			{
				if (_pArr[T_Row][T_Column - Count_12].getOwned() == 1)
					QuanTa_2++;
				if (_pArr[T_Row][T_Column - Count_12].getOwned() == -1)
				{
					QuanDich_2++;
					break;
				}
				if (_pArr[T_Row][T_Column - Count_12].getOwned() == 0)
					break;
			}
			break;
		}
	}
	if (QuanDich_1 == 2)  // Bị chặn hai đầu
		return 0;
	if (QuanDich_1 == 0)  // Chưa bị chặn đầu nào
		DiemDuyetNgang += Attack_Score[QuanTa_1] * 2;
	else                  // Bị chặn một đầu
		DiemDuyetNgang += Attack_Score[QuanTa_1];
	if (QuanDich_2 == 0)
		DiemDuyetNgang += Attack_Score[QuanTa_2] * 2;
	else
		DiemDuyetNgang += Attack_Score[QuanTa_2];

	if (QuanTa_1 >= QuanTa_2)
		DiemDuyetNgang -= 1;
	else
		DiemDuyetNgang -= 2;
	if (QuanTa_1 == 4)
		DiemDuyetNgang *= 2;
	if (QuanTa_1 == 0)
		DiemDuyetNgang += Defend_Score[QuanDich_1] * 2;
	else
		DiemDuyetNgang += Defend_Score[QuanDich_1];
	if (QuanTa_2 == 0)
		DiemDuyetNgang += Defend_Score[QuanDich_2] * 2;
	else
		DiemDuyetNgang += Defend_Score[QuanDich_2];
	return DiemDuyetNgang;
}
long _Grid::Attack_Score_Column(long T_Row, long T_Column, const long Defend_Score[], const long Attack_Score[])
{
	long DiemDuyetDoc = 0;
	int QuanTa_1 = 0;
	int QuanDich_1 = 0;
	int QuanTa_2 = 0;
	int QuanDich_2 = 0;
	for (int Count_1 = 1; Count_1 < 6 && T_Row + Count_1 < _size; Count_1++)
	{
		if (_pArr[T_Row + Count_1][T_Column].getOwned() == 1)
			QuanTa_1++;
		if (_pArr[T_Row + Count_1][T_Column].getOwned() == -1)
		{
			QuanDich_1++;
			break;
		}
		if (_pArr[T_Row + Count_1][T_Column].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Row + Count_12 < _size; Count_12++)
			{
				if (_pArr[T_Row + Count_12][T_Column].getOwned() == 1)
					QuanTa_2++;
				if (_pArr[T_Row + Count_12][T_Column].getOwned() == -1)
				{
					QuanDich_2++;
					break;
				}
				if (_pArr[T_Row + Count_12][T_Column].getOwned() == 0)
					break;
			}
			break;
		}

	}

	for (int Count_1 = 1; Count_1 < 6 && T_Row - Count_1 >= 0; Count_1++)
	{
		if (_pArr[T_Row - Count_1][T_Column].getOwned() == 1)
			QuanTa_1++;
		if (_pArr[T_Row - Count_1][T_Column].getOwned() == -1)
		{
			QuanDich_1++;
			break;
		}
		if (_pArr[T_Row - Count_1][T_Column].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Row - Count_12 >= 0; Count_12++)
			{
				if (_pArr[T_Row - Count_12][T_Column].getOwned() == 1)
					QuanTa_2++;
				if (_pArr[T_Row - Count_12][T_Column].getOwned() == -1)
				{
					QuanDich_2++;
					break;
				}
				if (_pArr[T_Row - Count_12][T_Column].getOwned() == 0)
				{
					break;
				}
			}
			break;
		}
	}

	if (QuanDich_1 == 2)
		return 0;
	if (QuanDich_1 == 0)
		DiemDuyetDoc += Attack_Score[QuanTa_1] * 2;
	else
		DiemDuyetDoc += Attack_Score[QuanTa_1];
	if (QuanDich_2 == 0)
		DiemDuyetDoc += Attack_Score[QuanTa_2] * 2;
	else
		DiemDuyetDoc += Attack_Score[QuanTa_2];

	if (QuanTa_1 >= QuanTa_2)
		DiemDuyetDoc -= 1;
	else
		DiemDuyetDoc -= 2;
	if (QuanTa_1 == 4)
		DiemDuyetDoc *= 2;
	if (QuanTa_1 == 0)
		DiemDuyetDoc += Defend_Score[QuanDich_1] * 2;
	else
		DiemDuyetDoc += Defend_Score[QuanDich_1];
	if (QuanTa_2 == 0)
		DiemDuyetDoc += Defend_Score[QuanDich_2] * 2;
	else
		DiemDuyetDoc += Defend_Score[QuanDich_2];
	return DiemDuyetDoc;
}
long _Grid::Attack_Score_Diagonal_1(long T_Row, long T_Column, const long Defend_Score[], const long Attack_Score[])
{
	long DiemDuyetCheoNguoc = 0;
	int QuanTa_1 = 0;
	int QuanDich_1 = 0;
	int QuanTa_2 = 0;
	int QuanDich_2 = 0;
	for (int Count_1 = 1; Count_1 < 6 && T_Column + Count_1 < _size && T_Row + Count_1 < _size; Count_1++)
	{
		if (_pArr[T_Row + Count_1][T_Column + Count_1].getOwned() == 1)
			QuanTa_1++;
		if (_pArr[T_Row + Count_1][T_Column + Count_1].getOwned() == -1)
		{
			QuanDich_1++;
			break;
		}
		if (_pArr[T_Row + Count_1][T_Column + Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column + Count_12 < _size && T_Row + Count_12 < _size; Count_12++)
			{
				if (_pArr[T_Row + Count_12][T_Column + Count_12].getOwned() == 1)
					QuanTa_2++;
				if (_pArr[T_Row + Count_12][T_Column + Count_12].getOwned() == -1)
				{
					QuanDich_2++;
					break;
				}
				if (_pArr[T_Row + Count_12][T_Column + Count_12].getOwned() == 0)
				{
					break;
				}
			}
			break;
		}
	}


	for (int Count_1 = 1; Count_1 < 6 && T_Column - Count_1 >= 0 && T_Row - Count_1 >= 0; Count_1++)
	{
		if (_pArr[T_Row - Count_1][T_Column - Count_1].getOwned() == 1)
			QuanTa_1++;
		if (_pArr[T_Row - Count_1][T_Column - Count_1].getOwned() == -1)
		{
			QuanDich_1++;
			break;
		}
		if (_pArr[T_Row - Count_1][T_Column - Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column - Count_12 >= 0 && T_Row - Count_12 >= 0; Count_12++)
			{
				if (_pArr[T_Row - Count_12][T_Column - Count_12].getOwned() == 1)
					QuanTa_2++;
				if (_pArr[T_Row - Count_12][T_Column - Count_12].getOwned() == -1)
				{
					QuanDich_2++;
					break;
				}
				if (_pArr[T_Row - Count_12][T_Column - Count_12].getOwned() == 0)
					break;
			}
			break;
		}
	}
	if (QuanDich_1 == 2)
		return 0;
	if (QuanDich_1 == 0)
		DiemDuyetCheoNguoc += Attack_Score[QuanTa_1] * 2;
	else
		DiemDuyetCheoNguoc += Attack_Score[QuanTa_1];
	if (QuanDich_2 == 0)
		DiemDuyetCheoNguoc += Attack_Score[QuanTa_2] * 2;
	else
		DiemDuyetCheoNguoc += Attack_Score[QuanTa_2];

	if (QuanTa_1 >= QuanTa_2)
		DiemDuyetCheoNguoc -= 1;
	else
		DiemDuyetCheoNguoc -= 2;
	if (QuanTa_1 == 4)
		DiemDuyetCheoNguoc *= 2;
	if (QuanTa_1 == 0)
		DiemDuyetCheoNguoc += Defend_Score[QuanDich_1] * 2;
	else
		DiemDuyetCheoNguoc += Defend_Score[QuanDich_1];
	if (QuanTa_2 == 0)
		DiemDuyetCheoNguoc += Defend_Score[QuanDich_2] * 2;
	else
		DiemDuyetCheoNguoc += Defend_Score[QuanDich_2];
	return DiemDuyetCheoNguoc;
}
long _Grid::Attack_Score_Diagonal_2(long T_Row, long T_Column, const long Defend_Score[], const long Attack_Score[])
{
	long DiemDuyetCheoXuoi = 0;
	int QuanTa_1 = 0;
	int QuanDich_1 = 0;
	int QuanTa_2 = 0;
	int QuanDich_2 = 0;
	for (int Count_1 = 1; Count_1 < 6 && T_Column - Count_1 >= 0 && T_Row + Count_1 < _size; Count_1++)
	{
		if (_pArr[T_Row + Count_1][T_Column - Count_1].getOwned() == 1)
			QuanTa_1++;
		if (_pArr[T_Row + Count_1][T_Column - Count_1].getOwned() == -1)
		{
			QuanDich_1++;
			break;
		}
		if (_pArr[T_Row + Count_1][T_Column - Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column - Count_12 >= 0 && T_Row + Count_12 < _size; Count_12++)
			{
				if (_pArr[T_Row + Count_12][T_Column - Count_12].getOwned() == 1)
					QuanTa_2++;
				if (_pArr[T_Row + Count_12][T_Column - Count_12].getOwned() == -1)
				{
					QuanDich_2++;
					break;
				}
				if (_pArr[T_Row + Count_12][T_Column - Count_12].getOwned() == 0)
					break;
			}
			break;
		}
	}

	for (int Count_1 = 1; Count_1 < 6 && T_Column + Count_1 < _size && T_Row - Count_1 >= 0; Count_1++)
	{
		if (_pArr[T_Row - Count_1][T_Column + Count_1].getOwned() == 1)
			QuanTa_1++;
		if (_pArr[T_Row - Count_1][T_Column + Count_1].getOwned() == -1)
		{
			QuanDich_1++;
			break;
		}
		if (_pArr[T_Row - Count_1][T_Column + Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column + Count_12 < _size && T_Row - Count_12 >= 0; Count_12++)
			{
				if (_pArr[T_Row - Count_12][T_Column + Count_12].getOwned() == 1)
					QuanTa_2++;
				if (_pArr[T_Row - Count_12][T_Column + Count_12].getOwned() == -1)
				{
					QuanDich_2++;
					break;
				}
				if (_pArr[T_Row - Count_12][T_Column + Count_12].getOwned() == 0)
					break;
			}
			break;
		}
	}
	if (QuanDich_1 == 2)
		return 0;
	if (QuanDich_1 == 0)
		DiemDuyetCheoXuoi += Attack_Score[QuanTa_1] * 2;
	else
		DiemDuyetCheoXuoi += Attack_Score[QuanTa_1];
	if (QuanDich_2 == 0)
		DiemDuyetCheoXuoi += Attack_Score[QuanTa_2] * 2;
	else
		DiemDuyetCheoXuoi += Attack_Score[QuanTa_2];

	if (QuanTa_1 >= QuanTa_2)
		DiemDuyetCheoXuoi -= 1;
	else
		DiemDuyetCheoXuoi -= 2;
	if (QuanTa_1 == 4)
		DiemDuyetCheoXuoi *= 2;
	if (QuanTa_1 == 0)
		DiemDuyetCheoXuoi += Defend_Score[QuanDich_1] * 2;
	else
		DiemDuyetCheoXuoi += Defend_Score[QuanDich_1];
	if (QuanTa_2 == 0)
		DiemDuyetCheoXuoi += Defend_Score[QuanDich_2] * 2;
	else
		DiemDuyetCheoXuoi += Defend_Score[QuanDich_2];
	return DiemDuyetCheoXuoi;
}
long _Grid::Defend_Score_Column(long T_Row, long T_Column, const long Defend_Score[], const long Attack_Score[])
{
	long DiemDuyetDoc = 0;
	long iScoreDefend = 0;
	int QuanDich_1 = 0;
	int QuanTa_1 = 0;
	int QuanDich_2 = 0;
	int QuanTa_2 = 0;
	for (int Count_1 = 1; Count_1 < 6 && T_Row + Count_1 < _size; Count_1++)
	{
		if (_pArr[T_Row + Count_1][T_Column].getOwned() == 1)
		{
			QuanTa_1++;
			break;
		}
		if (_pArr[T_Row + Count_1][T_Column].getOwned() == -1)
			QuanDich_1++;
		if (_pArr[T_Row + Count_1][T_Column].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Row + Count_12 < _size; Count_12++)
			{
				if (_pArr[T_Row + Count_12][T_Column].getOwned() == 1)
				{
					QuanTa_2++;
					break;
				}
				if (_pArr[T_Row + Count_12][T_Column].getOwned() == -1)
					QuanDich_2++;
				if (_pArr[T_Row + Count_12][T_Column].getOwned() == 0)
					break;
			}
			break;
		}
	}
	//iScoreDefend += Defend_Score[QuanDich_1];
	//QuanDich_1 = 0;

	for (int Count_1 = 1; Count_1 < 6 && T_Row - Count_1 >= 0; Count_1++)
	{
		if (_pArr[T_Row - Count_1][T_Column].getOwned() == 1)
		{
			QuanTa_1++;
			break;
		}
		if (_pArr[T_Row - Count_1][T_Column].getOwned() == -1)
			QuanDich_1++;
		if (_pArr[T_Row - Count_1][T_Column].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Row - Count_12 >= 0; Count_12++)
			{
				if (_pArr[T_Row - Count_12][T_Column].getOwned() == 1)
				{
					QuanTa_2++;
					break;
				}
				if (_pArr[T_Row - Count_12][T_Column].getOwned() == -1)
					QuanDich_2++;
				if (_pArr[T_Row - Count_12][T_Column].getOwned() == 0)
					break;
			}
			break;
		}
	}


	if (QuanTa_1 == 2)
		return 0;
	if (QuanTa_1 == 0)
		DiemDuyetDoc += Defend_Score[QuanDich_1] * 2;
	else
		DiemDuyetDoc += Defend_Score[QuanDich_1];
	/*
	if (QuanTa_1 == 0)
	DiemDuyetDoc += Defend_Score[QuanDich_2] * 2;
	else
	DiemDuyetDoc += Defend_Score[QuanDich_2];
	*/
	if (QuanDich_1 >= QuanDich_2)
		DiemDuyetDoc -= 1;
	else
		DiemDuyetDoc -= 2;
	if (QuanDich_1 == 4)
		DiemDuyetDoc *= 2;
	return DiemDuyetDoc;
}
long _Grid::Defend_Score_Row(long T_Row, long T_Column, const long Defend_Score[], const long Attack_Score[])
{
	long DiemDuyetNgang = 0;
	long iScoreDefend = 0;
	int QuanDich_1 = 0;
	int QuanTa_1 = 0;
	int QuanDich_2 = 0;
	int QuanTa_2 = 0;
	for (int Count_1 = 1; Count_1 < 6 && T_Column + Count_1 < _size; Count_1++)
	{
		if (_pArr[T_Row][T_Column + Count_1].getOwned() == 1)
		{
			QuanTa_1++;
			break;
		}
		if (_pArr[T_Row][T_Column + Count_1].getOwned() == -1)
			QuanDich_1++;
		if (_pArr[T_Row][T_Column + Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column + Count_12 < _size; Count_12++)
			{
				if (_pArr[T_Row][T_Column + Count_12].getOwned() == 1)
				{
					QuanTa_2++;
					break;
				}
				if (_pArr[T_Row][T_Column + Count_12].getOwned() == -1)
					QuanDich_2++;
				if (_pArr[T_Row][T_Column + Count_12].getOwned() == 0)
					break;
			}
			break;
		}
	}
	//iScoreDefend += Defend_Score[QuanDich_1];
	//QuanDich_1 = 0;

	for (int Count_1 = 1; Count_1 < 6 && T_Column - Count_1 >= 0; Count_1++)
	{
		if (_pArr[T_Row][T_Column - Count_1].getOwned() == 1)
		{
			QuanTa_1++;
			break;
		}
		if (_pArr[T_Row][T_Column - Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column - Count_12 >= 0; Count_12++)
			{
				if (_pArr[T_Row][T_Column - Count_12].getOwned() == 1)
				{
					QuanTa_2++;
					break;
				}
				if (_pArr[T_Row][T_Column - Count_12].getOwned() == 0)
					break;
				if (_pArr[T_Row][T_Column - Count_12].getOwned() == -1)
					QuanDich_2++;
			}
			break;
		}
		if (_pArr[T_Row][T_Column - Count_1].getOwned() == -1)
			QuanDich_1++;
	}

	if (QuanTa_1 == 2)
		return 0;
	if (QuanTa_1 == 0)
		DiemDuyetNgang += Defend_Score[QuanDich_1] * 2;
	else
		DiemDuyetNgang += Defend_Score[QuanDich_1];
	/*
	if (QuanTa_1 == 0)
	DiemDuyetDoc += Defend_Score[QuanDich_2] * 2;
	else
	DiemDuyetDoc += Defend_Score[QuanDich_2];
	*/
	if (QuanDich_1 >= QuanDich_2)
		DiemDuyetNgang -= 1;
	else
		DiemDuyetNgang -= 2;
	if (QuanDich_1 == 4)
		DiemDuyetNgang *= 2;
	return DiemDuyetNgang;
}
long _Grid::Defend_Score_Diagonal_1(long T_Row, long T_Column, const long Defend_Score[], const long Attack_Score[])
{

	long DiemDuyetCheoNguoc = 0;
	long iScoreDefend = 0;
	int QuanDich_1 = 0;
	int QuanTa_1 = 0;
	int QuanDich_2 = 0;
	int QuanTa_2 = 0;
	for (int Count_1 = 1; Count_1 < 6 && T_Column + Count_1 < _size && T_Row + Count_1 < _size; Count_1++)
	{
		if (_pArr[T_Row + Count_1][T_Column + Count_1].getOwned() == 1)
		{
			QuanTa_1++;
			break;
		}
		if (_pArr[T_Row + Count_1][T_Column + Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column + Count_12 < _size && T_Row + Count_12 < _size; Count_12++)
			{
				if (_pArr[T_Row + Count_12][T_Column + Count_12].getOwned() == 1)
				{
					QuanTa_2++;
					break;
				}
				if (_pArr[T_Row + Count_12][T_Column + Count_12].getOwned() == 0)
					break;
				if (_pArr[T_Row + Count_12][T_Column + Count_12].getOwned() == -1)
					QuanDich_2++;
			}
			break;
		}
		if (_pArr[T_Row + Count_1][T_Column + Count_1].getOwned() == -1)
			QuanDich_1++;
	}
	//iScoreDefend += Defend_Score[QuanDich_1];
	//QuanDich_1 = 0;

	for (int Count_1 = 1; Count_1 < 6 && T_Column - Count_1 >= 0 && T_Row - Count_1 >= 0; Count_1++)
	{
		if (_pArr[T_Row - Count_1][T_Column - Count_1].getOwned() == 1)
		{
			QuanTa_1++;
			break;
		}

		if (_pArr[T_Row - Count_1][T_Column - Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column - Count_12 >= 0 && T_Row - Count_12 >= 0; Count_12++)
			{
				if (_pArr[T_Row - Count_12][T_Column - Count_12].getOwned() == 1)
				{
					QuanTa_2++;
					break;
				}

				if (_pArr[T_Row - Count_12][T_Column - Count_12].getOwned() == 0)
					break;
				if (_pArr[T_Row - Count_12][T_Column - Count_12].getOwned() == -1)
					QuanDich_2++;
			}
			break;
		}
		if (_pArr[T_Row - Count_1][T_Column - Count_1].getOwned() == -1)
			QuanDich_1++;
	}
	if (QuanTa_1 == 2)
		return 0;
	if (QuanTa_1 == 0)
		DiemDuyetCheoNguoc += Defend_Score[QuanDich_1] * 2;
	else
		DiemDuyetCheoNguoc += Defend_Score[QuanDich_1];
	/*
	if (QuanTa_1 == 0)
	DiemDuyetDoc += Defend_Score[QuanDich_2] * 2;
	else
	DiemDuyetDoc += Defend_Score[QuanDich_2];
	*/
	if (QuanDich_1 >= QuanDich_2)
		DiemDuyetCheoNguoc -= 1;
	else
		DiemDuyetCheoNguoc -= 2;
	if (QuanDich_1 == 4)
		DiemDuyetCheoNguoc *= 2;
	return DiemDuyetCheoNguoc;
}
long _Grid::Defend_Score_Diagonal_2(long T_Row, long T_Column, const long Defend_Score[], const long Attack_Score[])
{
	long DiemDuyetCheoXuoi = 0;
	long iScoreDefend = 0;
	int QuanDich_1 = 0;
	int QuanTa_1 = 0;
	int QuanDich_2 = 0;
	int QuanTa_2 = 0;
	for (int Count_1 = 1; Count_1 < 6 && T_Column - Count_1 >= 0 && T_Row + Count_1 < _size; Count_1++)
	{
		if (_pArr[T_Row + Count_1][T_Column - Count_1].getOwned() == 1)
		{
			QuanTa_1++;
			break;
		}
		if (_pArr[T_Row + Count_1][T_Column - Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_12 < 7 && T_Column - Count_12 >= 0 && T_Row + Count_12 < _size; Count_12++)
			{
				if (_pArr[T_Row + Count_12][T_Column - Count_12].getOwned() == 1)
				{
					QuanTa_2++;
					break;
				}
				if (_pArr[T_Row + Count_12][T_Column - Count_12].getOwned() == 0)
					break;
				if (_pArr[T_Row + Count_12][T_Column - Count_12].getOwned() == -1)
					QuanDich_2++;
			}
			break;
		}
		if (_pArr[T_Row + Count_1][T_Column - Count_1].getOwned() == -1)
			QuanDich_1++;
	}
	//iScoreDefend += Defend_Score[QuanDich_1];
	//QuanDich_1 = 0;

	for (int Count_1 = 1; Count_1 < 6 && T_Column + Count_1 < _size && T_Row - Count_1 >= 0; Count_1++)
	{
		if (_pArr[T_Row - Count_1][T_Column + Count_1].getOwned() == 1)
		{
			QuanTa_1++;
			break;
		}
		if (_pArr[T_Row - Count_1][T_Column + Count_1].getOwned() == 0)
		{
			for (int Count_12 = 2; Count_1 < 7 && T_Column + Count_12 < _size && T_Row - Count_12 >= 0; Count_12++)
			{
				if (_pArr[T_Row - Count_12][T_Column + Count_12].getOwned() == 1)
				{
					QuanTa_2++;
					break;
				}
				if (_pArr[T_Row - Count_12][T_Column + Count_12].getOwned() == 0)
					break;
				if (_pArr[T_Row - Count_12][T_Column + Count_12].getOwned() == -1)
					QuanDich_2++;
			}
			break;
		}
		if (_pArr[T_Row - Count_1][T_Column + Count_1].getOwned() == -1)
			QuanDich_1++;
	}


	if (QuanTa_1 == 2)
		return 0;
	if (QuanTa_1 == 0)
		DiemDuyetCheoXuoi += Defend_Score[QuanDich_1] * 2;
	else
		DiemDuyetCheoXuoi += Defend_Score[QuanDich_1];
	/*
	if (QuanTa_1 == 0)
	DiemDuyetDoc += Defend_Score[QuanDich_2] * 2;
	else
	DiemDuyetDoc += Defend_Score[QuanDich_2];
	*/
	if (QuanDich_1 >= QuanDich_2)
		DiemDuyetCheoXuoi -= 1;
	else
		DiemDuyetCheoXuoi -= 2;
	if (QuanDich_1 == 4)
		DiemDuyetCheoXuoi *= 2;
	return DiemDuyetCheoXuoi;
}