//----- (0000000140108E80) ----------------------------------------------------
__int64 __fastcall sub_140108E80(__int64 a1, const __m128i* a2)
{
	__int64 result; // rax
	__int64 v4; // rdi

	if (!a2 || !a2->m128i_i16[0] || ((*(_QWORD*)(a1 + 104) - *(_QWORD*)(a1 + 96)) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
		return 0i64;
	v4 = a1 + 48;
	result = sub_1400FDFE0(a1 + 48, (__int64)a2);
	if (!result)
	{
		result = (__int64)sub_1407DF6E0(a2, stru_1409D5204);
		if (result)
			return sub_1400FDFE0(v4, result + 2);
	}
	return result;
}
// 1409D5204: using guessed type __m128i stru_1409D5204[10];

