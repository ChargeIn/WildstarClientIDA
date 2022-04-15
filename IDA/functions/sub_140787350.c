#include "../winhttp.h"

//----- (0000000140787350) ----------------------------------------------------
__int64 __fastcall sub_140787350(__int64 a1, __int64 a2, int a3)
{
	unsigned int v4; // ecx
	__int64 v6; // rcx
	__int64 v7; // r8
	int v9; // r10d
	__int64 v10; // rdx
	__int64 v11; // rbx
	__int64 v12; // rbx
	__int64 v13; // rcx
	int v14; // edi
	__int64 v15; // rdx
	__int64 v16; // r10
	int v17; // edx
	__int64 v18; // r11
	__int64 v19; // rcx

	v4 = *(_DWORD*)(a1 + 4);
	if (v4 == 1)
	{
		v6 = *(_QWORD*)(a1 + 24);
		v7 = 3i64 * *(unsigned int*)(a1 + 8);
		*(_DWORD*)a2 = *(_DWORD*)(v6 + 12i64 * *(unsigned int*)(a1 + 8));
		*(_DWORD*)(a2 + 4) = *(_DWORD*)(v6 + 4 * v7 + 4);
		*(_DWORD*)(a2 + 8) = *(_DWORD*)(v6 + 4 * v7 + 8);
		return a2;
	}
	v9 = *(_DWORD*)a1 - 1;
	v10 = v9 & (unsigned int)(*(_DWORD*)(a1 + 8) + 1);
	if (v4 > 2)
	{
		v11 = *(_QWORD*)(a1 + 16);
		do
		{
			if (a3 - *(_DWORD*)(v11 + 4 * v10) < 0)
				break;
			--* (_DWORD*)(a1 + 4);
			*(_DWORD*)(a1 + 8) = v10;
			v10 = v9 & (unsigned int)(v10 + 1);
		} while (*(_DWORD*)(a1 + 4) > 2u);
	}
	v12 = *(unsigned int*)(a1 + 8);
	v13 = *(_QWORD*)(a1 + 16);
	v14 = *(_DWORD*)(v13 + 4 * v12);
	if (a3 - v14 >= 0)
	{
		v16 = (unsigned int)v10;
		v17 = *(_DWORD*)(v13 + 4 * v10);
		if (a3 - v17 < 0)
		{
			sub_1401B3250(
				(float*)a2,
				(float*)(*(_QWORD*)(a1 + 24) + 12 * v12),
				(float*)(*(_QWORD*)(a1 + 24) + 12 * v16),
				(float)(a3 - v14) / (float)(v17 - v14));
			return v18;
		}
		v15 = 3 * v16;
	}
	else
	{
		v15 = 3 * v12;
	}
	v19 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)a2 = *(_DWORD*)(v19 + 4 * v15);
	*(_DWORD*)(a2 + 4) = *(_DWORD*)(v19 + 4 * v15 + 4);
	*(_DWORD*)(a2 + 8) = *(_DWORD*)(v19 + 4 * v15 + 8);
	return a2;
}
// 14078742B: variable 'v18' is possibly undefined

