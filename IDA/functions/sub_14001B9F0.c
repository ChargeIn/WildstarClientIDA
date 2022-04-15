#include "../winhttp.h"

//----- (000000014001B9F0) ----------------------------------------------------
__int64 __fastcall sub_14001B9F0(__int64 a1, int a2)
{
	__int64 v3; // r9
	int* v4; // r11
	unsigned int v5; // r10d
	_DWORD* v6; // rdi
	__int64 i; // rcx
	__int64 result; // rax
	__int64 v9; // rdx
	_DWORD* v10; // rax

	if (a2)
		v3 = *(unsigned int*)(a1 + 4i64 * a2 + 28);
	else
		v3 = *(unsigned int*)(a1 + 60);
	v4 = (int*)qword_140C63750;
	v5 = *(_DWORD*)(a1 + 4i64 * *(int*)qword_140C63750 + 32);
	if ((unsigned __int64)a2 < 5)
	{
		v6 = (_DWORD*)(a1 + 32 + 4i64 * a2);
		for (i = 5i64 - a2; i; --i)
			*v6++ = v3;
	}
	*(_DWORD*)(a1 + 24) &= (1 << a2) - 1;
	result = *v4;
	v9 = *(unsigned int*)(a1 + 4 * result + 32);
	if (v5 != (_DWORD)v9)
	{
		v10 = *(_DWORD**)(a1 + 64);
		if (v10)
			*v10 = v9;
		result = *(_QWORD*)(a1 + 80);
		if (result)
			return ((__int64(__fastcall*)(_QWORD, __int64, __int64, __int64))result)(v5, v9, a1, v3);
	}
	return result;
}
// 140C63750: using guessed type __int64 qword_140C63750;

