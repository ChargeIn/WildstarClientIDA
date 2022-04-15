#include "../winhttp.h"

//----- (000000014035C650) ----------------------------------------------------
__m128* __fastcall sub_14035C650(__int64 a1, __m128* a2, __m128* a3, float* a4, _DWORD* a5)
{
	__m128 v5; // xmm2
	__m128 v6; // xmm4
	int v7; // xmm3_4
	float v8; // xmm5_4
	float* v10; // r10
	__m128 v13; // xmm2
	__m128 v14; // xmm4
	int v15; // r8d
	__m128 v16; // xmm4
	__m128 v17; // xmm2
	int v18; // edx
	float v19; // xmm10_4
	int v20; // edi
	int v21; // r14d
	float v22; // xmm2_4
	int v23; // ebx
	int v24; // ebp
	int v25; // ecx
	int v26; // eax
	float v27; // xmm9_4
	float v28; // xmm7_4
	float v29; // xmm8_4
	float v30; // xmm6_4
	_DWORD* v31; // r12
	int v32; // r9d
	__int64 v33; // rcx
	__m128* result; // rax
	float v35; // xmm2_4
	_QWORD* v36; // rcx
	_QWORD* v37; // r8
	__int64 v38; // rax
	int v39[4]; // [rsp+30h] [rbp-A8h] BYREF
	int v40; // [rsp+E0h] [rbp+8h]
	int v42; // [rsp+F0h] [rbp+18h]
	int v43; // [rsp+F8h] [rbp+20h] BYREF
	float v44; // [rsp+FCh] [rbp+24h]

	v7 = *(int*)a4;
	v8 = a4[1];
	v10 = (float*)a2;
	v6.m128_f32[0] = *a4;
	v5.m128_f32[0] = v8;
	v13 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *a3);
	v14 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *a3);
	v15 = *(_DWORD*)(a1 + 2256);
	v16 = _mm_add_ps(v14, *a2);
	v17 = _mm_add_ps(v13, *a2);
	v18 = *(_DWORD*)(a1 + 2264);
	LODWORD(v19) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
	v20 = (int)v16.m128_f32[0];
	v21 = (int)v17.m128_f32[0];
	LODWORD(v22) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
	if ((int)v16.m128_f32[0] < v15)
		v20 = *(_DWORD*)(a1 + 2256);
	v23 = (int)v19;
	v24 = (int)v22;
	if (v20 >= v18)
		v20 = v18 - 1;
	v25 = *(_DWORD*)(a1 + 2260);
	v26 = *(_DWORD*)(a1 + 2268);
	if (v23 < v25)
		v23 = v25;
	if (v23 >= v26)
		v23 = v26 - 1;
	if (v21 < v15)
		v21 = v15;
	if (v21 >= v18)
		v21 = v18 - 1;
	if (v24 < v25)
		v24 = v25;
	if (v24 >= v26)
		v24 = v26 - 1;
	v42 = 1;
	if (v20 >= v21)
	{
		if (v20 <= v21)
		{
			v40 = 0;
			v28 = a4[1];
			v27 = 0.0;
		}
		else
		{
			v40 = -1;
			v27 = -1.0 / a3->m128_f32[0];
			v28 = (float)((float)(v16.m128_f32[0] - (float)v20) * v27) + *(float*)&v7;
		}
	}
	else
	{
		v40 = 1;
		v27 = 1.0 / a3->m128_f32[0];
		v28 = (float)((float)((float)(v20 + 1) - v16.m128_f32[0]) * v27) + *(float*)&v7;
	}
	if (v23 >= v24)
	{
		if (v23 <= v24)
		{
			v42 = 0;
			v30 = a4[1];
			v29 = 0.0;
		}
		else
		{
			v42 = -1;
			v29 = -1.0 / a3->m128_f32[2];
			v30 = (float)((float)(v19 - (float)v23) * v29) + *(float*)&v7;
		}
	}
	else
	{
		v29 = 1.0 / a3->m128_f32[2];
		v30 = (float)((float)((float)(v23 + 1) - v19) * v29) + *(float*)&v7;
	}
	v31 = a5;
	if (*(float*)&v7 < v8)
	{
		do
		{
			v32 = *(_DWORD*)(a1 + 2204);
			v33 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
				+ 8i64
				* (v20 % v32
					+ v32
					* (v23 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v23 % *(_DWORD*)(a1 + 2208) < 0))
					+ v32 * (unsigned int)(v20 % v32 < 0)));
			if (v28 >= v30)
			{
				if (v33)
				{
					v39[0] = v7;
					*(float*)&v39[1] = v30;
					result = sub_140385130(v33, v10, a3->m128_f32, (float*)v39, (__int64)v31);
					if (result)
						return result;
					v10 = (float*)a2;
				}
				v23 += v42;
				v35 = a4[1];
				*(float*)&v7 = v30;
				if (v23 == v24)
					v30 = a4[1];
				else
					v30 = fminf(v30 + v29, v35);
			}
			else
			{
				if (v33)
				{
					v43 = v7;
					v44 = v28;
					result = sub_140385130(v33, v10, a3->m128_f32, (float*)&v43, (__int64)v31);
					if (result)
						return result;
					v10 = (float*)a2;
				}
				v20 += v40;
				v35 = a4[1];
				*(float*)&v7 = v28;
				if (v20 == v21)
					v28 = a4[1];
				else
					v28 = fminf(v28 + v27, v35);
			}
		} while (*(float*)&v7 < v35);
	}
	if ((*v31 & 0xF800) != 0)
	{
		v36 = *(_QWORD**)(a1 + 5256);
		if (v36)
		{
			v37 = (_QWORD*)(a1 + 5296);
			do
			{
				if (!v36[138])
				{
					v36[138] = v37;
					v36[139] = *v37;
					*v37 = v36;
					v38 = v36[139];
					if (v38)
						*(_QWORD*)(v38 + 1104) = v36 + 139;
				}
				v36 = (_QWORD*)v36[129];
			} while (v36);
		}
	}
	return 0i64;
}
// 14035C693: variable 'v5' is possibly undefined
// 14035C697: variable 'v6' is possibly undefined

