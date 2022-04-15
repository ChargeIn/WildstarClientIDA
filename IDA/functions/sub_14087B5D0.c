#include "../winhttp.h"

//----- (000000014087B5D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14087B5D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	int v4; // r10d
	unsigned int v5; // esi
	unsigned int i; // edi
	__int64 v11; // rbx
	unsigned __int64 result; // rax
	int v13[10]; // [rsp+30h] [rbp-28h] BYREF

	v4 = *(_DWORD*)(a2 + 8);
	v5 = 0;
	for (i = 0; v4; v4 &= v4 - 1)
		++i;
	do
	{
		v11 = *(_QWORD*)a2 + 4 * v5 * (unsigned __int64)*(unsigned __int16*)(a2 + 16);
		sub_14087AB50((__int64)v13, (__m128*)(a4 + ((unsigned __int64)v5 << 6)), *(float*)(a1 + 4));
		sub_14087ADA0(
			(unsigned __int16*)a1,
			v11,
			*(_QWORD*)a3,
			COERCE_DOUBLE((unsigned __int64)(unsigned int)v13[0]),
			*(float*)&v13[1]);
		result = sub_14087ADA0(
			(unsigned __int16*)a1,
			v11,
			*(_QWORD*)a3 + 4i64 * *(unsigned __int16*)(a3 + 16),
			COERCE_DOUBLE((unsigned __int64)(unsigned int)v13[2]),
			*(float*)&v13[3]);
		++v5;
	} while (v5 < i);
	return result;
}

