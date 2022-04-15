#include "../winhttp.h"

//----- (000000014068BD60) ----------------------------------------------------
__int64 __fastcall sub_14068BD60(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rdi
	int v7; // eax
	int v8; // edx
	__int64 v9; // rcx

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_140498A40(qword_140C65980, v4, 0),
			(v6 = v5) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
	{
		v7 = sub_140056D60(a1, 2u);
		if (v7 >= 206)
			v8 = 0;
		else
			v8 = *(_DWORD*)sub_1405F8A80(v6 + 236, v7);
		v9 = a1[2];
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v8;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

