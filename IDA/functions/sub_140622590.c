//----- (0000000140622590) ----------------------------------------------------
__m128* __fastcall sub_140622590(__int64 a1, __m128* a2)
{
	__m128* v2; // rdi
	float v5; // xmm10_4
	float v6; // xmm11_4
	float v7; // xmm9_4
	float v8; // xmm0_4
	float* v9; // rdx
	__m128 v10; // xmm3
	__m128 v11; // xmm1
	__m128 v12; // xmm8
	__m128* result; // rax
	float v14; // xmm2_4
	float v15; // xmm0_4
	__int64 v16[2]; // [rsp+38h] [rbp-D0h] BYREF
	int v17[10]; // [rsp+48h] [rbp-C0h] BYREF
	_QWORD v18[3]; // [rsp+70h] [rbp-98h]
	__m128* v19[10]; // [rsp+88h] [rbp-80h] BYREF

	v2 = (__m128*)(a1 + 352);
	sub_14061F3D0(a1, (__int64)a2, (__m128*)(a1 + 352), (__m128*)(a1 + 336), (_DWORD*)(a1 + 352));
	v5 = sub_1408FE3D0(0.0);
	v6 = sub_1408FC950(0.0);
	v7 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 920)));
	v8 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 920)));
	v16[1] = (__int64)a2;
	*(float*)&v17[1] = v7 * v6;
	v16[0] = (__int64)v17;
	v17[3] = 0;
	v17[7] = 0;
	*(float*)v17 = v8 * v6;
	*(float*)&v17[4] = (float)((float)(v8 * v5) * v5) - (float)(v7 * v6);
	*(float*)&v17[2] = -v5;
	*(float*)&v17[5] = (float)((float)(v7 * v5) * v5) + (float)(v8 * v6);
	*(float*)&v17[6] = v6 * v5;
	*(float*)&v17[8] = (float)(v7 * v5) + (float)((float)(v8 * v5) * v6);
	*(_OWORD*)&v18[1] = xmmword_140C78440;
	*(float*)&v17[9] = (float)((float)(v7 * v5) * v6) - (float)(v8 * v5);
	v18[0] = COERCE_UNSIGNED_INT(v6 * v6);
	v19[0] = (__m128*)v17;
	v19[1] = a2;
	sub_1401AFB10(v19, a2);
	*(_OWORD*)(a1 + 640) = *(_OWORD*)sub_1401B1D60((float*)v16, v9);
	v10 = _mm_sub_ps(*v2, *(__m128*)(a1 + 336));
	v11 = _mm_mul_ps(v10, v10);
	v12 = (__m128)0x40400000u;
	result = a2;
	v14 = (float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) + _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
	v15 = 1.0 / fsqrt(v14);
	v12.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v14 * v15) * v15)) * 0.5) * v15, 0.0);
	*(__m128*)(a1 + 624) = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v10);
	return result;
}
// 14062273D: variable 'v9' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78440: using guessed type __int128 xmmword_140C78440;

