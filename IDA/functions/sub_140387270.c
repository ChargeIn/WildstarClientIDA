#include "../winhttp.h"

//----- (0000000140387270) ----------------------------------------------------
__int64 __fastcall sub_140387270(__int64 a1, __m128* a2, __int64 a3)
{
	__m128 v5; // xmm4
	unsigned int v6; // edx
	__m128i v7; // xmm3
	signed int v8; // eax
	__int64 v9; // rcx
	__m128i v10; // xmm2
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // r15
	__int64 v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // rdi
	__int64 v17; // rsi
	__int64 v18; // rax
	__m128* v19; // rsi
	__int64 v20; // rbx
	__int64 v21; // rax
	__m128* v22; // rax
	__m128 v23; // xmm0
	__int64 v24; // r15
	__m128* v25; // rax
	float v26; // xmm7_4
	__int64 v27; // rcx
	__m128* v28; // rbx
	__int64 v29; // rdi
	float v30; // xmm6_4
	__int64 v31; // rax
	unsigned int v32; // ebx
	__m128* v33; // rdi
	__int64 v34; // rsi
	__m128 v35; // xmm2
	__m128 v36; // xmm1
	float v37; // xmm6_4
	__int64 v38; // rax
	int v39; // edx
	unsigned int v40; // ecx
	_DWORD* v41; // rax
	__int64 result; // rax
	__int64 v43; // rcx
	_QWORD v44[2]; // [rsp+28h] [rbp-69h] BYREF
	unsigned int v45; // [rsp+38h] [rbp-59h]
	int v46; // [rsp+3Ch] [rbp-55h]
	__m128 v47; // [rsp+48h] [rbp-49h] BYREF
	__m128 v48; // [rsp+58h] [rbp-39h] BYREF
	__m128 v49[5]; // [rsp+68h] [rbp-29h] BYREF
	__int64 v50; // [rsp+F8h] [rbp+67h] BYREF
	__int64 v51; // [rsp+100h] [rbp+6Fh] BYREF

	v5 = _mm_mul_ps(*a2, (__m128)xmmword_140B7B450);
	v6 = (int)v5.m128_f32[0];
	v47 = v5;
	if ((int)v5.m128_f32[0] > 63)
		v6 = 63;
	v45 = v6;
	v7 = _mm_cvtsi32_si128(v6);
	v8 = (int)_mm_shuffle_ps(v5, v5, 85).m128_f32[0];
	if (v8 > 63)
		v8 = 63;
	v9 = *(_QWORD*)(a1 + 16);
	v46 = v8;
	v10 = _mm_cvtsi32_si128(0);
	v44[1] = *(unsigned __int128*)&_mm_sub_ps(
		(__m128)xmmword_140B7B240,
		_mm_sub_ps(
			v5,
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(v7, v10),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), v10))))) >> 64;
	v44[0] = 0i64;
	(*(void(__fastcall**)(__int64, __int64, _QWORD*, __int64))(*(_QWORD*)v9 + 72i64))(v9, 1i64, v44, 1i64);
	v11 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v44[0] + 24i64))(v44[0]);
	v12 = *(_QWORD*)(a1 + 16);
	v51 = 0i64;
	v13 = v11;
	(*(void(__fastcall**)(__int64, __int64, __int64*, __int64))(*(_QWORD*)v12 + 72i64))(v12, 17i64, &v51, 1i64);
	v14 = *(_QWORD*)(a1 + 16);
	v50 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int64*, __int64))(*(_QWORD*)v14 + 72i64))(v14, 18i64, &v50, 1i64);
	v15 = v50;
	v16 = v51;
	v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v50 + 16i64))(v50);
	v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 24i64))(v15);
	v19 = sub_140250F60(&v48, v18, *(_DWORD*)(v17 + 44), &v47);
	v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
	v21 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 24i64))(v16);
	v22 = sub_140250F60(v49, v21, *(_DWORD*)(v20 + 44), &v47);
	if (v22->m128_f32[3] >= 0.5)
	{
		v47 = _mm_sub_ps(_mm_add_ps(*v22, _mm_mul_ps(*v19, (__m128)xmmword_140B7A790)), (__m128)xmmword_140B7B240);
		v47.m128_f32[3] = (float)((float)(1.0 - v47.m128_f32[0]) - _mm_shuffle_ps(v47, v47, 85).m128_f32[0])
			- _mm_shuffle_ps(v47, v47, 170).m128_f32[0];
		v23 = _mm_min_ps(_mm_max_ps((__m128)0i64, v47), (__m128)xmmword_140B7B240);
	}
	else
	{
		v23 = 0i64;
	}
	v24 = v13 - (_QWORD)&v47;
	v47 = v23;
	v25 = &v47;
	v26 = 0.0;
	v27 = 4i64;
	do
	{
		if (!*(__int32*)((char*)v25->m128_i32 + v24))
			v25->m128_i32[0] = 0;
		v25 = (__m128*)((char*)v25 + 4);
		--v27;
	} while (v27);
	v28 = &v47;
	v29 = 4i64;
	do
	{
		v30 = v28->m128_f32[0];
		if (v28->m128_f32[0] != 0.0)
		{
			v26 = v26 + v30;
			if (qword_140C65878)
			{
				v31 = sub_140350CD0(qword_140C65878, *(unsigned __int32*)((char*)v28->m128_u32 + v24));
				if (v31)
					v28->m128_f32[0] = (float)((float)((float)((float)*(unsigned __int8*)(v31 + 59) * 0.0039215689)
						* *(float*)(v31 + 16))
						+ *(float*)(v31 + 20))
					* v30;
			}
		}
		v28 = (__m128*)((char*)v28 + 4);
		--v29;
	} while (v29);
	v32 = 0;
	if (v26 != 0.0)
	{
		v33 = &v47;
		v34 = 4i64;
		v35 = _mm_mul_ps(v47, v47);
		v36 = _mm_add_ps(v35, _mm_shuffle_ps(v35, v35, 78));
		v36.m128_f32[0] = v26 / (float)(_mm_shuffle_ps(v36, v36, 177).m128_f32[0] + v36.m128_f32[0]);
		v47 = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v35);
		do
		{
			v37 = v33->m128_f32[0];
			if (v33->m128_f32[0] != 0.0)
			{
				if (qword_140C65878)
				{
					v38 = sub_140350CD0(qword_140C65878, *(unsigned __int32*)((char*)v33->m128_u32 + v24));
					if (v38)
					{
						v39 = *(_DWORD*)(v38 + 64);
						if (v39)
						{
							v40 = 0;
							if (v32)
							{
								v41 = (_DWORD*)(a3 + 36);
								while (*v41 != v39)
								{
									++v40;
									++v41;
									if (v40 >= v32)
										goto LABEL_30;
								}
								*(float*)(a3 + 4i64 * v40 + 16) = v37 + *(float*)(a3 + 4i64 * v40 + 16);
							}
						LABEL_30:
							if (v40 == v32)
							{
								++v32;
								*(_DWORD*)(a3 + 4i64 * v40 + 36) = v39;
								*(float*)(a3 + 4i64 * v40 + 16) = v37;
							}
						}
					}
				}
			}
			v33 = (__m128*)((char*)v33 + 4);
			--v34;
		} while (v34);
	}
	result = v32;
	if (v32 < 4)
	{
		result = a3 + 4 * (v32 + 4i64);
		v43 = 4 - v32;
		do
		{
			*(_DWORD*)(result + 20) = 0;
			*(_DWORD*)result = 0;
			result += 4i64;
			--v43;
		} while (v43);
	}
	if (v50)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v50 + 8i64))(v50);
	if (v51)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v51 + 8i64))(v51);
	if (v44[0])
		return (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v44[0] + 8i64))(v44[0]);
	return result;
}
// 140B7A790: using guessed type __int128 xmmword_140B7A790;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B450: using guessed type __int128 xmmword_140B7B450;
// 140C65878: using guessed type __int64 qword_140C65878;
// 140387270: using guessed type __m128 var_80[5];

