#include "../winhttp.h"

//----- (0000000140793440) ----------------------------------------------------
__int64 __fastcall sub_140793440(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rcx
	unsigned __int64 v4; // r8
	__int64 v5; // rdx
	char* v6; // rdx
	unsigned __int64 v8; // r8

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] == -1)
		sub_140056570(a1, 1u, aValueExpected);
	v3 = (_DWORD*)a1[3];
	v4 = a1[2];
	if ((unsigned __int64)v3 >= v4 || v3 == dword_140A12138 || (v5 = (int)v3[2], (_DWORD)v5 == -1))
	{
		v6 = aNoValue;
	}
	else
	{
		v6 = off_140A123B0[v5];
		if (!v6)
		{
			*(_DWORD*)(v4 + 8) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	v8 = -1i64;
	do
		++v8;
	while (v6[v8]);
	sub_140058710((__int64)a1, (unsigned __int64*)v6, v8);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

