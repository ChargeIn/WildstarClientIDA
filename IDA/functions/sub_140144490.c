//----- (0000000140144490) ----------------------------------------------------
__int64 __fastcall sub_140144490(__int64 a1)
{
	unsigned int* v2; // rax
	unsigned __int64 v4; // rax
	__m128* v5; // rax
	__m128i v6; // xmm1
	__m128i v7; // xmm1
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int16* v11; // [rsp+28h] [rbp-40h]
	__int64 v12; // [rsp+40h] [rbp-28h] BYREF
	__int64 v13; // [rsp+48h] [rbp-20h]

	v2 = (unsigned int*)sub_140143AE0(a1, 1);
	if (v2)
	{
		v4 = *v2;
		if (v4 >= *(_QWORD*)(qword_140C63678 + 48))
			v5 = *(__m128**)(qword_140C63678 + 40);
		else
			v5 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v4);
		v6 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, *v5), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v7 = _mm_packus_epi16(v6, v6);
		sub_14018EFA0(&v10, (__int64)L"%x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v7, v7)));
		v8 = (unsigned __int64*)sub_14018F0E0(&v12, v11)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710(a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v13)
			sub_14018B900(v13, 0);
		if (v11)
			sub_14018B900((__int64)v11, 0);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 1409D96A4: using guessed type wchar_t asc_1409D96A4[3];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63678: using guessed type __int64 qword_140C63678;

