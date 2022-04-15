//----- (00000001406BFC00) ----------------------------------------------------
_DWORD* __fastcall sub_1406BFC00(__int64 a1)
{
	_DWORD* v2; // rax
	__m128i v3; // xmm1
	__m128i v4; // xmm1
	_DWORD* result; // rax
	__m128i v6; // xmm1
	__m128i v7; // xmm1
	char v8; // [rsp+30h] [rbp+8h] BYREF

	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2336) + 48i64))(*(_QWORD*)(a1 + 2336)))
	{
		v2 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 2336) + 72i64))(
			*(_QWORD*)(a1 + 2336),
			0i64,
			&v8,
			2i64);
		if (v2)
		{
			v3 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)0i64), (__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v4 = _mm_packus_epi16(v3, v3);
			*v2 = _mm_cvtsi128_si32(_mm_packus_epi16(v4, v4));
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2336) + 80i64))(*(_QWORD*)(a1 + 2336), 0i64);
		}
	}
	result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2312) + 48i64))(*(_QWORD*)(a1 + 2312));
	if (!(_DWORD)result)
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 2312) + 72i64))(
			*(_QWORD*)(a1 + 2312),
			0i64,
			&v8,
			2i64);
		if (result)
		{
			v6 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7AD00), (__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v7 = _mm_packus_epi16(v6, v6);
			*result = _mm_cvtsi128_si32(_mm_packus_epi16(v7, v7));
			return (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2312) + 80i64))(
				*(_QWORD*)(a1 + 2312),
				0i64);
		}
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

