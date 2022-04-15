//----- (00000001401B7A40) ----------------------------------------------------
__int64 __fastcall sub_1401B7A40(__int64 a1, int* a2, int a3, __int64 a4, _QWORD* a5)
{
	__int64 result; // rax
	int* v9; // rax

	if (!a2 || (a3 & 3) == 0)
		return 2147942487i64;
	v9 = sub_14018E9C0(a2);
	*(_DWORD*)(a1 + 16) = a3;
	*(_QWORD*)(a1 + 24) = a4;
	*(_QWORD*)(a1 + 8) = v9;
	if ((a3 & 2) == 0)
	{
		result = sub_1401B7AF0(a1, a5);
		if ((int)result < 0)
			return result;
		return 0i64;
	}
	if (a5)
		return 2147500037i64;
	result = sub_1401B7D40(a1);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

