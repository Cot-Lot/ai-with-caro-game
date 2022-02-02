#pragma once
#include "_Custom.h"

#define Black			0
#define DarkBlue		1
#define DarkGreen		2
#define DarkCyan		3
#define DarkRed			4
#define Purple		    5
#define DarkYellow		6
#define DarkWhite		7
#define Grey			8
#define Blue			9
#define Green			10
#define Cyan			11
#define Red				12
#define Pink			13
#define Yellow			14
#define White			15
#define defaultColor	7 
#define SIZE			16
class _Display
{
public:
	static void DisplayIntro();
	static void CaroFlicker();
	static void CaroDraw1();
	static void Table_Score_Draw();
	static void BO_Draw(int mode);
	static void Help();
	static void About();
	static void XWIN();
	static void OWIN();
	static void YOUWIN();
	static void YOULOSE();
	_Display();
	~_Display();

private:

};