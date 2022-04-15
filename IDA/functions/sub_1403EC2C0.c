//----- (00000001403EC2C0) ----------------------------------------------------
__int64 __fastcall sub_1403EC2C0(__int64 a1, char a2)
{
	__int64 v3; // rdi
	__int64 v4; // r9
	int v5; // eax
	float v6; // xmm1_4
	__int64 v7; // r9
	__int64 v8; // rdx
	int v10[5]; // [rsp+40h] [rbp-848h] BYREF
	float v11; // [rsp+54h] [rbp-834h]
	__m128 v12; // [rsp+60h] [rbp-828h] BYREF
	char v13[2048]; // [rsp+70h] [rbp-818h] BYREF

	if ((a2 & 1) != 0)
	{
		v3 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 584i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
		if (*(_QWORD*)(a1 + 31016))
		{
			v4 = *(unsigned int*)(a1 + 112);
			v5 = *(_DWORD*)(a1 + 108);
			v6 = (float)*(int*)(v3 + 8) - 130.0;
			v11 = (float)*(int*)(v3 + 12) - 24.0;
			*(float*)&v10[1] = v11;
			*(float*)&v10[4] = v6;
			*(float*)v10 = v6;
			if ((_DWORD)v4)
			{
				sub_14001B370(v13, 1024i64, L"?? ms (0x%u)", v4);
			}
			else
			{
				v7 = 1i64;
				if (v5 > 1)
					v7 = (unsigned int)v5;
				sub_14001B370(v13, 1024i64, L"%d ms", v7);
			}
			v8 = *(_QWORD*)(a1 + 31568);
			v12 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			(*(void(__fastcall**)(__int64, __int64, char*, __int64, int*, int, __m128*, int))(*(_QWORD*)qword_140C65680
				+ 264i64))(
					qword_140C65680,
					v8,
					v13,
					-1i64,
					v10,
					258,
					&v12,
					1);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	}
	return 0i64;
}
// 140AF83E8: using guessed type wchar_t aMs0xU[13];
// 140AF8408: using guessed type wchar_t aDMs[6];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;

