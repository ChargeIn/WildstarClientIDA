//----- (0000000140878430) ----------------------------------------------------
__int64 __fastcall sub_140878430(__int64 a1, __int64 a2)
{
	int v3; // ecx
	__int64 v4; // rax
	unsigned __int64 v5; // r8
	unsigned __int64 v6; // rax
	int v7; // r9d
	unsigned __int64 v8; // rdx
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rcx
	signed __int64 v11; // rcx
	void* v12; // rsp
	void* v13; // rsp
	unsigned __int64 v14; // r11
	char* v15; // r10
	__m128* v16; // rcx
	__m128 v17; // xmm4
	__m128 v18; // xmm3
	__m128i v19; // xmm2
	__m128i v20; // xmm0
	char vars0; // [rsp+20h] [rbp+0h] BYREF

	v3 = *(unsigned __int16*)(a2 + 18);
	v4 = *(unsigned __int16*)(a1 + 72);
	v5 = *(_QWORD*)(a1 + 8 * v4 + 80);
	LOWORD(v4) = v4 + 1;
	*(_WORD*)(a1 + 72) = v4;
	if ((_WORD)v4 == 8)
		*(_WORD*)(a1 + 72) = 0;
	v6 = *(_QWORD*)a2;
	v7 = v3 * *(_DWORD*)(a1 + 32);
	v8 = *(_QWORD*)a2 + 4i64 * v7;
	if (v6 < v8)
	{
		v9 = v5 - v6;
		do
		{
			v6 += 16i64;
			*(__m128*)(v9 + v6 - 16) = _mm_max_ps(
				(__m128)xmmword_1409A6C20,
				_mm_min_ps((__m128)xmmword_1409A6C30, *(__m128*)(v6 - 16)));
		} while (v6 < v8);
	}
	if (*(_QWORD*)(a1 + 8))
	{
		v10 = 2i64 * v7 + 15;
		if (v10 <= 2i64 * v7)
			v10 = 0xFFFFFFFFFFFFFF0i64;
		v11 = v10 & 0xFFFFFFFFFFFFFFF0ui64;
		v12 = alloca(v11);
		v13 = alloca(v11);
		v14 = v5 + 4i64 * v7;
		v15 = &vars0;
		if (v5 < v14)
		{
			v16 = (__m128*)(v5 + 48);
			do
			{
				v15 += 32;
				v17 = _mm_mul_ps(v16[-1], (__m128)xmmword_140B62690);
				v18 = *v16;
				v19 = _mm_cvtps_epi32(_mm_mul_ps(v16[-3], (__m128)xmmword_140B62690));
				v20 = _mm_cvtps_epi32(_mm_mul_ps(v16[-2], (__m128)xmmword_140B62690));
				v16 += 4;
				*((__m128i*)v15 - 2) = _mm_packs_epi32(v19, v20);
				*((__m128i*)v15 - 1) = _mm_packs_epi32(
					_mm_cvtps_epi32(v17),
					_mm_cvtps_epi32(_mm_mul_ps(v18, (__m128)xmmword_140B62690)));
			} while ((unsigned __int64)&v16[-3] < v14);
		}
		sub_140877220(*(_QWORD*)(a1 + 8), (__int64)&vars0, 2 * v7);
	}
	_InterlockedIncrement((volatile signed __int32*)(a1 + 144));
	return 1i64;
}
// 1409A6C20: using guessed type __int128 xmmword_1409A6C20;
// 1409A6C30: using guessed type __int128 xmmword_1409A6C30;
// 140B62690: using guessed type __int128 xmmword_140B62690;

