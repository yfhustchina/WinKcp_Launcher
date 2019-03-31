#ifndef LAUNCHER_H_INCLUDED
#define LAUNCHER_H_INCLUDED

#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include <string.h>
#include "resource.h"

void mouse_click_signal(HWND &hwndDlg, LPARAM lParam);
void read_app_cmd(char* app_cmd, const char* value);

#endif // LAUNCHER_H_INCLUDED
