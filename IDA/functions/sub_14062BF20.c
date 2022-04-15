#include "../winhttp.h"

//----- (000000014062BF20) ----------------------------------------------------
__int64 __fastcall sub_14062BF20(__m128* a1, double a2, float a3, __int64* a4, __int64* a5, __int64 a6, __int64* a7)
{
	__m128* v7; // rax
	int v8; // edx
	__m128 v13; // xmm10
	__int64 v14; // rax
	__int64* v15; // rcx
	float v16; // xmm6_4
	__int64 v17; // rax
	__m128* v18; // rax
	__m128 v19; // xmm0
	unsigned __int64 v20; // rax
	__m128 v21; // xmm0
	__m128 v22; // xmm6
	__m128 v23; // xmm1
	__m128 v24; // xmm2
	__int64 v25; // rax
	__m128 v26; // xmm7
	__m128 v27; // xmm0
	int v28; // ecx
	int v29; // eax
	__int64 v30; // rax
	__m128* v31; // rsi
	__int64* v32; // rbx
	int v33; // ecx
	__int64 v34; // rax
	float v35; // xmm6_4
	__int64 v36; // rax
	float v37; // xmm0_4
	int v38; // eax
	int v39; // eax
	__int64 result; // rax
	__int64 v41; // rcx
	__m128 v42; // [rsp+60h] [rbp-98h] BYREF
	__m128 v43; // [rsp+70h] [rbp-88h] BYREF
	__m128 v44; // [rsp+80h] [rbp-78h] BYREF

	v7 = (__m128*)a1->m128_u64[0];
	v8 = a1[2].m128_i32[2];
	v43 = *(__m128*)(a1->m128_u64[0] + 64);
	v44 = v7[38];
	v13.m128_i32[0] = 1045220557;
	v14 = sub_1403D90D0(qword_140C65898, v8);
	if (v14)
	{
		v15 = *(__int64**)(v14 + 5864);
		if (v15)
		{
			v16 = *(float*)(v14 + 4804);
			v17 = *v15;
			v42 = a1[5];
			v18 = (__m128*)(*(__int64 (**)(void))(v17 + 1216))();
			v19 = _mm_add_ps(v18[1], *v18);
			v20 = a1->m128_u64[1];
			v21 = _mm_mul_ps(v19, (__m128)xmmword_140B7AC50);
			v21.m128_f32[0] = _mm_shuffle_ps(v21, v21, 85).m128_f32[0] * v16;
			v22 = v43;
			v42.m128_f32[1] = _mm_shuffle_ps(v42, v42, 85).m128_f32[0] + v21.m128_f32[0];
			if (!v20)
				v20 = a1->m128_u64[0];
			v23 = (__m128) * (unsigned int*)(v20 + 280);
			v23.m128_f32[0] = v23.m128_f32[0] / *(float*)(v20 + 264);
			v24 = v23;
			v24.m128_f32[0] = (float)((float)((float)(v24.m128_f32[0] / *(float*)(v20 + 224))
				* (float)(v24.m128_f32[0] / *(float*)(v20 + 224)))
				+ (float)(v23.m128_f32[0] * v23.m128_f32[0]))
				+ (float)((float)(v23.m128_f32[0] / *(float*)(v20 + 244))
					* (float)(v23.m128_f32[0] / *(float*)(v20 + 244)));
			v13 = _mm_sqrt_ps(v24);
			v27 = _mm_shuffle_ps(v13, v13, 0);
			v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a6 + 24i64))(a6);
			*(__m128*)v25 = _mm_mul_ps((__m128)xmmword_140B7A8D0, v27);
			v26 = v42;
			*(__m128*)(v25 + 16) = _mm_mul_ps((__m128)xmmword_140B7A740, v27);
			*(__m128*)(v25 + 32) = v26;
			v27.m128_f32[0] = (*(float(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)a6 + 72i64))(
				a6,
				&v43,
				16401i64);
			if (v27.m128_f32[0] < 1.0)
			{
				v43 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v22, v26), _mm_shuffle_ps(v27, v27, 0)), v26);
				v44 = v43;
			}
		}
	}
	v28 = *(_DWORD*)qword_140C63750;
	v29 = dword_140C536B0;
	if (*(_DWORD*)qword_140C63750 < dword_140C536B0)
		v29 = *(_DWORD*)qword_140C63750;
	if (byte_140C536C0[v29])
	{
		v30 = sub_1403D90D0(qword_140C65898, a1[3].m128_i32[2]);
		v31 = (__m128*)v30;
		if (v30)
		{
			v32 = *(__int64**)(v30 + 5864);
			v33 = dword_140C4E7E0;
			if (*(_DWORD*)qword_140C63750 < dword_140C4E7E0)
				v33 = *(_DWORD*)qword_140C63750;
			if (byte_140C4E7F0[v33] && v32 && (*(unsigned int(__fastcall**)(__int64*))(*v32 + 1088))(v32))
			{
				v34 = *v32;
				v35 = v31[300].m128_f32[1];
				v42 = v31[286];
				v42.m128_f32[1] = _mm_shuffle_ps(v42, v42, 85).m128_f32[0]
					+ (float)((*(float(__fastcall**)(__int64*))(v34 + 1096))(v32) * v35);
			LABEL_25:
				sub_1405D2B80(a1->m128_u64[0], &v44, &v42);
				goto LABEL_26;
			}
			v36 = a1->m128_u64[0];
			v42 = v31[286];
			v37 = v31[286].m128_f32[1] + *(float*)(v36 + 664);
		LABEL_24:
			v42.m128_f32[1] = v37;
			goto LABEL_25;
		}
	}
	else
	{
		v38 = dword_140C536F0;
		if (v28 < dword_140C536F0)
			v38 = *(_DWORD*)qword_140C63750;
		if (byte_140C53700[v38])
		{
			v39 = dword_140C4E820;
			v42 = a1[4];
			if (v28 < dword_140C4E820)
				v39 = v28;
			v37 = a1[4].m128_f32[1] + dword_140C4E830[v39];
			goto LABEL_24;
		}
	}
LABEL_26:
	result = a1->m128_i64[1];
	if (!result || *(_DWORD*)(result + 688))
		result = sub_1405D0300(
			a1->m128_u64[0],
			a4,
			a5,
			a7,
			v13.m128_f32[0],
			*(float*)&a2,
			SLODWORD(a3),
			(__int64)&v44,
			&v43,
			a1[3].m128_f32[1],
			a1[2].m128_i32[3]);
	v41 = a1->m128_i64[1];
	if (v41)
		return sub_1405D5190(v41, a4, a2, a3);
	return result;
}
// 140B7A740: using guessed type __int128 xmmword_140B7A740;
// 140B7A8D0: using guessed type __int128 xmmword_140B7A8D0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C4E7E0: using guessed type int dword_140C4E7E0;
// 140C4E7F0: using guessed type _BYTE byte_140C4E7F0[32];
// 140C4E820: using guessed type int dword_140C4E820;
// 140C4E830: using guessed type float dword_140C4E830[16];
// 140C536B0: using guessed type int dword_140C536B0;
// 140C536C0: using guessed type _BYTE[24];
// 140C536F0: using guessed type int dword_140C536F0;
// 140C53700: using guessed type _BYTE[24];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

