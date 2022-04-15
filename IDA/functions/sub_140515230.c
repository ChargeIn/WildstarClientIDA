#include "../winhttp.h"

//----- (0000000140515230) ----------------------------------------------------
__int64 __fastcall sub_140515230(__int64 a1, _QWORD* a2)
{
	_DWORD* v4; // rax
	int v5; // eax
	int v6; // edx
	unsigned int v7; // ecx
	BOOL v8; // eax
	_DWORD* v9; // rcx
	bool v10; // zf
	__int64 result; // rax
	__int64 v12; // [rsp+40h] [rbp+18h]

	v4 = (_DWORD*)(a2[3] + 32i64);
	if ((unsigned __int64)v4 >= a2[2])
		return 0i64;
	if (v4 == dword_140A12138)
		return 0i64;
	if (*(int*)(a2[3] + 40i64) <= 0)
		return 0i64;
	v5 = sub_140056D60(a2, 3u);
	if (v5 < 0)
		return 0i64;
	v6 = 0;
	LODWORD(v12) = BYTE1(v5);
	HIDWORD(v12) = (unsigned __int8)v5;
	*(_QWORD*)(a1 + 16) = v12;
	v7 = *(_DWORD*)(a1 + 20);
	if (v7 == -1)
	{
		v8 = 0;
	}
	else if (BYTE1(v5))
	{
		v8 = 1;
	}
	else
	{
		v8 = v7 < 0x1F;
	}
	v9 = (_DWORD*)a2[2];
	v10 = !v8;
	result = 1i64;
	LOBYTE(v6) = !v10;
	v9[2] = 1;
	*v9 = v6;
	a2[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

