//----- (000000014069FEB0) ----------------------------------------------------
__int64 __fastcall sub_14069FEB0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	int v4; // ecx
	int v5; // ecx
	int v6; // ecx
	__int128 v7; // xmm6
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	__m128 v12; // [rsp+20h] [rbp-28h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = *(_DWORD*)(v3 + 20);
			v12 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(_mm_unpacklo_epi8((__m128i)0i64, (__m128i)0i64), (__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			if (v4)
			{
				v5 = v4 - 1;
				if (v5)
				{
					v6 = v5 - 1;
					if (v6)
					{
						if (v6 == 1)
							v7 = xmmword_140B7B130;
						else
							v7 = xmmword_140C77810;
					}
					else
					{
						v7 = xmmword_140B7B0A0;
					}
				}
				else
				{
					v7 = xmmword_140B7B110;
				}
			}
			else
			{
				v7 = xmmword_140B7AD30;
			}
			*(_OWORD*)sub_140059170(a1, 0x10ui64) = v7;
			v8 = a1[4];
			v9 = sub_140062650((__int64)a1, (unsigned __int64*)"CColor", 6ui64);
			v10 = a1[2];
			v12.m128_u64[0] = v9;
			v12.m128_i32[2] = 4;
			sub_14005E8E0((__int64)a1, v8 + 160, (int*)&v12, v10);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
		}
	}
	return 1i64;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AD30: using guessed type __int128 xmmword_140B7AD30;
// 140B7B0A0: using guessed type __int128 xmmword_140B7B0A0;
// 140B7B110: using guessed type __int128 xmmword_140B7B110;
// 140B7B130: using guessed type __int128 xmmword_140B7B130;
// 140C77810: using guessed type __int128 xmmword_140C77810;

