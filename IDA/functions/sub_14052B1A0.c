//----- (000000014052B1A0) ----------------------------------------------------
__int64 __fastcall sub_14052B1A0(__int64 a1, int* a2, __m128* a3, float* a4)
{
	int* v8; // rax
	int v9; // eax
	_DWORD* v10; // rcx
	int v11; // edx
	int v12; // r8d
	int v13; // eax
	int v14; // ecx
	float v15; // xmm7_4
	float v16; // xmm6_4
	int* v17; // rax
	int v18; // ecx
	__int64 result; // rax
	__int64 v20; // rcx
	int* v21; // rax
	__m128 v22; // xmm2
	float v23; // xmm1_4
	float v24; // xmm0_4
	bool v25; // zf
	int* v26; // rax
	float v27; // xmm3_4
	float v28; // xmm1_4
	float v29; // xmm2_4
	int v30[4]; // [rsp+20h] [rbp-58h] BYREF
	__m128 v31; // [rsp+30h] [rbp-48h] BYREF
	__m128 v32; // [rsp+40h] [rbp-38h]

	v8 = sub_14052B440(a1, v30);
	*a2 = *v8;
	a2[1] = v8[1];
	a2[2] = v8[2];
	a2[3] = v8[3];
	v9 = *(_DWORD*)(a1 + 1264);
	if (v9 == 4)
	{
		v10 = *(_DWORD**)(a1 + 1192);
		if (v10 && v10[8])
		{
			v11 = v10[11];
			v12 = v10[12];
			v13 = v10[9];
			v14 = v10[10];
			v30[2] = v11;
			v30[1] = v14;
			v30[0] = v13;
			v30[3] = v12;
			sub_14044A3B0((__int64)&v31, v30);
			v15 = v32.m128_f32[0];
			v16 = v31.m128_f32[0];
			*a3 = _mm_mul_ps(_mm_add_ps(v32, v31), (__m128)xmmword_140B7AC50);
			v17 = sub_140528300(*(_QWORD*)(a1 + 1192), &v31, a2);
			*a2 = *v17;
			a2[1] = v17[1];
			v18 = v17[2];
			a2[2] = v18;
			a2[3] = v17[3];
			result = 1i64;
			*a4 = (float)(v15 - v16) / (float)(v18 - *a2);
			return result;
		}
		return 0i64;
	}
	if (v9 == 3)
	{
		v20 = *(_QWORD*)(a1 + 1152);
		if (v20)
		{
			v21 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 88i64))(v20);
			sub_14044A3B0((__int64)&v31, v21);
			v22 = _mm_sub_ps(v32, v31);
			v23 = _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
			*a3 = _mm_mul_ps(_mm_add_ps(v31, v32), (__m128)xmmword_140B7AC50);
			result = 1i64;
			if (v22.m128_f32[0] < v23)
				*a4 = v23 / (float)(a2[3] - a2[1]);
			else
				*a4 = v22.m128_f32[0] / (float)(a2[2] - *a2);
			return result;
		}
		return 0i64;
	}
	if (v9 > 2 || !*(_QWORD*)(a1 + 1152))
		return 0i64;
	LODWORD(v24) = sub_14052B130(a1).m128_u32[0];
	v25 = *(_DWORD*)(a1 + 1264) == 1;
	*a4 = v24;
	if (v25)
		*a4 = v24 * 0.5;
	sub_14052B810(a1, &v31);
	v26 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
	sub_14044A3B0((__int64)&v31, v26);
	v27 = *a4;
	*a3 = v31;
	v28 = (float)(v27 * *(float*)(a1 + 1248)) + a3->m128_f32[0];
	a3->m128_f32[0] = v28;
	v29 = (float)(v27 * *(float*)(a1 + 1252)) + a3->m128_f32[2];
	a3->m128_f32[2] = v29;
	a3->m128_f32[0] = (float)((float)((float)(a2[2] - *a2) * v27) * 0.5) + v28;
	result = 1i64;
	a3->m128_f32[2] = (float)((float)((float)(a2[3] - a2[1]) * v27) * 0.5) + v29;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

