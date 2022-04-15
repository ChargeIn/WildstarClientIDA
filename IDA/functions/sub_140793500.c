#include "../winhttp.h"

//----- (0000000140793500) ----------------------------------------------------
__int64 __fastcall sub_140793500(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64* v4; // rdi
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax
	unsigned __int64 v8; // rax
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	v4 = (__int64*)dword_140A12138;
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
	for (; a1[2] < (unsigned __int64)(a1[3] + 32i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	v8 = a1[3];
	a1[2] = v8 + 32;
	if (v8 < v8 + 32)
		v4 = (__int64*)v8;
	if ((unsigned int)sub_14005BA70((__int64)a1, *v4, v8 + 16))
	{
		result = 2i64;
	}
	else
	{
		a1[2] -= 16i64;
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

