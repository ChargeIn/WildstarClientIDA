//----- (0000000140281670) ----------------------------------------------------
__int64 __fastcall sub_140281670(_QWORD* a1, int a2, float a3, int* a4, float* a5, __m128* a6)
{
	__m128 v9; // xmm6
	__m128 v10; // xmm4
	int* v11; // rcx
	__m128 v12; // xmm3
	__m128 v13; // xmm4
	__m128 v14; // xmm5
	__m128 v15; // xmm1
	float v16; // xmm4_4
	__m128 v17; // xmm2
	float v18; // xmm6_4
	__m128 v19; // xmm3
	float v20; // xmm7_4
	float v21; // xmm8_4
	float v22; // xmm9_4
	float v23; // xmm2_4
	float v24; // xmm6_4
	float v25; // xmm5_4
	float v26; // xmm7_4
	int v27; // xmm9_4
	int v28; // xmm8_4
	__int64 result; // rax
	unsigned __int64 v30; // [rsp+38h] [rbp-49h]
	unsigned __int64 v31; // [rsp+38h] [rbp-49h]
	unsigned __int64 v32; // [rsp+58h] [rbp-29h]
	unsigned __int64 v33; // [rsp+68h] [rbp-19h]

	if (a6)
	{
		v9 = *a6;
		v10 = a6[1];
	}
	else
	{
		v11 = (int*)a1[1074];
		v12 = 0i64;
		v13 = 0i64;
		v14 = 0i64;
		v12.m128_f32[0] = (float)v11[36];
		v14.m128_f32[0] = (float)v11[37];
		v15 = 0i64;
		v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v12, (__m128)0i64), _mm_unpacklo_ps(v14, (__m128)0i64));
		v13.m128_f32[0] = (float)v11[38] + v12.m128_f32[0];
		v15.m128_f32[0] = (float)v11[39] + v14.m128_f32[0];
		v10 = _mm_unpacklo_ps(_mm_unpacklo_ps(v13, (__m128)0i64), _mm_unpacklo_ps(v15, (__m128)0i64));
	}
	v33 = _mm_sub_ps(v10, (__m128)xmmword_140B7AC50).m128_u64[0];
	v30 = _mm_sub_ps(v10, v9).m128_u64[0];
	v32 = _mm_sub_ps(v9, (__m128)xmmword_140B7AC50).m128_u64[0];
	if (a5)
	{
		v16 = *((float*)&v30 + 1);
		if (*((float*)&v30 + 1) <= 1.0)
		{
			v17 = 0i64;
		}
		else
		{
			v17 = (__m128) * ((unsigned int*)a5 + 5);
			v17.m128_f32[0] = (float)((float)(v17.m128_f32[0] - a5[1]) - 1.0) / (float)(*((float*)&v30 + 1) - 1.0);
		}
		v18 = *(float*)&v30;
		if (*(float*)&v30 <= 1.0)
		{
			v19 = 0i64;
		}
		else
		{
			v19 = (__m128) * ((unsigned int*)a5 + 4);
			v19.m128_f32[0] = (float)((float)(v19.m128_f32[0] - *a5) - 1.0) / (float)(*(float*)&v30 - 1.0);
		}
		v20 = a5[1];
		v21 = a5[4];
		v22 = a5[5];
		v31 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0i64), _mm_unpacklo_ps(v17, (__m128)0i64)).m128_u64[0];
		if (a4)
		{
			v23 = 1.0 / (float)*a4;
			v24 = (float)((float)(*a5 + 0.5) - (float)(*(float*)&v31 * 0.5)) * v23;
			v25 = 1.0 / (float)a4[1];
			v26 = (float)((float)(v20 + 0.5) - (float)(*((float*)&v31 + 1) * 0.5)) * v25;
			*(float*)&v27 = (float)((float)(v22 - 0.5) + (float)(*((float*)&v31 + 1) * 0.5)) * v25;
			*(float*)&v28 = (float)((float)(v21 - 0.5) + (float)(*(float*)&v31 * 0.5)) * v23;
		}
		else
		{
			*(float*)&v28 = (float)((float)(v21 - 0.5) + (float)(*(float*)&v31 * 0.5)) * (float)(1.0 / v18);
			v26 = (float)((float)(v20 + 0.5) - (float)(*((float*)&v31 + 1) * 0.5)) * (float)(1.0 / v16);
			*(float*)&v27 = (float)((float)(v22 - 0.5) + (float)(*((float*)&v31 + 1) * 0.5)) * (float)(1.0 / v16);
			v24 = (float)((float)(*a5 + 0.5) - (float)(*(float*)&v31 * 0.5)) * (float)(1.0 / v18);
		}
	}
	else
	{
		v27 = 1065353216;
		v28 = 1065353216;
		v26 = 0.0;
		v24 = 0.0;
	}
	result = (*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD))(*a1 + 224i64))(a1, 112i64, 0i64);
	if (result)
	{
		*(_DWORD*)(result + 12) = 1065353216;
		*(_DWORD*)(result + 16) = a2;
		*(_DWORD*)(result + 40) = 1065353216;
		*(_DWORD*)(result + 44) = a2;
		*(_DWORD*)(result + 68) = 1065353216;
		*(_DWORD*)(result + 72) = a2;
		*(_QWORD*)result = v32;
		*(float*)(result + 8) = a3;
		*(_DWORD*)(result + 96) = 1065353216;
		*(_DWORD*)(result + 100) = a2;
		*(_DWORD*)(result + 28) = v32;
		*(_DWORD*)(result + 56) = v33;
		*(_QWORD*)(result + 20) = __PAIR64__(LODWORD(v26), LODWORD(v24));
		*(_DWORD*)(result + 84) = v33;
		*(_QWORD*)(result + 48) = __PAIR64__(v27, LODWORD(v24));
		*(_DWORD*)(result + 32) = HIDWORD(v33);
		*(_DWORD*)(result + 60) = HIDWORD(v32);
		*(_DWORD*)(result + 88) = HIDWORD(v33);
		*(float*)(result + 36) = a3;
		*(_QWORD*)(result + 76) = __PAIR64__(LODWORD(v26), v28);
		*(float*)(result + 64) = a3;
		*(float*)(result + 92) = a3;
		*(_QWORD*)(result + 104) = __PAIR64__(v27, v28);
		(*(void(__fastcall**)(_QWORD*))(*a1 + 232i64))(a1);
		return (*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD))(*a1 + 648i64))(a1, 4i64, 0i64);
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

