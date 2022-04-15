#include "../winhttp.h"

//----- (000000014054A2B0) ----------------------------------------------------
__int64 __fastcall sub_14054A2B0(__int64 a1, __int64 a2)
{
	int v2; // edx
	__int64 v4; // rax
	unsigned int v5; // r10d
	__int64 result; // rax
	BOOL v7; // edx
	__int64 v8; // rcx

	*(_QWORD*)(a1 + 256) = a2;
	v2 = *(_DWORD*)(a1 + 116);
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	v4 = sub_1403D90D0(qword_140C65898, v2);
	v5 = *(_DWORD*)(a1 + 32);
	if (v5)
	{
		if (!v4)
			goto LABEL_11;
		v7 = *(_QWORD*)(qword_140C65898 + 120) == v4 || *(_QWORD*)(qword_140C65898 + 25744) == v4;
		v8 = 0i64;
		if (v7)
			v8 = qword_140C65898;
		if (!v8 || (result = sub_1405A5B90(v8, v5)) == 0)
			LABEL_11:
		result = sub_1407A0FD0(qword_140C65B70, v5);
	}
	else
	{
		result = 0i64;
	}
	*(_QWORD*)(a1 + 280) = result;
	if (*(_QWORD*)(a1 + 256))
	{
		result = (unsigned int)dword_140C636A8;
		*(_QWORD*)(a1 + 296) = 0i64;
		*(_DWORD*)(a1 + 80) = result;
	}
	return result;
}
// 14054A33D: variable 'v5' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

