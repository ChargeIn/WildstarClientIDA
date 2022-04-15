//----- (0000000140262C40) ----------------------------------------------------
__m128* __fastcall sub_140262C40(__int64 a1, __m128* a2, __int128* a3)
{
	__m128 v6; // xmm1
	__m128 v7; // xmm2
	__m128* result; // rax
	__m128 v9; // xmm1
	__int128* v10; // [rsp+20h] [rbp-78h] BYREF
	__m128* v11; // [rsp+28h] [rbp-70h]
	__m128* v12[10]; // [rsp+30h] [rbp-68h] BYREF

	v11 = a2;
	v10 = (__int128*)a1;
	sub_1401AE910(&v10, (_DWORD*)a1);
	v6 = *(__m128*)(a1 + 176);
	v10 = a3;
	v11 = (__m128*)(a1 + 624);
	v7 = _mm_add_ps(
		_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), a2[1]), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *a2)),
		_mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), a2[2]));
	v12[0] = (__m128*)a3;
	*(__m128*)(a1 + 176) = v7;
	v12[1] = (__m128*)(a1 + 624);
	result = sub_1401AFB10(v12, (__m128*)(a1 + 624));
	v9 = *(__m128*)(a1 + 208);
	*(__m128*)(a1 + 208) = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), a2[1]),
				_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *a2)),
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), a2[2])),
		a2[3]);
	return result;
}

