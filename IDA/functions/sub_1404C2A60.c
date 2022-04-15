#include "../winhttp.h"

//----- (00000001404C2A60) ----------------------------------------------------
__int64 __fastcall sub_1404C2A60(__int64 a1, __m128* a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	__int128 v7; // xmm0
	__m128 v8; // xmm4
	__m128 v9; // xmm3
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	__m128 v12; // xmm3
	__m128* v13; // rax
	__m128 v14; // xmm3
	_QWORD* v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int v18; // ecx
	unsigned int* v19; // rax
	__m128 v20; // xmm6
	__int64 v21; // rax
	__m128 v22; // xmm7
	__m128 v23; // xmm8
	__int64 v24; // rax
	__m128 v25; // xmm6
	__int64* v26; // rcx
	__int64 v27; // rax
	__m128 v28; // xmm8
	__int128* v29; // rax
	__int64 v30; // rcx
	int v31; // r15d
	int* v32; // rdi
	__m128 v33; // xmm5
	__int64 v34; // rcx
	__m128 v35; // xmm4
	__m128 v36; // xmm2
	float v37; // xmm3_4
	float v38; // xmm1_4
	__m128 v39; // xmm5
	__m128 v40; // xmm5
	__m128 v41; // xmm0
	__m128 v42; // xmm2
	__m128 v43; // xmm3
	__m128 v44; // xmm4
	__m128* v45; // rbx
	__m128* v46; // rsi
	__int64 v47; // rdi
	__int64 v48; // rax
	float v49; // xmm7_4
	float v50; // xmm7_4
	__int64 v51; // rdi
	__int64 v52; // rax
	float v53; // xmm6_4
	float v54; // xmm6_4
	float v55; // xmm0_4
	__int64 v56; // rcx
	__int64 v57; // rax
	__m128 v58; // [rsp+20h] [rbp-E0h] BYREF
	__m128 v59[2]; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v60; // [rsp+50h] [rbp-B0h]
	int v61; // [rsp+60h] [rbp-A0h]
	__int128 v62[2]; // [rsp+70h] [rbp-90h] BYREF
	__int128 v63[4]; // [rsp+90h] [rbp-70h] BYREF
	char v64[76]; // [rsp+D0h] [rbp-30h] BYREF
	int v65; // [rsp+11Ch] [rbp+1Ch]

	if (*(_DWORD*)(a1 + 128) == 6)
		return 1i64;
	v5 = *(_QWORD*)(a1 + 608);
	if (!v5)
		return 0i64;
	v6 = (*(__int64 (**)(void))(*(_QWORD*)v5 + 1208i64))();
	v7 = *(_OWORD*)(v6 + 32);
	v8 = *(__m128*)(v6 + 16);
	v61 = *(_DWORD*)(v6 + 48);
	v9 = *(__m128*)v6;
	v60 = v7;
	v10 = _mm_sub_ps(v8, v9);
	v11 = _mm_mul_ps(v10, v10);
	if (fsqrt((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) + _mm_shuffle_ps(v11, v11, 170).m128_f32[0]) <= 0.1)
	{
		v13 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(a1 + 608) + 1176i64))(
			*(_QWORD*)(a1 + 608),
			v62);
		v12 = _mm_add_ps(v13[1], *v13);
	}
	else
	{
		v12 = _mm_add_ps(v9, v8);
	}
	v14 = _mm_mul_ps(v12, (__m128)xmmword_140B7AC50);
	v15 = *(_QWORD**)(qword_140C659F0 + 824);
	v58 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 85), a2[1]), _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), *a2)),
			_mm_mul_ps(_mm_shuffle_ps(v14, v14, 170), a2[2])),
		a2[3]);
	result = sub_1405B1510(v15);
	v16 = result;
	v58.m128_u64[0] = result;
	if (result)
	{
		v17 = sub_1402070A0(*(_DWORD*)(result + 64));
		if (!v17)
			return 2147500037i64;
		v18 = *(_DWORD*)(v17 + 24);
		if (!v18)
			return 2147500037i64;
		v19 = (unsigned int*)sub_14024B980(v18);
		if (!v19)
			return 2147500037i64;
		v20 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v19[3], (__m128)v19[5]),
			_mm_unpacklo_ps((__m128)v19[4], (__m128)0i64));
		v21 = sub_140200220(0x305u);
		v22 = (__m128)0x40C00000u;
		if (v21)
			v23 = (__m128) * (unsigned int*)(v21 + 24);
		else
			v23 = (__m128)0x40C00000u;
		v24 = sub_140200220(0x304u);
		if (v24)
			v22 = (__m128) * (unsigned int*)(v24 + 24);
		v25 = _mm_sub_ps(v20, (__m128)xmmword_140B7A530);
		v26 = *(__int64**)(a1 + 608);
		LODWORD(v60) = v22.m128_i32[0];
		v27 = *v26;
		v59[0] = v25;
		v28 = _mm_add_ps(_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v23, (__m128)0i64)), v25);
		v59[1] = v28;
		v29 = (__int128*)(*(__int64(__fastcall**)(__int64*))(v27 + 80))(v26);
		v30 = *(_QWORD*)(a1 + 608);
		v63[0] = *v29;
		v63[1] = v29[1];
		v63[2] = v29[2];
		v63[3] = v29[3];
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v30 + 72i64))(v30, a2);
		v31 = 0;
		v32 = sub_14018B280(56i64, 0);
		if (v32)
		{
			*((_QWORD*)v32 + 1) = 1i64;
			v32[4] = 0;
			*((_QWORD*)v32 + 3) = 0i64;
			*((_QWORD*)v32 + 4) = 0i64;
			*((_QWORD*)v32 + 5) = 0i64;
			*(_QWORD*)v32 = off_140B5FE88;
			*((_QWORD*)v32 + 6) = 0i64;
		}
		else
		{
			v32 = 0i64;
		}
		v33 = (__m128)0x40400000u;
		v34 = *(_QWORD*)(a1 + 608);
		v35 = _mm_sub_ps(v28, v25);
		v36 = _mm_mul_ps(v35, v35);
		v37 = (float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
			+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
		v38 = fsqrt(v37);
		v33.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v37 * (float)(1.0 / v38)) * (float)(1.0 / v38))) * 0.5)
			* (float)(1.0 / v38),
			0.0);
		v39 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v35);
		v40 = _mm_mul_ps(_mm_mul_ps(v39, v39), _mm_shuffle_ps(v22, v22, 0));
		v41 = _mm_shuffle_ps(v40, v40, 85);
		v42 = _mm_shuffle_ps(v40, v40, 170);
		v43 = v42;
		v42.m128_f32[0] = v42.m128_f32[0] + v40.m128_f32[0];
		v43.m128_f32[0] = v43.m128_f32[0] + v41.m128_f32[0];
		v41.m128_f32[0] = v41.m128_f32[0] + v40.m128_f32[0];
		v44 = _mm_unpacklo_ps(_mm_unpacklo_ps(v43, v41), _mm_unpacklo_ps(v42, (__m128)0i64));
		v62[0] = (__int128)_mm_sub_ps(_mm_min_ps(v25, v28), v44);
		v62[1] = (__int128)_mm_add_ps(_mm_max_ps(v25, v28), v44);
		(*(void(__fastcall**)(__int64, __int128*, __int64, int*))(*(_QWORD*)v34 + 1320i64))(v34, v62, 4i64, v32);
		if (v32 && (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v32 + 16i64))(v32))
		{
			v45 = (__m128*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v32 + 24i64))(v32);
			v46 = &v45[3 * (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v32 + 16i64))(v32)];
			if (v45 < v46)
			{
				while (!(unsigned int)sub_1407B2D00(v59, v45))
				{
					v45 += 3;
					if (v45 >= v46)
						goto LABEL_27;
				}
				v31 = 1;
			}
		LABEL_27:
			v16 = v58.m128_u64[0];
		}
		(*(void(__fastcall**)(int*))(*(_QWORD*)v32 + 8i64))(v32);
		if (!v31)
			v31 = sub_1404C3730(a1);
		(*(void(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(a1 + 608) + 72i64))(*(_QWORD*)(a1 + 608), v63);
		if (v31)
			return 0i64;
		if (*(float*)((*(__int64(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)a1 + 128i64))(a1, v59, 0i64) + 52) != a2[3].m128_f32[1])
		{
			v47 = sub_1404C27A0(a1, (__int64)v59);
			v48 = sub_140200220(0x3D0u);
			if (v48)
				v49 = *(float*)(v48 + 24);
			else
				v49 = 30.0;
			v50 = v49 + *(float*)(v47 + 52);
			v51 = sub_1404C27A0(a1, (__int64)v59);
			v52 = sub_140200220(0x44Bu);
			if (v52)
				v53 = *(float*)(v52 + 24);
			else
				v53 = -80.0;
			v54 = v53 + *(float*)(v51 + 52);
			if (v54 <= *(float*)((*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)a1 + 120i64))(a1, v59) + 52))
			{
				v55 = a2[3].m128_f32[1];
				if (v55 <= v54 || v55 > v50)
					return 0i64;
			}
			else if (v54 <= a2[3].m128_f32[1])
			{
				return 0i64;
			}
		}
		v56 = *(_QWORD*)(qword_140C65898 + 29248);
		v58 = _mm_shuffle_ps(a2[3], a2[3], 136);
		if (!(*(unsigned int(__fastcall**)(__int64, __m128*, char*, __int64))(*(_QWORD*)v56 + 224i64))(
			v56,
			&v58,
			v64,
			128i64))
			return 1i64;
		v57 = sub_1402070A0(*(_DWORD*)(v16 + 64));
		return !v57 || v65 == *(_DWORD*)(v57 + 28);
	}
	return result;
}
// 140B5FE88: using guessed type __int64 (__fastcall *off_140B5FE88[18])();
// 140B7A530: using guessed type __int128 xmmword_140B7A530;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 1404C2A60: using guessed type char var_100[76];

