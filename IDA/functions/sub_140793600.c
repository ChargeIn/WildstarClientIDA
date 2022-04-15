#include "../winhttp.h"

//----- (0000000140793600) ----------------------------------------------------
__int64 __fastcall sub_140793600(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	_DWORD* v4; // rdi
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax
	__int64 v8; // rcx
	_DWORD* v9; // rdx
	__int64 v10; // rcx
	unsigned __int64 v11; // rcx

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	v4 = dword_140A12138;
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v5 = (int)v1[2];
			if ((_DWORD)v5 != -1)
			{
				v6 = off_140A123B0[v5];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v6 = aNoValue;
	LABEL_9:
		v7 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v6);
		sub_140056570(a1, 1u, v7);
	}
	v8 = *(_QWORD*)(a1[5] + 8i64);
	v9 = (_DWORD*)(*(_QWORD*)v8 + 40i64);
	if (!*(_BYTE*)(*(_QWORD*)v8 + 11i64))
		v9 = dword_140A12138;
	v10 = a1[2];
	*(_QWORD*)v10 = *(_QWORD*)v9;
	*(_DWORD*)(v10 + 8) = v9[2];
	a1[2] += 16i64;
	v11 = a1[2];
	if (a1[3] < v11)
		v4 = (_DWORD*)a1[3];
	*(_QWORD*)v11 = *(_QWORD*)v4;
	*(_DWORD*)(v11 + 8) = v4[2];
	a1[2] += 16i64;
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 3i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

