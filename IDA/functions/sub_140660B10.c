#include "../winhttp.h"

//----- (0000000140660B10) ----------------------------------------------------
__int64 __fastcall sub_140660B10(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // r8
	unsigned int* v5; // rcx
	_DWORD* v6; // rcx
	__int64 result; // rax
	__int64 v8; // rax
	int* v9; // rdx
	int v10; // ecx
	_DWORD* v11; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		goto LABEL_8;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	if (!v3)
		goto LABEL_8;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4)
		goto LABEL_8;
	v5 = *(unsigned int**)(v3 + 24);
	if (!v5)
	{
		v6 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v6 = 0;
		v6[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return result;
	}
	v8 = sub_1403D3950((__int64)v5, *v5, v4);
	if (v8)
	{
		v9 = *(int**)(a1 + 16);
		v10 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + 36i64);
		v9[2] = 1;
		result = 1i64;
		*v9 = v10 & 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
	LABEL_8:
		v11 = *(_DWORD**)(a1 + 16);
		v11[2] = 1;
		*v11 = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

