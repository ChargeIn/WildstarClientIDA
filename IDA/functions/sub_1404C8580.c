#include "../winhttp.h"

//----- (00000001404C8580) ----------------------------------------------------
__int64 __fastcall sub_1404C8580(__int64* a1, __int64 a2)
{
	__int64 v2; // r10
	__int64 v5; // rsi
	__int64 v6; // r8
	__int64* v7; // r9
	__int64* v8; // rdx
	__int64 v9; // rdi
	__int64 v10; // rax
	_QWORD* v11; // rdx
	_QWORD* v12; // rcx
	_QWORD* v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rcx
	_QWORD* v17; // rdx

	v2 = *a1;
	if (!*a1 || !a2)
		return 1i64;
	v5 = 0i64;
	v6 = *(_QWORD*)(qword_140C659F0 + 824);
	v7 = *(__int64**)(v6 + 16);
	v8 = *(__int64**)(v6 + 24);
	if (v7 == v8)
	{
	LABEL_6:
		v9 = 0i64;
	}
	else
	{
		while (*(_DWORD*)(*v7 + 188) != *(_DWORD*)(v2 + 20))
		{
			if (++v7 == v8)
				goto LABEL_6;
		}
		v9 = *v7;
		if (*v7 && *(_QWORD*)(v9 + 280) == *(_QWORD*)(a2 + 8))
		{
			v14 = *(_QWORD**)a2;
			*v14 = *(_QWORD*)(v2 + 24);
			v14[1] = *(_QWORD*)(v2 + 32);
			*(_QWORD*)(a2 + 16) = *(_QWORD*)(a2 + 8);
			return 0i64;
		}
	}
	v10 = sub_1404C8160(*a1, *(_QWORD*)(a2 + 8));
	if (v10)
	{
		v11 = *(_QWORD**)(v10 + 80);
		if (v11)
		{
			v12 = *(_QWORD**)a2;
			*v12 = *v11;
			v12[1] = v11[1];
			if (v9)
				v5 = *(_QWORD*)(v9 + 280);
			*(_QWORD*)(a2 + 16) = v5;
			return 1i64;
		}
	}
	v15 = qword_140C7DFE0;
	if (!qword_140C7DFE0)
		return 1i64;
	v16 = *a1;
	v17 = *(_QWORD**)a2;
	*v17 = *(_QWORD*)(*a1 + 24);
	v17[1] = *(_QWORD*)(v16 + 32);
	*(_QWORD*)(a2 + 16) = *(_QWORD*)(v15 + 280);
	return 0i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

