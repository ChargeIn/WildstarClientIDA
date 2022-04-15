#include "../winhttp.h"

//----- (0000000140793180) ----------------------------------------------------
__int64 __fastcall sub_140793180(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rcx
	const char* v5; // r9
	const char* v6; // rax
	_DWORD* v7; // rax
	_DWORD* v8; // rax

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v4 = (int)v1[2];
			if ((_DWORD)v4 != -1)
			{
				v5 = off_140A123B0[v4];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v5 = aNoValue;
	LABEL_9:
		v6 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v5);
		sub_140056570(a1, 1u, v6);
	}
	v7 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) == -1)
		sub_140056570(a1, 2u, aValueExpected);
	v8 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || *(_DWORD*)(a1[3] + 40i64) == -1)
		sub_140056570(a1, 3u, aValueExpected);
	for (; a1[2] < (unsigned __int64)(a1[3] + 48i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] = a1[3] + 48i64;
	sub_140058AB0((__int64)a1, 1);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

