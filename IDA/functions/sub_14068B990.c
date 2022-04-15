#include "../winhttp.h"

//----- (000000014068B990) ----------------------------------------------------
__int64 __fastcall sub_14068B990(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rdi
	_DWORD* v7; // rax
	int v8; // eax
	int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_140498A40(qword_140C65980, v4, 0),
			(v6 = v5) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
	{
		v7 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v8 = 1;
		else
			v8 = sub_140056D60(a1, 2u);
		v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 160i64))(v6, (unsigned int)(v8 - 1));
		v10 = a1[2];
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = (double)v9;
	}
	else
	{
		v11 = a1[2];
		*(_QWORD*)v11 = 0i64;
		*(_DWORD*)(v11 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

