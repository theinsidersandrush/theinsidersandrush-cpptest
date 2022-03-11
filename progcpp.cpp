#ifndef UNICODE
#define UNICODE
#endif

#include <windows.h>

LRESULE CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
int WINAPI wWinMain()
