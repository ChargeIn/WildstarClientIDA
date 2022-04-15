#include "../winhttp.h"

//----- (00000001402D9940) ----------------------------------------------------
char* __fastcall sub_1402D9940(char* a1, char* a2, char* a3)
{
	signed __int64 v3; // rcx

	if (a1 != a2)
	{
		v3 = a1 - a3;
		do
		{
			if (a3)
			{
				*(_DWORD*)a3 = *(_DWORD*)&a3[v3];
				*((_DWORD*)a3 + 1) = *(_DWORD*)&a3[v3 + 4];
				*((_DWORD*)a3 + 2) = *(_DWORD*)&a3[v3 + 8];
				*((_DWORD*)a3 + 3) = *(_DWORD*)&a3[v3 + 12];
				*((_DWORD*)a3 + 4) = *(_DWORD*)&a3[v3 + 16];
				*((_DWORD*)a3 + 5) = *(_DWORD*)&a3[v3 + 20];
				*((_DWORD*)a3 + 6) = *(_DWORD*)&a3[v3 + 24];
			}
			a3 += 28;
		} while (&a3[v3] != a2);
	}
	return a3;
}

