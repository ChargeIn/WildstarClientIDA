//----- (0000000140175B10) ----------------------------------------------------
__int64 __fastcall sub_140175B10(_BYTE* a1, int a2, int* a3)
{
	char v5; // al

	v5 = a1[664] >> 3;
	a1[1040] = 0;
	if ((v5 & 1) != 0 && !a2)
	{
		if ((a1[1468] & 0x20) != 0 && (unsigned int)sub_1400C3E20((__int64)(a1 + 1056)) == 2)
			(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 576i64))(a1);
		if ((a1[1884] & 0x20) != 0 && (unsigned int)sub_1400C3E20((__int64)(a1 + 1472)) == 2)
			(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 568i64))(a1);
	}
	return sub_1400D2550((__int64)a1, a2, a3);
}

