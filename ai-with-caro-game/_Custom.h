#pragma once
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <iostream>

class _Custom
{
public:
	_Custom();
	~_Custom();

public:
	static void setConsoleWindow(int width, int height);
	static void SetScreenBufferSize(SHORT width, SHORT height);
	static void DisableResizeWindow();  // Cố định kích thước màn hình console
	static void SetColor(int color);   // Thay đổi màu chữ
	static void GotoXY(SHORT posX, SHORT posY); // Di chuyển đến tọa độ (x,y) trên console
	static void ShowCur(bool TF); // Ẩn/Hiện con trỏ
	static void DisableSelection(); // Vô hiệu hóa bôi đen màn hình
};

