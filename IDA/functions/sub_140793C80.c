#include "../winhttp.h"

//----- (0000000140793C80) ----------------------------------------------------
__int64 __fastcall sub_140793C80(_QWORD* a1)
{
	_DWORD* v2; // rax
	char* v3; // rdi
	_DWORD* v4; // rax
	unsigned __int64 v5; // rcx
	__int64 v6; // rcx
	const char* v7; // r9
	const char* v8; // rax
	__int64 result; // rax
	unsigned __int64 v10; // r8
	unsigned __int64 i; // r9
	__int64 v12; // rdx

	v2 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v2 >= a1[2] || v2 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v3 = aLoad_0;
	else
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v4 = (_DWORD*)a1[3];
	v5 = a1[2];
	if ((unsigned __int64)v4 >= v5)
		goto LABEL_13;
	if (v4 == dword_140A12138 || v4[2] != 6)
	{
		if ((unsigned __int64)v4 < v5 && v4 != dword_140A12138)
		{
			v6 = (int)v4[2];
			if ((_DWORD)v6 != -1)
			{
				v7 = off_140A123B0[v6];
				goto LABEL_14;
			}
		}
	LABEL_13:
		v7 = aNoValue;
	LABEL_14:
		v8 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aFunction_3, v7);
		sub_140056570(a1, 1u, v8);
	}
	for (; a1[2] < (unsigned __int64)(a1[3] + 48i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] = a1[3] + 48i64;
	if (!(unsigned int)sub_140058E50(a1, (__int64)sub_140793B20, 0i64, v3))
		return 1i64;
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	v10 = a1[2];
	for (i = v10 - 32; v10 > i; v10 -= 16i64)
	{
		*(_QWORD*)v10 = *(_QWORD*)(v10 - 16);
		*(_DWORD*)(v10 + 8) = *(_DWORD*)(v10 - 8);
	}
	v12 = a1[2];
	result = 2i64;
	*(_QWORD*)i = *(_QWORD*)v12;
	*(_DWORD*)(i + 8) = *(_DWORD*)(v12 + 8);
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

