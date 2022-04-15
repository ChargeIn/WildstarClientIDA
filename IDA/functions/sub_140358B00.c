//----- (0000000140358B00) ----------------------------------------------------
unsigned __int64 __fastcall sub_140358B00(__int64 a1, __m128* a2, __m128* a3)
{
	unsigned __int64 v5; // rbp
	__m128* v6; // rdi
	unsigned __int64 v7; // rbx
	__int64 v8; // rsi
	__m128 v9; // xmm6
	__m128 v10; // xmm7
	__m128 v11; // xmm2
	__int64 v12; // rax
	__int64 v13; // rcx
	unsigned __int64 v15; // rdx
	unsigned __int64 v16; // rax
	unsigned __int64 v17; // r9
	unsigned __int64 v18; // rcx
	__m128 v19; // [rsp+20h] [rbp-C8h] BYREF
	unsigned __int64 v20[20]; // [rsp+30h] [rbp-B8h] BYREF

	if ((dword_140DC1558 & 1) == 0)
	{
		xmmword_140DC1560 = 0i64;
		xmmword_140DC1570 = xmmword_140B7A3A0;
		dword_140DC1558 |= 1u;
		xmmword_140DC1580 = xmmword_140B7A330;
		xmmword_140DC15A0 = xmmword_140B7A4B0;
		xmmword_140DC1590 = xmmword_140B7A5D0;
		xmmword_140DC15C0 = xmmword_140B7A700;
		xmmword_140DC15B0 = xmmword_140B7A8C0;
		xmmword_140DC15E0 = xmmword_140B7A890;
		xmmword_140DC15D0 = xmmword_140B7A8A0;
		xmmword_140DC1600 = xmmword_140B7A870;
		xmmword_140DC15F0 = xmmword_140B7A880;
		xmmword_140DC1620 = xmmword_140B7A6D0;
		xmmword_140DC1610 = xmmword_140B7A6E0;
		xmmword_140DC1640 = xmmword_140B7A6B0;
		xmmword_140DC1630 = xmmword_140B7A6C0;
	}
	v5 = 0i64;
	v6 = (__m128*) & xmmword_140DC1560;
	v7 = 0i64;
	v8 = 15i64;
	v9 = _mm_mul_ps(_mm_add_ps(a2[1], *a2), (__m128)xmmword_140B7AC50);
	v10 = _mm_sub_ps(v9, *a2);
	do
	{
		v11 = _mm_add_ps(_mm_mul_ps(*v6, v10), v9);
		v19 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), a3[1]), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *a3)),
				_mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), a3[2])),
			a3[3]);
		v12 = sub_1403589F0(a1, &v19);
		if (v12)
			v20[v7++] = v12;
		++v6;
		--v8;
	} while (v8);
	if (!v7)
		return 0i64;
	sub_140370470(v13, v20, v7);
	v15 = v20[0];
	if (v20[0] == v19.m128_u64[v7 + 1])
		return v20[0];
	v16 = 1i64;
	v17 = 0i64;
	v18 = 1i64;
	if (v7 <= 1)
		return v15;
	do
	{
		if (v15 == v20[v18])
		{
			++v16;
		}
		else
		{
			if (v17 < v16)
			{
				v5 = v15;
				v17 = v16;
			}
			v15 = v20[v18];
			v16 = 1i64;
		}
		++v18;
	} while (v18 < v7);
	if (v17 < v16)
		return v15;
	return v5;
}
// 140358C9D: variable 'v13' is possibly undefined
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A3A0: using guessed type __int128 xmmword_140B7A3A0;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A5D0: using guessed type __int128 xmmword_140B7A5D0;
// 140B7A6B0: using guessed type __int128 xmmword_140B7A6B0;
// 140B7A6C0: using guessed type __int128 xmmword_140B7A6C0;
// 140B7A6D0: using guessed type __int128 xmmword_140B7A6D0;
// 140B7A6E0: using guessed type __int128 xmmword_140B7A6E0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7A870: using guessed type __int128 xmmword_140B7A870;
// 140B7A880: using guessed type __int128 xmmword_140B7A880;
// 140B7A890: using guessed type __int128 xmmword_140B7A890;
// 140B7A8A0: using guessed type __int128 xmmword_140B7A8A0;
// 140B7A8C0: using guessed type __int128 xmmword_140B7A8C0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140DC1558: using guessed type int dword_140DC1558;
// 140DC1560: using guessed type __int128 xmmword_140DC1560;
// 140DC1570: using guessed type __int128 xmmword_140DC1570;
// 140DC1580: using guessed type __int128 xmmword_140DC1580;
// 140DC1590: using guessed type __int128 xmmword_140DC1590;
// 140DC15A0: using guessed type __int128 xmmword_140DC15A0;
// 140DC15B0: using guessed type __int128 xmmword_140DC15B0;
// 140DC15C0: using guessed type __int128 xmmword_140DC15C0;
// 140DC15D0: using guessed type __int128 xmmword_140DC15D0;
// 140DC15E0: using guessed type __int128 xmmword_140DC15E0;
// 140DC15F0: using guessed type __int128 xmmword_140DC15F0;
// 140DC1600: using guessed type __int128 xmmword_140DC1600;
// 140DC1610: using guessed type __int128 xmmword_140DC1610;
// 140DC1620: using guessed type __int128 xmmword_140DC1620;
// 140DC1630: using guessed type __int128 xmmword_140DC1630;
// 140DC1640: using guessed type __int128 xmmword_140DC1640;
// 140358B00: using guessed type unsigned __int64 var_B8[20];

