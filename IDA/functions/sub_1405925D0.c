#include "../winhttp.h"

//----- (00000001405925D0) ----------------------------------------------------
__int64 __fastcall sub_1405925D0(_QWORD* a1, unsigned int a2)
{
	__int64** v4; // rax
	__int64 v5; // rcx
	__int64* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // r10
	unsigned __int64 v11; // rdx
	unsigned int** i; // rax
	_DWORD* v13; // rax
	unsigned int v14; // r10d

	v4 = (__int64**)sub_140417660((__int64)a1, a2);
	if (v4 && ((v6 = *v4) == 0i64 ? (v7 = 0i64) : (v7 = *v6), v7))
	{
		v8 = sub_1405BE2C0(v5, **(_DWORD**)(v7 + 64));
		if (v8 && (v11 = *(_QWORD*)(v8 + 8)) != 0)
		{
			for (i = *(unsigned int***)v8; !*i; ++i)
			{
				if (++v9 >= v11)
					return 0i64;
			}
			return **i;
		}
		else
		{
			return 0i64;
		}
	}
	else
	{
		v13 = sub_1400580E0((__int64)a1, a2);
		if (v13 != dword_140A12138 && v13[2] > (signed int)v14)
			return (unsigned int)sub_140056D60(a1, a2);
		return v14;
	}
}
// 140592607: variable 'v5' is possibly undefined
// 140592638: variable 'v9' is possibly undefined
// 140592678: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

