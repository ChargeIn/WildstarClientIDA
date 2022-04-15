#include "../winhttp.h"

//----- (00000001407EE8B8) ----------------------------------------------------
void __fastcall sub_1407EE8B8(unsigned __int8 a1, int a2, __int64 a3, _DWORD* a4)
{
	int v6; // ebx

	if (a2 > 0)
	{
		v6 = a2;
		do
		{
			--v6;
			sub_1407EE870(a1, a3, a4);
		} while (*a4 != -1 && v6 > 0);
	}
}

