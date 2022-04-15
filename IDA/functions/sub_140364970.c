#include "../winhttp.h"

//----- (0000000140364970) ----------------------------------------------------
__int64 __fastcall sub_140364970(__int64 a1, __int64 a2, int a3)
{
	__int64 v5; // rax
	_QWORD** v6; // rbx
	float v7; // xmm0_4
	__int64 v8; // rdx
	__int64 v9; // rcx
	float v10; // xmm6_4
	__m128* v11; // rax
	__m128 v12; // xmm1
	float v13; // xmm8_4
	__int128* v14; // rax
	__m128 v16; // [rsp+38h] [rbp-D0h]
	__m128 v17; // [rsp+48h] [rbp-C0h]
	_OWORD v18[4]; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v19; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v20; // [rsp+B8h] [rbp-50h]
	__int128 v21[3]; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v22; // [rsp+F8h] [rbp-10h]
	double v23[16]; // [rsp+108h] [rbp+0h] BYREF
	__int128 v24; // [rsp+188h] [rbp+80h]
	float v25; // [rsp+198h] [rbp+90h]
	__int64 v26; // [rsp+19Ch] [rbp+94h]
	float v27; // [rsp+1A8h] [rbp+A0h]
	float v28; // [rsp+1ACh] [rbp+A4h]
	int v29; // [rsp+1B4h] [rbp+ACh]
	int v30; // [rsp+1B8h] [rbp+B0h]
	__int64 i; // [rsp+1C8h] [rbp+C0h]
	__m128* v32[2]; // [rsp+1D8h] [rbp+D0h] BYREF
	__m128 v33[2]; // [rsp+1E8h] [rbp+E0h] BYREF
	int v34; // [rsp+208h] [rbp+100h]
	int v35; // [rsp+210h] [rbp+108h]
	__m128* v36; // [rsp+228h] [rbp+120h] BYREF

	sub_1407E4830((int*)&v19, 0i64, 0x130ui64);
	v5 = *(_QWORD*)(a1 + 16);
	v30 = a3;
	v24 = xmmword_140B7B240;
	v6 = *(_QWORD***)(a1 + 5288);
	v26 = 1065353216i64;
	v29 = 1184;
	for (i = *(_QWORD*)(v5 + 384); v6; v6 = (_QWORD**)v6[137])
	{
		if (((unsigned int(__fastcall*)(_QWORD**))(*v6)[43])(v6))
		{
			v7 = sub_14038C510((__int64)v6, *(_DWORD*)(a1 + 880));
			v10 = v7 * ((float(__fastcall*)(__int64, __int64))(*v6)[18])(v9, v8);
			if (v10 > 0.0)
			{
				v11 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD))(*v6[4] + 424i64))(v6[4], 150i64, 0i64);
				v12 = _mm_add_ps((__m128)xmmword_140B7A6A0, v11[5]);
				v19 = _mm_sub_ps(v11[4], (__m128)xmmword_140B7A6A0);
				v17 = v19;
				v20 = v12;
				v16 = _mm_sub_ps(v12, v19);
				v13 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
				v19.m128_f32[1] = _mm_shuffle_ps(v19, v19, 85).m128_f32[0] - (float)(v13 * 0.5);
				v20.m128_f32[1] = _mm_shuffle_ps(v12, v12, 85).m128_f32[0] - (float)(v13 * 0.5);
				v14 = (__int128*)((__int64(__fastcall*)(_QWORD**))(*v6)[7])(v6);
				v21[0] = *v14;
				v21[1] = v14[1];
				v21[2] = v14[2];
				v22 = v14[3];
				if ((*(unsigned int(__fastcall**)(_QWORD*, __int64))(*v6[4] + 464i64))(v6[4], 128i64))
				{
					(*(void(__fastcall**)(_QWORD*, __int64, __m128**))(*v6[4] + 480i64))(v6[4], 128i64, v32);
					LODWORD(v22) = v34;
					DWORD2(v22) = v35;
				}
				v18[2] = xmmword_140C78420;
				v18[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v16.m128_u32[0], (__m128)0i64), (__m128)0i64);
				v18[1] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, (__m128)v16.m128_u32[2]), (__m128)0i64);
				v32[1] = (__m128*)v21;
				v32[0] = (__m128*)v18;
				v18[3] = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v17.m128_u32[0], (__m128)v17.m128_u32[2]),
					_mm_unpacklo_ps((__m128)v17.m128_u32[1], (__m128)0x3F800000u));
				sub_1401AFB10(v32, v33);
				v36 = v33;
				sub_1401AFC20((__int64*)&v36, v23);
				v28 = v13 * 0.5;
				v25 = v10;
				v27 = v13 * 0.25;
				(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65688 + 104i64))(qword_140C65688, &v19);
			}
		}
	}
	return 0i64;
}
// 140364A78: variable 'v9' is possibly undefined
// 140364A78: variable 'v8' is possibly undefined
// 140B7A6A0: using guessed type __int128 xmmword_140B7A6A0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140364970: using guessed type __m128 var_110[2];
// 140364970: using guessed type double var_1F0[16];

