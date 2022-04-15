//----- (00000001407262D0) ----------------------------------------------------
__int64 __fastcall sub_1407262D0(__int64 a1, __m128* a2)
{
	__m128* v4; // rax
	__int64* v5; // rcx
	__m128 v6; // xmm1
	__int64 v7; // rax
	__m128 v8; // xmm1
	__m128 v9; // xmm8
	__m128* v10; // rax
	__m128 v11; // xmm6
	float v12; // xmm6_4
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v16; // rax
	int v17; // xmm1_4
	__int64 v18; // rcx
	__m128 v19; // xmm1
	unsigned int v20; // ebx
	__m128 v21; // xmm2
	unsigned int v22; // edi
	__int64 v23; // rax
	float v24; // xmm7_4
	__int64 v25; // rax
	__int64 v26; // rsi
	__m128* v27; // r14
	__m128 v28; // xmm1
	__int64 v29; // [rsp+38h] [rbp-D0h] BYREF
	int v30[2]; // [rsp+40h] [rbp-C8h] BYREF
	int v31[4]; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v32; // [rsp+58h] [rbp-B0h]
	__int64 v33; // [rsp+60h] [rbp-A8h]
	__int64 v34; // [rsp+68h] [rbp-A0h]
	_QWORD v35[3]; // [rsp+70h] [rbp-98h] BYREF
	__int128 v36[2]; // [rsp+88h] [rbp-80h] BYREF
	__m128 v37; // [rsp+A8h] [rbp-60h] BYREF
	float v38[16]; // [rsp+C8h] [rbp-40h] BYREF

	v4 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 608) + 1176i64))(
		*(_QWORD*)(a1 + 608),
		&v37);
	v5 = *(__int64**)(a1 + 608);
	v6 = _mm_add_ps(v4[1], *v4);
	v7 = *v5;
	v8 = _mm_mul_ps(v6, (__m128)xmmword_140B7AC50);
	v9 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), a2[1]), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *a2)),
			_mm_mul_ps(_mm_shuffle_ps(v8, v8, 170), a2[2])),
		a2[3]);
	v37 = v9;
	v10 = (__m128*)(*(__int64(__fastcall**)(__int64*, __int128*))(v7 + 1176))(v5, v36);
	v11 = _mm_sub_ps(v10[1], *v10);
	v12 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0] * 0.5;
	sub_1407E4830((int*)v38, 0i64, 0x34ui64);
	v13 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	v14 = v13;
	if (!v13 || !(unsigned int)sub_1405AF080(v13, v38))
		return 0i64;
	if ((dword_140DC4CF0 & 1) != 0)
	{
		v17 = dword_140DC4CF4;
	}
	else
	{
		dword_140DC4CF0 |= 1u;
		v16 = sub_140200220(0x385u);
		if (v16)
		{
			v17 = *(_DWORD*)(v16 + 24);
			dword_140DC4CF4 = v17;
		}
		else
		{
			v17 = 0x40000000;
			dword_140DC4CF4 = 0x40000000;
		}
	}
	if (!*(_DWORD*)(v14 + 272))
		return 0i64;
	v18 = *(_QWORD*)(qword_140C659F8 + 112);
	if (!v18)
		return 0i64;
	while (*(_DWORD*)(v18 + 16) != *(_DWORD*)(*(_QWORD*)(v14 + 232) + 4i64)
		|| *(_DWORD*)(v18 + 20) != *(_DWORD*)(v14 + 188))
	{
		v18 = *(_QWORD*)(v18 + 8);
		if (!v18)
			return 0i64;
	}
	if (!(unsigned int)sub_1404C8320(v18, *(float*)&v17, *(float*)(a1 + 528), *(float*)(a1 + 536), a1))
		return 0i64;
	if (*(float*)((*(__int64(__fastcall**)(__int64, float*, _QWORD))(*(_QWORD*)a1 + 128i64))(a1, v38, 0i64) + 52) == a2[3].m128_f32[1])
		return 1i64;
	v19 = (__m128)(unsigned int)dword_140DC4CF4;
	v20 = 0;
	v35[0] = *(_QWORD*)(a1 + 288);
	v29 = 0i64;
	v31[0] = 9;
	v31[1] = 3;
	v19.m128_f32[0] = (float)(*(float*)&dword_140DC4CF4 + v12) * 2.0;
	v21 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v19, (__m128)0i64));
	v30[1] = 1065353216;
	v32 = 0i64;
	v33 = 0i64;
	LODWORD(v34) = 0;
	v36[0] = (__int128)_mm_add_ps(v21, v9);
	*(__m128*)& v35[1] = _mm_sub_ps(v9, v21);
	v30[0] = 0;
	v22 = 1;
	v31[2] = 1;
	if (!(*(unsigned int(__fastcall**)(_QWORD, __int128*, _QWORD*, int*, __int64*, int*))(**(_QWORD**)(qword_140C65898 + 29256)
		+ 424i64))(
			*(_QWORD*)(qword_140C65898 + 29256),
			v36,
			&v35[1],
			v30,
			&v29,
			v31)
		|| (v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 40i64))(v29),
			v24 = v37.m128_f32[1],
			v37.m128_f32[1] < (float)(*(float*)(v23 + 32) - v12))
		|| v24 > (float)(v12 + *(float*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 40i64))(v29) + 32)))
	{
		v22 = 0;
	LABEL_28:
		v20 = v22;
	LABEL_29:
		v22 = v20;
		goto LABEL_30;
	}
	v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 24i64))(v29);
	v26 = v25;
	if (!v25 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v25 + 24i64))(v25) != 1)
		goto LABEL_28;
	v27 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 40i64))(v29);
	if (sub_1404CB280(qword_140C659F8, v26))
		goto LABEL_29;
	v28 = _mm_mul_ps(*(__m128*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 56i64))(v26) + 16), *v27);
	if (fabs((float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0]) + _mm_shuffle_ps(v28, v28, 170).m128_f32[0]) < 0.70710677)
		goto LABEL_29;
LABEL_30:
	if (v29)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
	return v22;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140DC4CF0: using guessed type int dword_140DC4CF0;
// 140DC4CF4: using guessed type int dword_140DC4CF4;
// 1407262D0: using guessed type __m128 var_B0;
// 1407262D0: using guessed type float var_90[16];

