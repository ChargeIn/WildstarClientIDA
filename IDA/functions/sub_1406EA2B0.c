#include "../winhttp.h"

//----- (00000001406EA2B0) ----------------------------------------------------
__int64 __fastcall sub_1406EA2B0(_QWORD* a1)
{
	__m128d v1; // xmm0
	__int64 v3; // rax
	unsigned __int64 v4; // r8
	__int64 v5; // rcx
	__m128* v6; // rsi
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rbx
	_QWORD* v10; // rcx
	__m128d v11; // xmm6
	_DWORD* v12; // rax
	_QWORD* v13; // rcx
	__m128 v14; // xmm7
	_DWORD* v15; // rax
	float v16; // xmm2_4
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // esi
	double v20; // xmm6_8
	_QWORD* v21; // rax
	__int64 v22; // rcx
	unsigned __int64 v23; // rbx
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	__int64 v26; // rax
	__int64* v27; // rax
	double v28; // xmm6_8
	_QWORD* v29; // rax
	__int64 v30; // r11
	unsigned __int64* v31; // rdx
	__int64 v32; // rax
	__int64* v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	__m128 v38; // [rsp+20h] [rbp-48h] BYREF
	int v39; // [rsp+70h] [rbp+8h] BYREF
	int v40; // [rsp+74h] [rbp+Ch]

	v3 = sub_1406E8880(a1, 1u);
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = 0i64;
	v6 = (__m128*)v3;
	if (v4)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
		{
			v5 = (unsigned int)(v5 + 1);
			v8 = (unsigned int)v5;
			if ((unsigned int)v5 >= v4)
				goto LABEL_5;
		}
		v9 = *(_QWORD*)(v7 + 8 * v5);
	}
	else
	{
	LABEL_5:
		v9 = 0i64;
	}
	v10 = *(_QWORD**)(v9 + 400);
	v11 = 0i64;
	v12 = (_DWORD*)(v10[3] + 16i64);
	if ((unsigned __int64)v12 >= v10[2] || v12 == dword_140A12138 || *(int*)(v10[3] + 24i64) <= 0)
		v1 = 0i64;
	else
		v1.m128d_f64[0] = sub_140056C40(v10, 2u);
	v13 = *(_QWORD**)(v9 + 400);
	v14 = 0i64;
	v14.m128_f32[0] = v1.m128d_f64[0];
	v15 = (_DWORD*)(v13[3] + 32i64);
	if ((unsigned __int64)v15 < v13[2] && v15 != dword_140A12138 && *(int*)(v13[3] + 40i64) > 0)
	{
		v1.m128d_f64[0] = sub_140056C40(v13, 3u);
		v11 = v1;
	}
	v16 = v6[71].m128_f32[0];
	v38 = _mm_sub_ps(
		v6[69],
		_mm_unpacklo_ps(_mm_unpacklo_ps(v14, (__m128)0i64), _mm_unpacklo_ps(_mm_cvtpd_ps(v11), (__m128)0i64)));
	sub_1406DF8A0(&v39, v38.m128_f32, v16);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v17 = a1[2];
	v18 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v17 + 8) = 5;
	*(_QWORD*)v17 = v18;
	a1[2] += 16i64;
	v19 = sub_1400578C0((__int64)a1);
	v20 = (double)v39;
	v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
	v22 = a1[2];
	*(_QWORD*)v22 = *v21;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
	a1[2] += 16i64;
	v23 = -1i64;
	v24 = (unsigned __int64*)sub_14018F0E0(&v38, L"nX")[1];
	if (v24)
	{
		v25 = -1i64;
		do
			++v25;
		while (*((_BYTE*)v24 + v25));
		sub_140058710((__int64)a1, v24, v25);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v38.m128_u64[1])
		sub_14018B900(v38.m128_i64[1], 0);
	v26 = a1[2];
	*(_DWORD*)(v26 + 8) = 3;
	*(double*)v26 = v20;
	a1[2] += 16i64;
	v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v28 = (double)v40;
	v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
	*(_QWORD*)v30 = *v29;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
	a1[2] += 16i64;
	v31 = (unsigned __int64*)sub_14018F0E0(&v38, L"nY")[1];
	if (v31)
	{
		do
			++v23;
		while (*((_BYTE*)v31 + v23));
		sub_140058710((__int64)a1, v31, v23);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v38.m128_u64[1])
		sub_14018B900(v38.m128_i64[1], 0);
	v32 = a1[2];
	*(_DWORD*)(v32 + 8) = 3;
	*(double*)v32 = v28;
	a1[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
	*(_QWORD*)v35 = *v34;
	*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v36, v19);
	return 1i64;
}
// 1406EA388: variable 'v1' is possibly undefined
// 1406EA502: variable 'v30' is possibly undefined
// 1406EA5AE: variable 'v35' is possibly undefined
// 1406EA5C0: variable 'v36' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B3F63C: using guessed type wchar_t aNy_3[3];
// 140B3F644: using guessed type wchar_t aNx_3[3];
// 140C63650: using guessed type __int64 qword_140C63650;
// 1406EA2B0: using guessed type __m128 var_48;

