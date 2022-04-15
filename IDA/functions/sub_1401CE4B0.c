#include "../winhttp.h"

//----- (00000001401CE4B0) ----------------------------------------------------
void __fastcall sub_1401CE4B0(__int64 a1)
{
	unsigned __int64 v1; // r8
	__int64* v3; // r13
	__int64 v4; // r12
	__int64* v5; // rdi
	__int64* v6; // rbx
	unsigned __int64 i; // r15
	__int64 v8; // rsi
	__m128i* v9; // rbp

	v1 = *(_QWORD*)(a1 + 8);
	if (v1 >= 2)
	{
		sub_14001FEC0(
			(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401CE790,
			*(__int64**)a1,
			v1,
			*(_QWORD*)(a1 + 16));
		v3 = *(__int64**)a1;
		v4 = *(_QWORD*)(a1 + 16);
		v5 = (__int64*)(*(_QWORD*)a1 + 8i64);
		v6 = *(__int64**)a1;
		for (i = *(_QWORD*)a1 + 8i64 * *(_QWORD*)(a1 + 8); (unsigned __int64)v5 < i; ++v5)
		{
			v8 = *v5;
			v9 = (__m128i*)(v4 + 2 * *v5);
			if ((unsigned int)sub_1401CE5B0((_WORD*)(v4 + 2 * *v6), (unsigned __int16*)v9))
			{
				*++v6 = v8;
			}
			else if (sub_1407DD988(v9, 0x7Eu))
			{
				*v6 = *v5;
			}
		}
		sub_14004EED0((__int64*)a1, v6 - v3 + 1);
	}
}

