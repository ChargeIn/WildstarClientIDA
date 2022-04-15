//----- (00000001401472B0) ----------------------------------------------------
__int64 __fastcall sub_1401472B0(_QWORD* a1)
{
	__m128* v2; // rax
	__int64 v3; // rcx
	__m128 v4; // xmm2
	__int64 result; // rax
	__m128 v6; // xmm1

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = a1[2];
	v4 = *v2;
	*(_DWORD*)(v3 + 8) = 3;
	result = 1i64;
	v6 = _mm_mul_ps(v4, v4);
	*(double*)v3 = (float)((float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0]);
	a1[2] += 16i64;
	return result;
}

