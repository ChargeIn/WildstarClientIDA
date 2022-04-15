#include "../winhttp.h"

//----- (0000000140661420) ----------------------------------------------------
__int64 __fastcall sub_140661420(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // eax
	BOOL* v5; // rcx
	BOOL v6; // edx
	__int64 result; // rax
	_DWORD* v8; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = sub_14045BD30(v3);
		v5 = *(BOOL**)(a1 + 16);
		v5[2] = 1;
		v6 = v4 == 0;
		result = 1i64;
		*v5 = v6;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v8 = *(_DWORD**)(a1 + 16);
		*v8 = 0;
		v8[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

