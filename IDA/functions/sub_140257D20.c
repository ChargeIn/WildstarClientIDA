//----- (0000000140257D20) ----------------------------------------------------
__int64 __fastcall sub_140257D20(__int64 a1, _QWORD* a2, unsigned int a3, float a4, float a5, __int64 a6)
{
	__int64 v6; // r14
	__m128 v7; // xmm7
	unsigned int v10; // ebx
	int v11; // edi
	__int64 v12; // rsi
	float v13; // xmm4_4
	float v14; // xmm8_4
	__m128 v15; // xmm6
	__m128* v16; // r15
	__m128 v17; // xmm3
	__int64 v18; // r14
	__m128 v19; // xmm10
	__m128 v20; // xmm11
	int v21; // ebx
	__m128* v22; // rdi
	__int64 v23; // xmm0_8
	float v24; // xmm6_4
	__m128 v25; // xmm0
	float v26; // xmm6_4
	__m128 v27; // xmm0
	int v28; // eax
	__m128 v29; // xmm4
	float v30; // xmm6_4
	__m128 v31; // xmm1
	int v32; // ecx
	int v33; // edx
	int v34; // r8d
	__m128 v35; // xmm4
	__m128 v36; // xmm1
	int v37; // ecx
	int v38; // eax
	int v39; // eax
	int v40; // eax
	unsigned int v41; // ebx
	int v42; // ecx
	int v43; // r8d
	int v44; // edx
	__m128i v45; // xmm2
	int v46; // r8d
	int v47; // edx
	__int64 v48; // rcx
	__int64 v49; // rax
	int v50; // ecx
	__int64 v51; // r8
	int v52; // ecx
	int v53; // eax
	int v54; // eax
	int v55; // ecx
	__m128i v56; // xmm2
	__m128i v57; // xmm0
	int v58; // r8d
	int v59; // edx
	__m128i v60; // xmm1
	__m128i v61; // xmm2
	int v62; // r8d
	int v63; // edx
	__int64 v64; // rcx
	__int64 v65; // rax
	int v66; // ecx
	int v68; // [rsp+38h] [rbp-D0h] BYREF
	int v69; // [rsp+3Ch] [rbp-CCh]
	__m256i v70; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v71; // [rsp+68h] [rbp-A0h]
	int v72; // [rsp+70h] [rbp-98h]
	int v73; // [rsp+74h] [rbp-94h]
	__m256i v74; // [rsp+78h] [rbp-90h] BYREF

	v6 = a6;
	v7 = (__m128)0x40000000u;
	if (a3 < 5)
		a3 = 5;
	v71 = a6;
	v10 = ((a3 - 1) >> 2) + 1;
	if (v10 > 0xA)
		v10 = 10;
	v11 = 0;
	v12 = v10 - 1;
	v68 = 0;
	v72 = v10 - 1;
	v13 = fmaxf(0.83333331, fminf(a4, (float)(4 * v12 + 1) * 0.16666667));
	v14 = 0.5 / (float)(v13 * v13);
	v7.m128_f32[0] = 2.0 / (float)(_mm_sqrt_ps((__m128)0x40C90FDBu).m128_f32[0] * v13);
	v15 = (__m128)0x3F800000u;
	v16 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 272i64))(
			qword_140C65670,
			176i64,
			0i64,
			0i64,
			0);
	if (v16)
	{
		v17 = (__m128)0x3F800000u;
		v18 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 24i64))(*a2);
		v17.m128_f32[0] = 1.0 / (float)*(int*)(v18 + 4);
		v15.m128_f32[0] = 1.0 / (float)*(int*)(v18 + 8);
		*(__m128*)v70.m256i_i8 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)0i64), _mm_unpacklo_ps(v15, (__m128)0i64));
		v19 = (__m128)v70.m256i_u32[1];
		v20 = (__m128)v70.m256i_u32[0];
		*v16 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)0i64, v7));
		if (v10 > 1)
		{
			v21 = 1;
			v22 = v16 + 1;
			do
			{
				HIDWORD(v23) = 0;
				*(float*)&v23 = (float)((v21 + 1) * (v21 + 1)) * v14;
				v24 = sub_1408FC7F0(COERCE_DOUBLE(v23 ^ 0x80000000i64));
				v25 = 0i64;
				v26 = v24 * v7.m128_f32[0];
				v25.m128_f32[0] = (float)(v21 * v21) * v14;
				v27 = _mm_xor_ps(v25, (__m128)0x80000000);
				v27.m128_f32[0] = sub_1408FC7F0(*(double*)v27.m128_u64);
				v28 = v21;
				v29 = v20;
				++v22;
				v21 += 2;
				v27.m128_f32[0] = (float)(v27.m128_f32[0] * v7.m128_f32[0]) + v26;
				v30 = (float)(v26 / v27.m128_f32[0]) + (float)v28;
				v31 = v19;
				v29.m128_f32[0] = v20.m128_f32[0] * v30;
				v31.m128_f32[0] = v19.m128_f32[0] * v30;
				v22[-1] = _mm_unpacklo_ps(_mm_unpacklo_ps(v29, (__m128)0i64), _mm_unpacklo_ps(v31, v27));
				--v12;
			} while (v12);
			LODWORD(v12) = v72;
			v11 = v68;
		}
		v32 = *((_DWORD*)a2 + 4);
		v33 = *(int*)(a1 + 1616) >> v32;
		v68 = v33;
		v34 = *(int*)(a1 + 1620) >> v32;
		if (v33 < (int)qword_140C77768)
			v33 = qword_140C77768;
		if (v34 < SHIDWORD(qword_140C77768))
			v34 = HIDWORD(qword_140C77768);
		if (v33 != *(_DWORD*)(v18 + 4) || v34 != *(_DWORD*)(v18 + 8))
		{
			v11 = 1;
			v35 = (__m128)COERCE_UNSIGNED_INT((float)(v33 - 1));
			v35.m128_f32[0] = v35.m128_f32[0] * v20.m128_f32[0];
			v36 = (__m128)COERCE_UNSIGNED_INT((float)(v34 - 1));
			v36.m128_f32[0] = v36.m128_f32[0] * v19.m128_f32[0];
			v16[10] = _mm_unpacklo_ps(_mm_unpacklo_ps(v35, (__m128)0i64), _mm_unpacklo_ps(v36, (__m128)0i64));
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		v6 = v71;
	}
	v70.m256i_i64[1] = v6;
	v70.m256i_i32[5] = 0;
	v70.m256i_i32[0] = 1;
	(*(void(__fastcall**)(__int64, __m256i*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v70,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
	v37 = *((_DWORD*)a2 + 4);
	v70.m256i_i64[0] = 0i64;
	v38 = *(_DWORD*)(a1 + 1616);
	v70.m256i_i64[2] = 0x3F80000000000000i64;
	v39 = v38 >> v37;
	if (v39 < 1)
		v39 = 1;
	v70.m256i_i32[2] = v39;
	v40 = *(int*)(a1 + 1620) >> v37;
	if (v40 < 1)
		v40 = 1;
	v70.m256i_i32[3] = v40;
	v74.m256i_i64[0] = v70.m256i_i64[0];
	*(_OWORD*)&v74.m256i_u64[1] = *(_OWORD*)&v70.m256i_u64[1];
	(*(void(__fastcall**)(__int64, __m256i*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v74);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*a2,
		0i64,
		0i64);
	v41 = 2 * (v11 + 2 * v12);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2248),
		v41 + 1);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		1i64,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 416i64))(qword_140C65670, 0i64, 0i64);
	v42 = *((_DWORD*)a2 + 4);
	v43 = *(int*)(a1 + 1616) >> v42;
	LODWORD(v71) = v43;
	v44 = *(int*)(a1 + 1620) >> v42;
	if (v43 < (int)qword_140C77768)
		v43 = qword_140C77768;
	HIDWORD(v71) = *(int*)(a1 + 1620) >> v42;
	if (v44 < SHIDWORD(qword_140C77768))
		v44 = HIDWORD(qword_140C77768);
	v45 = _mm_cvtsi32_si128(0);
	*(_OWORD*)v74.m256i_i8 = 0i64;
	*(__m128*)& v74.m256i_u64[2] = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v43), v45),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v44), v45)));
	v46 = *(int*)(a1 + 1616) >> v42;
	v72 = v46;
	v47 = *(int*)(a1 + 1620) >> v42;
	v48 = *a2;
	*(_OWORD*)v70.m256i_i8 = 0i64;
	if (v46 < (int)qword_140C77768)
		v46 = qword_140C77768;
	v73 = v47;
	if (v47 < SHIDWORD(qword_140C77768))
		v47 = HIDWORD(qword_140C77768);
	*(__m128*)& v70.m256i_u64[2] = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), v45),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), v45)));
	v49 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v48 + 24i64))(v48);
	v50 = *(_DWORD*)(v49 + 8);
	LODWORD(v49) = *(_DWORD*)(v49 + 4);
	v69 = v50;
	v68 = v49;
	(*(void(__fastcall**)(__int64, __int64, __int64, int*, __m256i*, __m256i*))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		2155905152i64,
		v51,
		&v68,
		&v70,
		&v74);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v74.m256i_i64[1] = a2[1];
	v74.m256i_i32[0] = 1;
	v74.m256i_i32[5] = 0;
	(*(void(__fastcall**)(__int64, __m256i*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v74,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v52 = *((_DWORD*)a2 + 5);
	v53 = *(int*)(a1 + 1616) >> v52;
	v70.m256i_i64[2] = 0x3F80000000000000i64;
	v70.m256i_i64[0] = 0i64;
	if (v53 < 1)
		v53 = 1;
	v70.m256i_i32[2] = v53;
	v54 = *(int*)(a1 + 1620) >> v52;
	if (v54 < 1)
		v54 = 1;
	v70.m256i_i32[3] = v54;
	v74.m256i_i64[0] = 0i64;
	*(_OWORD*)&v74.m256i_u64[1] = *(_OWORD*)&v70.m256i_u64[1];
	(*(void(__fastcall**)(__int64, __m256i*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v74);
	(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		v6,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2248),
		v41);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		*((unsigned int*)a2 + 6),
		*((unsigned int*)a2 + 7),
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 416i64))(
		qword_140C65670,
		*((unsigned int*)a2 + 9),
		0i64);
	v55 = *((_DWORD*)a2 + 5);
	v56 = _mm_cvtsi32_si128(0);
	v57 = v56;
	v58 = *(int*)(a1 + 1616) >> v55;
	LODWORD(v71) = v58;
	v59 = *(int*)(a1 + 1620) >> v55;
	*(_OWORD*)v74.m256i_i8 = 0i64;
	if (v58 < (int)qword_140C77768)
		v58 = qword_140C77768;
	HIDWORD(v71) = v59;
	if (v59 < SHIDWORD(qword_140C77768))
		v59 = HIDWORD(qword_140C77768);
	v60 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), v56);
	v61 = _mm_cvtsi32_si128(0);
	*(__m128*)& v74.m256i_u64[2] = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v58), v57), v60));
	v62 = *(int*)(a1 + 1616) >> v55;
	v72 = v62;
	v63 = *(int*)(a1 + 1620) >> v55;
	v64 = a2[1];
	*(_OWORD*)v70.m256i_i8 = 0i64;
	if (v62 < (int)qword_140C77768)
		v62 = qword_140C77768;
	v73 = v63;
	if (v63 < SHIDWORD(qword_140C77768))
		v63 = HIDWORD(qword_140C77768);
	*(__m128*)& v70.m256i_u64[2] = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v62), v61),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v63), v61)));
	v65 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v64 + 24i64))(v64);
	v66 = *(_DWORD*)(v65 + 8);
	LODWORD(v65) = *(_DWORD*)(v65 + 4);
	v69 = v66;
	v68 = v65;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, int*, __m256i*, __m256i*))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		(unsigned int)(16843009 * (int)(float)((float)(a5 * 127.5) + 0.5)),
		*(_QWORD*)qword_140C65670,
		&v68,
		&v70,
		&v74);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
}
// 140258247: variable 'v51' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77768: using guessed type __int64 qword_140C77768;

