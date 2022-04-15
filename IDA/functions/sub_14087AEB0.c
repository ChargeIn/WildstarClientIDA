//----- (000000014087AEB0) ----------------------------------------------------
__int64 __fastcall sub_14087AEB0(float* a1, __int64 a2, __int64* a3)
{
	__m128 v3; // xmm11
	__int64 v4; // r10
	__m128 v5; // xmm11
	__int64 v6; // r8
	__m128* v7; // r9
	__m128 v8; // xmm12
	__m128* v9; // rdx
	__m128* v10; // r11
	__m128* v11; // rbx
	__m128* v12; // rdi
	__m128* v13; // r8
	__int64 result; // rax
	__m128 v15; // xmm10
	__m128 v16; // xmm8
	__m128 v17; // xmm7
	__m128 v18; // xmm10
	__m128 v19; // xmm8
	__m128 v20; // xmm7
	__m128 v21; // xmm9
	__m128 v22; // xmm5
	__m128 v23; // xmm6
	__m128 v24; // xmm9
	__m128 v25; // xmm5
	__m128 v26; // xmm6
	__m128 v27; // xmm3
	__m128 v28; // xmm2
	__m128 v29; // xmm4
	__m128 v30; // xmm10
	__m128 v31; // xmm8
	__m128 v32; // xmm9
	float v33; // [rsp+80h] [rbp+8h]
	float v34; // [rsp+84h] [rbp+Ch]

	v4 = *a3;
	v33 = *(float*)(a2 + 28);
	v34 = (float)(*(float*)(a2 + 24) - v33) * a1[1];
	*(float*)&xmmword_140C628E0 = v33;
	*((float*)&xmmword_140C628E0 + 1) = v34 + v33;
	*((float*)&xmmword_140C628E0 + 3) = (float)(v34 * 3.0) + v33;
	v3.m128_f32[0] = v34 * 2.0;
	v5 = _mm_shuffle_ps(v3, v3, 0);
	*((float*)&xmmword_140C628E0 + 2) = (float)(v34 * 2.0) + v33;
	v6 = *(unsigned __int16*)(a2 + 16);
	v7 = *(__m128**)a2;
	v8 = (__m128)xmmword_140C628E0;
	v9 = (__m128*)(*(_QWORD*)a2 + 4 * v6);
	v10 = (__m128*)((char*)v7 + 8 * v6);
	v11 = (__m128*)((char*)v7 + 20 * v6);
	v12 = (__m128*)((char*)v7 + 12 * v6);
	v13 = &v7[v6];
	for (result = *(unsigned __int16*)a1 >> 2; (_DWORD)result; result = (unsigned int)(result - 1))
	{
		v15 = *v7;
		v16 = *v12;
		v17 = *v9;
		v4 += 96i64;
		++v7;
		++v9;
		++v12;
		v18 = _mm_mul_ps(v15, v8);
		v19 = _mm_mul_ps(v16, v8);
		v20 = _mm_mul_ps(v17, v8);
		v21 = *v10;
		v22 = *v13;
		v23 = *v11;
		++v10;
		++v11;
		++v13;
		v24 = _mm_mul_ps(v21, v8);
		v25 = _mm_mul_ps(v22, v8);
		v26 = _mm_mul_ps(v23, v8);
		v8 = _mm_add_ps(v8, v5);
		v27 = _mm_shuffle_ps(v18, v20, 68);
		v28 = _mm_shuffle_ps(v19, v25, 68);
		v29 = _mm_shuffle_ps(v24, v26, 68);
		v30 = _mm_shuffle_ps(v18, v20, 238);
		*(__m128*)(v4 - 96) = _mm_shuffle_ps(v27, v29, 136);
		*(__m128*)(v4 - 80) = _mm_shuffle_ps(v28, v27, 216);
		v31 = _mm_shuffle_ps(v19, v25, 238);
		v32 = _mm_shuffle_ps(v24, v26, 238);
		*(__m128*)(v4 - 64) = _mm_shuffle_ps(v29, v28, 221);
		*(__m128*)(v4 - 48) = _mm_shuffle_ps(v30, v32, 136);
		*(__m128*)(v4 - 32) = _mm_shuffle_ps(v31, v30, 216);
		*(__m128*)(v4 - 16) = _mm_shuffle_ps(v32, v31, 221);
	}
	return result;
}
// 14087AF3E: variable 'v3' is possibly undefined
// 140C628E0: using guessed type __int128 xmmword_140C628E0;

