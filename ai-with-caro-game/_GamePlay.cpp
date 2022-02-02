#include "_GamePlay.h"
#include <iostream>
using namespace std;
struct Name {
	char data[30];
};
vector <Name> ch;

void MenuGame(int n)
{
	system("cls");
	_Custom::ShowCur(0);
	int x = 67, y = 25;
	int pos = 25;
	_Custom::SetColor(4);
	_Custom::GotoXY(x, y); cout << "1 Player";
	_Custom::SetColor(7);
	_Custom::GotoXY(x, y + 1); cout << "2 Player";
	_Custom::GotoXY(x, y + 2); cout << "Load Game";
	_Custom::GotoXY(x, y + 3); cout << "Help";
	_Custom::GotoXY(x, y + 4); cout << "About";
	_Custom::GotoXY(x, y + 5); cout << "Exit";
	if (n == 75)
	{
		//PlaySound(TEXT("ThemeSong.wav"), NULL, SND_FILENAME | SND_ASYNC);
		_Display::DisplayIntro();
		_Display::CaroDraw1();
	}
	else
		_Display::CaroDraw1();

	while (true)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'w':
				if (pos > 25) pos--;
				if (pos == 25)
				{
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y); cout << "1 Player";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 26)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 1); cout << "2 Player ";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 27)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 28)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 29)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 30)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				break;
			case 's':
				if (pos < 30)
				{
					pos++;
				}
				if (pos == 25)
				{
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y); cout << "1 Player";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 26)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y); cout << "1 Player";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 27)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::GotoXY(x, y + 1); cout << "2 Player ";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 28)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 29)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				if (pos == 30)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(x, y + 0); cout << "1 Player";
					_Custom::GotoXY(x, y + 1); cout << "2 Player";
					_Custom::GotoXY(x, y + 2); cout << "Load Game";
					_Custom::GotoXY(x, y + 3); cout << "Help";
					_Custom::GotoXY(x, y + 4); cout << "About";
					_Custom::SetColor(4);
					_Custom::GotoXY(x, y + 5); cout << "Exit";
				}
				break;
			case 13:
				if (pos == 25)
				{
					MenuGame(SelectModeCom());
				}
				if (pos == 26)
				{
					MenuGame(SelectModePlayer());
				}
				if (pos == 27)
				{
					LoadGame();
				}
				if (pos == 28)
				{
					_Display::Help();
					MenuGame(57);
				}
				if (pos == 29)
				{
					_Display::About();
					MenuGame(57);
				}
				if (pos == 30)
				{
					exit(0);
				}
				break;
			}
		}
	}
}
int SelectModeCom() {
	system("cls");
	int x = 57, y = 25;
	_Display::CaroDraw1();
	_Custom::SetColor(11);
	_Custom::GotoXY(9 + 55, 16 + 6); cout << ">";
	_Custom::SetColor(14);
	_Custom::GotoXY(9 + 57, 16 + 6); cout << "1 Player";
	_Custom::SetColor(11);
	_Custom::GotoXY(9 + 66, 16 + 6); cout << "<";
	_Custom::SetColor(4);
	_Custom::GotoXY(9 + 59, 25); cout << "Easy";
	_Custom::SetColor(7);
	_Custom::GotoXY(9 + 59, 26); cout << "Hard";
	while (true) {
		if (_kbhit) {
			switch (_getch())
			{
			case 'w':
				if (y > 25) y--;
				if (y == 25)
				{
					_Custom::SetColor(4);
					_Custom::GotoXY(9 + 59, 25); cout << "Easy";
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 26); cout << "Hard";
				}
				break;
			case 's':
				if (y < 26) y++;
				if (y == 26)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 25); cout << "Easy";
					_Custom::SetColor(4);
					_Custom::GotoXY(9 + 59, 26); cout << "Hard";
				}
				break;
			case 13:
				if (y == 25)
				{
					Score score;
					score.score1 = 0;
					score.score2 = 0;
					char Save_Name[30] = " ";
					int t = One_Player(score, 1, 0, Save_Name);
					system("cls");
					if (t == 27) MenuGame(57);
				}
				if (y == 26)
				{
					Score score;
					score.score1 = 0;
					score.score2 = 0;
					char Save_Name[30] = " ";
					int t = One_Player(score, 2, 0, Save_Name);
					system("cls");
					if (t == 27) MenuGame(57);
				}
			case 27:
				return 57;
			}
		}

	}

}
int SelectModePlayer() {
	system("cls");
	int x = 57, y = 25;
	_Display::CaroDraw1();
	_Custom::SetColor(11);
	_Custom::GotoXY(9 + 55, 16 + 6); cout << ">";
	_Custom::SetColor(14);
	_Custom::GotoXY(9 + 57, 16 + 6); cout << "2 Player";
	_Custom::SetColor(11);
	_Custom::GotoXY(9 + 66, 16 + 6); cout << "<";
	_Custom::SetColor(4);
	_Custom::GotoXY(9 + 59, 25); cout << "FREE";
	_Custom::SetColor(7);
	_Custom::GotoXY(9 + 59, 26); cout << "BO3";
	_Custom::SetColor(7);
	_Custom::GotoXY(9 + 59, 27); cout << "BO5";
	while (true) {
		if (_kbhit) {
			switch (_getch())
			{
			case 'w':
				if (y > 25) y--;
				if (y == 25)
				{
					_Custom::SetColor(4);
					_Custom::GotoXY(9 + 59, 25); cout << "FREE";
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 26); cout << "BO3";
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 27); cout << "BO5";
				}
				if (y == 26)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 25); cout << "FREE";
					_Custom::SetColor(4);
					_Custom::GotoXY(9 + 59, 26); cout << "BO3";
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 27); cout << "BO5";
				}
				break;
			case 's':
				if (y < 27) y++;
				if (y == 27)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 25); cout << "FREE";
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 26); cout << "BO3";
					_Custom::SetColor(4);
					_Custom::GotoXY(9 + 59, 27); cout << "BO5";
				}
				if (y == 26)
				{
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 25); cout << "FREE";
					_Custom::SetColor(4);
					_Custom::GotoXY(9 + 59, 26); cout << "BO3";
					_Custom::SetColor(7);
					_Custom::GotoXY(9 + 59, 27); cout << "BO5";
				}
				break;
			case 13:
				if (y == 25)
				{
					Score score;
					score.score1 = 0;
					score.score2 = 0;
					char Save_Name[30] = " ";
					int t = Two_Player(score, 0, 0, Save_Name);
					system("cls");
					if (t == 27) MenuGame(57);
				}
				if (y == 26)
				{
					Score score;
					score.score1 = 0;
					score.score2 = 0;
					char Save_Name[30] = " ";
					int t = Two_Player(score, 3, 0, Save_Name);
					system("cls");
					if (t == 27) MenuGame(57);
				}
				if (y == 27)
				{
					Score score;
					score.score1 = 0;
					score.score2 = 0;
					char Save_Name[30] = " ";
					int t = Two_Player(score, 5, 0, Save_Name);
					system("cls");
					if (t == 27) MenuGame(57);
				}
			case 27:
				return 57;



			}
		}

	}

}
void ReadNameFile()
{
	_Custom::SetColor(White);
	_Custom::GotoXY(62, 24);
	cout << "LIST FILE NAME";
	_Custom::SetColor(DarkRed);
	int i = 25;
	ifstream f;
	f.open("Name.txt", ios::in);
	while (!f.eof())
	{
		char s[30];
		f >> s;
		_Custom::GotoXY(62, i);
		cout << s;
		i++;
	}
	f.close();
}
void LoadGame()
{
	system("cls");
	_Display::CaroDraw1();
	_Custom::SetColor(11);
	_Custom::GotoXY(9 + 55, 16 + 6); cout << ">";
	_Custom::SetColor(14);
	_Custom::GotoXY(9 + 57, 16 + 6); cout << "Load Game";
	_Custom::SetColor(11);
	_Custom::GotoXY(9 + 67, 16 + 6); cout << "<";
	ReadNameFile();
	char data[30];
	int Mode = 0, Load = 0;
	Score Score;
	_Custom::GotoXY(62, 31);
	_Custom::ShowCur(true);
	_Custom::SetColor(White);
	cout << "ENTER FILE NAME: ";
	_Custom::SetColor(DarkRed);
	cin.getline(data, 30);
	ifstream f;
	f.open(data, ios::in);
	if (!f) {
		_Custom::GotoXY(62, 32);
		cout << "FILE KHONG TON TAI!";
		_Custom::ShowCur(false);
		Sleep(1000);
		MenuGame(57);
	}
	else
		f >> Score.score1 >> Score.score2 >> Mode >> Load;
	f.close();
	if (Load == -30 || Load == -31)
	{
		int t = Two_Player(Score, Mode, Load, data);
		if (t == 27)
		{
			system("cls");
			MenuGame(57);
		}
	}
	if (Load == -4)
	{
		int t = One_Player(Score, Mode, Load, data);
		if (t == 27)
		{
			system("cls");
			MenuGame(57);
		}
	}
	if (Load == -5)
	{
		int t = One_Player(Score, Mode, Load, data);
		if (t == 27)
		{
			system("cls");
			MenuGame(57);
		}
	}
}
int Two_Player(Score& score, int mode, int load, char Save_Name[30]) {
	_Custom::ShowCur(true);
	_Core _core(SIZE);
	if (load == -30)
	{
		_core.setTurn_O();
		_core.LoadGame(Save_Name);
	}
	else if (load == -31)
	{
		_core.LoadGame(Save_Name);
	}
	else	_core.Start();
	_Display::Table_Score_Draw();
	_Custom::SetColor(DarkYellow);
	_Custom::GotoXY(SIZE * 4 + 39, 23);
	cout << "SOLO_MODE";
	_Custom::SetColor(Red);
	_Custom::GotoXY(SIZE * 4 + 33, 4);
	cout << score.score1;
	_Custom::SetColor(Green);
	_Custom::GotoXY(SIZE * 4 + 52, 4);
	cout << score.score2;
	switch (mode) {
	case 1:
		_Display::BO_Draw(1);
		break;
	case 3:
		_Display::BO_Draw(3);
		break;
	case 5:
		_Display::BO_Draw(5);
		break;
	default:
		break;
	}
	_Custom::GotoXY(34, 15);
	while (_core.CheckContinue()) {

		_core.WaitKeyboard();
		if (_core.getCommand() == 27) {
			return 27;
		}
		else
		{
			switch (_core.getCommand())
			{
			case 'A':
				_core.MoveLeft();
				break;
			case 'D':
				_core.MoveRight();
				break;
			case 'W':
				_core.MoveUp();
				break;
			case 'S':
				_core.MoveDown();
				break;
			case 'M':
				if (_core.getTurn() == 1)
					_core.SaveGame(-31, mode, score.score1, score.score2);
				else
					_core.SaveGame(-30, mode, score.score1, score.score2);
				break;
			case 'L':
				LoadGame();
				break;
			case 13:
				int Current_column = _core.getColumn();
				int Current_row = _core.getRow();
				if (_core.HandleOwned()) {
					switch (_core.HandleWinner(Current_column, Current_row)) {
					case -1:
						score.score1++;
						if ((mode != 0) && (score.score1 > (mode / 2)))
						{
							_Display::XWIN();
							while (true)
							{
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'c':
										load = 0;
										score.score1 = 0;
										score.score2 = 0;
										return Two_Player(score, mode, load, Save_Name);
										break;
									case 27:
										system("cls");
										MenuGame(57);
										break;
									}
								}
							}
							return 27;
						}
						while (true)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'c':
									load = 0;
									return Two_Player(score, mode, load, Save_Name);
									break;
								case 27:
									system("cls");
									MenuGame(57);
									break;
								}
							}
						}
						break;
					case 1:
						score.score2++;
						if ((mode != 0) && (score.score2 > (mode / 2)))
						{
							_Display::OWIN();
							while (true)
							{
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'c':
										load = 0;
										score.score1 = 0;
										score.score2 = 0;
										return Two_Player(score, mode, load, Save_Name);
										break;
									case 27:
										system("cls");
										MenuGame(57);
										break;
									}
								}
							}
							return 27;
						}
						while (true)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'c':
									load = 0;
									return Two_Player(score, mode, load, Save_Name);
									break;
								case 27:
									system("cls");
									MenuGame(57);
									break;
								}
							}
						}
						break;
					case 0:
						while (true)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'c':
									load = 0;
									return Two_Player(score, mode, load, Save_Name);
									break;
								case 27:
									system("cls");
									MenuGame(57);
									break;
								}
							}
						}
						break;

					}

				}




			}
		}
	}
}
int One_Player(Score& score, int mode, int load, char Save_Name[30])
{
	_Custom::ShowCur(true);
	_Core _core(SIZE);
	if (load == -4 || load == -5)
	{
		_core.LoadGame(Save_Name);
	}
	else
	{
		_core.Start();
		_core.setTurn_O();
	}
	_Display::Table_Score_Draw();
	_Custom::SetColor(DarkYellow);
	_Custom::GotoXY(SIZE * 4 + 38, 23);
	cout << "Play vs Com";
	_Custom::SetColor(Red);
	_Custom::GotoXY(SIZE * 4 + 33, 4);
	cout << score.score1;
	_Custom::SetColor(Green);
	_Custom::GotoXY(SIZE * 4 + 52, 4);
	cout << score.score2;
	_Custom::GotoXY((SIZE * 4 / 2) - 2, (SIZE * 2 / 2) - 1);
	while (_core.CheckContinue())
	{
		if (!_core.getTurn())
		{
			if (_core.Count_All_Owned_Cell() == 0)
			{
				_core.setColumn((SIZE * 4 / 2) - 2);
				_core.setRow((SIZE * 2 / 2) - 1);
				_Custom::GotoXY((SIZE * 4 / 2) - 2, (SIZE * 2 / 2) - 1);
				_core.setCommand(13);
			}
			else
			{
				if (mode == 1) {
					_core.Calculate_Next_Step_Easy();
				}
				else {
					_core.Calculate_Next_Step_Hard();
				}
				int _Curr_Column = _core.getColumn();
				int _Curr_Row = _core.getRow();
				_Custom::GotoXY(_Curr_Column, _Curr_Row);
				Sleep(300);
				_core.setCommand(13);
			}
		}
		else
			_core.WaitKeyboard();
		if (_core.getCommand() == 27) {
			return 27;
		}
		else
		{
			switch (_core.getCommand())
			{
			case 'A':
				_core.MoveLeft();
				break;
			case 'D':
				_core.MoveRight();
				break;
			case 'W':
				_core.MoveUp();
				break;
			case 'S':
				_core.MoveDown();
				break;
			case 'M':
				_core.SaveGame(-4, 0, score.score1, score.score2);
				break;
			case 'L':
				LoadGame();
				break;
			case 13:
				int _Curr_Column = _core.getColumn();
				int _Curr_Row = _core.getRow();
				if (_core.HandleOwned()) {
					switch (_core.HandleWinner(_Curr_Column, _Curr_Row)) {
					case -1:
						score.score1++;
						_Display::YOUWIN();
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'c':
									load = 0;
									return One_Player(score, mode, load, Save_Name);
									break;
								case 27:
									system("cls");
									MenuGame(57);
									break;
								}
							}
						}

						break;
					case 1:
						score.score2++;
						_Display::YOULOSE();
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'c':
									load = 0;
									return One_Player(score, mode, load, Save_Name);
									break;
								case 27:
									system("cls");
									MenuGame(57);
									break;
								}
							}
						}

						break;
					case 0:
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'c':
									load = 0;
									return One_Player(score, mode, load, Save_Name);
									break;
								case 27:
									system("cls");
									MenuGame(57);
									break;
								}
							}
						}
						break;
					}
				}
			}
		}

	}
}