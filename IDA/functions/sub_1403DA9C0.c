//----- (00000001403DA9C0) ----------------------------------------------------
__int64 __fastcall sub_1403DA9C0(__int64 a1, int a2, unsigned int a3, _DWORD* a4, unsigned int a5)
{
	unsigned int v6; // ebx
	__m128 v7; // xmm6
	__int64 v8; // rax
	unsigned int v9; // eax
	int* v10; // rax
	__int64 v11; // rax
	__int64 result; // rax
	__m128i v13; // xmm1
	__m128i v14; // xmm1
	__m128 v15; // [rsp+20h] [rbp-28h]

	if ((dword_140DC235C & 1) == 0)
	{
		xmmword_140DC2360 = xmmword_140B7ADD0;
		dword_140DC235C |= 1u;
	}
	v6 = a5;
	v7 = (__m128)xmmword_140B7B040;
	v15.m128_i32[3] = 1065353216;
	if (a5 == 8)
	{
		switch (a2)
		{
		case 6:
			v8 = sub_140248AC0(a3);
			if (v8)
			{
				v9 = *(_DWORD*)(v8 + 28);
				if (v9)
					v6 = v9;
			}
			v7 = (__m128)xmmword_140DC2360;
			v15.m128_i32[3] = HIDWORD(xmmword_140DC2360);
			break;
		case 0:
			v10 = sub_1400B5DF0(qword_140C658F0, a3, 0i64);
			if (!v10)
				break;
			if (v10[80] == 24)
			{
				v7 = (__m128)xmmword_140DC2360;
				v15.m128_i32[3] = HIDWORD(xmmword_140DC2360);
				break;
			}
			goto LABEL_16;
		case 8:
			v11 = sub_1401E8C20(a3);
			if (!v11)
				break;
			v10 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v11 + 8), 0i64);
			if (!v10)
				break;
		LABEL_16:
			v6 = v10[86];
			break;
		case 9:
			if (a3 == 6)
			{
				v6 = 7;
			}
			else
			{
				v6 = 4;
				if (a3 != 9)
					v6 = 0;
			}
			break;
		}
	}
	result = sub_14020CE20(v6);
	if (result)
	{
		v15.m128_u64[0] = *(_QWORD*)(result + 24);
		v15.m128_i32[2] = *(_DWORD*)(result + 32);
		v7 = v15;
	}
	*a4 = 3;
	a4[1] = 56;
	v13 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, v7), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v14 = _mm_packus_epi16(v13, v13);
	a4[2] = _mm_cvtsi128_si32(_mm_packus_epi16(v14, v14));
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7ADD0: using guessed type __int128 xmmword_140B7ADD0;
// 140B7B040: using guessed type __int128 xmmword_140B7B040;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140DC235C: using guessed type int dword_140DC235C;
// 140DC2360: using guessed type __int128 xmmword_140DC2360;

