#include "../winhttp.h"

//----- (00000001400E7DF0) ----------------------------------------------------
void** __fastcall sub_1400E7DF0(__int64 a1, int* a2, __int64 a3, __int64 a4)
{
	void** result; // rax
	__int128 v5; // xmm1
	__int128 v8; // xmm0
	__int128 v9; // xmm1
	__int64 v10; // rdi
	int* v12; // r14
	int v13; // r12d
	int v14; // r13d
	unsigned int* v15; // rax
	__m128i v16; // xmm0
	__m128i v17; // xmm1
	__m128i v18; // xmm3
	__int64 v19; // rax
	__m128 v20; // xmm9
	unsigned int* v21; // rax
	__m128 v22; // xmm8
	__int64 v23; // rcx
	unsigned int* v24; // rax
	__m128i v25; // xmm2
	__int64 v26; // rcx
	unsigned int* v27; // rax
	unsigned int v28; // edx
	__m128i v29; // xmm0
	float v30; // xmm7_4
	__int64 v31; // rcx
	float v32; // xmm6_4
	__m128 v33; // xmm12
	_DWORD* v34; // rax
	__int64 v35; // rax
	int v36; // ecx
	__m128i v37; // xmm1
	__m128i v38; // xmm3
	int v39; // ecx
	float v40; // xmm1_4
	float v41; // xmm2_4
	float v42; // xmm2_4
	int v43; // r14d
	int v44; // edi
	unsigned int v45; // ecx
	unsigned int v46; // r8d
	unsigned int v47; // eax
	unsigned int v48; // edx
	__m128i v49; // xmm2
	float v50; // xmm1_4
	float v51; // xmm1_4
	__m128 v52; // [rsp+28h] [rbp-79h] BYREF
	__m128 v53; // [rsp+38h] [rbp-69h] BYREF
	__m128 v54; // [rsp+48h] [rbp-59h]
	__int128 v55; // [rsp+58h] [rbp-49h]
	__int128 v56; // [rsp+68h] [rbp-39h]
	void* retaddr; // [rsp+100h] [rbp+5Fh] BYREF
	int v58; // [rsp+110h] [rbp+6Fh] BYREF

	result = &retaddr;
	*(_QWORD*)&v55 = 0i64;
	*(_QWORD*)&v56 = 0i64;
	v5 = v56;
	*(_OWORD*)a3 = v55;
	*(_QWORD*)&v55 = 0i64;
	*(_QWORD*)&v56 = 0i64;
	v8 = v55;
	*(_OWORD*)(a3 + 16) = v5;
	v9 = v56;
	v10 = (__int64)a2;
	*(_OWORD*)a4 = v8;
	*(_OWORD*)(a4 + 16) = v9;
	if (a2)
	{
		v12 = a2 + 169;
		if (a2[169] != 2)
		{
			v13 = *(_DWORD*)(a1 + 84);
			v14 = *(_DWORD*)(a1 + 80);
			v15 = (unsigned int*)(*(__int64(__fastcall**)(int*, int*))(*(_QWORD*)a2 + 184i64))(a2, &v58);
			v16 = _mm_cvtsi32_si128(0);
			v17 = _mm_cvtsi32_si128(v15[1]);
			v18 = _mm_cvtsi32_si128(*v15);
			v19 = *(_QWORD*)v10;
			v20 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v18, v16), _mm_unpacklo_epi32(v17, v16)));
			v52 = v20;
			v21 = (unsigned int*)(*(__int64(__fastcall**)(__int64, int*))(v19 + 192))(v10, &v58);
			v22 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v21), v16),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v21[1]), v16)));
			if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v10 + 136i64))(v10)
				&& !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 168i64))(v10))
			{
				v23 = *(_QWORD*)(a1 + 2936);
				if (v23)
				{
					v24 = sub_1400E13C0(v23, &v58);
					v25 = _mm_cvtsi32_si128(0);
					v20 = _mm_add_ps(
						_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v24), v25),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24[1]), v25))),
						v20);
					v52 = v20;
				}
			}
			if ((_mm_movemask_ps(_mm_cmpneq_ps((__m128)0i64, v22)) & 3) == 0
				|| (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v10 + 136i64))(v10)
				|| (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 176i64))(v10)
				|| (v26 = *(_QWORD*)(a1 + 2936)) == 0)
			{
				v28 = 0;
			}
			else
			{
				v27 = sub_1400E13C0(v26, &v58);
				v28 = 0;
				v29 = _mm_cvtsi32_si128(0);
				v22 = _mm_add_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v27), v29),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v27[1]), v29))),
					v22);
			}
			v55 = (__int128)v20;
			v30 = v20.m128_f32[0];
			if (v22.m128_f32[0] > 0.0)
				v30 = v20.m128_f32[0] + (float)(v22.m128_f32[0] + 2.0);
			v31 = *(_QWORD*)(v10 + 16);
			v32 = fmaxf(v52.m128_f32[1], _mm_shuffle_ps(v22, v22, 85).m128_f32[0]);
			v33 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(a1 + 2832)), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(a1 + 2832) + 4i64)), _mm_cvtsi32_si128(0))));
			v55 = (__int128)v33;
			if (v31)
				v10 = sub_1400D40C0(v31);
			if (*(char*)(v10 + 29) >= 0)
			{
				v34 = sub_1400CB0E0(v10, &v53, v10 + 64);
				*(_DWORD*)(v10 + 396) = *v34;
				*(_DWORD*)(v10 + 400) = v34[1];
				*(_DWORD*)(v10 + 404) = v34[2];
				*(_DWORD*)(v10 + 408) = v34[3];
				*(_BYTE*)(v10 + 29) |= 0x80u;
				v28 = 0;
				v35 = v10;
				do
				{
					if (!*(_DWORD*)(v35 + 392))
						break;
					*(_DWORD*)(v35 + 392) = 0;
					v35 = *(_QWORD*)(v35 + 16);
				} while (v35);
			}
			v36 = *v12;
			v37 = _mm_cvtsi32_si128(*(_DWORD*)(v10 + 400));
			v38 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v10 + 396)), _mm_cvtsi32_si128(v28));
			v54 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v10 + 404)), _mm_cvtsi32_si128(v28)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v10 + 408)), _mm_cvtsi32_si128(v28))));
			v53 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v38, _mm_unpacklo_epi32(v37, _mm_cvtsi32_si128(v28))));
			if (v36)
			{
				v39 = v36 - 1;
				if (!v39)
				{
					v43 = (int)v52.m128_f32[0];
					v44 = (int)v52.m128_f32[1];
					v53.m128_u64[0] = qword_140C77760;
					v53.m128_u64[1] = __PAIR64__(v13, v14);
					sub_14014E8D0(a1 + 2944, &v52, (unsigned int*)&v53);
					if (v43)
					{
						if ((*(_DWORD*)(a1 + 3024) & 0x100) != 0)
						{
							v45 = v52.m128_i32[0];
							v46 = v43 + v52.m128_i32[0];
						}
						else
						{
							v46 = v52.m128_u32[2];
							v45 = v52.m128_i32[2] - v43;
						}
					}
					else
					{
						v46 = v52.m128_u32[2];
						v45 = v52.m128_i32[0];
					}
					if (v44)
					{
						if ((*(_DWORD*)(a1 + 3024) & 0x200) != 0)
						{
							v47 = v52.m128_u32[1];
							v48 = v52.m128_i32[1] + v44;
						}
						else
						{
							v48 = v52.m128_u32[3];
							v47 = v52.m128_i32[3] - v44;
						}
					}
					else
					{
						v48 = v52.m128_u32[3];
						v47 = v52.m128_u32[1];
					}
					v49 = _mm_cvtsi32_si128(0);
					*(__m128*)a3 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v45), v49),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), v49)));
					*(__m128*)(a3 + 16) = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), v49),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v48), v49)));
					goto LABEL_48;
				}
				if (v39 != 2)
				{
				LABEL_48:
					*(float*)a4 = *(float*)(a3 + 16) + 2.0;
					result = (void**)*(unsigned int*)(a3 + 4);
					*(_DWORD*)(a4 + 4) = (_DWORD)result;
					*(__m128*)(a4 + 16) = _mm_add_ps(*(__m128*)a4, v22);
					v51 = *(float*)a3;
					if (*(float*)a3 < *(float*)&v55)
					{
						*(float*)a4 = v51;
						*(float*)a3 = (float)(v51 + v22.m128_f32[0]) + 2.0;
						*(__m128*)(a4 + 16) = _mm_add_ps(*(__m128*)a4, v22);
						*(__m128*)(a3 + 16) = _mm_add_ps(*(__m128*)a3, v20);
					}
					return result;
				}
				v40 = v54.m128_f32[0];
				v41 = *((float*)&v55 + 1);
				*(_DWORD*)a3 = v54.m128_i32[0];
				v42 = v41 - (float)(v32 * 0.5);
				*(float*)(a3 + 4) = v42;
				if ((float)(v40 + v30) > (float)v14)
					*(float*)a3 = v53.m128_f32[0] - v30;
				if ((float)(v42 + v32) > (float)v13)
					*(float*)(a3 + 4) = (float)v13 - v32;
				if (*(float*)a3 < 0.0)
					*(_DWORD*)a3 = v28;
				if (*(float*)(a3 + 4) < 0.0)
					*(_DWORD*)(a3 + 4) = v28;
			}
			else
			{
				*(__m128*)a3 = v33;
				v50 = *(float*)a3 + 32.0;
				*(float*)a3 = v50;
				if ((float)(v50 + v30) > (float)v14)
					*(float*)a3 = *(float*)&v55 - v30;
				if ((float)(v32 + *(float*)(a3 + 4)) > (float)v13)
					*(float*)(a3 + 4) = (float)v13 - v32;
			}
			*(__m128*)(a3 + 16) = _mm_add_ps(*(__m128*)a3, v20);
			goto LABEL_48;
		}
	}
	return result;
}
// 1400E80F2: variable 'v28' is possibly undefined
// 140C77760: using guessed type __int64 qword_140C77760;

