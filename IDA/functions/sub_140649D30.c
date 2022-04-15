//----- (0000000140649D30) ----------------------------------------------------
__int64 __fastcall sub_140649D30(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__m128i v4; // xmm0
	__int64 v5; // rcx
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = _mm_cvtsi32_si128(*(_DWORD*)(v3 + 8));
		v5 = *(_QWORD*)(a1 + 16);
		result = 1i64;
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		*(_QWORD*)(a1 + 16) += 16i64;
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

