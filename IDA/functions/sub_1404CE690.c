//----- (00000001404CE690) ----------------------------------------------------
__int64 __fastcall sub_1404CE690(__int64 a1, char a2)
{
	__int64 v3; // rcx

	v3 = a1 + 8;
	*(_QWORD*)(v3 - 8) = &off_140B68F60;
	sub_140008410(v3);
	sub_14018B900(*(_QWORD*)(a1 + 16), 0);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B68F60: using guessed type __int64 (__fastcall *off_140B68F60)();

