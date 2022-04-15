//----- (00000001403404D0) ----------------------------------------------------
__int64 __fastcall sub_1403404D0(__int64 a1, int** a2)
{
	int* v4; // rbx

	if (!a2)
		return 2147942487i64;
	v4 = sub_14018B280(32i64, 0);
	if (v4)
	{
		*(_QWORD*)v4 = off_140B65240;
		v4[2] = 1;
		*((_QWORD*)v4 + 3) = 0i64;
		*((_QWORD*)v4 + 2) = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	sub_1403480D0((__int64*)v4 + 2);
	*a2 = v4;
	return 0i64;
}
// 140B65240: using guessed type __int64 (__fastcall *off_140B65240[42])();

