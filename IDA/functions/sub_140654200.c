#include "../winhttp.h"

//----- (0000000140654200) ----------------------------------------------------
__int64 __fastcall sub_140654200(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // ecx
	int v6; // edx
	BOOL v7; // r8d
	_DWORD* v8; // rcx
	__int64 result; // rax
	_DWORD* v10; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(_QWORD*)(v3 + 24);
		if (v4 && (v5 = *(_DWORD*)(v4 + 108)) != 0)
		{
			v6 = 0;
			v7 = *(_DWORD*)(qword_140C65898 + 5780) == v5;
		}
		else
		{
			v6 = 0;
			v7 = 0;
		}
		v8 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		LOBYTE(v6) = v7;
		v8[2] = 1;
		*v8 = v6;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v10 = *(_DWORD**)(a1 + 16);
		*v10 = 0;
		v10[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

