//----- (0000000140258740) ----------------------------------------------------
__int64 __fastcall sub_140258740(__int64 a1, __int64 a2, float* a3)
{
	__int64 v6; // rax
	float v7; // xmm3_4
	float v8; // xmm2_4
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	int v16; // ecx
	int v17; // eax
	int v18; // eax
	__int64 v19; // rax
	int v20; // ecx
	__m128 v21; // xmm1
	__m128i v22; // xmm1
	__m128i v23; // xmm1
	__int64 v25; // [rsp+30h] [rbp-41h]
	__int64 v26; // [rsp+30h] [rbp-41h]
	__int64 v27; // [rsp+30h] [rbp-41h]
	__int64 v28; // [rsp+30h] [rbp-41h]
	__int64 v29; // [rsp+30h] [rbp-41h]
	__int64 v30; // [rsp+38h] [rbp-39h] BYREF
	__int64 v31; // [rsp+40h] [rbp-31h]
	__int64 v32; // [rsp+48h] [rbp-29h]
	int v33[2]; // [rsp+50h] [rbp-21h] BYREF
	__int64 v34; // [rsp+58h] [rbp-19h] BYREF
	__int64 v35; // [rsp+60h] [rbp-11h]
	__int64 v36; // [rsp+68h] [rbp-9h]
	__int64 v37; // [rsp+70h] [rbp-1h]
	__int64 v38; // [rsp+78h] [rbp+7h]

	v34 = *(_QWORD*)a2;
	v35 = *(_QWORD*)(a1 + 1952);
	v37 = 1i64;
	v38 = 1i64;
	v36 = 0x100000000i64;
	sub_140257AD0(a1, &v34);
	v34 = *(_QWORD*)(a1 + 1952);
	v6 = *(_QWORD*)(a1 + 1976);
	v37 = 1i64;
	v38 = 0i64;
	v36 = 0x200000001i64;
	v35 = v6;
	sub_140257AD0(a1, &v34);
	v7 = a3[17];
	v8 = a3[15];
	v34 = *(_QWORD*)(a1 + 1976);
	v9 = *(_QWORD*)(a1 + 1968);
	v37 = 1i64;
	v38 = 0i64;
	v35 = v9;
	v36 = 0x200000002i64;
	sub_1402584D0(a1, &v34, v8, v7);
	v34 = *(_QWORD*)(a1 + 1968);
	v35 = v34;
	v25 = *(_QWORD*)(a1 + 1976);
	v37 = 1i64;
	v38 = 0i64;
	v36 = 0x200000002i64;
	sub_140257D20(a1, &v34, 0xDu, 2.1666667, 1.0, v25);
	v34 = *(_QWORD*)(a1 + 1968);
	v10 = *(_QWORD*)(a1 + 1984);
	v37 = 1i64;
	v38 = 0i64;
	v35 = v10;
	v36 = 0x300000002i64;
	sub_140257AD0(a1, &v34);
	v11 = *(_QWORD*)(a1 + 1984);
	v37 = 1i64;
	v34 = v11;
	v35 = v11;
	v26 = *(_QWORD*)(a1 + 1992);
	v38 = 0i64;
	v36 = 0x300000003i64;
	sub_140257D20(a1, &v34, 0xDu, 2.1666667, 1.0, v26);
	v34 = *(_QWORD*)(a1 + 1984);
	v12 = *(_QWORD*)(a1 + 2000);
	v37 = 1i64;
	v38 = 0i64;
	v36 = 0x400000003i64;
	v35 = v12;
	sub_140257AD0(a1, &v34);
	v34 = *(_QWORD*)(a1 + 2000);
	v35 = v34;
	v27 = *(_QWORD*)(a1 + 2008);
	v37 = 1i64;
	v38 = 0i64;
	v36 = 0x400000004i64;
	sub_140257D20(a1, &v34, 0xDu, 2.1666667, 1.0, v27);
	v34 = *(_QWORD*)(a1 + 2000);
	v13 = *(_QWORD*)(a1 + 2016);
	v37 = 1i64;
	v38 = 0i64;
	v36 = 0x500000004i64;
	v35 = v13;
	sub_140257AD0(a1, &v34);
	v34 = *(_QWORD*)(a1 + 2016);
	v35 = v34;
	v28 = *(_QWORD*)(a1 + 2024);
	v37 = 1i64;
	v38 = 0i64;
	v36 = 0x500000005i64;
	sub_140257D20(a1, &v34, 0xDu, 2.1666667, 1.0, v28);
	v34 = *(_QWORD*)(a1 + 2016);
	v14 = *(_QWORD*)(a1 + 2032);
	v37 = 1i64;
	v38 = 0i64;
	v36 = 0x600000005i64;
	v35 = v14;
	sub_140257AD0(a1, &v34);
	v34 = *(_QWORD*)(a1 + 2032);
	v35 = v34;
	v29 = *(_QWORD*)(a1 + 2040);
	v37 = 1i64;
	v38 = 0i64;
	v36 = 0x600000006i64;
	sub_140257D20(a1, &v34, 0xDu, 2.1666667, 1.0, v29);
	v15 = *(_QWORD*)(a2 + 8);
	LODWORD(v30) = 1;
	v31 = v15;
	HIDWORD(v32) = 0;
	(*(void(__fastcall**)(__int64, __int64*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v30,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v16 = *(_DWORD*)(a2 + 20);
	v17 = *(int*)(a1 + 1616) >> v16;
	v32 = 0x3F80000000000000i64;
	v30 = 0i64;
	if (v17 < 1)
		v17 = 1;
	LODWORD(v31) = v17;
	v18 = *(int*)(a1 + 1620) >> v16;
	if (v18 < 1)
		v18 = 1;
	HIDWORD(v31) = v18;
	v34 = 0i64;
	v35 = v31;
	v36 = v32;
	(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v34);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2256),
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1968),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(a1 + 1984),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		2i64,
		*(_QWORD*)(a1 + 2000),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		3i64,
		*(_QWORD*)(a1 + 2016),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		4i64,
		*(_QWORD*)(a1 + 2032),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		*(unsigned int*)(a2 + 24),
		*(unsigned int*)(a2 + 28),
		0i64);
	v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 24i64))(*(_QWORD*)(a2 + 8));
	v20 = *(_DWORD*)(v19 + 8);
	LODWORD(v19) = *(_DWORD*)(v19 + 4);
	v21 = _mm_min_ps(
		_mm_max_ps(
			(__m128)0i64,
			_mm_shuffle_ps((__m128) * ((unsigned int*)a3 + 16), (__m128) * ((unsigned int*)a3 + 16), 0)),
		(__m128)xmmword_140B7B240);
	v33[1] = v20;
	v33[0] = v19;
	v22 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(v21, (__m128)xmmword_140B7B470), (__m128)xmmword_140B7AC50)),
		198);
	v23 = _mm_packus_epi16(v22, v22);
	(*(void(__fastcall**)(__int64, _QWORD, __int64, int*, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670
		+ 664i64))(
			qword_140C65670,
			(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v23, v23)),
			a1 + 1744,
			v33,
			a1 + 1744,
			a1 + 1744,
			v30);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	return 1i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C65670: using guessed type __int64 qword_140C65670;

