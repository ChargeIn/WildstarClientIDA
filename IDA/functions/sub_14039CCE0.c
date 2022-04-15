//----- (000000014039CCE0) ----------------------------------------------------
void __fastcall sub_14039CCE0(__int64 a1, int a2, unsigned int a3)
{
	_DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF

	if (*(_QWORD*)(a1 + 120))
	{
		if (a3 <= 0x14B)
			sub_140237240(a3);
		sub_1400035B0();
		sub_1404698A0(*(_QWORD*)(a1 + 120));
		v6[0] = a2;
		v6[1] = a3;
		v6[2] = 1;
		sub_1403F4900(a1, 0x801u, (__int64)v6);
	}
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

