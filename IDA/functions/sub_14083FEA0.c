#include "../winhttp.h"

//----- (000000014083FEA0) ----------------------------------------------------
void __fastcall sub_14083FEA0(__int64 a1, __int64 a2, unsigned int a3)
{
	int v3; // eax
	__int64 v4; // r9
	unsigned int v5; // r10d
	unsigned int v7; // r8d

	v3 = *(_DWORD*)a2;
	v4 = 0i64;
	v5 = -1;
	v7 = 0;
	if (*(int*)a2 >= 0)
	{
		if (v3 <= 1)
		{
			v5 = *(_DWORD*)(a2 + 36);
			v7 = *(_DWORD*)(a2 + 32);
			goto LABEL_9;
		}
		if (v3 == 4)
			goto LABEL_9;
		if ((unsigned int)(v3 - 6) <= 1)
		{
			v7 = *(_DWORD*)(a2 + 32);
			goto LABEL_9;
		}
	}
	if (*(_DWORD*)(a2 + 32) == 1)
		v7 = *(_DWORD*)(a2 + 40);
LABEL_9:
	if (*(_DWORD*)(a2 + 24) == 1)
		v4 = *(_QWORD*)(a2 + 40);
	sub_14083CE60(
		a1 + 2304,
		*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, __int64))(a2 + 8),
		v7,
		v4,
		a3,
		v5,
		*(_QWORD*)(a2 + 16));
}

