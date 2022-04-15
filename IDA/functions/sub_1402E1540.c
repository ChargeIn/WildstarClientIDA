//----- (00000001402E1540) ----------------------------------------------------
void __fastcall sub_1402E1540(__int64 a1)
{
	__int64 v2; // rcx

	*(_QWORD*)a1 = off_140B62FE0;
	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v2 + 240i64))(v2, 0i64, 0i64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 8i64))(*(_QWORD*)(a1 + 16));
	}
	sub_140019490((_QWORD*)(a1 + 88));
	sub_14018B900(*(_QWORD*)(a1 + 104), 0);
	*(_QWORD*)(a1 + 104) = 0i64;
	if (*(_QWORD*)(a1 + 80))
		sub_1401A4A00((const void***)(a1 + 80));
	sub_140019490((_QWORD*)(a1 + 40));
	sub_14018B900(*(_QWORD*)(a1 + 56), 0);
	*(_QWORD*)(a1 + 56) = 0i64;
	if (*(_QWORD*)(a1 + 32))
		sub_1401A4A00((const void***)(a1 + 32));
	if (*(_QWORD*)(a1 + 24))
		sub_1401A4A00((const void***)(a1 + 24));
}
// 140B62FE0: using guessed type __int64 (__fastcall *off_140B62FE0[28])();

