//----- (000000014026F0A0) ----------------------------------------------------
__int64 __fastcall sub_14026F0A0(__int64 a1, int** a2)
{
	int* v5; // rbx
	int v6; // edi

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(40i64, 0);
	if (v5)
	{
		*(_QWORD*)v5 = off_140B61BF0;
		*((_QWORD*)v5 + 3) = 0i64;
		*((_QWORD*)v5 + 4) = 0i64;
		v5[2] = 1;
		*((_QWORD*)v5 + 2) = a1;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = sub_14029C610(v5);
	if (v6 >= 0)
	{
		*a2 = v5;
		return 0i64;
	}
	else
	{
		if (v5)
		{
			sub_14029C4E0(v5);
			sub_14018B900((__int64)v5, 0);
		}
		return (unsigned int)v6;
	}
}
// 140B61BF0: using guessed type __int64 (__fastcall *off_140B61BF0[14])();

