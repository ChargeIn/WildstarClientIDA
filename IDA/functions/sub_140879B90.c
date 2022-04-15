//----- (0000000140879B90) ----------------------------------------------------
_QWORD* __fastcall sub_140879B90(_QWORD* a1, char a2)
{
	__int64 v3; // rdx

	v3 = a1[17];
	*a1 = off_1409A6F30;
	if (v3)
	{
		sub_140833130((*(_BYTE*)(a1[3] + 199i64) & 0x1F) << 10, v3);
		a1[17] = 0i64;
	}
	sub_1408805F0((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A6F30: using guessed type __int64 (__fastcall *off_1409A6F30[24])();

