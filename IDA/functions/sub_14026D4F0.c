//----- (000000014026D4F0) ----------------------------------------------------
__int64 __fastcall sub_14026D4F0(__int64 a1, _QWORD* a2, int** a3)
{
	int* v7; // rax
	int* v8; // rbx
	int v9; // edi

	if (!a3)
		return 2147942487i64;
	v7 = sub_14018B280(128i64, 0);
	v8 = v7;
	if (v7)
	{
		*(_QWORD*)v7 = off_140B61760;
		*((_QWORD*)v7 + 14) = 0i64;
		*((_QWORD*)v7 + 15) = 0i64;
		v7[2] = 1;
		*((_QWORD*)v7 + 2) = a1;
		v7[16] = 0;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = sub_140289510(v8, a2);
	if (v9 >= 0)
	{
		*a3 = v8;
		return 0i64;
	}
	else
	{
		if (v8)
		{
			sub_1402893A0((__int64)v8);
			sub_14018B900((__int64)v8, 0);
		}
		return (unsigned int)v9;
	}
}
// 140B61760: using guessed type __int64 (__fastcall *off_140B61760[5])();

