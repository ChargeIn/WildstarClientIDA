//----- (00000001406CB310) ----------------------------------------------------
void __fastcall sub_1406CB310(__int64 a1)
{
	unsigned __int64 v1; // rdx
	__int64 v2; // r8
	__int64 v4; // r10
	__int64 v5; // r9
	int v6; // r11d
	__m128* v7; // rcx
	float v8; // xmm6_4
	float v9; // xmm0_4
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	char v13; // r9
	__int64 v14; // rax
	__m128i v15; // xmm2
	__m128i v16; // xmm1
	__m128i v17; // xmm3
	__int64 v18; // rcx
	__int64 v19; // rcx
	bool v20; // dl
	char v21; // al
	int v22; // eax
	__int64 v23; // rcx
	unsigned __int64 v24; // rbx
	unsigned __int64 v25; // rdx
	__int64 v26; // r9
	__int64 v27; // r8
	int v28; // r10d
	__int64 v29; // r9
	__int64 v30; // r8
	int v31; // r10d
	__int64 v32; // r11
	__int64 v33; // rdx
	__m128 v34; // [rsp+50h] [rbp-48h] BYREF
	__int128 v35[2]; // [rsp+60h] [rbp-38h] BYREF
	char v36; // [rsp+A0h] [rbp+8h] BYREF

	v1 = *(unsigned int*)(a1 + 712);
	v2 = qword_140C63678;
	if (v1 >= *(_QWORD*)(qword_140C63678 + 48))
		goto LABEL_6;
	v4 = *(_QWORD*)(qword_140C63678 + 40);
	v5 = 32i64 * (unsigned int)v1;
	v6 = *(_DWORD*)(v5 + v4 + 16);
	if ((unsigned int)(v6 - 1) <= 0xFFFFFFFD)
		*(_DWORD*)(v5 + v4 + 16) = v6 + 1;
	if (v1 >= *(_QWORD*)(v2 + 48))
		LABEL_6:
	v7 = *(__m128**)(v2 + 40);
	else
		v7 = (__m128*)(*(_QWORD*)(v2 + 40) + 32i64 * (unsigned int)v1);
	v34 = *v7;
	sub_1401429A0(v2, v1);
	v8 = sub_1400C9D10((_QWORD*)a1).m128_f32[0];
	v9 = sub_1400C9C30(a1);
	v10 = *(_QWORD*)(a1 + 32);
	v34.m128_f32[3] = v34.m128_f32[3] * (float)(v8 * v9);
	v11 = *(_QWORD*)(v10 + 2896);
	v13 = 1;
	if (v11 != a1
		&& (*(char*)(a1 + 28) >= 0 || !v11 || (v12 = *(_QWORD*)(v11 + 16)) == 0 || v12 != a1 && !sub_1400D1A90(v12, a1)))
	{
		v13 = 0;
	}
	sub_1400C3CB0(a1 + 1024, &v34, (*(_BYTE*)(a1 + 28) & 8) != 0, v13);
	v14 = *(_QWORD*)(a1 + 32);
	v15 = _mm_cvtsi32_si128(0);
	v16 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 1396));
	v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1392)), v15);
	v35[1] = (__int128)_mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1400)), v15),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1404)), v15)));
	v35[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(v17, _mm_unpacklo_epi32(v16, v15)));
	v18 = *(_QWORD*)(v14 + 2896);
	v20 = 1;
	if (v18 != a1 && (!v18 || (v19 = *(_QWORD*)(v18 + 16)) == 0 || v19 != a1 && !sub_1400D1A90(v19, a1)))
		v20 = 0;
	v21 = *(_BYTE*)(a1 + 1436);
	if ((v21 & 0x10) == 0)
	{
		v22 = 4;
		goto LABEL_34;
	}
	if (v21 >= 0)
		goto LABEL_28;
	if ((v21 & 0x40) != 0)
	{
		if (v20)
		{
			v22 = 3;
			goto LABEL_34;
		}
	LABEL_28:
		if ((v21 & 0x40) != 0)
		{
			v22 = 1;
			goto LABEL_34;
		}
	}
	if (v21 < 0 && v20)
		v22 = 2;
	else
		v22 = (*(_BYTE*)(a1 + 1438) & 1) != 0 ? 5 : 0;
LABEL_34:
	v23 = qword_140C63678;
	v24 = *(unsigned int*)(a1 + 4i64 * v22 + 1440);
	v25 = v24;
	if (v24 < *(_QWORD*)(qword_140C63678 + 48))
	{
		v26 = *(_QWORD*)(qword_140C63678 + 40);
		v27 = 32i64 * (unsigned int)v24;
		v28 = *(_DWORD*)(v27 + v26 + 16);
		if ((unsigned int)(v28 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v27 + v26 + 16) = v28 + 1;
	}
	if ((*(_DWORD*)(a1 + 664) & 0x100) != 0 && &v36 != (char*)(a1 + 708))
	{
		sub_1401429A0(v23, v24);
		v24 = *(unsigned int*)(a1 + 708);
		v23 = qword_140C63678;
		v25 = v24;
		if (v24 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v29 = *(_QWORD*)(qword_140C63678 + 40);
			v30 = 32i64 * (unsigned int)v24;
			v31 = *(_DWORD*)(v30 + v29 + 16);
			if ((unsigned int)(v31 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v30 + v29 + 16) = v31 + 1;
		}
	}
	v32 = *(_QWORD*)(a1 + 688);
	if (v32)
	{
		if (v25 >= *(_QWORD*)(v23 + 48))
			v33 = *(_QWORD*)(v23 + 40);
		else
			v33 = *(_QWORD*)(v23 + 40) + 32 * v25;
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int128*, _DWORD, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			v32,
			0i64,
			-1i64,
			v35,
			*(_DWORD*)(a1 + 704),
			v33,
			1,
			0i64);
		v23 = qword_140C63678;
	}
	sub_1401429A0(v23, v24);
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

