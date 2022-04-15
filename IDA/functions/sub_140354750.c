//----- (0000000140354750) ----------------------------------------------------
__int64 __fastcall sub_140354750(__int64 a1)
{
	bool v1; // zf

	v1 = *(_DWORD*)(a1 + 12) == 0;
	*(_QWORD*)a1 = off_140B65A80;
	if (!v1)
		sub_1400B6120(*(_QWORD*)(a1 + 16) + 2000i64, a1 + 12);
	sub_14018B900(a1, 0);
	return a1;
}
// 140B65A80: using guessed type __int64 (__fastcall *off_140B65A80[10])();

