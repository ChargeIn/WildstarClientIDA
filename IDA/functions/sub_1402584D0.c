//----- (00000001402584D0) ----------------------------------------------------
__int64 __fastcall sub_1402584D0(__int64 a1, __int64* a2, float a3, float a4)
{
	int v6; // ecx
	int v7; // eax
	int v8; // eax
	int v9; // edx
	int v10; // r8d
	float* v11; // rax
	int v12; // ecx
	__m128i v13; // xmm2
	int v14; // r8d
	int v15; // edx
	__int64 v16; // rcx
	__int64 v17; // rax
	int v18; // ecx
	__int64 v19; // r8
	__int64 v21; // [rsp+38h] [rbp-49h] BYREF
	__int64 v22; // [rsp+40h] [rbp-41h]
	unsigned __int64 v23; // [rsp+48h] [rbp-39h]
	int v24[6]; // [rsp+50h] [rbp-31h] BYREF
	__int128 v25; // [rsp+68h] [rbp-19h] BYREF
	__m128 v26; // [rsp+78h] [rbp-9h]

	v22 = a2[1];
	LODWORD(v21) = 1;
	HIDWORD(v23) = 0;
	(*(void(__fastcall**)(__int64, __int64*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v21,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v6 = *((_DWORD*)a2 + 5);
	v7 = *(int*)(a1 + 1616) >> v6;
	v23 = 0x3F80000000000000i64;
	v21 = 0i64;
	if (v7 < 1)
		v7 = 1;
	LODWORD(v22) = v7;
	v8 = *(int*)(a1 + 1620) >> v6;
	if (v8 < 1)
		v8 = 1;
	HIDWORD(v22) = v8;
	*(_QWORD*)&v25 = 0i64;
	*((_QWORD*)&v25 + 1) = v22;
	v26.m128_u64[0] = v23;
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v25);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*a2,
		0i64,
		0i64);
	v9 = 0;
	v10 = 0;
	if (a4 != 1.0)
		v9 = 1;
	if (a3 != 0.0)
		v10 = 1;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2240),
		(unsigned int)(v9 + 2 * v10));
	v11 = (float*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		8i64,
		0i64);
	if (v11)
	{
		*v11 = a3;
		v11[1] = a4;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		*((unsigned int*)a2 + 6),
		*((unsigned int*)a2 + 7),
		0i64);
	v12 = *((_DWORD*)a2 + 5);
	v13 = _mm_cvtsi32_si128(0);
	v14 = *(int*)(a1 + 1616) >> v12;
	v24[2] = v14;
	v15 = *(int*)(a1 + 1620) >> v12;
	v16 = *a2;
	if (v14 < (int)qword_140C77768)
		v14 = qword_140C77768;
	v24[3] = v15;
	if (v15 < SHIDWORD(qword_140C77768))
		v15 = HIDWORD(qword_140C77768);
	v25 = 0i64;
	v26 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), v13),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), v13)));
	v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 24i64))(v16);
	v18 = *(_DWORD*)(v17 + 8);
	LODWORD(v17) = *(_DWORD*)(v17 + 4);
	v24[1] = v18;
	v24[0] = v17;
	(*(void(__fastcall**)(__int64, __int64, __int64, int*, __int128*, _QWORD, __int64))(*(_QWORD*)qword_140C65670
		+ 664i64))(
			qword_140C65670,
			0xFFFFFFFFi64,
			v19,
			v24,
			&v25,
			0i64,
			v21);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
}
// 1402586F2: variable 'v19' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77768: using guessed type __int64 qword_140C77768;

