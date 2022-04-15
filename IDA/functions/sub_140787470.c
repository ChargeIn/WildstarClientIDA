#include "../winhttp.h"

//----- (0000000140787470) ----------------------------------------------------
float __fastcall sub_140787470(__int64 a1, int a2)
{
	unsigned int v3; // ecx
	int v6; // r10d
	__int64 v7; // rdx
	__int64 v8; // r11
	__int64 v9; // r11
	__int64 v10; // rcx
	int v11; // ebx
	__int64 v12; // r10
	int v13; // edx

	v3 = *(_DWORD*)(a1 + 4);
	if (v3 == 1)
		return *(float*)(*(_QWORD*)(a1 + 24) + 4i64 * *(unsigned int*)(a1 + 8));
	v6 = *(_DWORD*)a1 - 1;
	v7 = v6 & (unsigned int)(*(_DWORD*)(a1 + 8) + 1);
	if (v3 > 2)
	{
		v8 = *(_QWORD*)(a1 + 16);
		do
		{
			if (a2 - *(_DWORD*)(v8 + 4 * v7) < 0)
				break;
			--* (_DWORD*)(a1 + 4);
			*(_DWORD*)(a1 + 8) = v7;
			v7 = v6 & (unsigned int)(v7 + 1);
		} while (*(_DWORD*)(a1 + 4) > 2u);
	}
	v9 = *(unsigned int*)(a1 + 8);
	v10 = *(_QWORD*)(a1 + 16);
	v11 = *(_DWORD*)(v10 + 4 * v9);
	if (a2 - v11 < 0)
		return *(float*)(*(_QWORD*)(a1 + 24) + 4 * v9);
	v12 = (unsigned int)v7;
	v13 = *(_DWORD*)(v10 + 4 * v7);
	if (a2 - v13 >= 0)
		return *(float*)(*(_QWORD*)(a1 + 24) + 4 * v12);
	else
		return (float)((float)((float)(a2 - v11) / (float)(v13 - v11))
			* (float)(*(float*)(*(_QWORD*)(a1 + 24) + 4 * v12) - *(float*)(*(_QWORD*)(a1 + 24) + 4 * v9)))
		+ *(float*)(*(_QWORD*)(a1 + 24) + 4 * v9);
}

