//----- (000000014037F640) ----------------------------------------------------
__int64 __fastcall sub_14037F640(__m128* a1)
{
	__int64 result; // rax
	__int64 i; // rsi
	_QWORD* v4; // rdi
	__m128 v5; // xmm6
	__m128 v6; // xmm7
	__m128 v7; // xmm1
	__int64 v8; // rcx
	__m128 v9; // xmm1

	a1[57] = (__m128)xmmword_140C798C0;
	a1[58] = (__m128)xmmword_140C798D0;
	a1[59] = (__m128)xmmword_140C798C0;
	a1[60] = (__m128)xmmword_140C798D0;
	result = a1[1].m128_i64[1];
	for (i = *(_QWORD*)(result + 48); i; i = *(_QWORD*)(i + 24))
	{
		v4 = *(_QWORD**)(i + 8);
		result = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v4 + 80i64))(v4, 1i64);
		v5 = *(__m128*)result;
		v6 = *(__m128*)(result + 16);
		v7 = _mm_max_ps(a1[58], v6);
		a1[57] = _mm_min_ps(a1[57], *(__m128*)result);
		a1[58] = v7;
		v8 = v4[3];
		if (v8)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 200i64))(v8);
			if ((result & 0x80u) == 0i64)
			{
				v9 = _mm_max_ps(a1[60], v6);
				a1[59] = _mm_min_ps(a1[59], v5);
				a1[60] = v9;
			}
		}
	}
	return result;
}
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

