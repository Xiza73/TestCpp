//#pragma once
#include "conio.h"
#include "time.h"
#include "windows.h"
#include "iostream"

using namespace std;

class Console {
	public:
		static void SetCursorPosition(int x, int y){
			HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
			COORD dwPos;
			dwPos.X = x;
			dwPos.Y = y;
			SetConsoleCursorPosition(hcon, dwPos);
		}
		static void HideCursor(){
			HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_CURSOR_INFO cci;
			cci.dwSize = 2;
			cci.bVisible = FALSE;
			SetConsoleCursorInfo(hcon, &cci);
		}
};
