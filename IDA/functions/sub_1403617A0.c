#include "../winhttp.h"

//----- (00000001403617A0) ----------------------------------------------------
__int64 __fastcall sub_1403617A0(__int64 a1)
{
	unsigned int v2; // esi
	__m128* v3; // rax
	__m128 v4; // xmm4
	__m128 v5; // xmm3
	__m128 v6; // xmm2
	__m128 v7; // xmm6
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	__m128 v10; // xmm5
	__m128 v11; // xmm1
	__m128 v12; // xmm0
	__m128 v13; // xmm2
	__m128 v14; // xmm3
	__m128 v15; // xmm5
	__m128 v16; // xmm3
	__m128 v17; // xmm1
	__m128 v18; // xmm4
	__m128* v19; // rbx
	float v20; // xmm0_4
	float v21; // xmm0_4
	__int64 result; // rax
	__int128 v23; // [rsp+30h] [rbp-28h] BYREF
	unsigned __int64 v24; // [rsp+60h] [rbp+8h]

	sub_14035A150((__m128*)a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	v23 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		7i64,
		&v23);
	v2 = dword_140B65808[*(int*)(a1 + 144)];
	v3 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			144i64,
			0i64,
			0i64,
			0);
	if (v3)
	{
		v4 = *(__m128*)(a1 + 976);
		v5 = *(__m128*)(a1 + 1008);
		v6 = *(__m128*)(a1 + 960);
		v7 = _mm_unpackhi_ps(v6, v4);
		v8 = _mm_unpacklo_ps(v6, v4);
		v9 = *(__m128*)(a1 + 992);
		v10 = _mm_unpackhi_ps(v9, v5);
		v11 = _mm_unpacklo_ps(v9, v5);
		*v3 = _mm_shuffle_ps(v8, v11, 68);
		v3[1] = _mm_shuffle_ps(v8, v11, 238);
		v3[2] = _mm_shuffle_ps(v7, v10, 68);
		v12 = *(__m128*)(a1 + 1296);
		v13 = *(__m128*)(a1 + 1328);
		v14 = *(__m128*)(a1 + 1280);
		v15 = _mm_unpackhi_ps(v14, v12);
		v16 = _mm_unpacklo_ps(v14, v12);
		v17 = _mm_unpacklo_ps(*(__m128*)(a1 + 1312), v13);
		v18 = _mm_unpackhi_ps(*(__m128*)(a1 + 1312), v13);
		v3[3] = _mm_shuffle_ps(v16, v17, 68);
		v3[4] = _mm_shuffle_ps(v16, v17, 238);
		v3[5] = _mm_shuffle_ps(v15, v18, 68);
		v3[6] = _mm_shuffle_ps(v15, v18, 238);
		v3[7].m128_f32[0] = -1.0 / *(float*)&dword_140C44018;
		LODWORD(v24) = *(_DWORD*)(a1 + 864);
		HIDWORD(v24) = *(_DWORD*)(a1 + 872);
		v3[8].m128_u64[0] = v24;
		v3[8].m128_i32[2] = 1065353216;
		v3[8].m128_f32[3] = -*(float*)(a1 + 4256);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 104i64),
		v2);
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
				result = sub_140384320(v19, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 104i64), v2, v2 + 4);
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
// 140B65808: using guessed type int dword_140B65808[4];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C44018: using guessed type int dword_140C44018;
// 140C65670: using guessed type __int64 qword_140C65670;

