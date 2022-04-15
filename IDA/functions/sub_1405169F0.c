#include "../winhttp.h"

//----- (00000001405169F0) ----------------------------------------------------
__int64 __fastcall sub_1405169F0(__int64 a1, _QWORD* a2)
{
	_DWORD* v4; // rax
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	_DWORD* v9; // rcx
	__int64 result; // rax
	_DWORD* v11; // rax
	__int64 v12; // [rsp+40h] [rbp+18h]

	v4 = (_DWORD*)(a2[3] + 32i64);
	if ((unsigned __int64)v4 >= a2[2] || v4 == dword_140A12138 || *(int*)(a2[3] + 40i64) <= 0)
		v5 = 0;
	else
		v5 = sub_140056D60(a2, 3u);
	v6 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v5)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v12 = v7, v5 < *(_DWORD*)(v7 + 32)))
		v12 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v12 == v6 || v12 == -40)
	{
		v11 = (_DWORD*)a2[2];
		*v11 = 0;
		v11[2] = 1;
		a2[2] += 16i64;
		return 1i64;
	}
	else
	{
		v9 = (_DWORD*)a2[2];
		result = 1i64;
		*v9 = 1;
		v9[2] = 1;
		a2[2] += 16i64;
		*(_DWORD*)(a1 + 16) = v5;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

