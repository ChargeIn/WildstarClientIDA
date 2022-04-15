#include "../winhttp.h"

//----- (00000001400DAF20) ----------------------------------------------------
__int64 __fastcall sub_1400DAF20(_QWORD* a1)
{
	__int64 result; // rax
	unsigned int v3; // ebx
	__int64 v4; // rdx
	int v5; // r8d
	unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v6 = *(_DWORD*)(result + 712);
		v3 = v6;
		if ((unsigned __int64)v6 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v4 = 32i64 * v6 + *(_QWORD*)(qword_140C63678 + 40);
			v5 = *(_DWORD*)(v4 + 16);
			if ((unsigned int)(v5 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v4 + 16) = v5 + 1;
		}
		sub_1401430E0(a1, &v6);
		sub_1401429A0(qword_140C63678, v3);
		return 1i64;
	}
	return result;
}
// 140C63678: using guessed type __int64 qword_140C63678;

