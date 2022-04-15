//----- (00000001400C2AC0) ----------------------------------------------------
__int64 __fastcall sub_1400C2AC0(int** a1)
{
	int* v3; // rax

	if (!a1)
		return 2147942487i64;
	v3 = sub_14018B280(64i64, 0);
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 0i64;
		*((_QWORD*)v3 + 2) = 0i64;
		v3[6] = 0;
		*((_QWORD*)v3 + 6) = 0i64;
		*((_QWORD*)v3 + 5) = 0i64;
		*((_QWORD*)v3 + 7) = 0i64;
		*(_QWORD*)v3 = off_140B564F0;
		*a1 = v3;
	}
	else
	{
		*a1 = 0i64;
	}
	return 0i64;
}
// 140B564F0: using guessed type __int64 (__fastcall *off_140B564F0[9])();

