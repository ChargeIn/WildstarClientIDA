#include "../winhttp.h"

//----- (0000000140170850) ----------------------------------------------------
__int64 __fastcall sub_140170850(__int64 a1, int* a2)
{
	__int64 v2; // rax
	int v5; // r8d
	unsigned __int64 v6; // r11
	int v7; // r8d
	unsigned __int64 v8; // r9
	__int64 v9; // rdx
	int v10; // ecx

	v2 = *(_QWORD*)(a1 + 464);
	if (v2)
		v5 = *(_DWORD*)(v2 + 1300);
	else
		v5 = 0;
	v6 = *(_QWORD*)(a1 + 1400);
	v7 = -v5;
	v8 = 0i64;
	*(_DWORD*)(a1 + 1380) = -1;
	if (v6)
	{
		v9 = *(_QWORD*)(a1 + 1392);
		do
		{
			if (**(_BYTE**)v9)
				v10 = *(_DWORD*)(*(_QWORD*)v9 + 4i64);
			else
				v10 = 0;
			v7 += v10;
			if (*a2 >= v7 && *a2 < v7 + 10)
			{
				*(_DWORD*)(a1 + 1380) = v8;
				*(_DWORD*)(a1 + 1384) = *(_DWORD*)(*(_QWORD*)v9 + 4i64);
			}
			++v8;
			v9 += 8i64;
		} while (v8 < v6);
	}
	return 0i64;
}

