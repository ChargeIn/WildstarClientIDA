//----- (000000014013E360) ----------------------------------------------------
__m128* __fastcall sub_14013E360(__m128* a1, __m128* a2)
{
	__m128* v4; // rax
	__m128 v5; // xmm0
	__m128 v6; // xmm1
	__m128* result; // rax
	char v8[24]; // [rsp+20h] [rbp-18h] BYREF

	v4 = (__m128*)(*(__int64(__fastcall**)(__m128*, char*))(a1->m128_u64[0] + 8))(a1, v8);
	v5 = a1[11];
	v6 = *v4;
	*a2 = v5;
	result = a2;
	a2[1] = _mm_add_ps(v6, v5);
	return result;
}
// 14013E360: using guessed type char var_18[24];

