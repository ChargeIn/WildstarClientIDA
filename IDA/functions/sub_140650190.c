#include "../winhttp.h"

//----- (0000000140650190) ----------------------------------------------------
__int64 __fastcall sub_140650190(_QWORD* a1)
{
	__m128d v1; // xmm0
	int* v3; // rax
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // r8
	_DWORD* v7; // rax
	__int64 v8; // rcx
	int v9; // edx
	unsigned __int16* v10; // rax
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	v3 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v3
		&& (v4 = sub_1403D90D0(qword_140C65898, *v3)) != 0
		&& (v5 = qword_140C65898, (v6 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
		&& *(_DWORD*)(v4 + 8) == *(_DWORD*)(v6 + 8)
		&& ((v7 = (_DWORD*)(a1[3] + 16i64), (unsigned __int64)v7 >= a1[2])
			|| v7 == dword_140A12138
			|| *(int*)(a1[3] + 24i64) <= 0
			? (__int64)(v1 = (__m128d)0xBFF0000000000000ui64)
			: (v1.m128d_f64[0] = sub_140056C40(a1, 2u), v5 = qword_140C65898),
			(v8 = *(_QWORD*)(v5 + 28048)) != 0))
	{
		v9 = (int)v1.m128d_f64[0];
		if ((double)v9 != v1.m128d_f64[0])
			v1.m128d_f64[0] = (double)(v9 - (_mm_movemask_pd(_mm_unpacklo_pd(v1, v1)) & 1));
		v10 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 88i64))(
			v8,
			(unsigned int)(int)v1.m128d_f64[0]);
		v11 = (unsigned __int64*)sub_14018F0E0(&v14, v10)[1];
		if (v11)
		{
			v12 = -1i64;
			do
				++v12;
			while (*((_BYTE*)v11 + v12));
			sub_140058710((__int64)a1, v11, v12);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v15)
		{
			sub_14018B900(v15, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140650255: conditional instruction was optimized away because rdx.8<100000000u
// 140650265: variable 'v1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

