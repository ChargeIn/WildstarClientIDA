//----- (00000001401482C0) ----------------------------------------------------
__int64 __fastcall sub_1401482C0(_QWORD* a1)
{
	__m128* v2; // rbx
	__m128* v3; // rax
	_DWORD* v4; // rdx
	__m128 v5; // xmm2
	__int64 result; // rax
	__m128 v7; // xmm1

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128*)sub_140056AB0(a1, 2u);
	v4 = (_DWORD*)a1[2];
	v5 = _mm_sub_ps(*v2, *v3);
	v4[2] = 1;
	result = 1i64;
	v7 = _mm_mul_ps(v5, v5);
	*v4 = *(float*)&dword_140C3C7A8 > (float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
		+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]);
	a1[2] += 16i64;
	return result;
}
// 140C3C7A8: using guessed type int dword_140C3C7A8;

