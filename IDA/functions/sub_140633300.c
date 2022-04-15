//----- (0000000140633300) ----------------------------------------------------
_QWORD* __fastcall sub_140633300(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	*a1 = off_140B784D0;
	sub_1407A4640((__int64)a1);
	sub_140008410((__int64)(a1 + 7));
	sub_14018B900(a1[8], 0);
	v2 = a1[5];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = a1[3];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B784D0: using guessed type __int64 (__fastcall *off_140B784D0[16])();

