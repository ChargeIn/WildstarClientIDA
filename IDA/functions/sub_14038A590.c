//----- (000000014038A590) ----------------------------------------------------
__int64 __fastcall sub_14038A590(__int64 a1)
{
	int v2; // ebx
	__int64 result; // rax
	__m128 v4; // xmm3
	__m128 v5; // xmm2
	__m128 v6; // xmm1
	__int64 v7; // [rsp+50h] [rbp+8h] BYREF

	(*(void(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 16) + 72i64))(
		*(_QWORD*)(a1 + 16),
		10i64,
		&v7);
	v2 = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	result = HIWORD(v2) & 0x7FFF;
	*(float*)(a1 + 52) = (float)((float)(v2 & 0x7FFF) * *(float*)&dword_140C41B9C) - *(float*)&dword_140C41B94;
	*(float*)(a1 + 68) = (float)((float)(int)result * *(float*)&dword_140C41B9C) - *(float*)&dword_140C41B94;
	v4 = *(__m128*)(a1 + 48);
	v5 = _mm_sub_ps(*(__m128*)(a1 + 64), v4);
	v6 = _mm_mul_ps(v5, v5);
	*(__m128*)(a1 + 80) = _mm_mul_ps(_mm_add_ps(v4, *(__m128*)(a1 + 64)), (__m128)xmmword_140B7AC50);
	*(float*)(a1 + 96) = fsqrt(
		(float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0])
		* 0.5;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C41B94: using guessed type int dword_140C41B94;
// 140C41B9C: using guessed type int dword_140C41B9C;

