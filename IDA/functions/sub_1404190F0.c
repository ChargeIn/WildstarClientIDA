#include "../winhttp.h"

//----- (00000001404190F0) ----------------------------------------------------
__int64 __fastcall sub_1404190F0(_QWORD* a1)
{
	_DWORD* v1; // rax
	signed int v3; // eax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int16* v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0 || (v3 = sub_140056D60(a1, 1u), v3 < 0))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	else
	{
		v4 = sub_1402479C0(v3);
		if (!v4)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		v7 = sub_14034BDD0(v5, *(_DWORD*)(v4 + 28));
		v8 = (unsigned __int64*)sub_14018F0E0(&v10, (unsigned __int16*)v7)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v11)
		{
			sub_14018B900(v11, 0);
			return 1i64;
		}
	}
	return 1i64;
}
// 14041915C: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

