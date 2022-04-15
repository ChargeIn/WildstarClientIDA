//----- (0000000140262D50) ----------------------------------------------------
__int64 __fastcall sub_140262D50(float* a1, __m128* a2)
{
	__int64 result; // rax
	__m128 v3; // xmm10
	__m128 v4; // xmm2
	__m128 v5; // xmm1
	__m128 v6; // xmm3
	__m128 v7; // xmm4
	__m128 v8; // xmm3
	__m128 v9; // xmm1
	__m128 v10; // xmm4
	__m128 v11; // xmm5
	__m128 v12; // xmm3
	__m128 v13; // xmm1
	__m128 v14; // xmm4
	__m128 v15; // xmm5
	__m128 v16; // xmm2
	__m128 v17; // xmm1
	__m128 v18; // xmm0
	__m128 v19; // xmm5
	__m128 v20; // xmm3
	__m128 v21; // xmm2
	__m128 v22; // xmm0
	__m128 v23; // xmm1
	__m128 v24; // xmm4
	__m128 v25; // xmm3
	__m128 v26; // xmm0
	__m128 v27; // xmm0
	__m128 v28; // xmm4
	__m128 v29; // xmm3
	__m128 v30; // xmm0
	__m128 v31; // xmm4
	__m128 v32; // xmm3

	result = (unsigned int)dword_140DC0C60;
	if ((dword_140DC0C60 & 1) != 0)
	{
		v3 = (__m128)(unsigned int)dword_140DC0C64;
	}
	else
	{
		v3 = (__m128)0x3E723882u;
		result = dword_140DC0C60 | 1u;
		dword_140DC0C64 = 1047672962;
		dword_140DC0C60 |= 1u;
	}
	v4 = (__m128) * ((unsigned int*)a1 + 2);
	v5 = (__m128) * (unsigned int*)a1;
	v6 = (__m128) * ((unsigned int*)a1 + 1);
	v4.m128_f32[0] = v4.m128_f32[0] * 0.325735;
	v7 = (__m128) * ((unsigned int*)a1 + 3);
	v6.m128_f32[0] = v6.m128_f32[0] * -0.325735;
	v7.m128_f32[0] = v7.m128_f32[0] * -0.325735;
	v5.m128_f32[0] = (float)(v5.m128_f32[0] * 0.28209481) - (float)(a1[6] * 0.078847893);
	*a2 = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v4), _mm_unpacklo_ps(v6, v5));
	v8 = (__m128) * ((unsigned int*)a1 + 14);
	v9 = (__m128) * ((unsigned int*)a1 + 12);
	v8.m128_f32[0] = v8.m128_f32[0] * 0.325735;
	v10 = (__m128) * ((unsigned int*)a1 + 13);
	v11 = (__m128) * ((unsigned int*)a1 + 15);
	v10.m128_f32[0] = v10.m128_f32[0] * -0.325735;
	v11.m128_f32[0] = v11.m128_f32[0] * -0.325735;
	v9.m128_f32[0] = (float)(v9.m128_f32[0] * 0.28209481) - (float)(a1[18] * 0.078847893);
	a2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v8), _mm_unpacklo_ps(v10, v9));
	v12 = (__m128) * ((unsigned int*)a1 + 26);
	v13 = (__m128) * ((unsigned int*)a1 + 24);
	v12.m128_f32[0] = v12.m128_f32[0] * 0.325735;
	v14 = (__m128) * ((unsigned int*)a1 + 25);
	v15 = (__m128) * ((unsigned int*)a1 + 27);
	v14.m128_f32[0] = v14.m128_f32[0] * -0.325735;
	v15.m128_f32[0] = v15.m128_f32[0] * -0.325735;
	v13.m128_f32[0] = (float)(v13.m128_f32[0] * 0.28209481) - (float)(a1[30] * 0.078847893);
	v16 = v13;
	v17 = v3;
	a2[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, v12), _mm_unpacklo_ps(v14, v16));
	v18 = (__m128) * ((unsigned int*)a1 + 7);
	v17.m128_f32[0] = v3.m128_f32[0] * a1[6];
	v19 = (__m128) * ((unsigned int*)a1 + 4);
	v20 = (__m128) * ((unsigned int*)a1 + 5);
	v18.m128_f32[0] = v18.m128_f32[0] * -0.27313712;
	v20.m128_f32[0] = v20.m128_f32[0] * -0.27313712;
	v19.m128_f32[0] = v19.m128_f32[0] * 0.27313712;
	v21 = v18;
	v22 = _mm_unpacklo_ps(v19, v17);
	v23 = v3;
	a2[3] = _mm_unpacklo_ps(v22, _mm_unpacklo_ps(v20, v21));
	v24 = (__m128) * ((unsigned int*)a1 + 16);
	v25 = (__m128) * ((unsigned int*)a1 + 17);
	v23.m128_f32[0] = v3.m128_f32[0] * a1[18];
	v24.m128_f32[0] = v24.m128_f32[0] * 0.27313712;
	v25.m128_f32[0] = v25.m128_f32[0] * -0.27313712;
	v26 = (__m128) * ((unsigned int*)a1 + 19);
	v26.m128_f32[0] = v26.m128_f32[0] * -0.27313712;
	a2[4] = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, v23), _mm_unpacklo_ps(v25, v26));
	v27 = (__m128) * ((unsigned int*)a1 + 31);
	v28 = (__m128) * ((unsigned int*)a1 + 28);
	v3.m128_f32[0] = v3.m128_f32[0] * a1[30];
	v29 = (__m128) * ((unsigned int*)a1 + 29);
	v27.m128_f32[0] = v27.m128_f32[0] * -0.27313712;
	v28.m128_f32[0] = v28.m128_f32[0] * 0.27313712;
	v29.m128_f32[0] = v29.m128_f32[0] * -0.27313712;
	a2[5] = _mm_unpacklo_ps(_mm_unpacklo_ps(v28, v3), _mm_unpacklo_ps(v29, v27));
	v30 = (__m128) * ((unsigned int*)a1 + 32);
	v31 = (__m128) * ((unsigned int*)a1 + 8);
	v31.m128_f32[0] = v31.m128_f32[0] * 0.13656856;
	v30.m128_f32[0] = v30.m128_f32[0] * 0.13656856;
	v32 = (__m128) * ((unsigned int*)a1 + 20);
	v32.m128_f32[0] = v32.m128_f32[0] * 0.13656856;
	a2[6] = _mm_unpacklo_ps(_mm_unpacklo_ps(v31, v30), _mm_unpacklo_ps(v32, (__m128)0i64));
	return result;
}
// 140DC0C60: using guessed type int dword_140DC0C60;
// 140DC0C64: using guessed type int dword_140DC0C64;

