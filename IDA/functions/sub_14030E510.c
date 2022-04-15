#include "../winhttp.h"

//----- (000000014030E510) ----------------------------------------------------
__int64 __fastcall sub_14030E510(__int64 a1, unsigned __int16* a2)
{
	int v2; // r8d
	int v3; // esi
	BOOL v5; // r14d
	BOOL v6; // r15d
	BOOL v7; // r12d
	BOOL v8; // r13d
	BOOL v9; // r10d
	BOOL v10; // r11d
	BOOL v11; // ebx
	BOOL v12; // r9d
	__int64 v13; // rcx
	__int64 v14; // rdx
	unsigned int v15; // edi
	int v16; // eax
	int v18; // [rsp+30h] [rbp+8h]

	v2 = 2;
	v3 = a2[10] - 1;
	v5 = a2[20] == 2;
	v6 = a2[21] == 2;
	v7 = a2[22] == 2;
	v8 = a2[23] == 2;
	v9 = a2[24] != 0xFFFF;
	v10 = a2[25] != 0xFFFF;
	v11 = a2[26] != 0xFFFF;
	v12 = a2[27] != 0xFFFF;
	v13 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 504i64);
	v14 = 6i64 * a2[11];
	v15 = *(_DWORD*)(v13 + 8 * v14 + 32);
	if (v15 && *(_DWORD*)(*(_QWORD*)(v13 + 8 * v14 + 40) + 288i64) != 3)
		v9 = 1;
	if (v15 > 1 && *(_DWORD*)(*(_QWORD*)(v13 + 8 * v14 + 40) + 584i64) != 3)
		v10 = 1;
	if (v15 > 2 && *(_DWORD*)(*(_QWORD*)(v13 + 8 * v14 + 40) + 880i64) != 3)
		v11 = 1;
	if (v15 > 3 && *(_DWORD*)(*(_QWORD*)(v13 + 8 * v14 + 40) + 1176i64) != 3)
		v12 = 1;
	v16 = *(_DWORD*)(a1 + 168);
	if (v16 != 9)
	{
		if (v16 == 8)
		{
			v2 = 1;
		}
		else
		{
			v2 = v18;
			if (v16 == 7)
				v2 = 0;
		}
	}
	if (*(_DWORD*)(v13 + 8 * v14 + 8) == 1)
		return (unsigned int)(v3 + 4 * v2);
	else
		return (unsigned int)(v12
			+ 2
			* (v11 + 2 * (v10 + 2 * (v9 + 2 * (v8 + 2 * (v7 + 2 * (v6 + 2 * (v5 + 2 * (v3 + 16 * v2)))))))));
}

