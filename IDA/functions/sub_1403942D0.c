//----- (00000001403942D0) ----------------------------------------------------
__int64 __fastcall sub_1403942D0(__int64 a1, int** a2)
{
	int* v4; // rax

	if (!a2)
		return 2147942487i64;
	v4 = sub_14018B280(32i64, 0);
	if (v4)
	{
		*(_QWORD*)v4 = off_140B787C0;
		v4[6] = 1;
		*((_QWORD*)v4 + 1) = 0i64;
		*((_QWORD*)v4 + 2) = 0i64;
		*a2 = v4;
	}
	else
	{
		*a2 = 0i64;
	}
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();

