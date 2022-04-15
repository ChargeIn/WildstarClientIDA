//----- (0000000140359E70) ----------------------------------------------------
void __fastcall sub_140359E70(__m128* a1)
{
	__int64* v1; // rdi
	__int64 v3; // rdx
	_QWORD* v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // r9
	__int64 v8; // rbx
	__int64 v9; // rbp
	float v10; // xmm9_4
	float v11; // xmm7_4
	float v12; // xmm8_4
	float v13; // xmm9_4
	__m128 v14; // xmm2
	__int64 v15; // rsi
	__m128* v16; // r15
	__m128 v17; // xmm2
	float v18; // xmm6_4
	float v19; // xmm6_4
	int v20; // eax
	__m128 v21; // xmm2
	float v22; // xmm0_4
	__int64 v23; // rax
	int v24; // [rsp+30h] [rbp-78h] BYREF
	int v25; // [rsp+B0h] [rbp+8h]
	int v26; // [rsp+B4h] [rbp+Ch]

	v1 = (__int64*)&a1[146];
	v3 = a1[146].m128_i64[0];
	if (v3)
	{
		do
		{
			v4 = *(_QWORD**)(v3 + 1416);
			if (v4)
				*v4 = *(_QWORD*)(v3 + 1424);
			v5 = *(_QWORD*)(v3 + 1424);
			if (v5)
				*(_QWORD*)(v5 + 1416) = *(_QWORD*)(v3 + 1416);
			*(_QWORD*)(v3 + 1416) = 0i64;
			*(_QWORD*)(v3 + 1424) = 0i64;
			v3 = *v1;
		} while (*v1);
	}
	if (!a1[119].m128_i32[0])
	{
		sub_140357DF0((__int64)a1, (__int64)&a1[105]);
		v8 = a1[145].m128_i64[1];
		v9 = 0i64;
		v10 = a1[8].m128_f32[2];
		v11 = v10 * v10;
		v12 = (float)(v10 * v10) * 0.25;
		v13 = (float)(v10 + 32.0) * (float)(v10 + 32.0);
		v14 = _mm_mul_ps(
			_mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(
					_mm_shuffle_ps(a1[57], a1[57], 136),
					_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
			(__m128)xmmword_140B7B490);
		v25 = (int)v14.m128_f32[0];
		v26 = (int)_mm_shuffle_ps(v14, v14, 85).m128_f32[0];
		if (v8)
		{
			do
			{
				v15 = *(_QWORD*)(v8 + 1408);
				v16 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v8 + 16) + 40i64))(*(_QWORD*)(v8 + 16));
				v17 = _mm_sub_ps(_mm_max_ps(v16[2], _mm_min_ps(a1[54], v16[3])), a1[54]);
				v18 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
				v19 = (float)(v18 * v18) + (float)(v17.m128_f32[0] * v17.m128_f32[0]);
				if (v19 <= v13)
				{
					v20 = -1;
					if (v19 > v12)
						v20 = 0;
					v24 = v20;
					if ((!*(_QWORD*)(v8 + 1464) || (unsigned int)sub_14037D060(v8, (__int64)&v24, 0)) && v19 <= v11)
					{
						v21 = _mm_sub_ps(_mm_max_ps(v16[2], _mm_min_ps(a1[57], v16[3])), a1[57]);
						v22 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
						*(float*)(v8 + 48) = (float)(v22 * v22) + (float)(v21.m128_f32[0] * v21.m128_f32[0]);
						v6 = (unsigned int)((v16->m128_i32[0] - v25) >> 31);
						*(_DWORD*)(v8 + 52) = (v6 ^ (v16->m128_i32[0] - v25)) - v6 + abs32(v16->m128_i32[1] - v26);
						if (!*(_QWORD*)(v8 + 1416))
						{
							*(_QWORD*)(v8 + 1416) = v1;
							*(_QWORD*)(v8 + 1424) = *v1;
							*v1 = v8;
							v23 = *(_QWORD*)(v8 + 1424);
							if (v23)
								*(_QWORD*)(v23 + 1416) = v8 + 1424;
						}
						++v9;
					}
				}
				v8 = v15;
			} while (v15);
		}
		sub_140371550(v1, v6, (__int64(__fastcall*)(__int64, __int64, __int64))sub_1403838D0, v7, v9);
	}
}
// 14035A00B: conditional instruction was optimized away because eax.4 is in (==0|==FFFFFFFF)
// 14035A118: variable 'v6' is possibly undefined
// 14035A118: variable 'v7' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;

