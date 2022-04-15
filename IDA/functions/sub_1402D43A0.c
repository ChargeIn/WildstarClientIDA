//----- (00000001402D43A0) ----------------------------------------------------
void __fastcall sub_1402D43A0(__int64* a1, int a2)
{
	__m128* v2; // r11
	__int64 v3; // r10
	__int64 v4; // r8
	__int64 v5; // rbx
	__int64 v6; // r9
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__m128 v10; // xmm0
	__m128 v11; // xmm2
	__m128 v12; // xmm0
	__m128 v13; // xmm0
	__m128 v14; // xmm2
	__m128 v15; // xmm0
	__m128 v16; // xmm0
	__m128 v17; // xmm2
	__m128 v18; // xmm0
	unsigned int(__fastcall * v19)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v20; // eax
	__m128* v21; // rax
	__int64 v22; // rcx
	__m128 v23; // [rsp+20h] [rbp-38h] BYREF
	__m128 v24; // [rsp+30h] [rbp-28h] BYREF
	__m128 v25; // [rsp+40h] [rbp-18h] BYREF

	v2 = (__m128*)a1[1];
	v3 = a1[3];
	v4 = a1[2];
	v5 = *a1;
	v6 = (unsigned int)(3 * a2);
	v7 = 3i64 * *(unsigned int*)(v4 + 4 * v6 + 8);
	v8 = 3i64 * *(unsigned int*)(v4 + 4 * v6 + 4);
	v9 = *(unsigned int*)(v4 + 4 * v6);
	v10 = (__m128) * (unsigned int*)(v3 + 12i64 * *(unsigned int*)(v4 + 4 * v6 + 8) + 4);
	v11 = _mm_mul_ps(v2[1], _mm_shuffle_ps(v10, v10, 0));
	v12 = (__m128) * (unsigned int*)(v3 + 12i64 * *(unsigned int*)(v4 + 4 * v6 + 8) + 8);
	v25 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				v11,
				_mm_mul_ps(
					*v2,
					_mm_shuffle_ps((__m128) * (unsigned int*)(v3 + 4 * v7), (__m128) * (unsigned int*)(v3 + 4 * v7), 0))),
			_mm_mul_ps(v2[2], _mm_shuffle_ps(v12, v12, 0))),
		v2[3]);
	v13 = (__m128) * (unsigned int*)(v3 + 4 * v8 + 4);
	v14 = _mm_mul_ps(v2[1], _mm_shuffle_ps(v13, v13, 0));
	v15 = (__m128) * (unsigned int*)(v3 + 4 * v8 + 8);
	v24 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				v14,
				_mm_mul_ps(
					*v2,
					_mm_shuffle_ps((__m128) * (unsigned int*)(v3 + 4 * v8), (__m128) * (unsigned int*)(v3 + 4 * v8), 0))),
			_mm_mul_ps(v2[2], _mm_shuffle_ps(v15, v15, 0))),
		v2[3]);
	v16 = (__m128) * (unsigned int*)(v3 + 12 * v9 + 4);
	v17 = _mm_mul_ps(v2[1], _mm_shuffle_ps(v16, v16, 0));
	v18 = (__m128) * (unsigned int*)(v3 + 12 * v9 + 8);
	v23 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				v17,
				_mm_mul_ps(
					*v2,
					_mm_shuffle_ps((__m128) * (unsigned int*)(v3 + 12 * v9), (__m128) * (unsigned int*)(v3 + 12 * v9), 0))),
			_mm_mul_ps(v2[2], _mm_shuffle_ps(v18, v18, 0))),
		v2[3]);
	v19 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(v5 + 40);
	if (!v19 || v19(&v23, &v24, &v25, *(_QWORD*)(v5 + 48)))
	{
		v20 = *(_DWORD*)(v5 + 16);
		if (*(_DWORD*)(v5 + 12) == v20)
		{
			if (v20)
				*(_DWORD*)(v5 + 16) = 2 * v20;
			else
				*(_DWORD*)(v5 + 16) = 16;
			*(_QWORD*)(v5 + 24) = sub_14018C320(*(_QWORD*)(v5 + 24), 48i64 * *(unsigned int*)(v5 + 16), 8u);
		}
		v21 = (__m128*)(*(_QWORD*)(v5 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(v5 + 12)));
		*v21 = v23;
		v21[1] = v24;
		v21[2] = v25;
		v22 = *(_QWORD*)(v5 + 32);
		++* (_DWORD*)(v5 + 12);
		if (v22)
		{
			sub_14018B900(v22, 0);
			*(_QWORD*)(v5 + 32) = 0i64;
		}
	}
}
// 1402D43A0: using guessed type __m128 var_18;

