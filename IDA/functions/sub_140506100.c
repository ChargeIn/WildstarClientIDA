//----- (0000000140506100) ----------------------------------------------------
char __fastcall sub_140506100(char* a1, unsigned __int16 a2)
{
	unsigned __int64 v2; // r8
	char result; // al
	unsigned __int64 v5; // rdi
	char v6; // al

	v2 = *((_QWORD*)a1 + 135);
	result = 0;
	if (v2 < 0x174876E800i64)
	{
		result = a2 - 48;
		if ((unsigned __int16)(a2 - 48) <= 9u)
		{
			v5 = a2 - 48 + 10 * v2;
			if (v5 > *((_QWORD*)a1 + 136))
				v5 = *((_QWORD*)a1 + 136);
			v6 = 0;
			*((_QWORD*)a1 + 135) = v5;
			if (v5 != v2)
				v6 = 1;
			if (v6)
			{
				*((_QWORD*)a1 + 138) = *((_QWORD*)a1 + 137);
				a1[1076] = 0;
				*((_DWORD*)a1 + 268) = 0;
			}
			*((_QWORD*)a1 + 137) = v5;
			*((_QWORD*)a1 + 138) = v5;
			(*(void(__fastcall**)(char*))(*(_QWORD*)a1 + 568i64))(a1);
			return sub_1400D4040((__int64)a1, "CashWindowAmountChanged", a1, "i", v5);
		}
	}
	return result;
}

