//----- (00000001401C7E90) ----------------------------------------------------
__int64 __fastcall sub_1401C7E90(__int64 a1, char a2)
{
	*(_QWORD*)a1 = off_140B5F570;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 8i64))(*(_QWORD*)(a1 + 104));
	sub_1401C5EA0(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B5F570: using guessed type __int64 (__fastcall *off_140B5F570[21])();

