#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <windowsx.h>
#include <shlobj.h>
#include <sys/stat.h>
#include <malloc.h>
#include "resource.h"

#define SPLIT_OUT 0x52C
#define USER_PROFILE "USERPROFILE"
#define EXECUTE_SUC 0

using namespace std;

int ReadBackData(string fileName, string& fileData, string& runPath, string& option);
void GetFilePathDirectory(const char path[MAX_PATH], char in[MAX_PATH]);
LRESULT HelpDlgProc(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK EnumWindowsProc(_In_ HWND hwnd, LPARAM lparam);
int file_size(char* filename);
int OpenFileS(string& path,const char * sele);
int getEnv(string vname, string& storeIn);
wstring str2wstr(string s);
void help();

struct Options {
	bool mute;
	bool noVideo;
	bool noSaying;
	int volume;
};
