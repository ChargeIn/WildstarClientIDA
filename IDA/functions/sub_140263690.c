//----- (0000000140263690) ----------------------------------------------------
__int64 __fastcall sub_140263690(__int64 a1, void(__fastcall*** a2)(_QWORD), int** a3)
{
	int* v5; // rbx
	__int64 result; // rax

	if (!a2 || !a3)
		return 2147942487i64;
	v5 = sub_14018B280(64i64, 0);
	if (v5)
	{
		v5[2] = 1;
		*((_QWORD*)v5 + 2) = a2;
		*(_QWORD*)v5 = off_140B61700;
		(**a2)(a2);
		v5[14] = 0;
		*a3 = v5;
		return 0i64;
	}
	else
	{
		result = 0i64;
		*a3 = 0i64;
	}
	return result;
}
// 140B61700: using guessed type __int64 (__fastcall *off_140B61700[17])();

