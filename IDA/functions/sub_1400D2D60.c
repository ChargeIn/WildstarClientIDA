//----- (00000001400D2D60) ----------------------------------------------------
void __fastcall sub_1400D2D60(__int64 a1, __m128i* a2)
{
	__int64 v4; // rax
	__int64* v5; // rcx
	__int64 v6; // rdx

	if (!*(_QWORD*)(a1 + 792) && a2 && a2->m128i_i16[0])
	{
		v4 = (__int64)sub_14018B280(48i64, 0);
		if (v4)
			v4 = sub_1401095E0(v4);
		*(_QWORD*)(a1 + 792) = v4;
	}
	v5 = *(__int64**)(a1 + 792);
	if (v5)
	{
		v6 = *(_QWORD*)(a1 + 32);
		if (v6)
			sub_140109710(v5, v6 + 240, a2, 0);
		*(_DWORD*)(*(_QWORD*)(a1 + 792) + 8i64) = dword_140C63664;
	}
}
// 140C63664: using guessed type int dword_140C63664;

