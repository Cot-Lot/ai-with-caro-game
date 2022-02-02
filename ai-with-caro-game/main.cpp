#include <iostream>
#include <string>
#include "_Custom.h"
#include "_Display.h"
#include "_GamePlay.h"
#include "_Grid.h"
using namespace std;

int main() {

	SetConsoleTitle(L"My_game");
	_Custom::setConsoleWindow(136, 42);
	_Custom::SetScreenBufferSize(136, 42);
	_Custom::DisableResizeWindow();
	_Custom::DisableSelection();
	MenuGame(75);
	system("pause");
}