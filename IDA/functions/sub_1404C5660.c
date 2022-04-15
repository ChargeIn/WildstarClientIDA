//----- (00000001404C5660) ----------------------------------------------------
void __fastcall sub_1404C5660(unsigned int* a1, __int64 a2)
{
	unsigned int* v2; // rbx
	float v3; // xmm0_4
	unsigned int* v4; // r9
	__m128 v5; // xmm3
	__m128 v6; // xmm3
	__int64 v7; // rax
	__m128 v8; // [rsp+20h] [rbp-E0h] BYREF
	__m256 v9; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v10; // [rsp+50h] [rbp-B0h]
	__m128 v11; // [rsp+60h] [rbp-A0h]
	char v12[64]; // [rsp+70h] [rbp-90h] BYREF
	__m128 v13[4]; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v14[6]; // [rsp+F0h] [rbp-10h] BYREF

	if (a2)
	{
		v2 = a1 + 128;
		*(_QWORD*)&v9.m256_f32[6] = &v8;
		*(_QWORD*)&v9.m256_f32[2] = 0i64;
		*(_QWORD*)&v9.m256_f32[4] = a1 + 128;
		v3 = *((float*)a1 + 135);
		v8 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)a1[132], (__m128)a1[134]),
			_mm_unpacklo_ps((__m128)a1[133], (__m128)0i64));
		v14[1] = *(_OWORD*)&v9.m256_f32[4];
		v9.m256_f32[0] = v3;
		v14[0] = *(unsigned __int64*)v9.m256_f32;
		sub_1401B0590((int*)v14, (__int64)v12);
		v5 = (__m128) * v4;
		v8.m128_u64[0] = (unsigned __int64)v12;
		v9 = ymmword_140C78410;
		v8.m128_u64[1] = (unsigned __int64)&v9;
		v10 = xmmword_140C78430;
		v6 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)v4[2]), _mm_unpacklo_ps((__m128)v4[1], (__m128)0x3F800000u));
		*((_QWORD*)&v14[0] + 1) = &v9;
		*(_QWORD*)&v14[0] = v12;
		v11 = v6;
		sub_1401AFB10((__m128**)v14, v13);
		v7 = sub_1404BD000((__int64)&v9, v13);
		*(_OWORD*)v2 = *(_OWORD*)v7;
		v2[4] = *(_DWORD*)(v7 + 16);
		v2[5] = *(_DWORD*)(v7 + 20);
		v2[6] = *(_DWORD*)(v7 + 24);
		v2[7] = *(_DWORD*)(v7 + 28);
	}
}
// 1404C5708: variable 'v4' is possibly undefined
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 1404C5660: using guessed type __m128 var_B0[4];

