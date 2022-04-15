//----- (00000001402D6C30) ----------------------------------------------------
__int64 __fastcall sub_1402D6C30(__m128* a1, __m128* a2, float* a3, float* a4)
{
	__int64 result; // rax
	__m128 v9; // xmm2
	__m128 v10; // xmm4
	__m128 v11; // xmm3
	unsigned __int64 v12; // rcx
	char v13; // si
	__m128 v14; // xmm5
	bool v15; // zf
	unsigned int v16; // edx
	float v17; // xmm6_4
	__m128 v18; // xmm1
	__int64 v19; // rbx
	__m128 v20; // xmm1
	__int64 v21; // rdi
	__int64 v22; // [rsp+20h] [rbp-48h] BYREF
	__int64 v23; // [rsp+28h] [rbp-40h]
	__m128 v24; // [rsp+30h] [rbp-38h] BYREF
	__m128 v25; // [rsp+40h] [rbp-28h] BYREF
	__int64 v26; // [rsp+70h] [rbp+8h] BYREF

	result = sub_1401C9AA0((__int64)&a1[5], (__int64)a2, a3, &v26);
	if ((_DWORD)result)
	{
		v9 = *a2;
		v10 = a1[12];
		v11 = a1[11];
		v12 = a1[1].m128_u64[0];
		v13 = 0;
		v22 = *(_QWORD*)(v12 + 72);
		v14 = a1[13];
		v15 = *(_DWORD*)(v12 + 80) / 3u == 0;
		v16 = *(_DWORD*)(v12 + 80) / 3u;
		v17 = 3.4028235e38;
		v18 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v11), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v10)),
				_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v14)),
			a1[14]);
		v19 = *(_QWORD*)(v12 + 88);
		v23 = v19;
		v25 = v18;
		v20 = *(__m128*)a3;
		v21 = v16;
		v24 = _mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v11), _mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), v10)),
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), v14));
		if (v15)
			return 0i64;
		do
		{
			if (sub_1402D7490(&v25, &v24, &v22, (float*)&v26))
			{
				v13 = 1;
				v17 = fminf(v17, *(float*)&v26);
			}
			v19 += 6i64;
			v23 = v19;
			--v21;
		} while (v21);
		if (!v13 || v17 < 0.0 || v17 >= 3.4028235e38)
		{
			return 0i64;
		}
		else
		{
			if (a4)
				*a4 = v17;
			return 1i64;
		}
	}
	return result;
}

