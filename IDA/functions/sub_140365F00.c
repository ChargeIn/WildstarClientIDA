#include "../winhttp.h"

//----- (0000000140365F00) ----------------------------------------------------
__int64 __fastcall sub_140365F00(__int64 a1)
{
	__m128* v2; // rax
	__m128 v3; // xmm4
	__m128 v4; // xmm3
	__m128 v5; // xmm5
	__m128 v6; // xmm1
	__m128 v7; // xmm2
	__m128 v8; // xmm6
	__m128 v9; // xmm2
	__m128 v10; // xmm0
	__m128 v11; // xmm1
	__m128 v12; // xmm3
	__m128 v13; // xmm5
	__m128 v14; // xmm3
	__m128 v15; // xmm2
	__m128 v16; // xmm4
	__m128* v17; // rbx
	__m128 v18; // xmm0
	__m128* i; // rbx
	__m128* v20; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 7i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		1i64,
		1i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 392i64))(qword_140C65670, 4294967288i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 432i64))(
		qword_140C65670,
		0i64,
		0i64,
		0i64,
		2);
	v2 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			128i64,
			0i64,
			0i64,
			0);
	if (v2)
	{
		v3 = *(__m128*)(a1 + 976);
		v4 = *(__m128*)(a1 + 1008);
		v5 = *(__m128*)(a1 + 992);
		v6 = _mm_unpacklo_ps(v5, v4);
		v7 = *(__m128*)(a1 + 960);
		v8 = _mm_unpackhi_ps(v7, v3);
		v9 = _mm_unpacklo_ps(v7, v3);
		*v2 = _mm_shuffle_ps(v9, v6, 68);
		v2[1] = _mm_shuffle_ps(v9, v6, 238);
		v2[2] = _mm_shuffle_ps(v8, _mm_unpackhi_ps(v5, v4), 68);
		v10 = *(__m128*)(a1 + 1296);
		v11 = *(__m128*)(a1 + 1328);
		v12 = *(__m128*)(a1 + 1280);
		v13 = _mm_unpackhi_ps(v12, v10);
		v14 = _mm_unpacklo_ps(v12, v10);
		v15 = _mm_unpacklo_ps(*(__m128*)(a1 + 1312), v11);
		v16 = _mm_unpackhi_ps(*(__m128*)(a1 + 1312), v11);
		v2[3] = _mm_shuffle_ps(v14, v15, 68);
		v2[4] = _mm_shuffle_ps(v14, v15, 238);
		v2[5] = _mm_shuffle_ps(v13, v16, 68);
		v2[6] = _mm_shuffle_ps(v13, v16, 238);
		v2[7].m128_u64[0] = 0i64;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 224i64),
		1i64);
	v17 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		16i64,
		0i64);
	if (v17)
	{
		v18 = 0i64;
		v18.m128_f32[0] = (float)(*(_DWORD*)(a1 + 880) % 0x3E8u) * 0.0062831854;
		v18.m128_f32[0] = (float)(sub_1408FE3D0(*(double*)v18.m128_u64) + 1.0) * 0.5;
		*v17 = _mm_unpacklo_ps((__m128)xmmword_140B7A330, _mm_unpacklo_ps(v18, (__m128)0i64));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 232i64),
		0i64);
	for (i = *(__m128**)(a1 + 2336); i; i = (__m128*)i[89].m128_u64[0])
	{
		if (i[63].m128_u64[0] && (unsigned int)sub_14035BDF0((__m128*)a1, i + 16))
		{
			v20 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
				+ 256i64))(
					qword_140C65670,
					16i64,
					1i64,
					8i64,
					0);
			if (v20)
			{
				*v20 = _mm_shuffle_ps(i[12], i[12], 136);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
			}
			(*(void(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 312i64))(
				qword_140C65670,
				i[63].m128_u64[0]);
			(*(void(__fastcall**)(__int64, unsigned __int64, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
				qword_140C65670,
				i[61].m128_u64[0],
				5i64);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int32, _DWORD, int))(*(_QWORD*)qword_140C65670
				+ 656i64))(
					qword_140C65670,
					1i64,
					0i64,
					i[63].m128_u32[2],
					0,
					i[61].m128_i32[2],
					0,
					1);
		}
	}
	return 0i64;
}
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

