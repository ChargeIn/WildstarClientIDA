//----- (000000014078D970) ----------------------------------------------------
__int64 __fastcall sub_14078D970(_QWORD* a1)
{
	int v2; // ebx
	unsigned int v3; // eax
	int v4; // ebx
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax

	v2 = sub_140056D60(a1, 2u);
	v3 = sub_140056D60(a1, 1u);
	if (v2 >= 0)
	{
		if (v2 < 32)
		{
			v5 = v3 << v2;
			goto LABEL_7;
		}
		goto LABEL_5;
	}
	v4 = -v2;
	if (v4 >= 32)
	{
	LABEL_5:
		v5 = 0;
		goto LABEL_7;
	}
	v5 = v3 >> v4;
LABEL_7:
	v6 = a1[2];
	v7 = _mm_cvtsi32_si128(v5);
	*(_DWORD*)(v6 + 8) = 3;
	result = 1i64;
	*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
	a1[2] += 16i64;
	return result;
}

