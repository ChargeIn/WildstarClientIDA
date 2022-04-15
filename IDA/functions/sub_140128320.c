//----- (0000000140128320) ----------------------------------------------------
void __fastcall sub_140128320(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v6; // rcx
	unsigned __int64 v7; // rbx
	unsigned int* v8; // rdi
	__int64 v9; // r8
	__int64 v10; // rdx
	__int64 v11; // rcx
	int v12; // r9d
	unsigned __int64 v13; // rbx
	unsigned int* v14; // rdi
	__int64 v15; // r8
	__int64 v16; // rdx
	__int64 v17; // rcx
	int v18; // r9d
	unsigned __int64 v19; // rbx
	unsigned int* v20; // rdi
	__int64 v21; // r8
	__int64 v22; // rdx
	__int64 v23; // rcx
	int v24; // r9d
	unsigned __int64 v25; // rbx
	unsigned int* v26; // rdi
	__int64 v27; // r8
	__int64 v28; // rdx
	__int64 v29; // rcx
	int v30; // r9d
	__int64 v31; // rcx
	char v32; // bl
	__int64 v33; // rcx
	int v34; // edi
	__int64 v35; // rbx
	__int64 v36; // rcx
	bool v37; // dl
	__int64 v38; // rcx
	__m128 v39; // [rsp+20h] [rbp-68h] BYREF
	__int64 v40[6]; // [rsp+30h] [rbp-58h]
	char v41; // [rsp+A8h] [rbp+20h] BYREF

	*(_QWORD*)(a1 + 1024) = a3;
	sub_1400E7280(a2, (void(__fastcall***)(_QWORD))a1, L"DefaultStratum");
	v6 = qword_140C63678;
	*(_DWORD*)(a1 + 1040) = a4;
	v39 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(a4 | 0xFF000000), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v7 = (unsigned int)sub_140141F10(v6, &v39);
	v8 = (unsigned int*)(*(_QWORD*)(a1 + 1088) + 712i64);
	if (v8 == (unsigned int*)&v41)
	{
		v9 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v8);
		v9 = qword_140C63678;
		*v8 = v7;
		if (v7 < *(_QWORD*)(v9 + 48))
		{
			v10 = *(_QWORD*)(v9 + 40);
			v11 = 32i64 * (unsigned int)v7;
			v12 = *(_DWORD*)(v11 + v10 + 16);
			if ((unsigned int)(v12 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v11 + v10 + 16) = v12 + 1;
		}
	}
	sub_1401429A0(v9, v7);
	v39 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(
						_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1040) | 0xFF000000), 0),
						(__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v13 = (unsigned int)sub_140141F10(qword_140C63678, &v39);
	v14 = (unsigned int*)(*(_QWORD*)(a1 + 1080) + 712i64);
	if (v14 == (unsigned int*)&v41)
	{
		v15 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v14);
		v15 = qword_140C63678;
		*v14 = v13;
		if (v13 < *(_QWORD*)(v15 + 48))
		{
			v16 = *(_QWORD*)(v15 + 40);
			v17 = 32i64 * (unsigned int)v13;
			v18 = *(_DWORD*)(v17 + v16 + 16);
			if ((unsigned int)(v18 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v17 + v16 + 16) = v18 + 1;
		}
	}
	sub_1401429A0(v15, v13);
	v39 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1040)), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v19 = (unsigned int)sub_140141F10(qword_140C63678, &v39);
	v20 = (unsigned int*)(*(_QWORD*)(a1 + 1104) + 712i64);
	if (v20 == (unsigned int*)&v41)
	{
		v21 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v20);
		v21 = qword_140C63678;
		*v20 = v19;
		if (v19 < *(_QWORD*)(v21 + 48))
		{
			v22 = *(_QWORD*)(v21 + 40);
			v23 = 32i64 * (unsigned int)v19;
			v24 = *(_DWORD*)(v23 + v22 + 16);
			if ((unsigned int)(v24 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v23 + v22 + 16) = v24 + 1;
		}
	}
	sub_1401429A0(v21, v19);
	v39 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1040)), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v25 = (unsigned int)sub_140141F10(qword_140C63678, &v39);
	v26 = (unsigned int*)(*(_QWORD*)(a1 + 1096) + 712i64);
	if (v26 == (unsigned int*)&v41)
	{
		v27 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v26);
		v27 = qword_140C63678;
		*v26 = v25;
		if (v25 < *(_QWORD*)(v27 + 48))
		{
			v28 = *(_QWORD*)(v27 + 40);
			v29 = 32i64 * (unsigned int)v25;
			v30 = *(_DWORD*)(v29 + v28 + 16);
			if ((unsigned int)(v30 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v29 + v28 + 16) = v30 + 1;
		}
	}
	sub_1401429A0(v27, v25);
	v31 = *(_QWORD*)(a1 + 1216);
	v32 = HIBYTE(a4) != 0xFF;
	*(_BYTE*)(v31 + 1436) &= ~0x40u;
	*(_BYTE*)(v31 + 1436) |= v32 << 6;
	v33 = *(_QWORD*)(v31 + 1560);
	if (v33 && (*(_BYTE*)(v33 + 28) & 1) != 0)
		sub_1400D42F0(v33, v32, 0, 4.0);
	sub_1400D42F0(*(_QWORD*)(a1 + 1288), v32, 0, 4.0);
	sub_140127B20(a1, *(_DWORD*)(a1 + 1040));
	sub_1400D42F0(a1, 1, 0, 4.0);
	sub_1400E8B00(*(_QWORD*)(a1 + 32), a1);
	v34 = 0;
	v40[0] = *(_QWORD*)(a1 + 1168);
	v35 = 0i64;
	v40[1] = *(_QWORD*)(a1 + 1176);
	v40[2] = *(_QWORD*)(a1 + 1184);
	v40[3] = *(_QWORD*)(a1 + 1192);
	v40[4] = *(_QWORD*)(a1 + 1200);
	v40[5] = *(_QWORD*)(a1 + 1208);
	do
	{
		v36 = v40[v35];
		v37 = v34 == *(_DWORD*)(a1 + 1044);
		*(_BYTE*)(v36 + 1436) &= ~0x40u;
		*(_BYTE*)(v36 + 1436) |= v37 << 6;
		v38 = *(_QWORD*)(v36 + 1560);
		if (v38)
		{
			if ((*(_BYTE*)(v38 + 28) & 1) != 0)
				sub_1400D42F0(v38, v37, 0, 4.0);
		}
		++v35;
		++v34;
	} while (v35 < 6);
}
// 140A1F820: using guessed type wchar_t aDefaultstratum_5[15];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;

