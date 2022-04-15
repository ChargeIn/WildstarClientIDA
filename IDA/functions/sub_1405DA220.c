//----- (00000001405DA220) ----------------------------------------------------
__int64 __fastcall sub_1405DA220(__int64 a1, char a2)
{
	int v2; // r9d
	int v4; // edx

	v2 = *(_DWORD*)(a1 + 92);
	v4 = *(_DWORD*)(a1 + 336);
	*(_QWORD*)a1 = off_140B6DDC0;
	sub_1403EB690(a1, v4, *(_DWORD*)(*(_QWORD*)(a1 + 80) + 92i64), v2);
	sub_1405D6680(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B6DDC0: using guessed type __int64 (__fastcall *off_140B6DDC0[123])();

