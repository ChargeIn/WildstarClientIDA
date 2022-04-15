#include "../winhttp.h"

//----- (00000001407938E0) ----------------------------------------------------
__int64 __fastcall sub_1407938E0(_QWORD* a1)
{
	_DWORD* v1; // rax
	bool v3; // cf
	_DWORD* v4; // rcx
	__int64 v5; // rsi
	__int64 v6; // rdi
	_DWORD* v7; // rax
	__int64 v8; // rcx
	const char* v9; // r9
	const char* v10; // rax
	_DWORD* v11; // rax
	char* v12; // rax
	__int64 result; // rax
	unsigned __int64 v14; // rcx
	unsigned __int64 i; // r9
	__int64 v16; // rdx

	v1 = (_DWORD*)a1[3];
	v3 = (unsigned __int64)v1 < a1[2];
	v4 = dword_140A12138;
	if (v3)
		v4 = v1;
	if (v4[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v4))
		{
		LABEL_10:
			v7 = (_DWORD*)a1[3];
			if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || (v8 = (int)v7[2], (_DWORD)v8 == -1))
				v9 = aNoValue;
			else
				v9 = off_140A123B0[v8];
			v10 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aString_0, v9);
			sub_140056570(a1, 1u, v10);
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = dword_140A12138;
		if (a1[3] < a1[2])
			v4 = (_DWORD*)a1[3];
	}
	v5 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	v6 = *(_QWORD*)v4 + 32i64;
	if (*(_QWORD*)v4 == -32i64)
		goto LABEL_10;
	v11 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v11 >= a1[2] || v11 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v12 = (char*)(*(_QWORD*)v4 + 32i64);
	else
		v12 = (char*)sub_140056BB0(a1, 2u, 0i64);
	if (!(unsigned int)sub_140057F80(a1, v6, v5, v12))
		return 1i64;
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	v14 = a1[2];
	for (i = v14 - 32; v14 > i; v14 -= 16i64)
	{
		*(_QWORD*)v14 = *(_QWORD*)(v14 - 16);
		*(_DWORD*)(v14 + 8) = *(_DWORD*)(v14 - 8);
	}
	v16 = a1[2];
	result = 2i64;
	*(_QWORD*)i = *(_QWORD*)v16;
	*(_DWORD*)(i + 8) = *(_DWORD*)(v16 + 8);
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

