#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main() {
	int var1 = 99;
	HWND hwnd = FindWindowA(NULL, "pSX v1.13");
	if (hwnd == NULL) {

		cout << "No Game window found!" << endl;
		Sleep(1000);
		return EXIT_FAILURE; //i use exit_failure instead of exit(-1)

	}
	else {
		DWORD ProcID;
		GetWindowThreadProcessId(hwnd, &ProcID);
		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcID);
		if (ProcID == NULL) {

			cout << "I couldnt obtain the ID of the process!" << endl;
			Sleep(1000);
			return EXIT_FAILURE;
		}
		else {

			//WriteProcessMemory(handle, (LPVOID)0x0DD42FE8, &var1, sizeof(var1), 0);
			string rd;
			for (;;) {
				if(GetAsyncKeyState(VK_TAB)){
				WriteProcessMemory(handle, (LPVOID)0x0DD42FE8, &var1, sizeof(var1), 0);
				var1++;
		 rd = " NewVal ";
				cout << rd << var1 << endl;
				}
				Sleep(10);

			}
			//cout << "Hacked !" << endl;


		}
	}


	return 0;
}