//----- (0000000140525E10) ----------------------------------------------------
void __fastcall sub_140525E10(__int64 a1, __int64 a2, __m128* a3)
{
	__m128* v4; // r10
	__int64 v5; // rcx
	__int64 v6; // rcx
	char v7; // r9
	__int64 v8; // rax
	__m128i v9; // xmm2
	__m128i v10; // xmm1
	__m128i v11; // xmm3
	__int64 v12; // rcx
	__int64 v13; // rcx
	bool v14; // dl
	char v15; // al
	int v16; // eax
	__int64 v17; // rcx
	unsigned __int64 v18; // rbx
	unsigned __int64 v19; // rdx
	__int64 v20; // r9
	__int64 v21; // r8
	int v22; // r10d
	__int64 v23; // r9
	__int64 v24; // r8
	int v25; // r10d
	__int64 v26; // r11
	__int64 v27; // rdx
	__int128 v28[2]; // [rsp+50h] [rbp-28h] BYREF
	char v29; // [rsp+88h] [rbp+10h] BYREF

	v4 = a3;
	v5 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2896i64);
	v7 = 1;
	if (v5 != a1
		&& (*(char*)(a1 + 28) >= 0 || !v5 || (v6 = *(_QWORD*)(v5 + 16)) == 0 || v6 != a1 && !sub_1400D1A90(v6, a1)))
	{
		v7 = 0;
	}
	sub_1400C3CB0(a1 + 1024, v4, (*(_BYTE*)(a1 + 28) & 8) != 0, v7);
	v8 = *(_QWORD*)(a1 + 32);
	v9 = _mm_cvtsi32_si128(0);
	v10 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 1396));
	v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1392)), v9);
	v28[1] = (__int128)_mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1400)), v9),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1404)), v9)));
	v28[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(v11, _mm_unpacklo_epi32(v10, v9)));
	v12 = *(_QWORD*)(v8 + 2896);
	v14 = 1;
	if (v12 != a1 && (!v12 || (v13 = *(_QWORD*)(v12 + 16)) == 0 || v13 != a1 && !sub_1400D1A90(v13, a1)))
		v14 = 0;
	v15 = *(_BYTE*)(a1 + 1436);
	if ((v15 & 0x10) == 0)
	{
		v16 = 4;
		goto LABEL_28;
	}
	if (v15 >= 0)
		goto LABEL_22;
	if ((v15 & 0x40) != 0)
	{
		if (v14)
		{
			v16 = 3;
			goto LABEL_28;
		}
	LABEL_22:
		if ((v15 & 0x40) != 0)
		{
			v16 = 1;
			goto LABEL_28;
		}
	}
	if (v15 < 0 && v14)
		v16 = 2;
	else
		v16 = (*(_BYTE*)(a1 + 1438) & 1) != 0 ? 5 : 0;
LABEL_28:
	v17 = qword_140C63678;
	v18 = *(unsigned int*)(a1 + 4i64 * v16 + 1440);
	v19 = v18;
	if (v18 < *(_QWORD*)(qword_140C63678 + 48))
	{
		v20 = *(_QWORD*)(qword_140C63678 + 40);
		v21 = 32i64 * (unsigned int)v18;
		v22 = *(_DWORD*)(v21 + v20 + 16);
		if ((unsigned int)(v22 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v21 + v20 + 16) = v22 + 1;
	}
	if ((*(_DWORD*)(a1 + 664) & 0x100) != 0 && &v29 != (char*)(a1 + 708))
	{
		sub_1401429A0(v17, v18);
		v18 = *(unsigned int*)(a1 + 708);
		v17 = qword_140C63678;
		v19 = v18;
		if (v18 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v23 = *(_QWORD*)(qword_140C63678 + 40);
			v24 = 32i64 * (unsigned int)v18;
			v25 = *(_DWORD*)(v24 + v23 + 16);
			if ((unsigned int)(v25 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v24 + v23 + 16) = v25 + 1;
		}
	}
	v26 = *(_QWORD*)(a1 + 688);
	if (v26)
	{
		if (v19 >= *(_QWORD*)(v17 + 48))
			v27 = *(_QWORD*)(v17 + 40);
		else
			v27 = *(_QWORD*)(v17 + 40) + 32 * v19;
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int128*, _DWORD, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			v26,
			0i64,
			-1i64,
			v28,
			*(_DWORD*)(a1 + 704),
			v27,
			1,
			0i64);
		v17 = qword_140C63678;
	}
	sub_1401429A0(v17, v18);
}
// 140525E79: variable 'v4' is possibly undefined
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

