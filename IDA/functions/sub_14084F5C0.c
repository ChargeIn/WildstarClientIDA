//----- (000000014084F5C0) ----------------------------------------------------
char __fastcall sub_14084F5C0(_BYTE* a1, char a2, char a3, char a4, char a5)
{
	char result; // al

	a1[91] &= ~0x10u;
	a1[91] |= 16 * (a2 & 1);
	if (a2)
	{
		sub_14084D430((__int64)a1);
		a1[160] &= 0xF0u;
		result = a4 & 3 | (4 * (a5 & 3));
		a1[160] |= result;
	}
	else
	{
		result = sub_14084D320((__int64)a1);
		a1[160] &= 0xFCu;
	}
	if (!a3)
		return (*(__int64(__fastcall**)(_BYTE*, _QWORD, __int64))(*(_QWORD*)a1 + 560i64))(a1, *(_QWORD*)a1, 10i64);
	return result;
}

