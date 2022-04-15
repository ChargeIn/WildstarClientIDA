//----- (0000000140654F40) ----------------------------------------------------
__int64 __fastcall sub_140654F40(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__m128i v5; // xmm0
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = sub_1403DEC00(qword_140C65898, v3);
		if (v4)
		{
			v5 = _mm_cvtsi32_si128(*(_DWORD*)(v4 + 8));
			v6 = *(_QWORD*)(a1 + 16);
			result = 1i64;
			*(_DWORD*)(v6 + 8) = 3;
			*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		else
		{
			v8 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v8 = 0i64;
			*(_DWORD*)(v8 + 8) = 3;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

