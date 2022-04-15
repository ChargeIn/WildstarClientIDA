//----- (0000000140864B80) ----------------------------------------------------
__int64 __fastcall sub_140864B80(float a1, float a2, float a3, int a4, __int64 a5)
{
	__int64 result; // rax
	__m128 v9; // xmm6
	float v10; // xmm7_4
	__m128 v11; // xmm9
	float v12; // xmm4_4
	__m128 v13; // xmm3
	float v14; // xmm2_4
	float v15; // xmm7_4
	float v16; // xmm0_4
	__m128 v17; // xmm1
	float v18; // xmm0_4
	__m128 v19; // xmm0
	float v20; // [rsp+78h] [rbp+20h]

	result = a5;
	if (a4)
	{
		if (a4 == 1)
		{
			v13 = (__m128)0x3F800000u;
			v12 = a1;
			v13.m128_f32[0] = 1.0 - a1;
			*(_QWORD*)(a5 + 12) = 0i64;
			*(_DWORD*)(a5 + 20) = 0;
			*(_DWORD*)(a5 + 8) = 0;
		}
		else
		{
			v13 = (__m128)LODWORD(v20);
			v12 = v20;
		}
	}
	else
	{
		v9 = (__m128)0x3F800000u;
		v10 = 0.0;
		v11 = (__m128)0x3F800000u;
		v11.m128_f32[0] = 1.0 - a1;
		v12 = a1 * a2;
		v13 = v11;
		v13.m128_f32[0] = (float)(1.0 - a1) * a2;
		if (a3 > 0.0)
		{
			v14 = 1.0 - a3;
			if (a1 < 0.5)
			{
				v16 = a1 * 2.0;
				v17 = (__m128)0x3F800000u;
				v12 = v12 * v14;
				v17.m128_f32[0] = 1.0 - v16;
				v15 = v16;
				v18 = v14 * v13.m128_f32[0];
				v17.m128_f32[0] = (float)(v17.m128_f32[0] * a2) * a3;
				v13 = v17;
				v13.m128_f32[0] = v17.m128_f32[0] + v18;
			}
			else
			{
				v13.m128_f32[0] = v13.m128_f32[0] * v14;
				v15 = v11.m128_f32[0] * 2.0;
				v12 = (float)((float)((float)((float)(a1 - 0.5) * 2.0) * a2) * a3) + (float)(v14 * v12);
			}
			v10 = (float)(v15 * a2) * a3;
		}
		v9.m128_f32[0] = 1.0 - a2;
		*(_DWORD*)(a5 + 20) = 0;
		*(float*)(a5 + 8) = fsqrt(v10);
		v19 = v9;
		v9.m128_f32[0] = (float)(1.0 - a2) * a1;
		v19.m128_f32[0] = v19.m128_f32[0] * v11.m128_f32[0];
		*(_DWORD*)(a5 + 12) = _mm_sqrt_ps(v19).m128_u32[0];
		*(_DWORD*)(a5 + 16) = _mm_sqrt_ps(v9).m128_u32[0];
	}
	*(_DWORD*)a5 = _mm_sqrt_ps(v13).m128_u32[0];
	*(float*)(a5 + 4) = fsqrt(v12);
	return result;
}

