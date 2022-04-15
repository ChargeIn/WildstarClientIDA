//----- (00000001404A5B50) ----------------------------------------------------
void __fastcall sub_1404A5B50(_QWORD* a1)
{
	__int64 v2; // rcx

	*a1 = off_140B686E0;
	sub_1404A5ED0(a1);
	sub_140008410((__int64)(a1 + 12));
	sub_14018B900(a1[13], 0);
	v2 = a1[10];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	sub_140008410((__int64)(a1 + 6));
	sub_14018B900(a1[7], 0);
	sub_14079D4C0(a1);
}
// 140B686E0: using guessed type __int64 (__fastcall *off_140B686E0[4])();

