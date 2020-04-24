#include <windows.h>

typedef void (__cdecl *pAdd)(int, int);

int main()
{
	HINSTANCE hLib = LoadLibrary(L"MathDLL.dll");
	if (!hLib)
		return -1;

	pAdd p = (pAdd)GetProcAddress(hLib, "Add");
	if (!p)
		return -1;

	p(2, 3);
	
	while (true)
	{
	}

	FreeLibrary(hLib);
	return 0;
}