//----- (00000001403A1B40) ----------------------------------------------------
__int64 __fastcall sub_1403A1B40(__int64 a1)
{
	__m128i v1; // xmm4
	__m128i v2; // xmm5
	__m128* v4; // rcx
	__m128* v5; // rdx
	__m128 v6; // xmm4
	__m128 v7; // xmm5
	__m128* v8; // r9
	__m128* v9; // r8
	__m128 v10; // xmm3
	float v11; // xmm1_4
	float v12; // xmm0_4
	__m128* v13; // rdx
	__m128 v14; // xmm2
	__m128 v15; // xmm1
	__m128 v16; // xmm2
	__m128* v17; // r8
	__m128 v18; // xmm3
	__int64 result; // rax
	__m128 v20; // xmm2
	__m128 v21; // xmm1
	__m128 v22; // xmm2
	__m128 v23; // xmm1
	int v24; // ecx
	int v25; // xmm0_4
	bool v26; // zf
	__int64 v27; // rcx
	int v28; // eax
	__int64 v29; // rsi
	__int64 v30; // r14
	__int64 v31; // rbx
	__int64 v32; // rax
	__m128 v33; // [rsp+38h] [rbp-49h] BYREF
	__m128 v34; // [rsp+48h] [rbp-39h] BYREF
	int v35; // [rsp+58h] [rbp-29h] BYREF
	__int64 v36; // [rsp+5Ch] [rbp-25h]
	__int64(__fastcall * v37)(__int64); // [rsp+68h] [rbp-19h]
	__int64 v38; // [rsp+70h] [rbp-11h]
	int v39; // [rsp+78h] [rbp-9h]
	__int128 v40; // [rsp+80h] [rbp-1h]
	__int64 v41; // [rsp+E8h] [rbp+67h] BYREF
	int v42; // [rsp+F0h] [rbp+6Fh] BYREF
	int v43; // [rsp+F4h] [rbp+73h]

	v1 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 30100));
	v2 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 30104));
	v4 = *(__m128**)(a1 + 29096);
	v5 = v4;
	v6 = _mm_cvtepi32_ps(v1);
	v7 = _mm_cvtepi32_ps(v2);
	if (v4)
	{
		v8 = v4;
	}
	else
	{
		v5 = *(__m128**)(a1 + 29088);
		v8 = v5;
	}
	v9 = v4;
	if (!v4)
		v9 = *(__m128**)(a1 + 29088);
	v10 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, (__m128)0i64), _mm_unpacklo_ps(v7, (__m128)0i64));
	v33.m128_f32[0] = (float)((float)((float)(v10.m128_f32[0] - (float)v5[30].m128_i32[0]) / (float)v5[30].m128_i32[2])
		* 2.0)
		- 1.0;
	v33.m128_f32[1] = 1.0
		- (float)((float)((float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] - (float)v5[30].m128_i32[1])
			/ (float)v5[30].m128_i32[3])
			* 2.0);
	v11 = v5[31].m128_f32[0];
	v12 = v5[31].m128_f32[1];
	v13 = v4;
	v33.m128_f32[2] = (float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v11) / (float)(v12 - v11);
	v14 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v33, v33, 85), v8[19]),
				_mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v8[18])),
			_mm_mul_ps(_mm_shuffle_ps(v33, v33, 170), v8[20])),
		v8[21]);
	v15 = _mm_shuffle_ps(v14, v14, 255);
	v16 = _mm_div_ps(v14, _mm_shuffle_ps(v15, v15, 0));
	v34 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v9[11]),
				_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v9[10])),
			_mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), v9[12])),
		v9[13]);
	if (v4)
	{
		v17 = v4;
	}
	else
	{
		v13 = *(__m128**)(a1 + 29088);
		v17 = v13;
	}
	if (!v4)
		v4 = *(__m128**)(a1 + 29088);
	v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, (__m128)0x3F800000u), _mm_unpacklo_ps(v7, (__m128)0i64));
	v33.m128_f32[0] = (float)((float)((float)(v18.m128_f32[0] - (float)v13[30].m128_i32[0]) / (float)v13[30].m128_i32[2])
		* 2.0)
		- 1.0;
	result = v13[30].m128_u32[3];
	v33.m128_f32[1] = 1.0
		- (float)((float)((float)(_mm_shuffle_ps(v18, v18, 85).m128_f32[0] - (float)v13[30].m128_i32[1])
			/ (float)(int)result)
			* 2.0);
	v33.m128_f32[2] = (float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] - v13[31].m128_f32[0])
		/ (float)(v13[31].m128_f32[1] - v13[31].m128_f32[0]);
	v20 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v33, v33, 85), v17[19]),
				_mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v17[18])),
			_mm_mul_ps(_mm_shuffle_ps(v33, v33, 170), v17[20])),
		v17[21]);
	v21 = _mm_shuffle_ps(v20, v20, 255);
	v22 = _mm_div_ps(v20, _mm_shuffle_ps(v21, v21, 0));
	v23 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v22, v22, 85), v4[11]),
				_mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v4[10])),
			_mm_mul_ps(_mm_shuffle_ps(v22, v22, 170), v4[12])),
		v4[13]);
	v42 = 0;
	v43 = 1065353216;
	*(_DWORD*)(a1 + 25820) = 0;
	v33 = v23;
	do
	{
		if (*(_DWORD*)(a1 + 25796))
			break;
		v24 = *(_DWORD*)(a1 + 25820);
		v41 = 0i64;
		if (v24)
			v25 = 1048576000;
		else
			v25 = 0;
		v26 = v24 == 0;
		v27 = *(_QWORD*)(a1 + 29256);
		v28 = 4113;
		if (!v26)
			v28 = 4096;
		v39 = v25;
		v36 = 0i64;
		v35 = v28;
		v37 = sub_1403A2440;
		v38 = a1;
		*(_QWORD*)&v40 = 0i64;
		result = (*(__int64(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, int*))(*(_QWORD*)v27 + 424i64))(
			v27,
			&v34,
			&v33,
			&v42,
			&v41,
			&v35);
		if ((_DWORD)result)
		{
			v43 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v41 + 16i64))(v41);
			v29 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v41 + 32i64))(v41);
			if (v29 || (result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v41 + 24i64))(v41), (v29 = result) != 0))
			{
				*(_DWORD*)(a1 + 25796) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 48i64))(v29);
				*(_DWORD*)(a1 + 25812) = *(_DWORD*)(a1 + 30100);
				*(_DWORD*)(a1 + 25816) = *(_DWORD*)(a1 + 30104);
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 24i64))(v29);
				if ((_DWORD)result == 1)
				{
					if (!(unsigned int)sub_1403A2290(a1, *(_DWORD*)(a1 + 25796)))
						*(_DWORD*)(a1 + 25796) = 0;
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 328i64))(v29);
					v30 = result;
					if (result)
					{
						*(_DWORD*)(a1 + 25804) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 216i64))(result);
						v31 = *(_QWORD*)v30;
						v32 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 320i64))(v29);
						result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64))(v31 + 392))(
							v30,
							6i64,
							*(_DWORD*)(v32 + 4) & 0xFFFFFF,
							a1 + 25808);
						if (!(_DWORD)result)
						{
							result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v30 + 328i64))(v30);
							*(_DWORD*)(a1 + 25808) = result;
						}
					}
				}
			}
		}
		if (v41)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
		++* (_DWORD*)(a1 + 25820);
	} while (*(_DWORD*)(a1 + 25820) < 2u);
	return result;
}

