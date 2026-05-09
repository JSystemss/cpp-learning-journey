#include <iostream>
#include <Windows.h>

int main()
{
	HWND hwnd = FindWindowA(NULL, "AssaultCube"); // This stores Assault Cube's Window Handle to my hwnd Variable

	if (!hwnd)
	{
		std::cout << "Window not Found!" << std::endl;
		return 1;
	}

	DWORD pid;
	GetWindowThreadProcessId(hwnd, &pid); // we stored Process ID into my variable pid through my window Handle hwnd

	if (!pid)
	{
		std::cout << "Could not Find Process ID" << std::endl;
	}

	HANDLE hprocess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

	int heath = 0;
	ReadProcessMemory(hprocess, (LPCVOID)0x0062B7B4, &heath, sizeof(int), NULL); // I want to read my from hprocess = my opened pid with full access then i want to read from my specific heath address so i casted my hex value of my heath as a adress using windows api (LPCVOID) then i set the destination to put that in.. &heath and then we set the size of the bytes of that desitnation so it knows how much to read. and then we dont wanna know how much it read so NULL
	std::cout << "Player heath: " << heath << std::endl;

	CloseHandle(hprocess);
	std::cin.get();
	return 0;

}