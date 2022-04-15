//----- (00000001402EB220) ----------------------------------------------------
_QWORD* __fastcall sub_1402EB220(_QWORD* a1)
{
	__int64 v2; // rcx

	*a1 = off_140B63918;
	sub_14018B900(a1[5], 0);
	sub_14018B900(a1[6], 0);
	v2 = a1[1];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B63918: using guessed type __int64 (__fastcall *off_140B63918[2])();

