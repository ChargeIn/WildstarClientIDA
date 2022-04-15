//----- (00000001406A2150) ----------------------------------------------------
__int64* __fastcall sub_1406A2150(__int64* a1, int* a2, __int64 a3)
{
	int* v6; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // r8

	a1[1] = a3;
	if (a3)
	{
		v6 = sub_14018B280(4 * a3 + 16, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = a3;
			v7 = (__int64)(v6 + 4);
			*(_QWORD*)(v7 - 16) = off_140B55060;
		}
		else
		{
			v7 = 16i64;
		}
	}
	else
	{
		v7 = 0i64;
	}
	v8 = 4 * a1[1];
	*a1 = v7;
	sub_1407DB590((int*)v7, a2, v8);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

