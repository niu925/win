// win32.cpp : Defines the entry point for the application.
//

#include "stdafx.h"

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
 	// TODO: Place code here.
  MessageBox(NULL,"这是我开发的一个Windows软件！","温馨提示",
	  MB_YESNOCANCEL|MB_ICONEXCLAMATION);
	return 0;
}



