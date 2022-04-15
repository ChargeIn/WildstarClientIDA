//----- (000000014056BB50) ----------------------------------------------------
void __fastcall sub_14056BB50(__int64 a1, int a2)
{
	_QWORD* v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rdi
	unsigned int v6; // ecx
	unsigned int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rdi
	unsigned int* v13; // rax
	__m128 v14; // xmm12
	__m128 v15; // xmm12
	__m128 v16; // xmm2
	__m128 v17; // xmm12
	float v18; // xmm11_4
	float v19; // xmm9_4
	float v20; // xmm4_4
	float v21; // xmm5_4
	float v22; // xmm8_4
	float v23; // xmm10_4
	float v24; // xmm6_4
	float v25; // xmm9_4
	float v26; // xmm7_4
	float v27; // xmm0_4
	float v28; // xmm8_4
	float v29; // xmm11_4
	__int64 v30; // rcx
	__int64 v31; // r9
	__int64 i; // rcx
	__m128 v33; // [rsp+60h] [rbp-A0h] BYREF
	__m256 v34; // [rsp+70h] [rbp-90h] BYREF
	__int128 v35; // [rsp+90h] [rbp-70h]
	__m128 v36; // [rsp+A0h] [rbp-60h]
	__m128 v37[5]; // [rsp+B0h] [rbp-50h] BYREF
	int v38[12]; // [rsp+100h] [rbp+0h] BYREF
	__int128 v39; // [rsp+130h] [rbp+30h]
	__m128* v40[10]; // [rsp+140h] [rbp+40h] BYREF

	if (!a2)
	{
		for (i = *(_QWORD*)(a1 + 24); i; i = *(_QWORD*)(a1 + 24))
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)i + 40i64))(i, 1i64, 1i64);
		return;
	}
	v3 = (_QWORD*)(a1 + 24);
	if (*(_QWORD*)(a1 + 24))
		return;
	v4 = sub_140491C60(qword_140C65968, *(_DWORD*)(a1 + 16));
	v5 = v4;
	if (!v4)
		return;
	v6 = *(_DWORD*)(**(_QWORD**)a1 + 24i64);
	if (v6)
		goto LABEL_21;
	if (*(_DWORD*)(*(_QWORD*)v4 + 12i64) == 27)
	{
		v7 = 811;
	}
	else
	{
		v8 = qword_140C65898;
		v9 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v9)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9) == 167)
			{
				if (*(_DWORD*)(*(_QWORD*)v5 + 12i64) == 15)
					v7 = 527;
				else
					v7 = 489;
				goto LABEL_17;
			}
			v8 = qword_140C65898;
		}
		v10 = *(_QWORD*)(v8 + 7152);
		if (!v10 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10) != 166)
			return;
		v7 = 526;
		if (*(_DWORD*)(*(_QWORD*)v5 + 12i64) != 15)
			v7 = 488;
	}
LABEL_17:
	v11 = sub_140200220(v7);
	if (v11)
		v6 = *(_DWORD*)(v11 + 8);
	else
		v6 = 0;
	if (v6)
	{
	LABEL_21:
		v12 = sub_140248F00(v6);
		v13 = (unsigned int*)sub_14024B980(*(_DWORD*)(**(_QWORD**)a1 + 8i64));
		if (v13)
			v33 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v13[3], (__m128)v13[5]),
				_mm_unpacklo_ps((__m128)v13[4], (__m128)0i64));
		v14 = (__m128)v13[6];
		v38[3] = 0;
		v38[7] = 0;
		v38[11] = 0;
		v34 = ymmword_140C78410;
		v35 = xmmword_140C78430;
		v15 = _mm_unpacklo_ps(v14, (__m128)v13[8]);
		v16 = _mm_unpacklo_ps((__m128)v13[7], (__m128)v13[9]);
		v36 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v33.m128_u32[0], (__m128)v33.m128_u32[2]),
			_mm_unpacklo_ps((__m128)v33.m128_u32[1], (__m128)0x3F800000u));
		v17 = _mm_unpacklo_ps(v15, v16);
		v18 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
		v19 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
		v20 = v19 * 2.0;
		v21 = v17.m128_f32[0] * (float)(v17.m128_f32[0] * 2.0);
		v37[4] = v17;
		v22 = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
		v23 = v22 * (float)(v17.m128_f32[0] * 2.0);
		v24 = v18 * (float)(v18 * 2.0);
		v25 = v19 * (float)(v19 * 2.0);
		*(float*)v38 = (float)(1.0 - v24) - v25;
		v26 = v22 * v20;
		v27 = v17.m128_f32[0] * (float)(v18 * 2.0);
		v17.m128_f32[0] = v17.m128_f32[0] * v20;
		v28 = v22 * (float)(v18 * 2.0);
		*(float*)&v38[1] = v27 + v26;
		*(float*)&v38[4] = v27 - v26;
		v29 = v18 * v20;
		*(float*)&v38[2] = v17.m128_f32[0] - v28;
		*(float*)&v38[5] = (float)(1.0 - v21) - v25;
		v39 = xmmword_140B7AD00;
		*(float*)&v38[8] = v17.m128_f32[0] + v28;
		*(float*)&v38[6] = v29 + v23;
		*(float*)&v38[9] = v29 - v23;
		*(float*)&v38[10] = (float)(1.0 - v21) - v24;
		v40[0] = (__m128*)v38;
		v40[1] = (__m128*) & v34;
		sub_1401AFB10(v40, v37);
		v33 = 0i64;
		sub_1405787D0(v30, 0, 0, v31, v12, 0i64, (__int128*)v37, 0, v3, (__int128*)&v33, 0);
	}
}
// 14056BEDD: variable 'v30' is possibly undefined
// 14056BEDD: variable 'v31' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;

