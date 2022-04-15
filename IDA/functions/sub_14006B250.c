//----- (000000014006B250) ----------------------------------------------------
__int64 __fastcall sub_14006B250(int a1, __int64 a2, __int64 a3)
{
	double v4; // xmm2_8
	double v5; // xmm1_8
	__int64 result; // rax
	__m128d v7; // xmm0
	int v8; // ecx
	double v9; // xmm0_8

	if (*(_DWORD*)a2 != 5
		|| *(_DWORD*)(a2 + 16) != -1
		|| *(_DWORD*)(a2 + 20) != -1
		|| *(_DWORD*)a3 != 5
		|| *(_DWORD*)(a3 + 16) != -1
		|| *(_DWORD*)(a3 + 20) != -1)
	{
		return 0i64;
	}
	v4 = *(double*)(a2 + 8);
	v5 = *(double*)(a3 + 8);
	switch (a1)
	{
	case 12:
		result = 1i64;
		*(double*)(a2 + 8) = v5 + v4;
		break;
	case 13:
		result = 1i64;
		*(double*)(a2 + 8) = v4 - v5;
		break;
	case 14:
		result = 1i64;
		*(double*)(a2 + 8) = v5 * v4;
		break;
	case 15:
		if (v5 == 0.0)
			return 0i64;
		result = 1i64;
		*(double*)(a2 + 8) = v4 / v5;
		break;
	case 16:
		if (v5 == 0.0)
			return 0i64;
		v7.m128d_f64[1] = 0.0;
		v7.m128d_f64[0] = v4 / v5;
		v8 = (int)(v4 / v5);
		if ((double)v8 != v7.m128d_f64[0])
			v7.m128d_f64[0] = (double)(v8 - (_mm_movemask_pd(_mm_unpacklo_pd(v7, v7)) & 1));
		result = 1i64;
		*(double*)(a2 + 8) = v4 - v7.m128d_f64[0] * v5;
		break;
	case 17:
		v9 = sub_1408FFA00(v4, v5);
		result = 1i64;
		*(double*)(a2 + 8) = v9;
		break;
	case 18:
		result = 1i64;
		*(double*)(a2 + 8) = -v4;
		break;
	case 20:
		return 0i64;
	default:
		result = 1i64;
		*(_QWORD*)(a2 + 8) = 0i64;
		break;
	}
	return result;
}
// 14006B34E: conditional instruction was optimized away because rcx.8<100000000u

