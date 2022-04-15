#include "../winhttp.h"

//----- (0000000140359A20) ----------------------------------------------------
__int64 __fastcall sub_140359A20(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // r14
	__int64 v4; // rcx
	__int128 v5; // xmm0
	int i; // ebp
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rdx
	__m128 v10; // xmm1
	__m128* v11; // r15
	__m128 v12; // xmm2
	int v13; // r10d
	int v14; // eax
	int v15; // r9d
	__int64 v16; // rax
	__int64 v17; // rsi
	__int64 v18; // rdi
	__int128 v19; // xmm1
	__m128* v20; // rax
	__m128* v21; // rax
	__m128 v22; // xmm4
	__m128 v23; // xmm5
	__m128 v24; // xmm6
	__m128* v25; // rdx
	__m128 v26; // xmm7
	char* v27; // rcx
	__m128 v28; // xmm3
	__m128* v29; // rax
	__int64 v30; // rcx
	__m128 v31; // xmm3
	__m128 v32; // xmm2
	char* v33; // rax
	__int128 v34; // xmm0
	__int64 result; // rax
	__m128 v36; // [rsp+30h] [rbp-178h] BYREF
	__int128 v37; // [rsp+40h] [rbp-168h]
	char v38[64]; // [rsp+50h] [rbp-158h] BYREF
	char v39[96]; // [rsp+90h] [rbp-118h] BYREF
	__m128 v40[6]; // [rsp+F0h] [rbp-B8h] BYREF

	v1 = a1 + 1776;
	v2 = 6i64;
	v4 = 6i64;
	do
	{
		v5 = *(_OWORD*)(v1 - 1776 + 1680);
		v1 += 16i64;
		*(_OWORD*)(v1 - 16) = v5;
		--v4;
	} while (v4);
	if (qword_140C657F0)
		sub_1402C8500(
			(_QWORD*)qword_140C657F0,
			(_OWORD*)(a1 + 960),
			(_OWORD*)(a1 + 1280),
			a1 + 1680,
			(_DWORD*)(a1 + 1600),
			(int*)(a1 + 3504));
	for (i = 0; *(_QWORD*)(a1 + 5464); *(_QWORD*)(v7 + 328) = 0i64)
	{
		v7 = *(_QWORD*)(a1 + 5464);
		v8 = *(_QWORD**)(v7 + 320);
		if (v8)
			*v8 = *(_QWORD*)(v7 + 328);
		v9 = *(_QWORD*)(v7 + 328);
		if (v9)
			*(_QWORD*)(v9 + 320) = *(_QWORD*)(v7 + 320);
		*(_QWORD*)(v7 + 320) = 0i64;
	}
	*(_QWORD*)(a1 + 5432) = 0i64;
	if (*(_DWORD*)(a1 + 1608))
	{
		result = *(_QWORD*)(a1 + 5464);
		*(_QWORD*)(a1 + 5440) = result;
	}
	else
	{
		v10 = *(__m128*)(a1 + 912);
		v11 = (__m128*)(a1 + 1872);
		v36 = *(__m128*)(a1 + 1872);
		v37 = *(_OWORD*)(a1 + 1888);
		v12 = _mm_mul_ps(
			_mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(
					_mm_shuffle_ps(v10, v10, 136),
					_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
			(__m128)xmmword_140B7B490);
		v13 = (int)v12.m128_f32[0];
		v14 = (int)_mm_shuffle_ps(v12, v12, 85).m128_f32[0];
		if ((int)v12.m128_f32[0] >= *(_DWORD*)(a1 + 2188)
			&& v13 < *(_DWORD*)(a1 + 2196)
			&& v14 >= *(_DWORD*)(a1 + 2192)
			&& v14 < *(_DWORD*)(a1 + 2200))
		{
			v15 = *(_DWORD*)(a1 + 2204);
			v16 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
				+ 8i64
				* (v13 % v15
					+ v15
					* (v14 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v14 % *(_DWORD*)(a1 + 2208) < 0))
					+ v15 * (unsigned int)(v13 % v15 < 0)));
			if (v16)
			{
				v17 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 40i64);
				if (v17)
				{
					while (1)
					{
						v18 = *(_QWORD*)(v17 + 8);
						if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18))
						{
							if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v18 + 32i64))(
								v18,
								a1 + 912,
								0i64,
								0i64))
							{
								break;
							}
						}
						v17 = *(_QWORD*)(v17 + 24);
						if (!v17)
							goto LABEL_23;
					}
					v36 = (__m128)xmmword_140C78500;
					v37 = xmmword_140C78510;
					sub_140390F20(v18, (__m128*)(a1 + 1872), &v36);
					*(_QWORD*)(a1 + 5432) = v18;
				}
			}
		}
	LABEL_23:
		if ((*(_DWORD*)(a1 + 128) & 0x1000000) != 0)
		{
			v19 = v37;
			*v11 = v36;
			*(_OWORD*)(a1 + 1888) = v19;
			if (*(float*)(a1 + 1888) <= v11->m128_f32[0] || *(float*)(a1 + 1892) <= *(float*)(a1 + 1876))
				i = 1;
			*(_DWORD*)(a1 + 1904) = i;
			if (!i)
			{
				v20 = (__m128*)sub_140359840((__m128*)a1, (__int64)v38, (__m128*)(a1 + 1872));
				v21 = sub_1401B20F0(v40, v20);
				v22 = *(__m128*)(a1 + 1024);
				v23 = *(__m128*)(a1 + 1040);
				v24 = *(__m128*)(a1 + 1056);
				v25 = v21 + 6;
				v26 = *(__m128*)(a1 + 1072);
				if (v21 < &v21[6])
				{
					v27 = (char*)(v39 - (char*)v21);
					do
					{
						_mm_prefetch(&v21[1].m128_i8[8], 0);
						v28 = *v21++;
						_mm_stream_ps(
							(float*)&v27[(_QWORD)v21 - 16],
							_mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v23),
										_mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v22)),
									_mm_mul_ps(_mm_shuffle_ps(v28, v28, 170), v24)),
								_mm_mul_ps(_mm_shuffle_ps(v28, v28, 255), v26)));
					} while (v21 < v25);
				}
				_mm_sfence();
				v29 = (__m128*)v39;
				v30 = 6i64;
				do
				{
					v31 = *v29++;
					v32 = _mm_mul_ps(v31, v31);
					v32.m128_f32[0] = 1.0
						/ fsqrt(
							(float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
							+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0]);
					v29[-1] = _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31);
					--v30;
				} while (v30);
				v33 = v39;
				do
				{
					v34 = *(_OWORD*)v33;
					v33 += 16;
					*(_OWORD*)&v33[a1 + 1680 - (_QWORD)v39 - 16] = v34;
					--v2;
				} while (v2);
			}
		}
		result = *(_QWORD*)(a1 + 5464);
		*(_QWORD*)(a1 + 5440) = result;
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 140C78500: using guessed type __int128 xmmword_140C78500;
// 140C78510: using guessed type __int128 xmmword_140C78510;
// 140359A20: using guessed type char var_158[64];
// 140359A20: using guessed type __m128 var_B8[6];

