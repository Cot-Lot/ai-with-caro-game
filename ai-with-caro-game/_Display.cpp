#include "_Display.h"
#include <vector>
#include <iostream>
using namespace std;



void _Display::DisplayIntro()
{
	int check = 1;
	while (check < 20)
	{
		CaroFlicker();
		Sleep(100);
		check++;
	}
}
void _Display::CaroFlicker() {

	int x = 30, y = 10;

	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 2, y);			    cout << "    ,o888888o.   ";
	_Custom::GotoXY(x + 2, y + 1);          cout << "   8888     `88. ";
	_Custom::GotoXY(x + 2, y + 2);          cout << ",8 8888       `8.";
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 2, y + 3);          cout << "88 8888          ";
	_Custom::GotoXY(x + 2, y + 4);			cout << "88 8888          ";
	_Custom::GotoXY(x + 2, y + 5);			cout << "88 8888          ";
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 2, y + 6);			cout << "88 8888          ";
	_Custom::GotoXY(x + 2, y + 7);			cout << "`8 8888       .8'";
	_Custom::GotoXY(x + 2, y + 8);			cout << "   8888     ,88' ";
	_Custom::GotoXY(x + 2, y + 9);			cout << "    `8888888P'   ";

	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 20, y);		    cout << "         .8.         ";
	_Custom::GotoXY(x + 20, y + 1);		cout << "        .888.        ";
	_Custom::GotoXY(x + 20, y + 2);		cout << "       :88888.       ";
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 20, y + 3);		cout << "      . `88888.      ";
	_Custom::GotoXY(x + 20, y + 4);		cout << "     .8. `88888.     ";
	_Custom::GotoXY(x + 20, y + 5);		cout << "    .8`8. `88888.    ";
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 20, y + 6);		cout << "   .8' `8. `88888.   ";
	_Custom::GotoXY(x + 20, y + 7);		cout << "  .8'   `8. `88888.  ";
	_Custom::GotoXY(x + 20, y + 8);		cout << " .888888888. `88888. ";
	_Custom::GotoXY(x + 20, y + 9);		cout << ".8'       `8. `88888.";


	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 43, y);		cout << "8 888888888o.  ";
	_Custom::GotoXY(x + 43, y + 1);	cout << "8 8888    `88. ";
	_Custom::GotoXY(x + 43, y + 2);	cout << "8 8888     `88 ";
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 43, y + 3);	cout << "8 8888     ,88 ";
	_Custom::GotoXY(x + 43, y + 4);	cout << "8 8888.   ,88' ";
	_Custom::GotoXY(x + 43, y + 5);	cout << "8 888888888P'  ";
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 43, y + 6);	cout << "8 8888`8b      ";
	_Custom::GotoXY(x + 43, y + 7);	cout << "8 8888   `8b.  ";
	_Custom::GotoXY(x + 43, y + 8);	cout << "8 8888   `8b.  ";
	_Custom::GotoXY(x + 43, y + 9);	cout << "8 8888     `88.";


	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 60, y);			cout << "    ,o888888o.    ";
	_Custom::GotoXY(x + 60, y + 1);		cout << " . 8888     `88.  ";
	_Custom::GotoXY(x + 60, y + 2);		cout << ",8 8888       `8b ";
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 60, y + 3);		cout << "88 8888        `8b";
	_Custom::GotoXY(x + 60, y + 4);		cout << "88 8888         88";
	_Custom::GotoXY(x + 60, y + 5);		cout << "88 8888         88";
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 60, y + 6);		cout << "88 8888        ,8P";
	_Custom::GotoXY(x + 60, y + 7);		cout << "`8 8888       ,8P ";
	_Custom::GotoXY(x + 60, y + 8);		cout << " ` 8888     ,88'  ";
	_Custom::GotoXY(x + 60, y + 9);		cout << "    `8888888P'    ";
	//FRAME
	_Custom::SetColor(White);
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x - 4, y - 2);
	cout << char(201);
	for (int i = 0; i < 86; i++)
		cout << char(205);
	cout << char(187);
	for (int i = 0; i < 12; i++) {
		_Custom::GotoXY(x + 83, y - 2 + i + 1);
		cout << char(186);
	}
	for (int i = 0; i < 12; i++) {
		_Custom::GotoXY(x - 4, y - 2 + i + 1);
		cout << char(186);
	}
	_Custom::GotoXY(x - 4, y + 11);
	cout << char(200);
	for (int i = 0; i < 86; i++)
		cout << char(205);
	cout << char(188);
	//XXXXXXXXXXXXXXXXXXXX
	_Custom::SetColor(DarkRed);
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 23, 25 + 8);
	cout << char(219) << char(219) << char(187) << "  " << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23, 26 + 8);
	cout << char(200) << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(188);
	_Custom::GotoXY(x + 23, 27 + 8);
	cout << " " << char(200) << char(219) << char(219) << char(219) << char(201) << char(188);
	_Custom::GotoXY(x + 24, 28 + 8);
	cout << char(219) << char(219) << char(201) << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23, 29 + 8);
	cout << char(219) << char(219) << char(201) << char(188) << " " << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23, 30 + 8);
	cout << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188);
	//OOOOOOOOOOOOO
	_Custom::SetColor(DarkGreen);
	_Custom::SetColor(rand() % 15 + 1);
	_Custom::GotoXY(x + 51, 25 + 8);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(x + 50, 26 + 8);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 50, 27 + 8);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(x + 50, 28 + 8);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(x + 50, 29 + 8);
	cout << char(200);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(201) << char(188);
	_Custom::GotoXY(x + 51, 30 + 8);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
	//---------------
	_Custom::SetColor(White);
	_Custom::GotoXY(x + 37, 27 + 8);
	for (int i = 0; i < 7; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(x + 37, 28 + 8);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

}
void _Display::CaroDraw1() {

	int x = 30, y = 10;
	_Custom::SetColor(DarkRed);
	_Custom::GotoXY(x + 2, y);			    cout << "    ,o888888o.   ";
	_Custom::GotoXY(x + 2, y + 1);          cout << "   8888     `88. ";
	_Custom::GotoXY(x + 2, y + 2);          cout << ",8 8888       `8.";
	_Custom::GotoXY(x + 2, y + 3);          cout << "88 8888          ";
	_Custom::GotoXY(x + 2, y + 4);			cout << "88 8888          ";
	_Custom::GotoXY(x + 2, y + 5);			cout << "88 8888          ";
	_Custom::GotoXY(x + 2, y + 6);			cout << "88 8888          ";
	_Custom::GotoXY(x + 2, y + 7);			cout << "`8 8888       .8'";
	_Custom::GotoXY(x + 2, y + 8);			cout << "   8888     ,88' ";
	_Custom::GotoXY(x + 2, y + 9);			cout << "    `8888888P'   ";

	_Custom::SetColor(DarkGreen);
	_Custom::GotoXY(x + 20, y);		    cout << "         .8.         ";
	_Custom::GotoXY(x + 20, y + 1);		cout << "        .888.        ";
	_Custom::GotoXY(x + 20, y + 2);		cout << "       :88888.       ";
	_Custom::GotoXY(x + 20, y + 3);		cout << "      . `88888.      ";
	_Custom::GotoXY(x + 20, y + 4);		cout << "     .8. `88888.     ";
	_Custom::GotoXY(x + 20, y + 5);		cout << "    .8`8. `88888.    ";
	_Custom::GotoXY(x + 20, y + 6);		cout << "   .8' `8. `88888.   ";
	_Custom::GotoXY(x + 20, y + 7);		cout << "  .8'   `8. `88888.  ";
	_Custom::GotoXY(x + 20, y + 8);		cout << " .888888888. `88888. ";
	_Custom::GotoXY(x + 20, y + 9);		cout << ".8'       `8. `88888.";

	_Custom::SetColor(DarkBlue);
	_Custom::GotoXY(x + 43, y);		cout << "8 888888888o.  ";
	_Custom::GotoXY(x + 43, y + 1);	cout << "8 8888    `88. ";
	_Custom::GotoXY(x + 43, y + 2);	cout << "8 8888     `88 ";
	_Custom::GotoXY(x + 43, y + 3);	cout << "8 8888     ,88 ";
	_Custom::GotoXY(x + 43, y + 4);	cout << "8 8888.   ,88' ";
	_Custom::GotoXY(x + 43, y + 5);	cout << "8 888888888P'  ";
	_Custom::GotoXY(x + 43, y + 6);	cout << "8 8888`8b      ";
	_Custom::GotoXY(x + 43, y + 7);	cout << "8 8888   `8b.  ";
	_Custom::GotoXY(x + 43, y + 8);	cout << "8 8888   `8b.  ";
	_Custom::GotoXY(x + 43, y + 9);	cout << "8 8888     `88.";

	_Custom::SetColor(DarkYellow);
	_Custom::GotoXY(x + 60, y);			cout << "    ,o888888o.    ";
	_Custom::GotoXY(x + 60, y + 1);		cout << " . 8888     `88.  ";
	_Custom::GotoXY(x + 60, y + 2);		cout << ",8 8888       `8b ";
	_Custom::GotoXY(x + 60, y + 3);		cout << "88 8888        `8b";
	_Custom::GotoXY(x + 60, y + 4);		cout << "88 8888         88";
	_Custom::GotoXY(x + 60, y + 5);		cout << "88 8888         88";
	_Custom::GotoXY(x + 60, y + 6);		cout << "88 8888        ,8P";
	_Custom::GotoXY(x + 60, y + 7);		cout << "`8 8888       ,8P ";
	_Custom::GotoXY(x + 60, y + 8);		cout << " ` 8888     ,88'  ";
	_Custom::GotoXY(x + 60, y + 9);		cout << "    `8888888P'    ";
	//FRAME
	_Custom::SetColor(White);
	_Custom::GotoXY(x - 4, y - 2);
	cout << char(201);
	for (int i = 0; i < 86; i++)
		cout << char(205);
	cout << char(187);
	for (int i = 0; i < 12; i++) {
		_Custom::GotoXY(x + 83, y - 2 + i + 1);
		cout << char(186);
	}
	for (int i = 0; i < 12; i++) {
		_Custom::GotoXY(x - 4, y - 2 + i + 1);
		cout << char(186);
	}
	_Custom::GotoXY(x - 4, y + 11);
	cout << char(200);
	for (int i = 0; i < 86; i++)
		cout << char(205);
	cout << char(188);



	//XXXXXXXXXXXXXXXXXXXX
	_Custom::SetColor(DarkRed);
	_Custom::GotoXY(x + 23, 25 + 8);
	cout << char(219) << char(219) << char(187) << "  " << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23, 26 + 8);
	cout << char(200) << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(188);
	_Custom::GotoXY(x + 23, 27 + 8);
	cout << " " << char(200) << char(219) << char(219) << char(219) << char(201) << char(188);
	_Custom::GotoXY(x + 24, 28 + 8);
	cout << char(219) << char(219) << char(201) << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23, 29 + 8);
	cout << char(219) << char(219) << char(201) << char(188) << " " << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23, 30 + 8);
	cout << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188);
	//OOOOOOOOOOOOO
	_Custom::SetColor(DarkGreen);
	_Custom::GotoXY(x + 51, 25 + 8);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(x + 50, 26 + 8);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 50, 27 + 8);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(x + 50, 28 + 8);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(x + 50, 29 + 8);
	cout << char(200);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(201) << char(188);
	_Custom::GotoXY(x + 51, 30 + 8);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
	//---------------
	_Custom::SetColor(White);
	_Custom::GotoXY(x + 37, 27 + 8);
	for (int i = 0; i < 7; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(x + 37, 28 + 8);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
}
void _Display::Table_Score_Draw()
{
	_Custom::GotoXY(SIZE * 4 + 17, 0);
	_Custom::SetColor(Green);
	for (int i = 1; i < 9; i++)
	{
		cout << char(220);
	}

	for (int i = 1; i < SIZE * 2; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 18, i);
		cout << char(219);
	}
	for (int i = 1; i < SIZE * 2; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 17, i);
		cout << char(219);
	}
	_Custom::GotoXY(SIZE * 4 + 17, 32);
	for (int i = 1; i < 9; i++)
	{
		cout << char(223);
	}
	// Thanh trắng 
	_Custom::GotoXY(SIZE * 4 + 62, 0);
	for (int i = 1; i < 9; i++)
	{
		cout << char(220);
	}

	for (int i = 1; i < SIZE * 2; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 69, i);
		cout << char(219);
	}
	for (int i = 1; i < SIZE * 2; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 68, i);
		cout << char(219);
	}
	_Custom::GotoXY(SIZE * 4 + 62, 32);
	for (int i = 1; i < 9; i++)
	{
		cout << char(223);
	}

	//
	_Custom::SetColor(Yellow);
	Sleep(1);
	_Custom::GotoXY(SIZE * 4 + 1, (SIZE * 2 - 1) / 2 + 1);
	_Custom::SetColor(Red);
	cout << "     H ";
	_Custom::SetColor(Blue);
	cout << "A ";
	_Custom::SetColor(DarkYellow);
	cout << "O ";
	_Custom::SetColor(DarkGreen);
	cout << char(1);
	_Custom::SetColor(DarkYellow);
	for (int i = 0; i < (SIZE * 2 - 1) / 2 - 2; i++)
	{
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 1, i + 1);
		cout << char(186);
	}
	Sleep(1);
	_Custom::GotoXY(SIZE * 4 + 1, 0); cout << char(187);
	_Custom::GotoXY(SIZE * 4 + 1, SIZE * 2); cout << char(188);
	for (int i = (SIZE * 2 - 1) / 2 + 3; i < SIZE * 2 - 1; i++)
	{
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 1, i + 1);
		cout << char(186);
	}
	// Hàng Hào
	_Custom::SetColor(Green);
	_Custom::GotoXY(SIZE * 4 + 1, (SIZE * 2 - 1) / 2 - 1); cout << char(200);
	for (int i = 0; i < 15; i++)
	{
		Sleep(1);
		cout << char(205);
	}
	_Custom::GotoXY(SIZE * 4 + 1, (SIZE * 2 - 1) / 2 + 3); cout << char(201);
	for (int i = 0; i < 15; i++)
	{
		Sleep(1);
		cout << char(205);
	}
	// Table score
	_Custom::SetColor(DarkRed);
	Sleep(1);
	// nối
	_Custom::GotoXY(SIZE * 4 + 19, 4);
	cout << char(219) << char(205) << char(178) << char(178) << char(178) << char(16);
	_Custom::GotoXY(SIZE * 4 + 62, 4);
	cout << char(17) << char(178) << char(178) << char(178) << char(205) << char(219);
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 25, i + 1);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 43, i + 1);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 61, i + 1);
		cout << char(219);
	}

	_Custom::GotoXY(SIZE * 4 + 25, 0);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(220);
	}

	for (int i = 0; i < 35; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 1 + 25 + i, 3);
		if (i == 17)
		{
			continue;
		}
		cout << char(223);
	}
	_Custom::GotoXY(SIZE * 4 + 25, 8 + 1);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(223);
	}
	int caro = 15; int game = 90;
	//CCCCCCCCCCCCCCCCCCCC
	_Custom::SetColor(DarkRed);
	_Custom::GotoXY(caro + 1, 34);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(caro, 35);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188);
	_Custom::GotoXY(caro, 36);
	cout << char(219) << char(219) << char(186);
	_Custom::GotoXY(caro, 37);
	cout << char(219) << char(219) << char(186);
	_Custom::GotoXY(caro, 38);
	cout << char(200);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(caro + 1, 39);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
	//AAAAAAAAAAAAAA
	_Custom::SetColor(Green);
	_Custom::GotoXY(caro + 9, 34);
	for (int i = 0; i < 5; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(caro + 8, 35);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
	_Custom::GotoXY(caro + 8, 36);
	for (int i = 0; i < 7; i++)
		cout << char(219);
	cout << char(186);
	_Custom::GotoXY(caro + 8, 37);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(186);
	_Custom::GotoXY(caro + 8, 38);
	cout << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(186);
	_Custom::GotoXY(caro + 8, 39);
	cout << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188);
	//RRRRRRRRRRRR
	_Custom::SetColor(DarkBlue);
	_Custom::GotoXY(caro + 16, 34);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(caro + 16, 35);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
	_Custom::GotoXY(caro + 16, 36);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(201) << char(188);
	_Custom::GotoXY(caro + 16, 37);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
	_Custom::GotoXY(caro + 16, 38);
	cout << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(186);
	_Custom::GotoXY(caro + 16, 39);
	cout << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188);
	//OOOOOOOOOOOOO
	_Custom::SetColor(DarkYellow);
	_Custom::GotoXY(caro + 25, 34);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(caro + 24, 35);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
	_Custom::GotoXY(caro + 24, 36);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(caro + 24, 37);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(caro + 24, 38);
	cout << char(200);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(201) << char(188);
	_Custom::GotoXY(caro + 25, 39);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
	//GGGGGGGGGGGGGGGG
	_Custom::SetColor(White);
	_Custom::GotoXY(game + 1, 34);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(game, 35);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188);
	_Custom::GotoXY(game, 36);
	cout << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(219) << char(187);
	_Custom::GotoXY(game, 37);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(game, 38);
	cout << char(200);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(201) << char(188);
	_Custom::GotoXY(game + 1, 39);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
	//AAAAAAAAAAAAAA
	_Custom::SetColor(White);
	_Custom::GotoXY(game + 10, 34);
	for (int i = 0; i < 5; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(game + 9, 35);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
	_Custom::GotoXY(game + 9, 36);
	for (int i = 0; i < 7; i++)
		cout << char(219);
	cout << char(186);
	_Custom::GotoXY(game + 9, 37);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(186);
	_Custom::GotoXY(game + 9, 38);
	cout << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(186);
	_Custom::GotoXY(game + 9, 39);
	cout << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188);
	//MMMMMMMMMMMMMMM
	_Custom::SetColor(White);
	_Custom::GotoXY(game + 17, 34);
	cout << char(219) << char(219) << char(219) << char(187) << "   " << char(219) << char(219) << char(219) << char(187);
	_Custom::GotoXY(game + 17, 35);
	cout << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(219) << char(219) << char(186);
	_Custom::GotoXY(game + 17, 36);
	cout << char(219) << char(219) << char(201) << char(219) << char(219) << char(219) << char(219) << char(201) << char(219) << char(219) << char(186);
	_Custom::GotoXY(game + 17, 37);
	cout << char(219) << char(219) << char(186) << char(200) << char(219) << char(219) << char(201) << char(188) << char(219) << char(219) << char(186);
	_Custom::GotoXY(game + 17, 38);
	cout << char(219) << char(219) << char(186) << " " << char(200) << char(205) << char(188) << " " << char(219) << char(219) << char(186);
	_Custom::GotoXY(game + 17, 39);
	cout << char(200) << char(205) << char(188) << "     " << char(200) << char(205) << char(188);
	//EEEEEEEEEEEEEEEE
	_Custom::SetColor(White);
	_Custom::GotoXY(game + 28, 34);
	for (int i = 0; i < 7; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(game + 28, 35);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188);
	_Custom::GotoXY(game + 28, 36);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(187);
	_Custom::GotoXY(game + 28, 37);
	cout << char(219) << char(219) << char(201) << char(201) << char(205) << char(188);
	_Custom::GotoXY(game + 28, 38);
	for (int i = 0; i < 7; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(game + 28, 39);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
	// Table turn
	Sleep(1);
	_Custom::SetColor(DarkBlue);
	_Custom::GotoXY(SIZE * 4 + 19, (SIZE * 2 - 1) - 4);
	cout << char(219) << char(205) << char(178) << char(178) << char(178) << char(16);
	_Custom::GotoXY(SIZE * 4 + 62, (SIZE * 2 - 1) - 4);
	cout << char(17) << char(178) << char(178) << char(178) << char(205) << char(219);
	for (int i = 0; i < 10; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 25, SIZE * 2 - i);
		cout << char(219);
	}
	for (int i = 0; i < 10; i++) {
		Sleep(1);
		_Custom::GotoXY(SIZE * 4 + 61, SIZE * 2 - i);
		cout << char(219);
	}
	_Custom::GotoXY(SIZE * 4 + 25, SIZE * 2);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(223);
	}
	_Custom::GotoXY(SIZE * 4 + 25, SIZE * 2 - 10);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(220);
	}


	_Custom::SetColor(White);
	_Custom::GotoXY(SIZE * 4 + 31, 1);
	cout << "PLAYER X";
	_Custom::GotoXY(SIZE * 4 + 27, 4);
	cout << "Win : ";
	_Custom::GotoXY(SIZE * 4 + 27, 7);
	cout << "Step: ";


	_Custom::GotoXY(SIZE * 4 + 49, 1);
	cout << "PLAYER O";
	_Custom::GotoXY(SIZE * 4 + 46, 4);
	cout << "Win : ";
	_Custom::GotoXY(SIZE * 4 + 46, 7);
	cout << "Step: ";




	_Custom::GotoXY(SIZE * 4 + 33, 27);
	cout << "~~~~~~~~~";
	_Custom::SetColor(DarkYellow);
	cout << "Turn";
	_Custom::SetColor(White);
	cout << "~~~~~~~~~";
	_Custom::GotoXY(SIZE * 4 + 35, 28);
	cout << " W A S D: Move ";
	_Custom::GotoXY(SIZE * 4 + 35, 29);
	cout << "    M   : Save ";
	_Custom::GotoXY(SIZE * 4 + 35, 30);
	cout << "    L   : Load ";
	_Custom::GotoXY(SIZE * 4 + 35, 31);
	cout << "   ESC  : Exit ";

	_Custom::GotoXY(2, 1);
}
void _Display::BO_Draw(int mode) {
	int game = 90;
	switch (mode)
	{
	case 1:
		//BBBBBBBBBBBBBBBBB
		_Custom::SetColor(DarkRed);
		_Custom::GotoXY(game, 13);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game, 14);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game, 15);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game, 16);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game, 17);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game, 18);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

		//OOOOOOOOOOOOOOOOOOOOOOOOO
		_Custom::SetColor(DarkGreen);
		_Custom::GotoXY(game + 10, 13);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 9, 14);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game + 9, 15);
		cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 9, 16);
		cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 9, 17);
		cout << char(200);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game + 10, 18);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		//------------------
		_Custom::SetColor(DarkBlue);
		_Custom::GotoXY(game + 19, 15);
		for (int i = 0; i < 7; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 19, 16);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		//1111111111111111
		_Custom::SetColor(DarkYellow);
		_Custom::GotoXY(game + 29, 13);
		cout << char(219) << char(219) << char(187);
		_Custom::GotoXY(game + 28, 14);
		cout << char(219) << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 28, 15);
		cout << char(200) << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 29, 16);
		cout << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 29, 17);
		cout << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 29, 18);
		cout << char(200) << char(205) << char(188);
		break;
	case 3:
		//BBBBBBBBBBBBBBBBB
		_Custom::SetColor(DarkRed);
		_Custom::GotoXY(game, 13);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game, 14);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game, 15);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game, 16);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game, 17);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game, 18);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

		//OOOOOOOOOOOOOOOOOOOOOOOOO
		_Custom::SetColor(DarkGreen);
		_Custom::GotoXY(game + 10, 13);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 9, 14);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game + 9, 15);
		cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 9, 16);
		cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 9, 17);
		cout << char(200);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game + 10, 18);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		//------------------
		_Custom::SetColor(DarkBlue);
		_Custom::GotoXY(game + 19, 15);
		for (int i = 0; i < 7; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 19, 16);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		//33333333333333333
		_Custom::SetColor(DarkYellow);
		_Custom::GotoXY(game + 29, 13);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 29, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game + 30, 15);
		for (int i = 0; i < 5; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game + 30, 16);
		cout << char(200) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game + 29, 17);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game + 29, 18);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		break;
	case 5:
		//BBBBBBBBBBBBBBBBB
		_Custom::SetColor(DarkRed);
		_Custom::GotoXY(game, 13);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game, 14);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game, 15);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game, 16);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game, 17);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game, 18);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

		//OOOOOOOOOOOOOOOOOOOOOOOOO
		_Custom::SetColor(DarkGreen);
		_Custom::GotoXY(game + 10, 13);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 9, 14);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
		_Custom::GotoXY(game + 9, 15);
		cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 9, 16);
		cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 9, 17);
		cout << char(200);
		for (int i = 0; i < 6; i++)
			cout << char(219);
		cout << char(201) << char(188);
		_Custom::GotoXY(game + 10, 18);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		//------------------
		_Custom::SetColor(DarkBlue);
		_Custom::GotoXY(game + 19, 15);
		for (int i = 0; i < 7; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 19, 16);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		//33333333333333333
		_Custom::SetColor(DarkYellow);
		_Custom::GotoXY(game + 29, 13);
		for (int i = 0; i < 7; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 29, 14);
		cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188);
		_Custom::GotoXY(game + 29, 15);
		for (int i = 0; i < 7; i++)
			cout << char(219);
		cout << char(187);
		_Custom::GotoXY(game + 29, 16);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(219) << char(219) << char(186);
		_Custom::GotoXY(game + 29, 17);
		for (int i = 0; i < 7; i++)
			cout << char(219);
		cout << char(186);
		_Custom::GotoXY(game + 29, 18);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		break;
	default:
		break;
	}
}
void _Display::Help() {
	system("cls");
	_Display::CaroDraw1();
	_Custom::SetColor(11);
	_Custom::GotoXY(8 + 58, 16 + 6); cout << ">";
	_Custom::SetColor(14);
	_Custom::GotoXY(8 + 60, 16 + 6); cout << "HELP";
	_Custom::SetColor(11);
	_Custom::GotoXY(8 + 65, 16 + 6); cout << "<";
	_Custom::SetColor(5);
	_Custom::GotoXY(8 + 40, 18 + 6);
	cout << "INSTRUCTIONS" << endl;
	_Custom::SetColor(15);
	_Custom::GotoXY(8 + 40, 19 + 6);
	cout << "1. The game is played on a 16x16 grid." << endl;
	_Custom::GotoXY(8 + 40, 20 + 6);
	cout << "2.Use the WASD keys to move on the grid." << endl;
	_Custom::GotoXY(8 + 40, 21 + 6);
	cout << "3.Use the 'Enter' key to creat 'X' or 'O'." << endl;
	_Custom::GotoXY(8 + 40, 22 + 6);
	cout << "4.Players have to create an unbroken row of five symbols to win. " << endl;

	_Custom::GotoXY(8 + 40, 24 + 6);
	cout << "-> HOPE YOU HAVE FUN !!" << endl;
	_Custom::SetColor(11);
	_Custom::GotoXY(8 + 57, 26 + 6); cout << "->";
	_Custom::SetColor(4);
	_Custom::GotoXY(8 + 60, 26 + 6); cout << "BACK";
	_Custom::SetColor(11);
	_Custom::GotoXY(8 + 65, 26 + 6); cout << "<-";
	char command = _getch();
	system("cls");
}
void _Display::About() {
	system("cls");
	_Display::CaroDraw1();
	_Custom::SetColor(11);
	_Custom::GotoXY(8 + 58, 16 + 6); cout << ">";
	_Custom::SetColor(14);
	_Custom::GotoXY(8 + 60, 16 + 6); cout << "ABOUT";
	_Custom::SetColor(11);
	_Custom::GotoXY(8 + 66, 16 + 6); cout << "<";
	_Custom::SetColor(5);
	_Custom::GotoXY(8 + 50, 18 + 6);
	cout << "DESIGNER:" << endl;
	_Custom::SetColor(15);
	_Custom::GotoXY(8 + 50, 19 + 6);
	cout << "->Name        Tran Minh Hao";
	_Custom::GotoXY(8 + 50, 20 + 6);
	cout << "->ID          19119173";
	_Custom::SetColor(5);
	_Custom::GotoXY(8 + 50, 21 + 6);
	cout << "INFORMATION:";
	_Custom::SetColor(15);
	_Custom::GotoXY(8 + 50, 22 + 6);
	cout << "->Course      C++";
	_Custom::GotoXY(8 + 50, 23 + 6);
	cout << "->Instructor  Mr. Huynh Hoang Ha";

	_Custom::GotoXY(8 + 50, 25 + 6);
	cout << "-> HOPE YOU HAVE FUN !!";
	_Custom::SetColor(11);
	_Custom::GotoXY(8 + 57, 27 + 6); cout << "->";
	_Custom::SetColor(4);
	_Custom::GotoXY(8 + 60, 27 + 6); cout << "BACK";
	_Custom::SetColor(11);
	_Custom::GotoXY(8 + 65, 27 + 6); cout << "<-";
	char command = _getch();
	system("cls");
};
void _Display::XWIN() {
	system("cls");
	int x = 15, y = 10;
	_Custom::SetColor(DarkRed);
	_Custom::GotoXY(x + 2, y);			    cout << "`8.`888b                 ,8' 8 8888 b.             8 b.             8 8 8888888888   8 888888888o.   ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 1);          cout << " `8.`888b               ,8'  8 8888 888o.          8 888o.          8 8 8888         8 8888    `88.  ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 2);          cout << "  `8.`888b             ,8'   8 8888 Y88888o.       8 Y88888o.       8 8 8888         8 8888     `88  ";
	_Custom::SetColor(DarkBlue);
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 3);          cout << "   `8.`888b     .b    ,8'    8 8888 .`Y888888o.    8 .`Y888888o.    8 8 8888         8 8888     ,88  ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 4);			cout << "    `8.`888b    88b  ,8'     8 8888 8o. `Y888888o. 8 8o. `Y888888o. 8 8 888888888888 8 8888.   ,88'  ";
	Sleep(100);
	_Custom::SetColor(DarkGreen);
	_Custom::GotoXY(x + 2, y + 5);			cout << "     `8.`888b .`888b,8'      8 8888 8`Y8o. `Y88888o8 8`Y8o. `Y88888o8 8 8888         8 888888888P'   ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 6);			cout << "      `8.`888b8.`8888'       8 8888 8   `Y8o. `Y8888 8   `Y8o. `Y8888 8 8888         8 8888`8b       ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 7);			cout << "       `8.`888`8.`88'        8 8888 8      `Y8o. `Y8 8      `Y8o. `Y8 8 8888         8 8888 `8b.     ";
	Sleep(100);
	_Custom::SetColor(DarkYellow);
	_Custom::GotoXY(x + 2, y + 8);			cout << "        `8.`8' `8,`'         8 8888 8         `Y8o.` 8         `Y8o.` 8 8888         8 8888   `8b.   ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 9);			cout << "         `8.`   `8'          8 8888 8            `Yo 8            `Yo 8 888888888888 8 8888     `88. ";
	Sleep(100);
	//XXXXXXXXXXXXXXXXXXXX
	_Custom::SetColor(DarkRed);
	_Custom::GotoXY(x + 23 + 27, 25);
	cout << char(219) << char(219) << char(187) << "  " << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23 + 27, 26);
	cout << char(200) << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(188);
	_Custom::GotoXY(x + 23 + 27, 27);
	cout << " " << char(200) << char(219) << char(219) << char(219) << char(201) << char(188);
	_Custom::GotoXY(x + 24 + 27, 28);
	cout << char(219) << char(219) << char(201) << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23 + 27, 29);
	cout << char(219) << char(219) << char(201) << char(188) << " " << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 23 + 27, 30);
	cout << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188);
	_Custom::SetColor(White);
	_Custom::GotoXY(x + 23 + 24, 31);
	cout << " C  : Play again!";
	_Custom::GotoXY(x + 23 + 24, 32);
	cout << "ESC : Menu Game";
}
void _Display::OWIN() {
	system("cls");
	int x = 15, y = 10;
	_Custom::SetColor(DarkRed);
	_Custom::GotoXY(x + 2, y);			    cout << "`8.`888b                 ,8' 8 8888 b.             8 b.             8 8 8888888888   8 888888888o.   ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 1);          cout << " `8.`888b               ,8'  8 8888 888o.          8 888o.          8 8 8888         8 8888    `88.  ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 2);          cout << "  `8.`888b             ,8'   8 8888 Y88888o.       8 Y88888o.       8 8 8888         8 8888     `88  ";
	_Custom::SetColor(DarkBlue);
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 3);          cout << "   `8.`888b     .b    ,8'    8 8888 .`Y888888o.    8 .`Y888888o.    8 8 8888         8 8888     ,88  ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 4);			cout << "    `8.`888b    88b  ,8'     8 8888 8o. `Y888888o. 8 8o. `Y888888o. 8 8 888888888888 8 8888.   ,88'  ";
	Sleep(100);
	_Custom::SetColor(DarkGreen);
	_Custom::GotoXY(x + 2, y + 5);			cout << "     `8.`888b .`888b,8'      8 8888 8`Y8o. `Y88888o8 8`Y8o. `Y88888o8 8 8888         8 888888888P'   ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 6);			cout << "      `8.`888b8.`8888'       8 8888 8   `Y8o. `Y8888 8   `Y8o. `Y8888 8 8888         8 8888`8b       ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 7);			cout << "       `8.`888`8.`88'        8 8888 8      `Y8o. `Y8 8      `Y8o. `Y8 8 8888         8 8888 `8b.     ";
	Sleep(100);
	_Custom::SetColor(DarkYellow);
	_Custom::GotoXY(x + 2, y + 8);			cout << "        `8.`8' `8,`'         8 8888 8         `Y8o.` 8         `Y8o.` 8 8888         8 8888   `8b.   ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 9);			cout << "         `8.`   `8'          8 8888 8            `Yo 8            `Yo 8 888888888888 8 8888     `88. ";
	Sleep(100);
	//OOOOOOOOOOOOOOOOOOOO
	_Custom::SetColor(DarkGreen);
	_Custom::GotoXY(x + 51, 25);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(187);
	_Custom::GotoXY(x + 50, 26);
	cout << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(219) << char(219) << char(187);
	_Custom::GotoXY(x + 50, 27);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(x + 50, 28);
	cout << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186);
	_Custom::GotoXY(x + 50, 29);
	cout << char(200);
	for (int i = 0; i < 6; i++)
		cout << char(219);
	cout << char(201) << char(188);
	_Custom::GotoXY(x + 51, 30);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
	_Custom::SetColor(White);
	_Custom::GotoXY(x + 23 + 24, 31);
	cout << " C  : Play again!";
	_Custom::GotoXY(x + 23 + 24, 32);
	cout << "ESC : Menu Game";
}
void _Display::YOULOSE() {
	system("cls");
	int x = 10, y = 10;
	_Custom::SetColor(DarkRed);
	_Custom::GotoXY(x + 2, y);			    cout << "`8.`8888.      ,8'  ,o888888o.     8 8888      88          8 8888         ,o888888o.       d888888o.   8 8888888888   ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 1);          cout << " `8.`8888.    ,8'. 8888     `88.   8 8888      88          8 8888      . 8888     `88.   .`8888:' `88. 8 8888         ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 2);          cout << "  `8.`8888.  ,8',8 8888       `8b  8 8888      88          8 8888     ,8 8888       `8b  8.`8888.   Y8 8 8888         ";
	_Custom::SetColor(DarkBlue);
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 3);          cout << "   `8.`8888.,8' 88 8888        `8b 8 8888      88          8 8888     88 8888        `8b `8.`8888.     8 8888         ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 4);			cout << "    `8.`88888'  88 8888         88 8 8888      88          8 8888     88 8888         88  `8.`8888.    8 888888888888 ";
	Sleep(100);
	_Custom::SetColor(DarkGreen);
	_Custom::GotoXY(x + 2, y + 5);			cout << "     `8. 8888   88 8888         88 8 8888      88          8 8888     88 8888         88   `8.`8888.   8 8888         ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 6);			cout << "      `8 8888   88 8888        ,8P 8 8888      88          8 8888     88 8888        ,8P    `8.`8888.  8 8888         ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 7);			cout << "       8 8888   `8 8888       ,8P  ` 8888     ,8P          8 8888     `8 8888       ,8P 8b   `8.`8888. 8 8888         ";
	Sleep(100);
	_Custom::SetColor(DarkYellow);
	_Custom::GotoXY(x + 2, y + 8);			cout << "       8 8888    ` 8888     ,88'     8888   ,d8P           8 8888      ` 8888     ,88'  `8b.  ;8.`8888 8 8888         ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 9);			cout << "       8 8888       `8888888P'        `Y88888P'            8 888888888888 `8888888P'     `Y8888P ,88P' 8 888888888888 ";
	Sleep(100);
	_Custom::SetColor(White);
	_Custom::GotoXY(x + 23 + 24, 31);
	cout << " C  : Play again!";
	_Custom::GotoXY(x + 23 + 24, 32);
	cout << "ESC : Menu Game";
}
void _Display::YOUWIN() {
	system("cls");
	int x = 13, y = 10;
	_Custom::SetColor(DarkRed);
	_Custom::GotoXY(x + 2, y);			    cout << "`8.`8888.      ,8'  ,o888888o.     8 8888      88          `8.`888b                 ,8' 8 8888 b.             8 ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 1);          cout << " `8.`8888.    ,8'. 8888     `88.   8 8888      88           `8.`888b               ,8'  8 8888 888o.          8 ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 2);          cout << "  `8.`8888.  ,8',8 8888       `8b  8 8888      88            `8.`888b             ,8'   8 8888 Y88888o.       8 ";
	_Custom::SetColor(DarkBlue);
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 3);          cout << "   `8.`8888.,8' 88 8888        `8b 8 8888      88             `8.`888b     .b    ,8'    8 8888 .`Y888888o.    8 ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 4);			cout << "    `8.`88888'  88 8888         88 8 8888      88              `8.`888b    88b  ,8'     8 8888 8o. `Y888888o. 8 ";
	Sleep(100);
	_Custom::SetColor(DarkGreen);
	_Custom::GotoXY(x + 2, y + 5);			cout << "     `8. 8888   88 8888         88 8 8888      88               `8.`888b .`888b,8'      8 8888 8`Y8o. `Y88888o8 ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 6);			cout << "      `8 8888   88 8888        ,8P 8 8888      88                `8.`888b8.`8888'       8 8888 8   `Y8o. `Y8888 ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 7);			cout << "       8 8888   `8 8888       ,8P  ` 8888     ,8P                 `8.`888`8.`88'        8 8888 8      `Y8o. `Y8 ";
	Sleep(100);
	_Custom::SetColor(DarkYellow);
	_Custom::GotoXY(x + 2, y + 8);			cout << "       8 8888    ` 8888     ,88'     8888   ,d8P                   `8.`8' `8,`'         8 8888 8         `Y8o.` ";
	Sleep(100);
	_Custom::GotoXY(x + 2, y + 9);			cout << "       8 8888       `8888888P'        `Y88888P'                     `8.`   `8'          8 8888 8            `Yo ";
	Sleep(100);
	_Custom::SetColor(White);
	_Custom::GotoXY(x + 23 + 24, 31);
	cout << " C  : Play again!";
	_Custom::GotoXY(x + 23 + 24, 32);
	cout << "ESC : Menu Game";
}
_Display::_Display() {};
_Display::~_Display() {};

