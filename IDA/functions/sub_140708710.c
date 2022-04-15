#include "../winhttp.h"

//----- (0000000140708710) ----------------------------------------------------
__int64 __fastcall sub_140708710(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v3; // edi
	__int64 v4; // rsi
	int v5; // eax
	BOOL v6; // edx
	_DWORD* v7; // rcx
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = 4;
	else
		v3 = sub_140056D60(a1, 1u);
	v4 = *(_QWORD*)(qword_140C635F0 + 5584);
	if (v3 < 4)
	{
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		v5 = 0;
		v6 = *(unsigned __int64*)&SystemTimeAsFileTime < *(_QWORD*)(v4 + 8i64 * v3 + 488);
	}
	else
	{
		v5 = 0;
		v6 = 0;
	}
	v7 = (_DWORD*)a1[2];
	LOBYTE(v5) = v6;
	v7[2] = 1;
	*v7 = v5;
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;

