#include "../winhttp.h"

//----- (000000014035EFF0) ----------------------------------------------------
__int64 __fastcall sub_14035EFF0(__int64 a1)
{
	__m128 v2; // xmm6
	__int64 v3; // rdi
	__int64 v4; // rsi
	__m128i v5; // xmm1
	__m128i v6; // xmm1
	__int64 v7; // rax
	__int64 v8; // rax
	__m128 v9; // xmm3
	int v10; // eax
	bool v11; // zf
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // r9
	__int64 v15; // rax
	__int64 v16; // rax
	__m128 v17; // xmm3
	__int64 v18; // rax
	int v19; // eax
	__int64 v21; // [rsp+20h] [rbp-68h]
	__m128 v22; // [rsp+30h] [rbp-58h] BYREF
	int v23; // [rsp+44h] [rbp-44h]

	if (*(_QWORD*)(a1 + 576) || (*(_DWORD*)(a1 + 132) & 0x400000) != 0)
	{
		v2 = (__m128)0x3F800000u;
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 56i64))(qword_140C65688, 6i64))
		{
			v22 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 624i64))(
				qword_140C65670,
				1i64,
				&v22);
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 208i64))(qword_140C65688);
		if ((*(_DWORD*)(a1 + 132) & 0x400000) != 0)
		{
			v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				0i64,
				*(_QWORD*)(v3 + 72),
				0i64,
				v15);
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				1i64,
				*(_QWORD*)(v3 + 64));
			v16 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
				qword_140C65670,
				48i64,
				0i64);
			if (v16)
			{
				v17 = (__m128)0x3F800000u;
				v17.m128_f32[0] = 1.0 / (float)*(int*)(v3 + 88);
				v2.m128_f32[0] = 1.0 / (float)*(int*)(v3 + 92);
				v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)0i64), _mm_unpacklo_ps(v2, (__m128)0i64));
				*(_QWORD*)v16 = v22.m128_u64[0];
				*(_DWORD*)(v16 + 8) = *(_DWORD*)(a1 + 5776);
				*(_OWORD*)(v16 + 16) = *(_OWORD*)(a1 + 512);
				*(_OWORD*)(v16 + 32) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 248i64))(qword_140C65688);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
			}
			v18 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
				qword_140C65670,
				96i64,
				1i64,
				3i64,
				0i64);
			if (v18)
			{
				*(_QWORD*)v18 = *(_QWORD*)(a1 + 5712);
				*(_QWORD*)(v18 + 8) = *(_QWORD*)(a1 + 5760);
				*(_OWORD*)(v18 + 16) = *(_OWORD*)(a1 + 528);
				*(_QWORD*)(v18 + 32) = *(_QWORD*)(a1 + 5704);
				*(_QWORD*)(v18 + 40) = *(_QWORD*)(a1 + 5768);
				*(_OWORD*)(v18 + 48) = *(_OWORD*)(a1 + 544);
				*(_QWORD*)(v18 + 64) = *(_QWORD*)(a1 + 5720);
				*(_QWORD*)(v18 + 72) = *(_QWORD*)(a1 + 5752);
				*(_OWORD*)(v18 + 80) = *(_OWORD*)(a1 + 560);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
			}
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 448i64),
				1i64);
			LODWORD(v21) = 7;
			v19 = dword_140C40550;
			if (*(_DWORD*)qword_140C63750 < dword_140C40550)
				v19 = *(_DWORD*)qword_140C63750;
			v11 = *((_BYTE*)&off_140C40540 + v19 + 32) == 0;
			v12 = qword_140C65670;
			v13 = *(_QWORD*)qword_140C65670;
			if (v11)
				v14 = 0i64;
			else
				v14 = 2i64;
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
				qword_140C65670,
				64i64,
				64i64,
				64i64);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 432i64))(
				qword_140C65670,
				0i64,
				0i64,
				0i64,
				2);
			v22.m128_u64[1] = *(_QWORD*)(v4 + 8);
			v22.m128_i32[0] = 1;
			v23 = 0;
			(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
				qword_140C65670,
				&v22,
				&unk_140C3FE88,
				&unk_140C3FE88,
				&unk_140C3FE88);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88i64),
				0i64);
			v5 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v6 = _mm_packus_epi16(v5, v5);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 664i64))(
				qword_140C65670,
				(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v6, v6)),
				*(_QWORD*)qword_140C65670,
				v3 + 88,
				v3 + 96,
				v3 + 96);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 72i64))(qword_140C65688);
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				0i64,
				*(_QWORD*)(v3 + 72),
				0i64,
				v7);
			HIDWORD(v21) = 0;
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				1i64,
				*(_QWORD*)(v4 + 8));
			v8 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
				qword_140C65670,
				48i64,
				0i64);
			if (v8)
			{
				v9 = (__m128)0x3F800000u;
				v9.m128_f32[0] = 1.0 / (float)*(int*)(v3 + 88);
				v2.m128_f32[0] = 1.0 / (float)*(int*)(v3 + 92);
				v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, (__m128)0i64), _mm_unpacklo_ps(v2, (__m128)0i64));
				*(_QWORD*)v8 = v22.m128_u64[0];
				*(_DWORD*)(v8 + 8) = 1065353216;
				*(_OWORD*)(v8 + 16) = *(_OWORD*)(a1 + 512);
				*(_OWORD*)(v8 + 32) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 248i64))(qword_140C65688);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
			}
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 448i64),
				0i64);
			v10 = dword_140C40550;
			LODWORD(v21) = 7;
			if (*(_DWORD*)qword_140C63750 < dword_140C40550)
				v10 = *(_DWORD*)qword_140C63750;
			v11 = *((_BYTE*)&off_140C40540 + v10 + 32) == 0;
			v12 = qword_140C65670;
			v13 = *(_QWORD*)qword_140C65670;
			if (v11)
				v14 = 1i64;
			else
				v14 = 2i64;
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64))(v13 + 432))(v12, 0i64, 0i64, v14, v21);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 664i64))(
			qword_140C65670,
			0xFFFFFFFFi64,
			*(_QWORD*)qword_140C65670,
			v3 + 88,
			v3 + 96,
			v3 + 96);
	}
	return 0i64;
}
// 14035F526: variable 'v21' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C40540: using guessed type __int64 (__fastcall **off_140C40540)();
// 140C40550: using guessed type int dword_140C40550;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 14035EFF0: using guessed type __m128 var_58;

