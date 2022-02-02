#include "_Core.h"
using namespace std;


void _Core::Start() {

	system("cls");
	_grid->DrawGrid();
	_grid->ResetData();
	_grid->getColumnArr(0, 0);
	_grid->getRowArr(0, 0);
	if (_turn)
	{
		_Custom::SetColor(DarkRed);
		_Custom::GotoXY(SIZE * 4 + 41, 24);
		std::cout << "\\\\ //";
		_Custom::GotoXY(SIZE * 4 + 41, 25);
		std::cout << " >X< ";
		_Custom::GotoXY(SIZE * 4 + 41, 26);
		std::cout << "// \\\\";
	}
	else
	{
		_Custom::SetColor(DarkBlue);
		_Custom::GotoXY(SIZE * 4 + 41, 24);
		std::cout << "*OOO*";
		_Custom::GotoXY(SIZE * 4 + 41, 25);
		std::cout << "OOOOO";
		_Custom::GotoXY(SIZE * 4 + 41, 26);
		std::cout << "*OOO*";
	}
	_Custom::SetColor(Red);
	_Custom::GotoXY(SIZE * 4 + 33, 7);
	std::cout << _grid->_stepX;
	_Custom::SetColor(Green);
	_Custom::GotoXY(SIZE * 4 + 52, 7);
	std::cout << _grid->_stepO;
}
bool _Core::CheckContinue() { return _loop; }
char _Core::WaitKeyboard() {
	_command = toupper(_getch());
	return _command;
}
int  _Core::getCommand() { return _command; }
int  _Core::getColumn() { return _Curr_column; }
int  _Core::getRow() { return _Curr_row; }
bool _Core::getTurn() { return _turn; }
void _Core::setCommand(int command) { _command = command; }
void _Core::setColumn(int Column) { _Curr_column = Column; }
void _Core::setRow(int Row) { _Curr_row = Row; }
void _Core::MoveLeft() {
	if (_Curr_column > _grid->getColumnArr(0, 0))
	{
		_Curr_column -= 4;
		_Custom::GotoXY(_Curr_column, _Curr_row);
	}
}
void _Core::MoveRight() {
	if (_Curr_column < _grid->getColumnArr(_grid->getSize() - 1, _grid->getSize() - 1))
	{
		_Curr_column += 4;
		_Custom::GotoXY(_Curr_column, _Curr_row);
	}
}
void _Core::MoveUp() {
	if (_Curr_row > _grid->getRowArr(0, 0))
	{
		_Curr_row -= 2;
		_Custom::GotoXY(_Curr_column, _Curr_row);
	}
}
void _Core::MoveDown() {
	if (_Curr_row < _grid->getRowArr(_grid->getSize() - 1, _grid->getSize() - 1))
	{
		_Curr_row += 2;
		_Custom::GotoXY(_Curr_column, _Curr_row);
	}
}
bool _Core::HandleOwned()
{
	switch (_grid->checkOwned(_Curr_column, _Curr_row, _turn))
	{
	case -1:
		_Custom::SetColor(DarkRed);
		std::cout << "X";
		_Custom::SetColor(Red);
		_Custom::GotoXY(SIZE * 4 + 33, 7);
		std::cout << _grid->_stepX;
		_Custom::SetColor(DarkGreen);
		_Custom::GotoXY(SIZE * 4 + 41, 24);
		std::cout << "*OOO*";
		_Custom::GotoXY(SIZE * 4 + 41, 25);
		std::cout << "OOOOO";
		_Custom::GotoXY(SIZE * 4 + 41, 26);
		std::cout << "*OOO*";
		_Custom::GotoXY(_Curr_column, _Curr_row);
		break;
	case 1:
		_Custom::SetColor(DarkGreen);
		std::cout << "O";
		_Custom::SetColor(Green);
		_Custom::GotoXY(SIZE * 4 + 52, 7);
		std::cout << _grid->_stepO;
		_Custom::SetColor(DarkRed);
		_Custom::GotoXY(SIZE * 4 + 41, 24);
		std::cout << "\\\\ //";
		_Custom::GotoXY(SIZE * 4 + 41, 25);
		std::cout << " >X< ";
		_Custom::GotoXY(SIZE * 4 + 41, 26);
		std::cout << "// \\\\";
		_Custom::GotoXY(_Curr_column, _Curr_row);
		break;
	case 0:
		return false;
		break;
	}
	return true;
}
int  _Core::HandleWinner(int Curr_Column, int Curr_Row) {
	int Winner = _grid->ScanGrid(Curr_Column, Curr_Row);
	switch (Winner)
	{
	case -1:
		_Custom::ShowCur(false);
		_Custom::GotoXY(100, 20);
		_Custom::SetColor(White);
		std::cout << "PLAYER X WIN";
		_Custom::GotoXY(100, 21);
		std::cout << "C : Continue";
		break;
	case 1:
		_Custom::ShowCur(false);
		_Custom::GotoXY(100, 20);
		_Custom::SetColor(White);
		std::cout << "PLAYER O WIN";
		_Custom::GotoXY(100, 21);
		std::cout << "C : Continue";
		break;
	case 0:
		_Custom::ShowCur(false);
		_Custom::GotoXY(100, 20);
		_Custom::SetColor(White);
		std::cout << "DRAW";
		_Custom::GotoXY(100, 21);
		std::cout << "C : Continue";
		//Draw();
		break;
	case 5:
		_turn = !_turn;
	}
	_Custom::GotoXY(_Curr_column, _Curr_row);// Trả lại vị trí hiện tại
	return Winner;
}
// SAVE/LOAD game
void _Core::SaveGame(int n, int mode, int score1, int score2)
{
	char data[30];
	ofstream f1;
	ofstream f2;
	_Custom::GotoXY(100, 20);
	_Custom::SetColor(White);
	cout << "ENTER FILE NAME: ";
	_Custom::SetColor(Cyan);
	cin.getline(data, 30);
	f1.open(data, ios::out);
	f2.open("Name.txt", ios::app);
	f2 << data << " " << endl;
	//thong tin
	f1 << score1 << " " << score2 << " " << mode << " " << n << endl;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			f1 << _grid->getOwnedArr(i, j) << " ";
		}
		f1 << endl;
	}
	f1.close();
	f2.close();
	_Custom::GotoXY(100, 21);
	_Custom::SetColor(White);
	cout << "ESC : BACK";
	_Custom::ShowCur(false);
	int t = 1;
	while (t)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 27:
				t = 0;
				system("cls");
				MenuGame(57);
				break;
			}
		}
	}
}
void _Core::setTurn_O() { _turn = !_turn; }
void _Core::LoadGame(char Save_Game[30])
{
	int Load;
	//NHAP FILE
	ifstream f;
	f.open(Save_Game, ios::in);
	if (!f) {
		_Custom::GotoXY(62, 32);
		cout << "FILE KHONG TON TAI!";
		MenuGame(57);
	}
	else
	{
		f >> Score_X >> Score_O >> Mode >> Load;
		system("cls");
		//thong tin
		//ban co
		int own;
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				f >> own;
				_grid->loadData(i, j, own);
			}
		}
		_grid->DrawGrid();
		f.close();
	}
	_Custom::SetColor(Red);
	_Custom::GotoXY(SIZE * 4 + 33, 7);
	cout << _grid->_stepX;
	_Custom::SetColor(Green);
	_Custom::GotoXY(SIZE * 4 + 52, 7);
	cout << _grid->_stepO;
	if (_turn == 1)
	{
		_Custom::SetColor(DarkRed);
		_Custom::GotoXY(SIZE * 4 + 41, 24);
		std::cout << "\\\\ //";
		_Custom::GotoXY(SIZE * 4 + 41, 25);
		std::cout << " >X< ";
		_Custom::GotoXY(SIZE * 4 + 41, 26);
		std::cout << "// \\\\";
	}
	else
	{
		_Custom::SetColor(DarkGreen);
		_Custom::GotoXY(SIZE * 4 + 41, 24);
		std::cout << "*OOO*";
		_Custom::GotoXY(SIZE * 4 + 41, 25);
		std::cout << "OOOOO";
		_Custom::GotoXY(SIZE * 4 + 41, 26);
		std::cout << "*OOO*";
	}

}
// xử lý AI
int _Core::Count_All_Owned_Cell() {
	return _grid->_stepX + _grid->_stepO;
}
void _Core::Calculate_Next_Step_Easy() {
	_Curr_column = _grid->Calculate_Next_Step_Easy().getColumn();
	_Curr_row = _grid->Calculate_Next_Step_Easy().getRow();
}
void _Core::Calculate_Next_Step_Hard() {
	_Curr_column = _grid->Calculate_Next_Step_Hard().getColumn();
	_Curr_row = _grid->Calculate_Next_Step_Hard().getRow();
}





_Core::_Core(int pSize)
{
	_grid = new _Grid(pSize);
	_loop = true;
	_turn = true;
	_command = -1;
	_Curr_column = 34;
	_Curr_row = 15;
	Mode = 0;
	Score_X = 0;
	Score_O = 0;
}
_Core::~_Core()
{
	delete _grid;
}