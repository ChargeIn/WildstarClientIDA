#include "../winhttp.h"

//----- (0000000140056BB0) ----------------------------------------------------
__int64 __fastcall sub_140056BB0(_QWORD* a1, unsigned int a2, _QWORD* a3)
{
	__int64 result; // rax
	_DWORD* v6; // rax
	const char* v7; // r10
	__int64 v8; // rcx
	const char* v9; // r9
	const char* v10; // rax

	result = sub_140058540((__int64)a1, a2, a3);
	if (!result)
	{
		v6 = sub_1400580E0((__int64)a1, a2);
		if (v6 == dword_140A12138 || (v8 = (int)v6[2], (_DWORD)v8 == -1))
			v9 = aNoValue;
		else
			v9 = off_140A123B0[v8];
		v10 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", v7, v9);
		sub_140056570(a1, a2, v10);
	}
	return result;
}
// 140056C18: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

