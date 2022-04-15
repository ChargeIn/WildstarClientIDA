//----- (00000001403613F0) ----------------------------------------------------
__int64 __fastcall sub_1403613F0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // r8
	__int64 v4; // rdx
	int v5; // eax
	__int64 v6; // rdx
	unsigned int v7; // ebp
	unsigned int v8; // esi
	__m128* v9; // rax
	__m128 v10; // xmm4
	__m128 v11; // xmm3
	__m128 v12; // xmm2
	__m128 v13; // xmm6
	__m128 v14; // xmm2
	__m128 v15; // xmm1
	__m128 v16; // xmm5
	__m128 v17; // xmm1
	__m128 v18; // xmm0
	__m128 v19; // xmm2
	__m128 v20; // xmm3
	__m128 v21; // xmm5
	__m128 v22; // xmm3
	__m128 v23; // xmm1
	__m128 v24; // xmm4
	__int64 v25; // rax
	__m128* v26; // rbx
	float v27; // xmm0_4
	float v28; // xmm0_4
	__int64 result; // rax
	unsigned __int64 v30; // [rsp+70h] [rbp+8h]

	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	LOBYTE(v3) = 56;
	LOBYTE(v4) = 8;
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65688 + 264i64))(qword_140C65688, v4, v3);
	v5 = *(_DWORD*)(a1 + 132);
	if ((v5 & 0x800) != 0)
	{
		v6 = 0i64;
	LABEL_6:
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, v6);
		goto LABEL_7;
	}
	if ((v5 & 0x400) != 0 || (*(_DWORD*)(a1 + 128) & 0x4000000) != 0)
	{
		v6 = 2i64;
		goto LABEL_6;
	}
LABEL_7:
	if ((*(_BYTE*)(a1 + 132) & 0x10) != 0)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 344i64))(qword_140C65670, 0i64);
	v7 = dword_140B65808[*(int*)(a1 + 144)];
	v8 = (v7 + 4 * ((*(_DWORD*)(a1 + 132) & 0x1809023) != 0)) << 8;
	v9 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			144i64,
			0i64,
			0i64,
			0);
	if (v9)
	{
		v10 = *(__m128*)(a1 + 976);
		v11 = *(__m128*)(a1 + 1008);
		v12 = *(__m128*)(a1 + 960);
		v13 = _mm_unpackhi_ps(v12, v10);
		v14 = _mm_unpacklo_ps(v12, v10);
		v15 = *(__m128*)(a1 + 992);
		v16 = _mm_unpackhi_ps(v15, v11);
		v17 = _mm_unpacklo_ps(v15, v11);
		*v9 = _mm_shuffle_ps(v14, v17, 68);
		v9[1] = _mm_shuffle_ps(v14, v17, 238);
		v9[2] = _mm_shuffle_ps(v13, v16, 68);
		v18 = *(__m128*)(a1 + 1296);
		v19 = *(__m128*)(a1 + 1328);
		v20 = *(__m128*)(a1 + 1280);
		v21 = _mm_unpackhi_ps(v20, v18);
		v22 = _mm_unpacklo_ps(v20, v18);
		v23 = _mm_unpacklo_ps(*(__m128*)(a1 + 1312), v19);
		v24 = _mm_unpackhi_ps(*(__m128*)(a1 + 1312), v19);
		v9[3] = _mm_shuffle_ps(v22, v23, 68);
		v9[4] = _mm_shuffle_ps(v22, v23, 238);
		v9[5] = _mm_shuffle_ps(v21, v24, 68);
		v9[6] = _mm_shuffle_ps(v21, v24, 238);
		v9[7].m128_f32[0] = -1.0 / *(float*)&dword_140C44018;
		LODWORD(v30) = *(_DWORD*)(a1 + 864);
		HIDWORD(v30) = *(_DWORD*)(a1 + 872);
		v9[8].m128_u64[0] = v30;
		v9[8].m128_i32[2] = 1065353216;
		v9[8].m128_f32[3] = -*(float*)(a1 + 4256);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	v25 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		80i64,
		0i64);
	if (v25)
	{
		*(_OWORD*)v25 = *(_OWORD*)(a1 + 480);
		*(_OWORD*)(v25 + 16) = *(_OWORD*)(a1 + 496);
		*(__m128*)(v25 + 32) = _mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)*(unsigned __int8*)(v2 + 32)),
				(__m128)0i64),
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)*(unsigned __int8*)(v2 + 33)),
				(__m128)0i64));
		*(_OWORD*)(v25 + 48) = *(_OWORD*)(a1 + 816);
		if ((*(_DWORD*)(a1 + 132) & 0x40000) != 0)
		{
			*(_DWORD*)(v25 + 64) = 0;
			*(_DWORD*)(v25 + 72) = 1065353216;
		}
		else
		{
			*(_DWORD*)(v25 + 64) = 0x40000000;
			*(_DWORD*)(v25 + 72) = 0;
		}
		if ((*(_DWORD*)(a1 + 132) & 0x10000) != 0)
		{
			*(_DWORD*)(v25 + 68) = 0;
			*(_DWORD*)(v25 + 76) = 1065353216;
		}
		else
		{
			*(_DWORD*)(v25 + 68) = 1065353216;
			*(_DWORD*)(v25 + 76) = 0;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	v26 = *(__m128**)(a1 + 2336);
	if (!v26)
		return 0i64;
	while (1)
	{
		if (!*(_DWORD*)(a1 + 852)
			|| ((v27 = v26[17].m128_f32[1] - *(float*)(a1 + 916), v27 <= 0.0)
				? (v28 = v27 * v26[81].m128_f32[2])
				: (v28 = v27 * v26[81].m128_f32[1]),
				v28 >= v26[81].m128_f32[0]))
		{
			if ((unsigned int)sub_14035BDF0((__m128*)a1, v26 + 16))
			{
				result = sub_140383920(v26, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 104i64), v7, v7 + 4, *(_DWORD*)(a1 + 144), v8);
				if ((int)result < 0)
					break;
			}
		}
		v26 = (__m128*)v26[89].m128_u64[0];
		if (!v26)
			return 0i64;
	}
	return result;
}
// 140361449: variable 'v4' is possibly undefined
// 140361449: variable 'v3' is possibly undefined
// 140B65808: using guessed type int dword_140B65808[4];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C44018: using guessed type int dword_140C44018;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

