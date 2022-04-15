//----- (000000014071F2B0) ----------------------------------------------------
__int64 __fastcall sub_14071F2B0(__int128* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int128 v4; // xmm3
	__int128 v5; // xmm2
	__int64 v6; // r9
	__int128 v7; // xmm1
	__int128 v8; // xmm0
	__int64 v9; // rcx
	__int64 v10; // rcx
	__m128 v11; // [rsp+40h] [rbp-68h] BYREF
	__int128 v12[4]; // [rsp+50h] [rbp-58h] BYREF
	__int64 v13; // [rsp+90h] [rbp-18h]

	v2 = *((_QWORD*)a1 + 28);
	v11.m128_i32[0] = 0;
	result = (*(__int64(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)v2 + 16i64))(v2, &v11, 0i64);
	if ((_DWORD)result && !*((_DWORD*)a1 + 58))
	{
		(*(void(__fastcall**)(__int128*))(*(_QWORD*)a1 + 128i64))(a1);
		if (*((_DWORD*)a1 + 176) && *((_DWORD*)a1 + 140) == 1 && !*((_DWORD*)a1 + 178))
		{
			return (*(__int64(__fastcall**)(__int128*, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
		}
		else
		{
			v4 = a1[40];
			v5 = a1[41];
			v6 = *((_QWORD*)a1 + 28);
			v13 = 0i64;
			v7 = a1[42];
			v8 = a1[43];
			v12[0] = v4;
			v9 = *(_QWORD*)(qword_140C65898 + 29256);
			v12[1] = v5;
			v12[2] = v7;
			v12[3] = v8;
			if ((*(int(__fastcall**)(__int64, _QWORD, __int128*, __int64, int, _DWORD, _QWORD*, _DWORD))(*(_QWORD*)v9 + 184i64))(
				v9,
				0i64,
				v12,
				v6,
				1,
				0,
				(_QWORD*)a1 + 94,
				0) >= 0)
			{
				*((_DWORD*)a1 + 58) = 1;
				sub_14071C4E0((__int64)a1);
				sub_14071F500((__m128*)a1);
				(*(void(__fastcall**)(_QWORD))(**((_QWORD**)a1 + 94) + 152i64))(*((_QWORD*)a1 + 94));
				v10 = *((_QWORD*)a1 + 28);
				v11 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 84)), 0), (__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				return (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v10 + 1136i64))(v10, &v11);
			}
			else
			{
				return (*(__int64(__fastcall**)(__int128*, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
			}
		}
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C65898: using guessed type __int64 qword_140C65898;

