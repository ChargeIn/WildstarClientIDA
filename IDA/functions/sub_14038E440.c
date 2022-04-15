#include "../winhttp.h"

//----- (000000014038E440) ----------------------------------------------------
__int64 __fastcall sub_14038E440(__int64 a1)
{
	__m128 v2; // xmm3
	__m128 v3; // xmm1
	__m128 v4; // xmm2
	__int128 v5; // xmm0
	_QWORD* v6; // rcx
	__int64 v7; // rax
	double* v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // r8
	__m128 v12; // [rsp+20h] [rbp-68h] BYREF
	__m128 v13; // [rsp+30h] [rbp-58h]
	__int128 v14; // [rsp+40h] [rbp-48h]
	int v15; // [rsp+50h] [rbp-38h]

	sub_140252720((__m128*)(a1 + 32), (__int64)&v12);
	v2 = *(__m128*)(a1 + 32);
	v3 = v13;
	v4 = v12;
	if ((_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 752), v2)) & 7) != 0
		|| (_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 768), v12)) & 7) != 0
		|| (_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 784), v13)) & 7) != 0)
	{
		v5 = v14;
		*(__m128*)(a1 + 752) = v2;
		*(__m128*)(a1 + 768) = v4;
		*(__m128*)(a1 + 784) = v3;
		*(_OWORD*)(a1 + 800) = v5;
		*(_DWORD*)(a1 + 816) = v15;
		if (!*(_QWORD*)(a1 + 888))
		{
			v6 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5352i64);
			*(_QWORD*)(a1 + 888) = v6;
			*(_QWORD*)(a1 + 896) = *v6;
			*v6 = a1;
			v7 = *(_QWORD*)(a1 + 896);
			if (v7)
				*(_QWORD*)(v7 + 888) = a1 + 896;
		}
	}
	v12.m128_u64[0] = a1 + 48;
	sub_1401AFC20((__int64*)&v12, (double*)(a1 + 304));
	v8 = (double*)(a1 + 368);
	do
	{
		v12.m128_u64[0] = (unsigned __int64)(v8 - 32);
		sub_1401AFC20((__int64*)&v12, v8);
		v8 = (double*)(v9 + 64);
	} while (v10 != 1);
	v12.m128_u64[0] = a1 + 240;
	return sub_1401AFC20((__int64*)&v12, (double*)(a1 + 496));
}
// 14038E566: variable 'v9' is possibly undefined
// 14038E56D: variable 'v10' is possibly undefined

