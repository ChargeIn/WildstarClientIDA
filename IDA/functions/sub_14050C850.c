//----- (000000014050C850) ----------------------------------------------------
__int64 __fastcall sub_14050C850(__int64 a1)
{
	__int64 v1; // r10
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 result; // rax
	__m128i v9; // xmm0

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = *(_QWORD*)(v1 + 400);
	v7 = *(_QWORD*)(v6 + 16);
	result = 1i64;
	v9 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29544) + 16i64));
	*(_DWORD*)(v7 + 8) = 3;
	*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
	*(_QWORD*)(v6 + 16) += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

