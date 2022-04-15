#include "../winhttp.h"

//----- (000000014067F1E0) ----------------------------------------------------
__int64 __fastcall sub_14067F1E0(_QWORD* a1)
{
	float v1; // xmm0_4
	__int64** v3; // rax
	__int64** v4; // rdi
	_QWORD* v5; // rsi
	unsigned int v6; // eax
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v11; // rax

	v3 = (__int64**)sub_14067B760(a1);
	v4 = v3;
	if (v3 && *(_DWORD*)(*v3[6] + 12) == 13 && ((int(__fastcall*)(__int64**))(*v3)[26])(v3) >= 3)
	{
		v5 = (_QWORD*)sub_140721F50(*v4[6], *(_DWORD*)(*v4[6] + 20));
		if (v5
			&& (v6 = sub_1400584E0((__int64)a1, 2), v6 < (unsigned int)((__int64)(v5[4] - v5[3]) >> 3))
			&& (v7 = sub_1407209F0(v5, v6)) != 0
			&& !((unsigned int(__fastcall*)(__int64**, _QWORD))(*v4)[10])(v4, *(unsigned int*)(v7 + 8)))
		{
			sub_140571C60(v8, **(_DWORD**)(v7 + 16));
			v9 = a1[2];
			*(double*)v9 = v1;
		}
		else
		{
			v9 = a1[2];
			*(_QWORD*)v9 = 0i64;
		}
		*(_DWORD*)(v9 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v11 = a1[2];
		*(_QWORD*)v11 = 0i64;
		*(_DWORD*)(v11 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14067F293: variable 'v8' is possibly undefined
// 14067F29F: variable 'v1' is possibly undefined

