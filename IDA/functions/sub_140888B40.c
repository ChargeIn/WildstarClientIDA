#include "../winhttp.h"

//----- (0000000140888B40) ----------------------------------------------------
void __fastcall sub_140888B40(__int64 a1, __int64 a2, int a3, char a4)
{
	int v8; // r10d
	char v9; // bp
	bool v10; // r14

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	if (a3 != 1 || (v8 = *(_DWORD*)(a2 + 20), (v8 & 7) == 2))
	{
		v9 = 0;
	}
	else
	{
		v9 = 1;
		if (*(_QWORD*)(a1 + 200) != a2)
		{
			if (a4)
				*(_DWORD*)(a2 + 20) = v8 & 0xFFFFFFF8 | 1;
			else
				*(_DWORD*)(a2 + 20) = v8 & 0xFFFFFFF8 | 3;
			goto LABEL_15;
		}
	}
	if (a2)
	{
		v10 = (*(_DWORD*)(a2 + 20) & 7) == 2;
		sub_140888700((_QWORD*)a1, a2, v9);
		if (!a4 && !v10)
		{
			*(_DWORD*)(a2 + 20) &= ~4u;
			*(_DWORD*)(a2 + 20) |= 3u;
		}
		sub_140883AE0(a1, a2, v9);
		if (!v10)
			sub_140888D40((__int64*)a1);
	}
	sub_140885FF0(a1, a3);
	sub_1408890E0(*(_QWORD*)(a1 + 96));
LABEL_15:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
}

