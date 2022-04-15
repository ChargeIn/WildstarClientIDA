//----- (000000014085CC30) ----------------------------------------------------
__int64 __fastcall sub_14085CC30(__int64 a1, __int64 a2)
{
	int v2; // r8d
	unsigned __int64 v3; // rbx
	int i; // r9d
	int v6; // edx
	__int64 v7; // r8
	__int64 v8; // rcx
	signed __int64 v9; // rcx
	void* v10; // rsp
	void* v11; // rsp
	unsigned __int64 v12; // r10
	char* v13; // r9
	__m128* v14; // rcx
	__m128 v15; // xmm4
	__m128 v16; // xmm3
	__m128i v17; // xmm2
	__m128i v18; // xmm0
	char vars0; // [rsp+20h] [rbp+0h] BYREF

	v2 = *(_DWORD*)(a2 + 8);
	v3 = *(_QWORD*)a2;
	for (i = 0; v2; v2 &= v2 - 1)
		++i;
	v6 = i * *(unsigned __int16*)(a2 + 18);
	v7 = (unsigned int)(2 * v6);
	if (*(_QWORD*)(a1 + 8))
	{
		v8 = v7 + 15;
		if (v7 + 15 <= (unsigned __int64)(unsigned int)v7)
			v8 = 0xFFFFFFFFFFFFFF0i64;
		v9 = v8 & 0xFFFFFFFFFFFFFFF0ui64;
		v10 = alloca(v9);
		v11 = alloca(v9);
		v12 = v3 + 4i64 * v6;
		v13 = &vars0;
		if (v3 < v12)
		{
			v14 = (__m128*)(v3 + 48);
			do
			{
				v13 += 32;
				v15 = _mm_mul_ps(v14[-1], (__m128)xmmword_140B62690);
				v16 = *v14;
				v17 = _mm_cvtps_epi32(_mm_mul_ps(v14[-3], (__m128)xmmword_140B62690));
				v18 = _mm_cvtps_epi32(_mm_mul_ps(v14[-2], (__m128)xmmword_140B62690));
				v14 += 4;
				*((__m128i*)v13 - 2) = _mm_packs_epi32(v17, v18);
				*((__m128i*)v13 - 1) = _mm_packs_epi32(
					_mm_cvtps_epi32(v15),
					_mm_cvtps_epi32(_mm_mul_ps(v16, (__m128)xmmword_140B62690)));
			} while ((unsigned __int64)&v14[-3] < v12);
		}
		sub_140877220(*(_QWORD*)(a1 + 8), (__int64)&vars0, v7);
	}
	return 1i64;
}
// 140B62690: using guessed type __int128 xmmword_140B62690;

