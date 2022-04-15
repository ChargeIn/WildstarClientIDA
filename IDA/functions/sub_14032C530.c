//----- (000000014032C530) ----------------------------------------------------
__int64 __fastcall sub_14032C530(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int64 v4; // rax
	unsigned __int64 v5; // rdx
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // r10
	unsigned __int64 v10; // r8
	unsigned __int64 v11; // r9
	unsigned __int16* v12; // r11
	unsigned __int16* v13; // rbx
	unsigned __int16 v14; // cx
	unsigned __int16 v15; // r10
	__m128 v16; // xmm1
	__m128 v17; // xmm2
	float v18; // xmm2_4
	__m128 v19; // xmm3
	float v20; // xmm3_4

	v4 = *(_QWORD*)(a3 + 48);
	v5 = *(_QWORD*)(a4 + 48);
	v7 = *(_QWORD*)(v4 + 56);
	v8 = *(_QWORD*)(v5 + 56);
	if (v7 < v8)
		return 0xFFFFFFFFi64;
	if (v7 > v8)
		return 1i64;
	if (v4 < v5)
		return 0xFFFFFFFFi64;
	if (v4 > v5)
		return 1i64;
	v10 = *(_QWORD*)(a4 + 64);
	v11 = *(_QWORD*)(a3 + 64);
	v12 = *(unsigned __int16**)(v11 + 8);
	v13 = *(unsigned __int16**)(v10 + 8);
	v14 = v12[6];
	v15 = v13[6];
	if (v14 < v15)
		return 0xFFFFFFFFi64;
	if (v14 > v15)
		return 1i64;
	v16 = *(__m128*)(((unsigned __int64)*v12 << 6) + *(_QWORD*)(v4 + 824) + 48);
	v17 = _mm_mul_ps(v16, v16);
	v18 = (float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0]) + _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
	v19 = _mm_mul_ps(
		*(__m128*)(((unsigned __int64)*v13 << 6) + *(_QWORD*)(v5 + 824) + 48),
		*(__m128*)(((unsigned __int64)*v13 << 6) + *(_QWORD*)(v5 + 824) + 48));
	v20 = (float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0]) + _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
	if (v18 < v20)
		return 0xFFFFFFFFi64;
	if (v20 < v18)
		return 1i64;
	if (v11 >= v10)
		return v11 > v10;
	else
		return 0xFFFFFFFFi64;
}

