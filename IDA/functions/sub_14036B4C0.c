//----- (000000014036B4C0) ----------------------------------------------------
__int64 __fastcall sub_14036B4C0(__int64 a1, int* a2, int** a3)
{
	__int64 result; // rax
	int* v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rbp
	__int64 i; // rbx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	bool v12; // zf
	unsigned __int64 v13; // rax
	__m128* v14; // rcx
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	unsigned __int64 v17; // rax
	__m128* v18; // rcx
	__m128 v19; // xmm1
	__m128 v20; // xmm4
	__m128 v21; // xmm5
	float v22; // xmm5_4
	__m128 v23; // xmm2
	_DWORD* v24; // rcx
	__int64 v25; // rcx
	__m128 v26; // [rsp+20h] [rbp-E8h]
	__m128 v27; // [rsp+30h] [rbp-D8h]
	int v28[4]; // [rsp+40h] [rbp-C8h] BYREF
	__m128 v29[6]; // [rsp+50h] [rbp-B8h] BYREF

	result = sub_14035C090(a1, a2, v29);
	if ((int)result >= 0)
	{
		v6 = sub_14018B280(32i64, 0);
		if (v6)
		{
			v6[2] = 1;
			*((_QWORD*)v6 + 2) = 0i64;
			*(_QWORD*)v6 = off_140B65FF8;
			*((_QWORD*)v6 + 3) = 0i64;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = sub_140357DF0(a1, (__int64)v29);
		*((_QWORD*)v6 + 2) = v7;
		v8 = 0i64;
		*((_QWORD*)v6 + 3) = sub_14018B280(8 * v7, 0);
		for (i = *(_QWORD*)(a1 + 2328); i; i = *(_QWORD*)(a1 + 2328))
		{
			v10 = *(_QWORD**)(i + 1400);
			if (v10)
				*v10 = *(_QWORD*)(i + 1408);
			v11 = *(_QWORD*)(i + 1408);
			if (v11)
				*(_QWORD*)(v11 + 1400) = *(_QWORD*)(i + 1400);
			v12 = *(_QWORD*)(i + 1448) == 0i64;
			*(_QWORD*)(i + 1400) = 0i64;
			*(_QWORD*)(i + 1408) = 0i64;
			v28[0] = -1;
			if (!v12)
				sub_14037CC30(i, (__int64)v28);
			v13 = 0i64;
			v14 = v29;
			v26 = *(__m128*)(i + 192);
			v27 = *(__m128*)(i + 208);
			v26.m128_i32[1] = fminf(*(float*)(i + 196), *(float*)(i + 948));
			v27.m128_i32[1] = fmaxf(*(float*)(i + 212), *(float*)(i + 964));
			while (1)
			{
				v15 = _mm_cmplt_ps((__m128)0i64, *v14);
				v16 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v15, v27), _mm_and_ps(v15, v26)), *v14);
				if ((float)((float)((float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
					+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0])
					+ v14->m128_f32[3]) > 0.0)
					break;
				++v13;
				++v14;
				if (v13 >= 6)
				{
					v17 = 0i64;
					v18 = v29;
					v19 = _mm_sub_ps(v27, v26);
					v20 = _mm_mul_ps(_mm_add_ps(v27, v26), (__m128)xmmword_140B7AC50);
					v21 = _mm_mul_ps(v19, v19);
					v22 = fsqrt(
						(float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
						+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0])
						* 0.5;
					while (1)
					{
						v23 = _mm_mul_ps(v20, *v18);
						if ((float)((float)((float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0])
							+ _mm_shuffle_ps(v23, v23, 170).m128_f32[0])
							+ v18->m128_f32[3]) > v22)
							goto LABEL_19;
						++v17;
						++v18;
						if (v17 >= 6)
						{
							v24 = (_DWORD*)(*((_QWORD*)v6 + 3) + 8 * v8++);
							*v24 = *(_DWORD*)(i + 8);
							v24[1] = *(_DWORD*)(i + 12);
							goto LABEL_19;
						}
					}
				}
			}
		LABEL_19:
			;
		}
		v25 = *((_QWORD*)v6 + 3);
		*((_QWORD*)v6 + 2) = v8;
		*((_QWORD*)v6 + 3) = sub_14018C320(v25, 8 * v8, 0);
		*a3 = v6;
		return 0i64;
	}
	return result;
}
// 140B65FF8: using guessed type __int64 (__fastcall *off_140B65FF8[4])();
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 14036B4C0: using guessed type __m128 var_B8[6];
// 14036B4C0: using guessed type int var_C8[4];

