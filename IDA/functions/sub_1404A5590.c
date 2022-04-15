//----- (00000001404A5590) ----------------------------------------------------
void __fastcall sub_1404A5590(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	__int64 v4; // rcx

	*a1 = off_140B67E20;
	v2 = a1[1];
	if (v2)
	{
		sub_1404A54D0(v2);
		v3 = a1[1];
		if (v3)
		{
			sub_140019490((_QWORD*)a1[1]);
			sub_14018B900(*(_QWORD*)(v3 + 16), 0);
			*(_QWORD*)(v3 + 16) = 0i64;
			sub_14018B900(v3, 0);
		}
	}
	v4 = a1[10];
	if (v4)
		sub_14018B900(v4, 0);
	sub_140008410((__int64)(a1 + 2));
	sub_14018B900(a1[3], 0);
}
// 140B67E20: using guessed type __int64 (__fastcall *off_140B67E20[3])();

