//----- (000000014038C1C0) ----------------------------------------------------
void __fastcall sub_14038C1C0(__m128* a1)
{
	_QWORD* v2; // rcx
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rcx
	__m128* v5; // rcx
	float v6; // xmm3_4
	__m128 v7; // xmm2
	__m128 v8; // xmm1
	float v9; // xmm1_4
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	float v12; // xmm10_4
	int v13; // eax
	int v14; // xmm0_4
	int v15; // xmm1_4
	unsigned __int64 v16; // rcx
	int v17[4]; // [rsp+20h] [rbp-88h] BYREF
	int v18; // [rsp+30h] [rbp-78h] BYREF
	__m128* v19; // [rsp+38h] [rbp-70h]
	void(__fastcall * v20)(_QWORD*); // [rsp+40h] [rbp-68h]
	__int64 v21; // [rsp+48h] [rbp-60h]

	v2 = (_QWORD*)a1[72].m128_u64[0];
	if (v2)
		*v2 = a1[72].m128_u64[1];
	v3 = a1[72].m128_u64[1];
	if (v3)
		*(_QWORD*)(v3 + 1152) = a1[72].m128_u64[0];
	v4 = a1[2].m128_u64[0];
	a1[72].m128_u64[0] = 0i64;
	a1[72].m128_u64[1] = 0i64;
	if (v4 && ((*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v4 + 56i64))(v4) & 8) == 0)
	{
		v5 = (__m128*)a1[1].m128_u64[0];
		if (v5[100].m128_i32[2])
		{
			v12 = 1.0;
		}
		else
		{
			if (v5[10].m128_i32[0] || (v6 = v5[59].m128_f32[3], v6 >= 16.0))
			{
				v10 = _mm_sub_ps(a1[48], v5[57]);
				v11 = _mm_mul_ps(v10, v10);
				v9 = fsqrt(
					(float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
					+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]);
			}
			else
			{
				v7 = _mm_sub_ps(a1[48], v5[54]);
				v8 = _mm_mul_ps(v7, v7);
				v9 = fsqrt(
					(float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
					+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0])
					- v6;
			}
			v12 = fmaxf(COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - a1[49].m128_f32[0]) & 0xFFF00000), v5[100].m128_f32[3]);
		}
		v13 = v5[119].m128_i32[1];
		v14 = v5[119].m128_i32[2];
		*(float*)&v15 = (float)(v12 * a1[8].m128_f32[0]) * v5[119].m128_f32[3];
		v16 = a1[2].m128_u64[0];
		v17[1] = v14;
		v17[0] = v13;
		v17[2] = v15;
		(*(void(__fastcall**)(unsigned __int64, int*))(*(_QWORD*)v16 + 240i64))(v16, v17);
		v18 = 0;
		v19 = a1;
		v20 = sub_14038C3F0;
		v21 = 0i64;
		sub_140195960((__int64)&a1[53], (int)fminf(fmaxf((float)(v12 * 250.0) * 0.03125, 250.0), 8000.0), (__int64)&v18, 4);
	}
}

