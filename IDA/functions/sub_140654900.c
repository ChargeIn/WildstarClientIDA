//----- (0000000140654900) ----------------------------------------------------
__int64 __fastcall sub_140654900(_QWORD* a1)
{
	int* v2; // rax
	_DWORD* v3; // rdx
	__int64 v4; // r8
	__int64 result; // rax
	unsigned int v6; // r9d
	__int64 v7; // rdx
	__int64 v8; // rax
	__int128 v9; // xmm0
	__m128 v10; // [rsp+20h] [rbp-18h] BYREF

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2
		&& (v3 = (_DWORD*)sub_1403D90D0(qword_140C65898, *v2)) != 0i64
		&& (v4 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
	{
		if ((~(v3[10] >> 2) & 1) != 0)
		{
			v6 = v3[15];
			if (!v6)
				v6 = v3[14];
			v7 = *(unsigned int*)(v4 + 60);
			if (!(_DWORD)v7)
				v7 = *(unsigned int*)(v4 + 56);
			v8 = *(_QWORD*)qword_140C65A10;
			v10 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(_mm_unpacklo_epi8((__m128i)0i64, (__m128i)0i64), (__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			switch ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(v8 + 16))(qword_140C65A10, v7, v6))
			{
			case 1u:
				v9 = xmmword_140C777F0;
				goto LABEL_20;
			case 2u:
				v9 = xmmword_140C77820;
				goto LABEL_20;
			case 3u:
				v9 = xmmword_140B7AED0;
				goto LABEL_20;
			case 4u:
				v9 = xmmword_140C77830;
				goto LABEL_20;
			case 5u:
				v9 = xmmword_140B7B240;
				goto LABEL_20;
			case 6u:
				v9 = xmmword_140B7AF00;
				goto LABEL_20;
			case 7u:
				v9 = xmmword_140B7ADE0;
				goto LABEL_20;
			case 8u:
				v9 = xmmword_140C77810;
				goto LABEL_20;
			case 9u:
				v9 = xmmword_140B7B1D0;
			LABEL_20:
				v10 = (__m128)v9;
				break;
			default:
				break;
			}
			sub_1401181F0(a1, &v10);
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7ADE0: using guessed type __int128 xmmword_140B7ADE0;
// 140B7AED0: using guessed type __int128 xmmword_140B7AED0;
// 140B7AF00: using guessed type __int128 xmmword_140B7AF00;
// 140B7B1D0: using guessed type __int128 xmmword_140B7B1D0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A10: using guessed type __int64 qword_140C65A10;
// 140C777F0: using guessed type __int128 xmmword_140C777F0;
// 140C77810: using guessed type __int128 xmmword_140C77810;
// 140C77820: using guessed type __int128 xmmword_140C77820;
// 140C77830: using guessed type __int128 xmmword_140C77830;
// 140654900: using guessed type __m128 var_18;

