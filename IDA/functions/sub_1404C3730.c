//----- (00000001404C3730) ----------------------------------------------------
__int64 __fastcall sub_1404C3730(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // r14
	__int64 v4; // rcx
	__int128* v5; // rax
	unsigned int v6; // r15d
	__m128 v7; // xmm1
	__int128 v8; // xmm0
	__m128 v9; // xmm1
	__m128 v10; // xmm0
	int v11; // r13d
	int v12; // r12d
	__int64 v13; // rcx
	unsigned int v14; // edi
	__int64 v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int64 v18; // rax
	unsigned int* v19; // rax
	unsigned int* v20; // rbx
	__int64 v21; // rax
	__m128 v22; // xmm5
	__m128i v23; // xmm3
	__m128 v24; // xmm1
	__m128 v25; // xmm2
	int* v26; // rdi
	unsigned __int64 v27; // rbp
	__m128* v28; // rbx
	__m128* v29; // rsi
	bool v30; // zf
	__m128* v31; // r8
	__m128 v32; // [rsp+20h] [rbp-A8h] BYREF
	__m128 v33; // [rsp+30h] [rbp-98h]
	__int128 v34; // [rsp+40h] [rbp-88h]

	v1 = a1;
	v2 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	if (!v2)
		return 1i64;
	v4 = *(_QWORD*)(v1 + 608);
	if (!v4)
		return 0i64;
	v5 = (__int128*)(*(__int64 (**)(void))(*(_QWORD*)v4 + 80i64))();
	v6 = 0;
	v7 = (__m128)v5[1];
	v32 = (__m128) * v5;
	v8 = v5[2];
	v33 = v7;
	v9 = (__m128)v5[3];
	v34 = v8;
	v10 = _mm_mul_ps(
		_mm_add_ps(
			(__m128)xmmword_140B7AC50,
			_mm_mul_ps(
				_mm_shuffle_ps(v9, v9, 136),
				_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
		(__m128)xmmword_140B7B490);
	v11 = (int)v10.m128_f32[0];
	v12 = (int)_mm_shuffle_ps(v10, v10, 85).m128_f32[0];
	if (!*(_DWORD*)(v2 + 272))
		return 0i64;
	while (1)
	{
		v13 = v6 >= (unsigned __int64)((__int64)(*(_QWORD*)(v2 + 256) - *(_QWORD*)(v2 + 248)) >> 3)
			? 0i64
			: *(_QWORD*)(*(_QWORD*)(v2 + 248) + 8i64 * v6);
		v14 = *(_DWORD*)(v13 + 12);
		if (qword_140C63840)
		{
			v15 = qword_140C63840(off_140A6A8D8, v14, qword_140C63858);
		}
		else
		{
			if (dword_140C65340 || (int)sub_140205D40() < 0)
				goto LABEL_41;
			v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 24i64))(qword_140C63C30, v14);
		}
		v16 = v15;
		if (!v15)
			goto LABEL_41;
		v17 = v6 >= (unsigned __int64)((__int64)(*(_QWORD*)(v2 + 256) - *(_QWORD*)(v2 + 248)) >> 3)
			? 0i64
			: *(_QWORD*)(*(_QWORD*)(v2 + 248) + 8i64 * v6);
		v18 = sub_140206C60(*(_DWORD*)(v17 + 4));
		if (!v18)
			goto LABEL_41;
		if (*(_DWORD*)(v18 + 208) != 2)
			goto LABEL_41;
		v19 = (unsigned int*)sub_14024C200(*(_DWORD*)(v16 + 4));
		v20 = v19;
		if (!v19)
			goto LABEL_41;
		if (v11 >= (int)v19[2] && v11 < (int)v19[4] && v12 >= (int)v19[3] && v12 < (int)v19[5])
			return 1i64;
		v21 = sub_140200220(0x3D0u);
		v22 = (__m128)(v21 ? *(unsigned int*)(v21 + 24) : 0x41F00000u);
		v22.m128_f32[0] = v22.m128_f32[0] - 715.0;
		v23 = _mm_cvtsi32_si128(v20[4]);
		v24 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20[2]), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20[3]), _mm_cvtsi32_si128(0)))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		v32 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, _mm_shuffle_ps(v24, v24, 85)), (__m128)xmmword_140B7A3D0);
		v25 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20[5]), _mm_cvtsi32_si128(0)))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		v33 = _mm_unpacklo_ps(_mm_unpacklo_ps(v25, _mm_shuffle_ps(v25, v25, 85)), _mm_unpacklo_ps(v22, (__m128)0i64));
		v26 = sub_14018B280(56i64, 0);
		if (v26)
		{
			*((_QWORD*)v26 + 1) = 1i64;
			v26[4] = 0;
			*((_QWORD*)v26 + 3) = 0i64;
			*((_QWORD*)v26 + 4) = 0i64;
			*((_QWORD*)v26 + 5) = 0i64;
			*(_QWORD*)v26 = off_140B5FE88;
			*((_QWORD*)v26 + 6) = 0i64;
		}
		else
		{
			v26 = 0i64;
		}
		(*(void(__fastcall**)(_QWORD, __m128*, __int64, int*))(**(_QWORD**)(v1 + 608) + 1320i64))(
			*(_QWORD*)(v1 + 608),
			&v32,
			4i64,
			v26);
		if (v26)
		{
			if ((*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v26 + 16i64))(v26))
				break;
		}
	LABEL_40:
		(*(void(__fastcall**)(int*))(*(_QWORD*)v26 + 8i64))(v26);
	LABEL_41:
		if (++v6 >= *(_DWORD*)(v2 + 272))
			return 0i64;
	}
	v27 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v26 + 24i64))(v26);
	v28 = (__m128*)v27;
	v29 = (__m128*)(v27 + 48i64 * (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v26 + 16i64))(v26));
	if (v27 >= (unsigned __int64)v29)
	{
	LABEL_39:
		v1 = a1;
		goto LABEL_40;
	}
	v30 = v27 == (_QWORD)v29;
	while (1)
	{
		v31 = v28 + 1;
		if (v30)
			v31 = (__m128*)v27;
		if ((unsigned int)sub_1401C9B90((__int64)&v32, v28, v31, 0i64))
			break;
		v28 += 3;
		v30 = v28 == v29;
		if (v28 >= v29)
			goto LABEL_39;
	}
	(*(void(__fastcall**)(int*))(*(_QWORD*)v26 + 8i64))(v26);
	return 1i64;
}
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140B5FE88: using guessed type __int64 (__fastcall *off_140B5FE88[18])();
// 140B7A3D0: using guessed type __int128 xmmword_140B7A3D0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C65340: using guessed type int dword_140C65340;
// 140C659F0: using guessed type __int64 qword_140C659F0;

