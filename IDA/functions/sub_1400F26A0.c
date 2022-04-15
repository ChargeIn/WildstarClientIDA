//----- (00000001400F26A0) ----------------------------------------------------
__int64 __fastcall sub_1400F26A0(__int64 a1, int a2)
{
	__m128d v2; // xmm0
	_QWORD* v3; // rbx
	_DWORD* v4; // rax
	int v5; // r10d
	unsigned int v6; // r11d
	int v7; // ecx

	v3 = *(_QWORD**)(a1 + 16);
	v4 = sub_1400580E0((__int64)v3, a2);
	if (v4 == dword_140A12138 || (int)v4[2] <= 0)
		v2 = (__m128d)COERCE_UNSIGNED_INT64((double)v5);
	else
		v2.m128d_f64[0] = sub_140056C40(v3, v6);
	v7 = (int)v2.m128d_f64[0];
	if ((double)v7 != v2.m128d_f64[0])
		v2.m128d_f64[0] = (double)(v7 - (_mm_movemask_pd(_mm_unpacklo_pd(v2, v2)) & 1));
	return (unsigned int)(int)v2.m128d_f64[0];
}
// 1400F26F5: conditional instruction was optimized away because rcx.8<100000000u
// 1400F26D0: variable 'v6' is possibly undefined
// 1400F26DC: variable 'v5' is possibly undefined
// 1400F2705: variable 'v2' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

