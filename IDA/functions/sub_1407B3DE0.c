//----- (00000001407B3DE0) ----------------------------------------------------
_QWORD* __fastcall sub_1407B3DE0(_QWORD* a1, char a2)
{
	*a1 = off_140B79270;
	if (a1[4])
	{
		sub_1407B5100((__int64)(a1 + 2), *(_QWORD**)(a1[3] + 8i64));
		*(_QWORD*)(a1[3] + 16i64) = a1[3];
		*(_QWORD*)(a1[3] + 8i64) = 0i64;
		*(_QWORD*)(a1[3] + 24i64) = a1[3];
		a1[4] = 0i64;
	}
	sub_14018B900(a1[3], 0);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B79270: using guessed type __int64 (__fastcall *off_140B79270[10])();

