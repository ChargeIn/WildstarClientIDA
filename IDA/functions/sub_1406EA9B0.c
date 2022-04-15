//----- (00000001406EA9B0) ----------------------------------------------------
__int64 __fastcall sub_1406EA9B0(_QWORD* a1)
{
	__m128d v1; // xmm0
	__int64 v3; // rax
	unsigned __int64 v4; // r10
	__int64 v5; // rdi
	__m128* v6; // rsi
	unsigned int v7; // edx
	__int64 v8; // r9
	__int64 v9; // r8
	_QWORD* v10; // rcx
	__m128d v11; // xmm6
	_DWORD* v12; // rax
	_QWORD* v13; // rcx
	__m128 v14; // xmm7
	_DWORD* v15; // rax
	__m128 v17; // [rsp+20h] [rbp-38h] BYREF

	v3 = sub_1406E8880(a1, 1u);
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = 0i64;
	v6 = (__m128*)v3;
	v7 = 0;
	if (v4)
	{
		v8 = *(_QWORD*)(qword_140C63650 + 760);
		v9 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v8 + 8 * v9) + 400i64) != a1)
		{
			v9 = ++v7;
			if (v7 >= v4)
				goto LABEL_7;
		}
		v5 = *(_QWORD*)(v8 + 8i64 * v7);
	}
LABEL_7:
	v10 = *(_QWORD**)(v5 + 400);
	v11 = 0i64;
	v12 = (_DWORD*)(v10[3] + 16i64);
	if ((unsigned __int64)v12 >= v10[2] || v12 == dword_140A12138 || *(int*)(v10[3] + 24i64) <= 0)
		v1 = 0i64;
	else
		v1.m128d_f64[0] = sub_140056C40(v10, 2u);
	v13 = *(_QWORD**)(v5 + 400);
	v14 = 0i64;
	v14.m128_f32[0] = v1.m128d_f64[0];
	v15 = (_DWORD*)(v13[3] + 32i64);
	if ((unsigned __int64)v15 < v13[2] && v15 != dword_140A12138 && *(int*)(v13[3] + 40i64) > 0)
	{
		v1.m128d_f64[0] = sub_140056C40(v13, 3u);
		v11 = v1;
	}
	v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v14, (__m128)0i64), _mm_unpacklo_ps(_mm_cvtpd_ps(v11), (__m128)0i64));
	sub_1406E4880(v6, v17.m128_f32);
	return 0i64;
}
// 1406EAA89: variable 'v1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

