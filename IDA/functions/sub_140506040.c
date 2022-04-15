//----- (0000000140506040) ----------------------------------------------------
__int64 __fastcall sub_140506040(char* a1)
{
	unsigned __int64 v1; // r8
	unsigned __int64 v3; // rdi
	char v4; // al

	v1 = *((_QWORD*)a1 + 135);
	v3 = v1 / 0xA;
	if (v1 / 0xA > *((_QWORD*)a1 + 136))
		v3 = *((_QWORD*)a1 + 136);
	v4 = 0;
	*((_QWORD*)a1 + 135) = v3;
	if (v3 != v1)
		v4 = 1;
	if (v4)
	{
		*((_QWORD*)a1 + 138) = *((_QWORD*)a1 + 137);
		a1[1076] = 0;
		*((_DWORD*)a1 + 268) = 0;
	}
	*((_QWORD*)a1 + 137) = v3;
	*((_QWORD*)a1 + 138) = v3;
	(*(void(__fastcall**)(char*))(*(_QWORD*)a1 + 568i64))(a1);
	sub_1400D4040((__int64)a1, "CashWindowAmountChanged", a1, "i", v3);
	return 0i64;
}

