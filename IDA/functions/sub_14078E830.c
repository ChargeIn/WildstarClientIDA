#include "../winhttp.h"

//----- (000000014078E830) ----------------------------------------------------
__int64 __fastcall sub_14078E830(_QWORD* a1)
{
	int v2; // r9d
	__int64 v3; // rdx
	__int64 v4; // rcx
	double v5; // xmm6_8
	int v6; // ecx
	int v7; // esi
	int v8; // edi
	__m128d v9; // xmm1
	int v10; // ecx
	int v11; // edi
	__m128d v12; // xmm0
	int v13; // ecx

	v2 = sub_1407DDB28();
	v3 = a1[2];
	v4 = (v3 - a1[3]) >> 4;
	v5 = (double)(v2 % 0x7FFF) * 0.00003051850947599719;
	if ((_DWORD)v4)
	{
		v6 = v4 - 1;
		if (v6)
		{
			if (v6 != 1)
				sub_140056830(a1, (unsigned __int64*)aWrongNumberOfA);
			v7 = sub_140056D60(a1, 1u);
			v8 = sub_140056D60(a1, 2u);
			if (v7 > v8)
				sub_140056570(a1, 2u, aIntervalIsEmpt);
			v3 = a1[2];
			v9 = (__m128d)COERCE_UNSIGNED_INT64((double)(v8 - v7 + 1));
			v9.m128d_f64[0] = v9.m128d_f64[0] * v5;
			v10 = (int)v9.m128d_f64[0];
			if ((double)v10 != v9.m128d_f64[0])
				v9.m128d_f64[0] = (double)(v10 - (_mm_movemask_pd(_mm_unpacklo_pd(v9, v9)) & 1));
			*(double*)v3 = v9.m128d_f64[0] + (double)v7;
		}
		else
		{
			v11 = sub_140056D60(a1, 1u);
			if (v11 < 1)
				sub_140056570(a1, 1u, aIntervalIsEmpt_0);
			v3 = a1[2];
			v12 = (__m128d)COERCE_UNSIGNED_INT64((double)v11);
			v12.m128d_f64[0] = v12.m128d_f64[0] * v5;
			v13 = (int)v12.m128d_f64[0];
			if ((double)v13 != v12.m128d_f64[0])
				v12.m128d_f64[0] = (double)(v13 - (_mm_movemask_pd(_mm_unpacklo_pd(v12, v12)) & 1));
			*(double*)v3 = v12.m128d_f64[0] + 1.0;
		}
	}
	else
	{
		*(double*)v3 = v5;
	}
	*(_DWORD*)(v3 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}
// 14078E91E: conditional instruction was optimized away because rcx.8<100000000u
// 14078E9AC: conditional instruction was optimized away because rcx.8<100000000u

