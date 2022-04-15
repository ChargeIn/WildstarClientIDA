//----- (00000001404011C0) ----------------------------------------------------
__int64 __fastcall sub_1404011C0(__int64 a1, char a2)
{
	__int64 v3; // rcx

	v3 = a1 + 24;
	*(_QWORD*)(v3 - 24) = &off_140B66938;
	sub_140008410(v3);
	sub_14018B900(*(_QWORD*)(a1 + 32), 0);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B66938: using guessed type __int64 (__fastcall *off_140B66938)();

