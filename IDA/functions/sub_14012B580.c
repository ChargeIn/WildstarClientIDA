//----- (000000014012B580) ----------------------------------------------------
_QWORD* __fastcall sub_14012B580(_QWORD* a1, __int64 a2, unsigned int a3, unsigned __int16* a4)
{
	__m128* v8; // rax
	__m128i v9; // xmm1
	__m128i v10; // xmm1
	__int64 v11; // r9
	unsigned __int64 v12; // rdx
	unsigned int v13; // ecx
	__int64 v14; // r8
	__int64 v15; // rax

	v8 = (__m128*)sub_140118290(a2, a3);
	if (v8)
	{
		v9 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, *v8), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v10 = _mm_packus_epi16(v9, v9);
		sub_14018EFA0(a1, (__int64)L"%08x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v10, v10)));
	}
	else
	{
		v11 = 0i64;
		v12 = *(_QWORD*)(qword_140C63650 + 768);
		v13 = 0;
		if (v12)
		{
			v14 = *(_QWORD*)(qword_140C63650 + 760);
			v15 = 0i64;
			while (*(_QWORD*)(*(_QWORD*)(v14 + 8 * v15) + 400i64) != a2)
			{
				v15 = ++v13;
				if (v13 >= v12)
					goto LABEL_9;
			}
			v11 = *(_QWORD*)(v14 + 8i64 * v13);
		}
	LABEL_9:
		sub_1400F2610(v11 + 384, a1, a3, a4);
	}
	return a1;
}
// 140A20818: using guessed type wchar_t a08x[5];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63650: using guessed type __int64 qword_140C63650;

