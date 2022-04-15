//----- (00000001406E9F80) ----------------------------------------------------
__int64 __fastcall sub_1406E9F80(_QWORD* a1)
{
	__m128d v1; // xmm0
	__int64 v3; // rax
	unsigned __int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rsi
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rbx
	_QWORD* v10; // rcx
	__m128d v11; // xmm6
	_DWORD* v12; // rax
	_QWORD* v13; // rcx
	__m128 v14; // xmm7
	_DWORD* v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // esi
	double v19; // xmm6_8
	_QWORD* v20; // rax
	__int64 v21; // rcx
	unsigned __int64 v22; // rbx
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	__int64 v25; // rax
	__int64* v26; // rax
	double v27; // xmm6_8
	_QWORD* v28; // rax
	__int64 v29; // r11
	unsigned __int64* v30; // rdx
	__int64 v31; // rax
	__int64* v32; // rax
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	__m128 v37; // [rsp+20h] [rbp-48h] BYREF
	int v38; // [rsp+70h] [rbp+8h] BYREF
	int v39; // [rsp+74h] [rbp+Ch]

	v3 = sub_1406E8880(a1, 1u);
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = 0i64;
	v6 = v3;
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
	v37 = _mm_unpacklo_ps(_mm_unpacklo_ps(v14, (__m128)0i64), _mm_unpacklo_ps(_mm_cvtpd_ps(v11), (__m128)0i64));
	sub_1406DF8A0(&v38, v37.m128_f32, *(float*)(v6 + 1136));
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v16 = a1[2];
	v17 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	a1[2] += 16i64;
	v18 = sub_1400578C0((__int64)a1);
	v19 = (double)v38;
	v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
	v21 = a1[2];
	*(_QWORD*)v21 = *v20;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	a1[2] += 16i64;
	v22 = -1i64;
	v23 = (unsigned __int64*)sub_14018F0E0(&v37, L"nX")[1];
	if (v23)
	{
		v24 = -1i64;
		do
			++v24;
		while (*((_BYTE*)v23 + v24));
		sub_140058710((__int64)a1, v23, v24);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v37.m128_u64[1])
		sub_14018B900(v37.m128_i64[1], 0);
	v25 = a1[2];
	*(_DWORD*)(v25 + 8) = 3;
	*(double*)v25 = v19;
	a1[2] += 16i64;
	v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v27 = (double)v39;
	v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
	*(_QWORD*)v29 = *v28;
	*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
	a1[2] += 16i64;
	v30 = (unsigned __int64*)sub_14018F0E0(&v37, L"nY")[1];
	if (v30)
	{
		do
			++v22;
		while (*((_BYTE*)v30 + v22));
		sub_140058710((__int64)a1, v30, v22);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v37.m128_u64[1])
		sub_14018B900(v37.m128_i64[1], 0);
	v31 = a1[2];
	*(_DWORD*)(v31 + 8) = 3;
	*(double*)v31 = v27;
	a1[2] += 16i64;
	v32 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v32, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
	*(_QWORD*)v34 = *v33;
	*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v35, v18);
	return 1i64;
}
// 1406EA058: variable 'v1' is possibly undefined
// 1406EA1C3: variable 'v29' is possibly undefined
// 1406EA26E: variable 'v34' is possibly undefined
// 1406EA280: variable 'v35' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B3F64C: using guessed type wchar_t aNy_2[3];
// 140B3F654: using guessed type wchar_t aNx_2[3];
// 140C63650: using guessed type __int64 qword_140C63650;
// 1406E9F80: using guessed type __m128 var_48;

