//----- (000000014054CA10) ----------------------------------------------------
__int64 __fastcall sub_14054CA10(__int64 a1, _DWORD* a2, _OWORD* a3, _OWORD* a4, _OWORD* a5, int a6)
{
	_OWORD* v6; // rdi
	int v8; // eax
	float v9; // xmm2_4
	__m128 v10; // xmm1
	__int64 result; // rax
	unsigned __int64 v12; // rsi
	__m128 v13; // xmm3
	__m128 v14; // xmm8
	__m128 v15; // xmm7
	__int64 v16; // rcx
	__m128 v17; // xmm0
	__m128 v18; // xmm3
	__m128 v19; // xmm0
	__m128 v20; // xmm4
	__m128* v21; // r8
	__m128 v22; // xmm0
	__m128 v23; // xmm4
	__m128 v24; // xmm0
	__m128 v25; // xmm5
	__m128* v26; // r8
	_OWORD* v27; // r8
	__int64 v28; // rcx
	__int128 v29; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v30; // [rsp+70h] [rbp-90h]
	__int128 v31; // [rsp+80h] [rbp-80h]
	__m128 v32; // [rsp+90h] [rbp-70h]
	__int64 v33; // [rsp+A0h] [rbp-60h]
	int v34; // [rsp+A8h] [rbp-58h]
	__m128 v35; // [rsp+B0h] [rbp-50h] BYREF
	__m128 v36; // [rsp+C0h] [rbp-40h]
	__m128 v37; // [rsp+D0h] [rbp-30h]
	__int128 v38; // [rsp+E0h] [rbp-20h]
	__m128* v39; // [rsp+F0h] [rbp-10h] BYREF
	__int128* v40; // [rsp+F8h] [rbp-8h]
	__m128 v41[4]; // [rsp+100h] [rbp+0h] BYREF
	__m128* v42; // [rsp+140h] [rbp+40h] BYREF
	_OWORD* v43; // [rsp+148h] [rbp+48h]

	v6 = (_OWORD*)(a1 + 192);
	*(_OWORD*)(a1 + 192) = *a5;
	*(_OWORD*)(a1 + 208) = a5[1];
	*(_OWORD*)(a1 + 224) = a5[2];
	*(_OWORD*)(a1 + 240) = a5[3];
	*(_DWORD*)(a1 + 240) = *a2;
	*(_DWORD*)(a1 + 244) = a2[1];
	*(_DWORD*)(a1 + 248) = a2[2];
	v8 = dword_140DC337C;
	*(_OWORD*)(a1 + 160) = *a3;
	*(_OWORD*)(a1 + 176) = *a4;
	if ((v8 & 1) != 0)
	{
		v9 = *(float*)&dword_140DC3380;
	}
	else
	{
		v9 = 0.001;
		v8 |= 1u;
		dword_140DC3380 = 981668463;
		dword_140DC337C = v8;
	}
	if ((v8 & 2) == 0)
	{
		dword_140DC337C = v8 | 2;
		xmmword_140DC3390 = xmmword_140B7B3D0;
		xmmword_140DC33A0 = xmmword_140B7B3F0;
	}
	v10 = 0i64;
	result = (unsigned int)(dword_140C636A8 - a6);
	v12 = 0i64;
	v10.m128_f32[0] = (float)(int)result * v9;
	v13 = _mm_unpacklo_ps(_mm_unpacklo_ps(v10, (__m128)0i64), (__m128)0i64);
	if (*(_QWORD*)(a1 + 64))
	{
		v14 = _mm_sub_ps((__m128)0i64, v13);
		v15 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v13, v13, 85), (__m128)0x3F800000u));
		do
		{
			v16 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v12);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 40i64))(v16);
			v29 = xmmword_140C78410;
			v30 = xmmword_140C78420;
			v33 = xmmword_140DC3390;
			v34 = DWORD2(xmmword_140DC3390);
			v17 = _mm_shuffle_ps((__m128)(unsigned int)xmmword_140DC3390, (__m128)(unsigned int)xmmword_140DC3390, 0);
			v18 = _mm_mul_ps((__m128)xmmword_140C78410, v17);
			v17.m128_f32[0] = *((float*)&xmmword_140DC3390 + 1);
			v39 = &v35;
			v40 = &v29;
			v31 = xmmword_140C78430;
			v32 = v15;
			v35 = v18;
			v19 = _mm_shuffle_ps(v17, v17, 0);
			v20 = _mm_mul_ps((__m128)xmmword_140C78420, v19);
			v19.m128_f32[0] = *((float*)&xmmword_140DC3390 + 2);
			v36 = v20;
			v38 = xmmword_140C78440;
			v37 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v19, v19, 0));
			sub_1401AFB10(&v39, v41);
			v42 = v41;
			v43 = v6;
			sub_1401AFB10(&v42, v21 + 5);
			v39 = &v35;
			v40 = &v29;
			v29 = xmmword_140C78410;
			v30 = xmmword_140C78420;
			v33 = xmmword_140DC33A0;
			v31 = xmmword_140C78430;
			v22 = _mm_shuffle_ps((__m128)(unsigned int)xmmword_140DC33A0, (__m128)(unsigned int)xmmword_140DC33A0, 0);
			v32 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v14, _mm_shuffle_ps(v14, v14, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v14, v14, 85), (__m128)0x3F800000u));
			v23 = _mm_mul_ps((__m128)xmmword_140C78410, v22);
			v22.m128_f32[0] = *((float*)&xmmword_140DC33A0 + 1);
			v34 = DWORD2(xmmword_140DC33A0);
			v24 = _mm_shuffle_ps(v22, v22, 0);
			v35 = v23;
			v25 = _mm_mul_ps((__m128)xmmword_140C78420, v24);
			v24.m128_f32[0] = *((float*)&xmmword_140DC33A0 + 2);
			v36 = v25;
			v38 = xmmword_140C78440;
			v37 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v24, v24, 0));
			sub_1401AFB10(&v39, v41);
			v42 = v41;
			v43 = v6;
			sub_1401AFB10(&v42, v26 + 9);
			v27[13] = *v6;
			v27[14] = v6[1];
			v27[15] = v6[2];
			v27[16] = v6[3];
			v27[36] = *(_OWORD*)(a1 + 160);
			v27[37] = *(_OWORD*)(a1 + 176);
			v28 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v12);
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 48i64))(v28);
			++v12;
		} while (v12 < *(_QWORD*)(a1 + 64));
	}
	return result;
}
// 14054CCC7: variable 'v21' is possibly undefined
// 14054CDA2: variable 'v26' is possibly undefined
// 14054CDC6: variable 'v27' is possibly undefined
// 140B7B3D0: using guessed type __int128 xmmword_140B7B3D0;
// 140B7B3F0: using guessed type __int128 xmmword_140B7B3F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140DC337C: using guessed type int dword_140DC337C;
// 140DC3380: using guessed type int dword_140DC3380;
// 140DC3390: using guessed type __int128 xmmword_140DC3390;
// 140DC33A0: using guessed type __int128 xmmword_140DC33A0;
// 14054CA10: using guessed type __m128 var_150[4];

