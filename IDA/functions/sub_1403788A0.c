//----- (00000001403788A0) ----------------------------------------------------
void __fastcall sub_1403788A0(__m128* a1)
{
	__m128* v2; // rcx
	float v3; // xmm3_4
	__m128 v4; // xmm2
	__m128 v5; // xmm1
	float v6; // xmm1_4
	__m128 v7; // xmm2
	__m128 v8; // xmm1
	float v9; // xmm6_4
	int v10; // eax
	int v11; // xmm0_4
	int v12; // xmm1_4
	unsigned __int64 v13; // rcx
	_QWORD* v14; // rcx
	unsigned __int64 v15; // rcx
	int v16[4]; // [rsp+20h] [rbp-48h] BYREF
	int v17; // [rsp+30h] [rbp-38h] BYREF
	__m128* v18; // [rsp+38h] [rbp-30h]
	void(__fastcall * v19)(_QWORD*); // [rsp+40h] [rbp-28h]
	__int64 v20; // [rsp+48h] [rbp-20h]

	if (a1[4].m128_i32[3])
	{
		v2 = (__m128*)a1[1].m128_u64[0];
		if (v2[100].m128_i32[2])
		{
			v9 = 1.0;
		}
		else
		{
			if (v2[10].m128_i32[0] || (v3 = v2[59].m128_f32[3], v3 >= 16.0))
			{
				v7 = _mm_sub_ps(a1[57], v2[57]);
				v8 = _mm_mul_ps(v7, v7);
				v6 = fsqrt(
					(float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
					+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0]);
			}
			else
			{
				v4 = _mm_sub_ps(a1[57], v2[54]);
				v5 = _mm_mul_ps(v4, v4);
				v6 = fsqrt(
					(float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
					+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0])
					- v3;
			}
			v9 = fmaxf(COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - a1[58].m128_f32[0]) & 0xFFF00000), v2[100].m128_f32[3]);
		}
		v10 = v2[119].m128_i32[1];
		v11 = v2[119].m128_i32[2];
		*(float*)&v12 = (float)(v9 * a1[19].m128_f32[0]) * v2[119].m128_f32[3];
		v13 = a1[3].m128_u64[0];
		v16[1] = v11;
		v16[0] = v10;
		v16[2] = v12;
		(*(void(__fastcall**)(unsigned __int64, int*))(*(_QWORD*)v13 + 176i64))(v13, v16);
		v14 = (_QWORD*)a1[80].m128_u64[0];
		if (v14)
			*v14 = a1[80].m128_u64[1];
		v15 = a1[80].m128_u64[1];
		if (v15)
			*(_QWORD*)(v15 + 1280) = a1[80].m128_u64[0];
		a1[80].m128_u64[0] = 0i64;
		a1[80].m128_u64[1] = 0i64;
		v17 = 0;
		v20 = 0i64;
		v18 = a1;
		v19 = sub_140378FB0;
		sub_140195960((__int64)&a1[61], (int)fminf(fmaxf((float)(v9 * 250.0) * 0.03125, 250.0), 8000.0), (__int64)&v17, 4);
	}
}

