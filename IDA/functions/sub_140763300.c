//----- (0000000140763300) ----------------------------------------------------
__int64 __fastcall sub_140763300(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rcx
	unsigned int v9; // eax
	__int64 v10; // rcx
	__m128i v11; // xmm0
	__int64 result; // rax

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v2 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_1400F26A0(v2 + 384, 1);
	v9 = sub_1403B8DC0(v8, v7 - 1);
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v10 + 8) = 3;
	v11 = _mm_cvtsi32_si128(v9);
	result = 1i64;
	*(_QWORD*)v10 = *(_OWORD*)&_mm_cvtepi32_pd(v11);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140763364: variable 'v8' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

