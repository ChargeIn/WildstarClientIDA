//----- (0000000140254390) ----------------------------------------------------
_DWORD* __fastcall sub_140254390(_QWORD** a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rsi
	float* v5; // rdi
	__int64 v6; // r14
	__int64 v7; // r15
	float v8; // xmm1_4
	float v9; // xmm1_4
	float v10; // xmm1_4
	float v11; // xmm0_4
	float v12; // xmm1_4
	float v13; // xmm1_4
	float v14; // xmm0_4
	float v15; // xmm1_4
	float v16; // xmm1_4
	float v17; // xmm0_4
	double v18; // xmm0_8
	float v19; // xmm1_4
	__int64 v20; // rax
	_QWORD* v21; // rax
	_DWORD* result; // rax
	unsigned int v23; // [rsp+90h] [rbp+8h] BYREF

	v2 = (*(__int64(__fastcall**)(_QWORD*, _QWORD, unsigned int*, __int64))(*a1[226] + 72i64))(
		a1[226],
		0i64,
		&v23,
		2i64);
	if (v2)
	{
		v3 = v2 + v23;
		v4 = v2 + 8;
		v5 = (float*)(a1 + 142);
		v6 = -(__int64)v23;
		v7 = 12i64;
		do
		{
			if (v5 == (float*)16)
			{
				*(_OWORD*)v3 = 0i64;
				*(_OWORD*)(v6 + v3) = 0i64;
			}
			else
			{
				v8 = *(v5 - 1);
				if (*v5 <= v8)
				{
					*(_QWORD*)v3 = 0i64;
				}
				else
				{
					v9 = (float)(v8 + *v5) * 0.5;
					*(float*)v3 = -1.0 / v9;
					*(float*)(v3 + 4) = 1.0
						/ (float)(sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
							(float)((float)(-1.0 / v9) * *v5)
							* 0.69314718)))
							- 1.0);
				}
				v10 = *(v5 - 2);
				v11 = *(v5 - 3);
				if (v10 <= v11)
				{
					*(_DWORD*)(v6 + v3) = 0;
					*(_DWORD*)(v4 - 4) = 0;
				}
				else
				{
					v12 = (float)(v10 + v11) * 0.5;
					*(float*)(v6 + v3) = -1.0 / v12;
					*(float*)(v4 - 4) = 1.0
						/ (float)(sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
							(float)((float)(-1.0 / v12)
								* *(v5 - 2))
							* 0.69314718)))
							- 1.0);
				}
				v13 = v5[4];
				v14 = v5[3];
				if (v13 <= v14)
				{
					*(_QWORD*)(v3 + 8) = 0i64;
				}
				else
				{
					v15 = (float)(v13 + v14) * 0.5;
					*(float*)(v3 + 8) = -1.0 / v15;
					*(float*)(v3 + 12) = 1.0
						/ (float)(sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
							(float)((float)(-1.0 / v15)
								* v5[4])
							* 0.69314718)))
							- 1.0);
				}
				v16 = v5[2];
				v17 = v5[1];
				if (v16 <= v17)
				{
					*(_QWORD*)v4 = 0i64;
				}
				else
				{
					HIDWORD(v18) = 0;
					v19 = (float)(v16 + v17) * 0.5;
					*(float*)v4 = -1.0 / v19;
					*(float*)&v18 = (float)((float)(-1.0 / v19) * v5[2]) * 0.69314718;
					*(float*)(v4 + 4) = 1.0 / (float)(sub_1408FC7F0(v18) - 1.0);
				}
			}
			v4 += 16i64;
			v3 += 16i64;
			v5 += 10;
			--v7;
		} while (v7);
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1[226] + 80i64))(a1[226], 0i64);
	}
	v20 = (*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD, __int64))(*a1[258] + 56i64))(a1[258], 0i64, 0i64, 2i64);
	if (v20)
	{
		*(_OWORD*)v20 = xmmword_140AE5130;
		*(_OWORD*)(v20 + 16) = xmmword_140AE5140;
		*(_OWORD*)(v20 + 32) = xmmword_140AE5150;
		*(_OWORD*)(v20 + 48) = xmmword_140AE5160;
		*(_QWORD*)(v20 + 64) = 0x2000300060007i64;
		(*(void(__fastcall**)(_QWORD*))(*a1[258] + 64i64))(a1[258]);
	}
	v21 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD, __int64))(*a1[259] + 56i64))(
		a1[259],
		0i64,
		0i64,
		2i64);
	if (v21)
	{
		*v21 = 0x3000100010000i64;
		v21[1] = 0x200020003i64;
		v21[2] = 0x7000500050004i64;
		v21[3] = 0x4000600060007i64;
		v21[4] = 0x7000300050001i64;
		v21[5] = 0x6000200040000i64;
		(*(void(__fastcall**)(_QWORD*))(*a1[259] + 64i64))(a1[259]);
	}
	result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD, __int64))(*a1[260] + 56i64))(
		a1[260],
		0i64,
		0i64,
		2i64);
	if (result)
	{
		*result = _mm_cvtsi128_si32((__m128i)0i64);
		result[1] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 4));
		result[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
		result[4] = _mm_cvtsi128_si32((__m128i)xmmword_140B7A330);
		result[5] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A330, 4));
		result[6] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A330, 8));
		result[8] = _mm_cvtsi128_si32((__m128i)xmmword_140B7A4B0);
		result[9] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A4B0, 4));
		result[10] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A4B0, 8));
		result[12] = _mm_cvtsi128_si32((__m128i)xmmword_140B7A4C0);
		result[13] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A4C0, 4));
		result[14] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A4C0, 8));
		result[16] = _mm_cvtsi128_si32((__m128i)xmmword_140B7A700);
		result[17] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A700, 4));
		result[18] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A700, 8));
		result[20] = _mm_cvtsi128_si32((__m128i)xmmword_140B7A710);
		result[21] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A710, 4));
		result[22] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A710, 8));
		result[24] = _mm_cvtsi128_si32((__m128i)xmmword_140B7A730);
		result[25] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A730, 4));
		result[26] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A730, 8));
		result[28] = _mm_cvtsi128_si32((__m128i)xmmword_140B7A740);
		result[29] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A740, 4));
		result[30] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A740, 8));
		return (_DWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a1[260] + 64i64))(a1[260]);
	}
	return result;
}
// 140AE5130: using guessed type __int128 xmmword_140AE5130;
// 140AE5140: using guessed type __int128 xmmword_140AE5140;
// 140AE5150: using guessed type __int128 xmmword_140AE5150;
// 140AE5160: using guessed type __int128 xmmword_140AE5160;
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7A710: using guessed type __int128 xmmword_140B7A710;
// 140B7A730: using guessed type __int128 xmmword_140B7A730;
// 140B7A740: using guessed type __int128 xmmword_140B7A740;

