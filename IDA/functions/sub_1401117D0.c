#include "../winhttp.h"

//----- (00000001401117D0) ----------------------------------------------------
__int64 __fastcall sub_1401117D0(__int64 a1)
{
	unsigned __int64 v1; // rdi
	unsigned __int64 v3; // rsi
	unsigned __int64 v4; // r8
	unsigned __int64 v5; // rcx
	unsigned __int64* v6; // rax
	unsigned __int64 i; // rdx

	v1 = 0i64;
	v3 = 0i64;
	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
	{
		v3 = *(_QWORD*)(a1 + 1024);
		sub_14010FFB0(a1);
		v4 = *(_QWORD*)(a1 + 1248);
		if (v4 > 1)
		{
			v5 = *(_QWORD*)(a1 + 1024);
			v6 = *(unsigned __int64**)(a1 + 1240);
			for (i = 1i64; i < v4; ++i)
			{
				if (v5 >= *v6 && v5 < v6[1])
					break;
				if (*(_BYTE*)(a1 + 1064) && v5 == v6[1])
					break;
				++v1;
				v6 += 3;
			}
		}
		if (v1 < v4)
			v3 = *(_QWORD*)(*(_QWORD*)(a1 + 1240) + 24 * v1);
		*(_BYTE*)(a1 + 1064) = 0;
	}
	sub_1401116A0(a1, v3);
	return 0i64;
}

