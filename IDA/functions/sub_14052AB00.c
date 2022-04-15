#include "../winhttp.h"

//----- (000000014052AB00) ----------------------------------------------------
_DWORD* __fastcall sub_14052AB00(__int64 a1, _DWORD* a2, float* a3)
{
	float v6; // xmm0_4
	int v7; // eax
	float v8; // xmm7_4
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	float v12; // xmm6_4
	int v13; // r9d
	int v14; // r10d
	int v15; // r8d
	__int64 v16; // rcx
	int* v17; // rax
	bool v18; // zf
	unsigned int v19; // eax
	unsigned int v20; // r8d
	__m128i v21; // xmm1
	__m128i v22; // xmm0
	__int64 v23; // rcx
	int* v24; // rax
	float v25; // xmm0_4
	int v27; // [rsp+20h] [rbp-60h] BYREF
	int v28; // [rsp+24h] [rbp-5Ch]
	int v29; // [rsp+28h] [rbp-58h]
	int v30; // [rsp+2Ch] [rbp-54h]
	__int128 v31; // [rsp+30h] [rbp-50h] BYREF
	__int128 v32; // [rsp+40h] [rbp-40h] BYREF
	__int128 v33; // [rsp+50h] [rbp-30h]
	int v34; // [rsp+90h] [rbp+10h] BYREF
	int v35; // [rsp+94h] [rbp+14h]

	sub_14052B440(a1, &v27);
	LODWORD(v6) = sub_14052B130(a1).m128_u32[0];
	v7 = *(_DWORD*)(a1 + 1264);
	v8 = v6;
	if (v7 != 4)
	{
		if (v7 != 3)
		{
			if (v7 <= 2)
			{
				v23 = *(_QWORD*)(a1 + 1152);
				if (!v23)
					goto LABEL_3;
				v24 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 88i64))(v23);
				sub_14044A2D0(v24, &v32);
				v18 = *(_DWORD*)(a1 + 1264) == 1;
				v31 = v32;
				if (v18)
					v8 = v6 * 0.5;
			}
			v13 = v27;
			v14 = v28;
		LABEL_21:
			v25 = a3[2] - *((float*)&v31 + 2);
			*a2 = v13 + (int)(float)((float)((float)(*a3 - *(float*)&v31) * (float)(1.0 / v8)) + 0.5);
			a2[1] = v14 + (int)(float)((float)(v25 * (float)(1.0 / v8)) + 0.5);
			return a2;
		}
		v16 = *(_QWORD*)(a1 + 1152);
		if (!v16)
			goto LABEL_3;
		v17 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 88i64))(v16);
		sub_14044A2D0(v17, &v32);
		v18 = *(_QWORD*)(a1 + 1152) == 0i64;
		v31 = v32;
		if (v18)
		{
			v19 = 0;
		}
		else
		{
			v19 = 2048;
			v20 = 2048;
			if (*(_DWORD*)(a1 + 1264) != 1)
			{
			LABEL_12:
				v14 = v28;
				v13 = v27;
				if (v29 - v27 < v30 - v28)
				{
					v21 = _mm_cvtsi32_si128(v30 - v28);
					v22 = _mm_cvtsi32_si128(v20);
				}
				else
				{
					v21 = _mm_cvtsi32_si128(v29 - v27);
					v22 = _mm_cvtsi32_si128(v19);
				}
				v8 = v8 / (float)(_mm_cvtepi32_ps(v21).m128_f32[0] / _mm_cvtepi32_ps(v22).m128_f32[0]);
				goto LABEL_21;
			}
			v19 = 4096;
		}
		v20 = v19;
		goto LABEL_12;
	}
	v9 = *(_QWORD*)(a1 + 1192);
	if (v9)
	{
		sub_140528300(v9, &v31, &v27);
		v10 = *(_QWORD*)(a1 + 1192);
		v34 = *(_DWORD*)(v10 + 36);
		v35 = *(_DWORD*)(v10 + 40);
		sub_14044A2D0(&v34, &v32);
		v11 = *(_QWORD*)(a1 + 1192);
		v12 = *(float*)&v32;
		v31 = v32;
		v34 = *(_DWORD*)(v11 + 44);
		v35 = *(_DWORD*)(v11 + 48);
		sub_14044A2D0(&v34, &v32);
		*(float*)&v31 = v12;
		v8 = (float)(*(float*)&v33 - v12) / (float)(v15 - v13);
		goto LABEL_21;
	}
LABEL_3:
	*(_QWORD*)a2 = -1i64;
	return a2;
}
// 14052ABC8: variable 'v15' is possibly undefined
// 14052ABC8: variable 'v13' is possibly undefined
// 14052AD1D: variable 'v14' is possibly undefined

