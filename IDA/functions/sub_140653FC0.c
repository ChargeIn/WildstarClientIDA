//----- (0000000140653FC0) ----------------------------------------------------
__int64 __fastcall sub_140653FC0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // ecx
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax
	__int64 v9; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = (int)*(float*)(v3 + 1828);
		if (v4 == -1)
			v5 = -1;
		else
			v5 = v4 + (int)*(float*)(v3 + 3220);
		v6 = *(_QWORD*)(a1 + 16);
		v7 = _mm_cvtsi32_si128(v5);
		result = 1i64;
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v9 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v9 = 0i64;
		*(_DWORD*)(v9 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

