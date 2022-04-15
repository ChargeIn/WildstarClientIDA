#include "../winhttp.h"

//----- (000000014084CD00) ----------------------------------------------------
__int64 __fastcall sub_14084CD00(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	_QWORD* v7; // rdx

	if (!a1[18])
	{
		v4 = sub_1408819F0(dword_140C10F20, 24i64);
		a1[18] = v4;
		if (v4)
		{
			*(_QWORD*)v4 = 0i64;
			*(_QWORD*)(v4 + 8) = 0i64;
			*(_DWORD*)(v4 + 16) = 0;
		}
	}
	v5 = a1[18];
	if (v5 && sub_14084CA80(v5, a2))
	{
		(*(void(__fastcall**)(_QWORD*))(*a1 + 408i64))(a1);
		return 1i64;
	}
	else
	{
		v7 = (_QWORD*)a1[18];
		if (v7)
		{
			if (v7[1] == *v7)
			{
				sub_140881720(dword_140C10F20, (__int64)v7);
				a1[18] = 0i64;
			}
		}
		return 52i64;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

