//----- (000000014079AF40) ----------------------------------------------------
void __fastcall sub_14079AF40(_QWORD* a1)
{
	*a1 = off_140B78240;
	sub_14079AFF0(a1);
	if (a1[7])
	{
		sub_140032150((__int64)(a1 + 5), *(_QWORD**)(a1[6] + 8i64));
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	if (a1[3])
	{
		sub_14079B3E0((__int64)(a1 + 1), *(_QWORD**)(a1[2] + 8i64));
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
// 140B78240: using guessed type __int64 (__fastcall *off_140B78240[4])();
