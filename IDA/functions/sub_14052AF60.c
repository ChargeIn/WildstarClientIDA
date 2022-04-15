#include "../winhttp.h"

//----- (000000014052AF60) ----------------------------------------------------
__int128* __fastcall sub_14052AF60(__int64 a1, __int128* a2, _DWORD* a3)
{
	float v6; // xmm0_4
	int v7; // eax
	float v8; // xmm6_4
	_DWORD* v9; // rcx
	__int128 v10; // xmm0
	__int64 v11; // rcx
	unsigned int v12; // esi
	unsigned int v13; // ebp
	int* v14; // rax
	int v15; // r9d
	int v16; // edx
	int v17; // r8d
	__m128i v18; // xmm1
	__m128i v19; // xmm0
	__m128i v20; // xmm2
	__m128 v21; // xmm2
	int v23; // [rsp+20h] [rbp-48h] BYREF
	int v24; // [rsp+24h] [rbp-44h]
	int v25; // [rsp+28h] [rbp-40h]
	int v26; // [rsp+2Ch] [rbp-3Ch]
	__int128 v27; // [rsp+30h] [rbp-38h] BYREF

	sub_14052B440(a1, &v23);
	LODWORD(v6) = sub_14052B130(a1).m128_u32[0];
	v7 = *(_DWORD*)(a1 + 1264);
	v8 = v6;
	if (v7 != 4)
	{
		v11 = *(_QWORD*)(a1 + 1152);
		if (v11)
		{
			v12 = 2048;
			v13 = 2048;
			if (v7 == 1)
			{
				v12 = 4096;
				v13 = 4096;
			}
			v14 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 88i64))(v11);
			sub_14044A2D0(v14, &v27);
			v15 = *(_DWORD*)(a1 + 1264);
			v16 = v24;
			v17 = v23;
			if (v15 == 3)
			{
				if (v25 - v23 < v26 - v24)
				{
					v18 = _mm_cvtsi32_si128(v26 - v24);
					v19 = _mm_cvtsi32_si128(v13);
				}
				else
				{
					v18 = _mm_cvtsi32_si128(v25 - v23);
					v19 = _mm_cvtsi32_si128(v12);
				}
				v8 = v8 / (float)(_mm_cvtepi32_ps(v18).m128_f32[0] / _mm_cvtepi32_ps(v19).m128_f32[0]);
			}
			else if (v15 <= 2)
			{
				v17 = v23 - (int)*(float*)(a1 + 1248);
				v16 = v24 - (int)*(float*)(a1 + 1252);
				v23 = v17;
				v24 = v16;
				if (v15 == 1)
					v8 = v6 * 0.5;
			}
			v20 = _mm_cvtsi32_si128(0);
			v21 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3 - v17), v20),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3[1] - v16), v20)));
			*(float*)&v27 = *(float*)&v27 + (float)(v21.m128_f32[0] * v8);
			*((float*)&v27 + 2) = *((float*)&v27 + 2) + (float)(_mm_shuffle_ps(v21, v21, 85).m128_f32[0] * v8);
			v10 = v27;
			goto LABEL_17;
		}
	LABEL_3:
		v10 = xmmword_140C7D6C0;
	LABEL_17:
		*a2 = v10;
		return a2;
	}
	v9 = *(_DWORD**)(a1 + 1192);
	if (!v9)
		goto LABEL_3;
	sub_140528200(v9, (__int64)a2, a3, &v23);
	return a2;
}
// 140C7D6C0: using guessed type __int128 xmmword_140C7D6C0;

