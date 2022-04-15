//----- (0000000140318300) ----------------------------------------------------
_QWORD* __fastcall sub_140318300(__int64 a1, __m128* a2, _QWORD* a3)
{
	_QWORD* result; // rax
	_QWORD* v7; // rbx
	_QWORD* v8; // rcx
	_QWORD* v9; // rcx

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(_QWORD**)(a1 + 16);
			*a2 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(
								_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)result | 0xFF000000), 0),
								(__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
		}
		else
		{
			v9 = (_QWORD*)a2[1].m128_u64[0];
			if (v9)
				sub_140317C90(v9);
			result = 0i64;
			a2->m128_u64[0] = 0i64;
			a2->m128_u64[1] = 0i64;
			a2[1].m128_u64[0] = 0i64;
			a2[1].m128_u64[1] = 0i64;
		}
	}
	else
	{
		result = sub_14018B280(56i64, 0);
		v7 = result;
		if (result)
		{
			result = 0i64;
			v7[1] = 0i64;
			v7[2] = 0i64;
			*v7 = &off_140B64250;
			v7[3] = a2;
			v7[4] = a1;
			*(_QWORD*)((char*)v7 + 44) = 0i64;
			*((_DWORD*)v7 + 10) = 0;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = (_QWORD*)a2[1].m128_u64[0];
		if (v8)
			result = sub_140317C90(v8);
		a2[1].m128_u64[0] = (unsigned __int64)v7;
		if (a3 && !v7[1])
		{
			v7[1] = a3;
			v7[2] = *a3;
			*a3 = v7;
			result = (_QWORD*)v7[2];
			if (result)
				result[1] = v7 + 2;
		}
	}
	return result;
}
// 140B64250: using guessed type __int64 (__fastcall *off_140B64250)();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

