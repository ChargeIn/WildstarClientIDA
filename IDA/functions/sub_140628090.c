//----- (0000000140628090) ----------------------------------------------------
__int64 __fastcall sub_140628090(__m128* a1)
{
	__int32 v2; // ecx
	__int64 v3; // rcx
	__m128 v4; // xmm2
	__m128 v5; // xmm4
	__m128 v6; // xmm5
	__m128 v7; // xmm3
	float v8; // xmm1_4
	__m128 v9; // xmm2
	float v10; // xmm4_4
	float v11; // xmm3_4
	float v12; // xmm1_4
	float v13; // xmm2_4
	__m128 v14; // xmm7
	__int32 v15; // ecx
	__m128 v16; // xmm6
	__m128* v17; // rax
	__m128 v18; // xmm2
	float v19; // xmm1_4
	float v20; // xmm0_4
	__m128 v21; // xmm2
	__m128 v22; // xmm2
	__m128* v23; // rax
	__m128 v24; // xmm1
	__m128 v25; // xmm2
	__m128 v26; // xmm1
	__int32 v27; // eax
	__m128 v28; // xmm2
	unsigned __int64 v29; // rax
	__m128 v30; // xmm3
	__m128 v31; // xmm3
	float v32; // xmm1_4
	__int64 result; // rax
	__m128 v34; // [rsp+30h] [rbp-D0h] BYREF
	struct tagPOINT Point; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v36; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v37; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v38; // [rsp+70h] [rbp-90h] BYREF
	__m128 v39; // [rsp+80h] [rbp-80h]
	__m128 v40; // [rsp+90h] [rbp-70h]
	__m128 v41; // [rsp+A0h] [rbp-60h]
	double v42[6]; // [rsp+B0h] [rbp-50h] BYREF
	__m128 v43; // [rsp+E0h] [rbp-20h]
	__m128* v44[10]; // [rsp+F0h] [rbp-10h] BYREF

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	GetCursorPos(&Point);
	ScreenToClient(*(HWND*)(qword_140C635F0 + 8), &Point);
	if (a1[6].m128_u64[0])
	{
		v2 = a1[11].m128_i32[1];
		if ((unsigned int)(v2 - 1) <= 2)
		{
			v3 = (unsigned int)(v2 - 1);
			if ((_DWORD)v3)
			{
				v3 = (unsigned int)(v3 - 1);
				if ((_DWORD)v3)
				{
					v3 = (unsigned int)(v3 - 1);
					if ((_DWORD)v3)
					{
						v4 = v34;
					LABEL_11:
						if (a1[11].m128_i32[3] == 1)
						{
							v5 = (__m128)0x40400000u;
							v6 = _mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), a1[3]),
									_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), a1[2])),
								_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), a1[4]));
							v7 = _mm_mul_ps(v6, v6);
							v7.m128_f32[0] = (float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
								+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
							v8 = 1.0 / fsqrt(v7.m128_f32[0]);
							v5.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v7.m128_f32[0] * v8) * v8)) * 0.5) * v8, 0.0);
							v34 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v6);
						}
						v37 = a1[5];
						if ((unsigned int)sub_140626D00(v3, &a1[10].m128_i32[3], (int*)&Point, &v37, &v34, &v36))
						{
							if (a1[11].m128_i32[3] == 1)
							{
								v44[0] = a1 + 2;
								sub_1401AFC20((__int64*)v44, (double*)v38.m128_u64);
								v36 = _mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v36, v36, 85), v39),
										_mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v38)),
									_mm_mul_ps(_mm_shuffle_ps(v36, v36, 170), v40));
							}
							(*(void(__fastcall**)(__m128*, __m128*))(a1->m128_u64[0] + 96))(a1, &v36);
						}
						goto LABEL_41;
					}
					v4 = (__m128)xmmword_140C77880;
				}
				else
				{
					v4 = (__m128)xmmword_140C77870;
				}
			}
			else
			{
				v4 = (__m128)xmmword_140C77860;
			}
			v34 = v4;
			goto LABEL_11;
		}
	}
	if (!a1[8].m128_u64[0] || !a1[15].m128_i32[0])
		goto LABEL_41;
	v9 = (__m128)0x3F800000u;
	v10 = (float)((float)Point.x - a1[13].m128_f32[0]) / (float)(a1[14].m128_f32[0] * 0.5);
	v11 = -(float)((float)((float)Point.y - a1[13].m128_f32[1]) / (float)(a1[14].m128_f32[1] * 0.5));
	v12 = (float)(v11 * v11) + (float)(v10 * v10);
	if (v12 <= 1.0)
	{
		v9.m128_f32[0] = 1.0 - v12;
		v34.m128_f32[0] = (float)((float)Point.x - a1[13].m128_f32[0]) / (float)(a1[14].m128_f32[0] * 0.5);
		v34.m128_f32[1] = v11;
		v34.m128_i32[2] = _mm_sqrt_ps(v9).m128_u32[0];
	}
	else
	{
		v13 = 1.0 / fsqrt(v12);
		*(unsigned __int64*)((char*)v34.m128_u64 + 4) = COERCE_UNSIGNED_INT(v13 * v11);
		v34.m128_f32[0] = v13 * v10;
	}
	v14 = v34;
	v15 = a1[11].m128_i32[3];
	v16 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v34, v34, 210), _mm_shuffle_ps(a1[12], a1[12], 201)),
		_mm_mul_ps(_mm_shuffle_ps(v34, v34, 201), _mm_shuffle_ps(a1[12], a1[12], 210)));
	v36 = v16;
	if (!v15)
	{
		v23 = *(__m128**)(qword_140C65898 + 29096);
		if (!v23)
			v23 = *(__m128**)(qword_140C65898 + 29088);
		v16 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v23[11]),
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v23[10])),
			_mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), v23[12]));
		goto LABEL_30;
	}
	if (v15 == 1)
	{
		v44[0] = a1 + 2;
		sub_1401AFC20((__int64*)v44, v42);
		v17 = *(__m128**)(qword_140C65898 + 29096);
		if (!v17)
			v17 = *(__m128**)(qword_140C65898 + 29088);
		v37.m128_u64[0] = (unsigned __int64)&v17[10];
		v37.m128_u64[1] = (unsigned __int64)v42;
		v44[0] = v17 + 10;
		v44[1] = (__m128*)v42;
		sub_1401AFB10(v44, &v38);
		v18 = _mm_mul_ps(v38, v38);
		v19 = v18.m128_f32[0];
		v20 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
		v21 = _mm_shuffle_ps(v18, v18, 170);
		v21.m128_f32[0] = fsqrt((float)(v19 + v20) + v21.m128_f32[0]);
		v22 = _mm_shuffle_ps(v21, v21, 0);
		v43 = _mm_div_ps(v41, v22);
		v16 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), _mm_div_ps(v39, v22)),
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), _mm_div_ps(v38, v22))),
			_mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), _mm_div_ps(v40, v22)));
	LABEL_30:
		v36 = v16;
	}
	v24 = _mm_mul_ps(v16, v16);
	if ((float)((float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
		+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0]) <= *(float*)&dword_140C4A9A8)
	{
		v34 = (__m128)xmmword_140C78450;
	}
	else
	{
		v25 = a1[12];
		v34.m128_u64[0] = v36.m128_u64[0];
		v26 = _mm_mul_ps(v25, v14);
		v34.m128_i32[2] = v36.m128_i32[2];
		v34.m128_f32[3] = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
			+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
	}
	v27 = a1[11].m128_i32[1];
	if (v27 != 4)
		v34.m128_i32[0] = 0;
	if (v27 != 5)
		v34.m128_i32[1] = 0;
	if (v27 != 6)
		v34.m128_i32[2] = 0;
	v28 = (__m128)0x40400000u;
	v29 = a1->m128_u64[0];
	v30 = _mm_mul_ps(v34, v34);
	v31 = _mm_add_ps(v30, _mm_shuffle_ps(v30, v30, 78));
	v31.m128_f32[0] = v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 177).m128_f32[0];
	v32 = 1.0 / fsqrt(v31.m128_f32[0]);
	v28.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v31.m128_f32[0] * v32) * v32)) * 0.5) * v32, 0.0);
	v34 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v34);
	(*(void(__fastcall**)(__m128*, __m128*))(v29 + 104))(a1, &v34);
	a1[12] = v14;
LABEL_41:
	a1[10].m128_i32[3] = Point.x;
	result = (unsigned int)Point.y;
	a1[11].m128_i32[0] = Point.y;
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4A9A8: using guessed type int dword_140C4A9A8;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 140628090: using guessed type double var_C0[6];

