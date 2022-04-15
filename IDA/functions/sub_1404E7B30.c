//----- (00000001404E7B30) ----------------------------------------------------
__int64 __fastcall sub_1404E7B30(__int64 a1)
{
	int v2; // ecx
	__int64 result; // rax
	unsigned __int8 v4; // al
	__int64 v5; // rcx
	__m128i v6; // xmm0

	v2 = qword_140C658D0;
	if (qword_140C658D0)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C658D0 + 16i64))(qword_140C658D0);
		v5 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v5 + 8) = 3;
		v6 = _mm_cvtsi32_si128(v4);
		result = 1i64;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = qword_140C658D0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return (unsigned int)(v2 + 1);
	}
	return result;
}
// 140C658D0: using guessed type __int64 qword_140C658D0;

