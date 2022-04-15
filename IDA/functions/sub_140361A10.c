#include "../winhttp.h"

//----- (0000000140361A10) ----------------------------------------------------
__int64 __fastcall sub_140361A10(__int64 a1)
{
	__m128* v2; // rax
	__m128 v3; // xmm4
	__m128 v4; // xmm3
	__m128 v5; // xmm2
	__m128 v6; // xmm6
	__m128 v7; // xmm2
	__m128 v8; // xmm1
	__m128 v9; // xmm5
	__m128 v10; // xmm1
	__m128 v11; // xmm0
	__m128 v12; // xmm1
	__m128 v13; // xmm3
	__m128 v14; // xmm5
	__m128 v15; // xmm3
	__m128 v16; // xmm2
	__m128 v17; // xmm4
	__m128 v18; // xmm2
	__m128* v19; // rbx
	float v20; // xmm0_4
	float v21; // xmm0_4
	__m128* v22; // rax
	__int64 result; // rax
	unsigned __int64 v24; // [rsp+50h] [rbp+8h]

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		1i64,
		1i64,
		3i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 392i64))(qword_140C65670, 8i64);
	if ((*(_DWORD*)(a1 + 132) & 0x400) != 0 || (*(_DWORD*)(a1 + 128) & 0x4000000) != 0)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 2i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 144i64),
		0i64);
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
		v5 = *(__m128*)(a1 + 960);
		v6 = _mm_unpackhi_ps(v5, v3);
		v7 = _mm_unpacklo_ps(v5, v3);
		v8 = *(__m128*)(a1 + 992);
		v9 = _mm_unpackhi_ps(v8, v4);
		v10 = _mm_unpacklo_ps(v8, v4);
		*v2 = _mm_shuffle_ps(v7, v10, 68);
		v2[1] = _mm_shuffle_ps(v7, v10, 238);
		v2[2] = _mm_shuffle_ps(v6, v9, 68);
		v11 = *(__m128*)(a1 + 1296);
		v12 = *(__m128*)(a1 + 1328);
		v13 = *(__m128*)(a1 + 1280);
		v14 = _mm_unpackhi_ps(v13, v11);
		v15 = _mm_unpacklo_ps(v13, v11);
		v16 = *(__m128*)(a1 + 1312);
		v17 = _mm_unpackhi_ps(v16, v12);
		v18 = _mm_unpacklo_ps(v16, v12);
		v2[3] = _mm_shuffle_ps(v15, v18, 68);
		v2[4] = _mm_shuffle_ps(v15, v18, 238);
		v2[5] = _mm_shuffle_ps(v14, v17, 68);
		v2[6] = _mm_shuffle_ps(v14, v17, 238);
		LODWORD(v24) = *(_DWORD*)(a1 + 864);
		HIDWORD(v24) = *(_DWORD*)(a1 + 872);
		v2[7].m128_u64[0] = v24;
		v2[7].m128_i32[2] = 1065353216;
		v2[7].m128_f32[3] = -*(float*)(a1 + 4256);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	v19 = *(__m128**)(a1 + 2336);
	if (!v19)
		return 0i64;
	while (1)
	{
		if (!*(_DWORD*)(a1 + 852)
			|| ((v20 = v19[17].m128_f32[1] - *(float*)(a1 + 916), v20 <= 0.0)
				? (v21 = v20 * v19[81].m128_f32[2])
				: (v21 = v20 * v19[81].m128_f32[1]),
				v21 >= v19[81].m128_f32[0]))
		{
			if ((unsigned int)sub_14035BDF0((__m128*)a1, v19 + 16))
			{
				v22 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
					+ 256i64))(
						qword_140C65670,
						16i64,
						1i64,
						8i64,
						0);
				if (v22)
				{
					*v22 = _mm_shuffle_ps(v19[12], v19[12], 136);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
				}
				result = sub_140384480((__int64)v19, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 136i64), 0i64, 1u);
				if ((int)result < 0)
					break;
			}
		}
		v19 = (__m128*)v19[89].m128_u64[0];
		if (!v19)
			return 0i64;
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;

