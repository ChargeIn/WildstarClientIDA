//----- (000000014040F660) ----------------------------------------------------
float __fastcall sub_14040F660(__int64 a1, unsigned int a2, int a3, int a4)
{
	float result; // xmm0_4

	if (a4)
	{
		if (!a3)
		{
			if ((dword_140C8AB80 & 1) == 0)
			{
				dword_140C8AB80 |= 1u;
				qword_140C8AB88 = (__int64)off_140B66A30;
				sub_1407DD89C(sub_140950BE0);
			}
			(*(void(__fastcall**)(__int64*, _QWORD))(qword_140C8AB88 + 8))(&qword_140C8AB88, a2);
			return result;
		}
	}
	else if (!a3)
	{
		return sub_14040F570(a1, a2);
	}
	if ((dword_140C8ABA0 & 1) == 0)
	{
		dword_140C8ABA0 |= 1u;
		qword_140C8AB98 = (__int64)off_140B66A20;
		sub_1407DD89C(sub_140950BF0);
	}
	(*(void(__fastcall**)(__int64*, _QWORD))(qword_140C8AB98 + 8))(&qword_140C8AB98, a2);
	return result;
}
// 140950BE0: using guessed type __int64 __fastcall sub_140950BE0();
// 140950BF0: using guessed type __int64 __fastcall sub_140950BF0();
// 140B66A20: using guessed type __int64 (__fastcall *off_140B66A20[125])();
// 140B66A30: using guessed type __int64 (__fastcall *off_140B66A30[123])();
// 140C8AB80: using guessed type int dword_140C8AB80;
// 140C8AB88: using guessed type __int64 qword_140C8AB88;
// 140C8AB98: using guessed type __int64 qword_140C8AB98;
// 140C8ABA0: using guessed type int dword_140C8ABA0;

