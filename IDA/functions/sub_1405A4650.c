//----- (00000001405A4650) ----------------------------------------------------
__int64 __fastcall sub_1405A4650(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_QWORD* a4,
	unsigned __int8(__fastcall* a5)(_QWORD*, _QWORD*))
{
	__int64 v5; // rbx
	__int64 i; // rdi
	__int64 v11; // rdi
	__int64 v12; // rdi

	v5 = 2 * a2 + 2;
	for (i = a2; v5 < a3; v5 = 2 * v5 + 2)
	{
		if (a5((_QWORD*)(a1 + 16 * v5), (_QWORD*)(a1 + 16 * v5 - 16)))
			--v5;
		v11 = 2 * i;
		*(_QWORD*)(a1 + 8 * v11) = *(_QWORD*)(a1 + 16 * v5);
		*(_QWORD*)(a1 + 8 * v11 + 8) = *(_QWORD*)(a1 + 16 * v5 + 8);
		i = v5;
	}
	if (v5 == a3)
	{
		v12 = 2 * i;
		*(_QWORD*)(a1 + 8 * v12) = *(_QWORD*)(a1 + 16 * v5 - 16);
		*(_QWORD*)(a1 + 8 * v12 + 8) = *(_QWORD*)(a1 + 16 * v5 - 8);
		i = v5 - 1;
	}
	return sub_1405A4730(a1, i, a2, a4, a5);
}

