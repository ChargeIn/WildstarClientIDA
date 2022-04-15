//----- (00000001402FB2A0) ----------------------------------------------------
__m128* __fastcall sub_1402FB2A0(_QWORD* a1, unsigned int a2, __m128* a3)
{
	__m128* v3; // rbx
	__m128* result; // rax
	char v6[24]; // [rsp+20h] [rbp-18h] BYREF

	v3 = (__m128*)a1[2];
	result = (__m128*)(*(__int64(__fastcall**)(_QWORD*, char*, _QWORD))(*a1 + 856i64))(a1, v6, a2);
	*a3 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(*result, *result, 85), v3[20]),
				_mm_mul_ps(_mm_shuffle_ps(*result, *result, 0), v3[19])),
			_mm_mul_ps(_mm_shuffle_ps(*result, *result, 170), v3[21])),
		v3[22]);
	return result;
}
// 1402FB2A0: using guessed type char var_18[24];

