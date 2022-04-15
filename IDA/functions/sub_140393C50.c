//----- (0000000140393C50) ----------------------------------------------------
__int64 __fastcall sub_140393C50(__m128* a1, __m128* a2, char a3, __int64* a4)
{
	int* v9; // rax
	__int64 v10; // rbx

	if (!a4)
		return 2147942487i64;
	v9 = sub_14018B280(56i64, 0);
	v10 = (__int64)v9;
	if (v9)
	{
		*((_QWORD*)v9 + 1) = 1i64;
		*(_QWORD*)v9 = off_140B5FE88;
		v9[4] = 0;
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 6) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	sub_140393740(a1, a2, a3, v10);
	*a4 = v10;
	return 0i64;
}
// 140B5FE88: using guessed type __int64 (__fastcall *off_140B5FE88[18])();

