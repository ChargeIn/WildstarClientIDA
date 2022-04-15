//----- (00000001404DE840) ----------------------------------------------------
__m128 __fastcall sub_1404DE840(unsigned int a1, __int64 a2)
{
	__int128 v2; // xmm0
	__int128 v5; // xmm6
	__int64 v6; // rax

	if ((dword_140C8ABA0 & 1) == 0)
	{
		dword_140C8ABA0 |= 1u;
		qword_140C8AB98 = (__int64)off_140B66A20;
		sub_1407DD89C(sub_140950BF0);
	}
	*(double*)&v2 = (*(double(__fastcall**)(__int64*, _QWORD))(qword_140C8AB98 + 8))(&qword_140C8AB98, a1);
	v5 = v2;
	if (a2)
	{
		if (*(_DWORD*)(a2 + 16) == 11)
		{
			v6 = sub_1402479C0(*(_DWORD*)(a2 + 64));
			if (v6)
				*(float*)&v5 = *(float*)&v2 * *(float*)(v6 + 32);
		}
	}
	return (__m128)v5;
}
// 1404DE894: variable 'v2' is possibly undefined
// 140950BF0: using guessed type __int64 __fastcall sub_140950BF0();
// 140B66A20: using guessed type __int64 (__fastcall *off_140B66A20[125])();
// 140C8AB98: using guessed type __int64 qword_140C8AB98;
// 140C8ABA0: using guessed type int dword_140C8ABA0;

