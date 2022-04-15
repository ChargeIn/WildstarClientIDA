//----- (000000014074D350) ----------------------------------------------------
__int64 __fastcall sub_14074D350(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // rax
	__m128i v10; // xmm0
	__int64 v11; // rax

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = sub_1401E98E0(v7);
	if (v8)
	{
		v10 = _mm_cvtsi32_si128(*(_DWORD*)(v8 + 12));
		v11 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v11 + 8) = 3;
		*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

