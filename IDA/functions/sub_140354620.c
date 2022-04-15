//----- (0000000140354620) ----------------------------------------------------
__int64 __fastcall sub_140354620(__int64 a1)
{
	bool v1; // zf

	v1 = *(_DWORD*)(a1 + 24) == 0;
	*(_QWORD*)a1 = off_140B65A70;
	if (!v1)
		sub_1400B6120(*(_QWORD*)(a1 + 16) + 1960i64, a1 + 24);
	sub_14018B900(a1, 0);
	return a1;
}
// 140B65A70: using guessed type __int64 (__fastcall *off_140B65A70[12])();

