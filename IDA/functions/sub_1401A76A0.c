//----- (00000001401A76A0) ----------------------------------------------------
void __fastcall sub_1401A76A0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	*(_QWORD*)a1 = off_140B5EB10;
	sub_1401A59A0(a1);
	*(_DWORD*)(a1 + 92) = 0;
	v2 = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(a1 + 104) = 0i64;
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	sub_14018B900(*(_QWORD*)(a1 + 112), 0);
	*(_QWORD*)(a1 + 112) = 0i64;
	sub_1401A8EC0(a1 + 512);
	sub_1401A8F80(a1 + 384);
	sub_1401A9040(a1 + 256);
	sub_1401A9130(a1 + 128);
	v3 = *(_QWORD*)(a1 + 104);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	sub_1401A5900(a1);
}
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();

