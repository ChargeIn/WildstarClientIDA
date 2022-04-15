//----- (0000000140327110) ----------------------------------------------------
__int64 __fastcall sub_140327110(__int64 a1)
{
	int v1; // eax
	__m128i v3; // xmm1
	__m128i v4; // xmm1
	__m128i v5; // xmm1
	__m128i v6; // xmm1
	__int64** v7; // rdx
	int* v8; // rcx
	__int64 v9; // r8
	int v10; // eax
	__int64* v11; // rax

	v1 = dword_140DC0E10;
	if ((dword_140DC0E10 & 1) == 0)
	{
		v1 = dword_140DC0E10 | 1;
		dword_140DC0E10 |= 1u;
		v3 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7B0C0), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v4 = _mm_packus_epi16(v3, v3);
		dword_140C8A608 = _mm_cvtsi128_si32(_mm_packus_epi16(v4, v4));
	}
	if ((v1 & 2) == 0)
	{
		v1 |= 2u;
		dword_140DC0E10 = v1;
		v5 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7A330), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v6 = _mm_packus_epi16(v5, v5);
		dword_140C8A610 = _mm_cvtsi128_si32(_mm_packus_epi16(v6, v6));
	}
	if ((v1 & 4) == 0)
	{
		byte_140C8A60C = 0;
		dword_140DC0E10 = v1 | 4;
	}
	v7 = off_140C58B60;
	v8 = (int*)&unk_140B64468;
	v9 = a1 - (_QWORD)off_140C58B60;
	do
	{
		v10 = *v8++;
		++v7;
		*(int*)((char*)v8 + a1 - (_QWORD)&unk_140B64468 + 172) = v10;
		v11 = *(v7 - 1);
		*(__int64**)((char*)v7 + v9 + 80) = 0i64;
		*(__int64**)((char*)v7 + v9 - 8) = v11;
	} while ((__int64)v8 < (__int64)&unk_140B64494);
	return a1;
}
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B0C0: using guessed type __int128 xmmword_140B7B0C0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C58B60: using guessed type __int64 *off_140C58B60[4];
// 140C8A608: using guessed type int dword_140C8A608;
// 140C8A60C: using guessed type char byte_140C8A60C;
// 140C8A610: using guessed type int dword_140C8A610;
// 140DC0E10: using guessed type int dword_140DC0E10;

