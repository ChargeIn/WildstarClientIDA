//----- (0000000140279ED0) ----------------------------------------------------
__int64 __fastcall sub_140279ED0(__int64 a1, int a2, __m128i* a3, int a4, int a5, int a6, int a7, __int64* a8)
{
	int* v13; // rax
	__int64 v14; // rbx
	int v15; // esi

	if (!a8)
		return 2147942487i64;
	v13 = sub_14018B280(424i64, 0);
	if (v13)
		v14 = sub_1402AE670((__int64)v13, a1);
	else
		v14 = 0i64;
	v15 = sub_1402AEBB0(v14, a2, a3, a4, a5, a6, a7);
	if (v15 >= 0)
	{
		*a8 = v14;
		return 0i64;
	}
	else
	{
		if (v14)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v14 + 16i64))(v14, 1i64);
		return (unsigned int)v15;
	}
}

