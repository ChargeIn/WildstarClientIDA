#include "../winhttp.h"

//----- (0000000140649C40) ----------------------------------------------------
__int64 __fastcall sub_140649C40(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rcx
	__int64 result; // rax
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rcx
	__int64 v8; // r8
	__int64 v9; // rax
	_DWORD* v10; // rax
	_DWORD* v11; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		goto LABEL_15;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	if (!v3)
		goto LABEL_15;
	if (*(_QWORD*)(v3 + 24) && (*(_BYTE*)(v3 + 40) & 0x20) != 0)
	{
		v4 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return result;
	}
	if (*(_DWORD*)(v3 + 128) != 7)
		goto LABEL_14;
	v6 = *(_QWORD*)(v3 + 408);
	v7 = 0i64;
	if (!v6)
		goto LABEL_14;
	v8 = *(_QWORD*)(v3 + 400);
	v9 = v8;
	while (*(_DWORD*)v9 || *(_BYTE*)(v9 + 4))
	{
		++v7;
		v9 += 12i64;
		if (v7 >= v6)
			goto LABEL_14;
	}
	if (*(_DWORD*)(v8 + 12 * v7 + 8))
	{
	LABEL_15:
		v11 = *(_DWORD**)(a1 + 16);
		v11[2] = 1;
		*v11 = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
	LABEL_14:
		v10 = *(_DWORD**)(a1 + 16);
		*v10 = 1;
		v10[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

