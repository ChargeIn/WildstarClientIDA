#include "../winhttp.h"

//----- (0000000140793060) ----------------------------------------------------
__int64 __fastcall sub_140793060(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64* v4; // rdi
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax
	_DWORD* v8; // rax
	unsigned __int64 v9; // rdx
	unsigned __int64 v10; // rbx
	_QWORD* v11; // rax
	int v12; // ecx
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
	v8 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) == -1)
		sub_140056570(a1, 2u, aValueExpected);
	for (; a1[2] < (unsigned __int64)(a1[3] + 32i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	v9 = a1[3];
	a1[2] = v9 + 32;
	if (v9 < v9 + 32)
		v4 = (__int64*)v9;
	v10 = v9 + 16;
	v11 = sub_14005C450(*v4, (int*)(v9 + 16));
	*(_QWORD*)v10 = *v11;
	v12 = *((_DWORD*)v11 + 2);
	result = 1i64;
	*(_DWORD*)(v10 + 8) = v12;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

