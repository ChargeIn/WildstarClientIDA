#include "../winhttp.h"

//----- (0000000140019CB0) ----------------------------------------------------
__int64* __fastcall sub_140019CB0(__int64 a1, __int64 a2, int* a3)
{
	__int64 v4; // rcx
	int v5; // eax
	int v6; // ecx

	qword_140C66CC0 = (__int64)&off_140B5E6E8;
	v4 = *(_QWORD*)a2;
	dword_140C66CD0 = 1;
	qword_140C66CC8 = v4;
	v5 = *(_DWORD*)(a2 + 8);
	dword_140C66CD8 = 0;
	dword_140C66CD4 = v5;
	if (v4)
		*(_QWORD*)sub_14019D520(qword_140C63750 + 8, &qword_140C66CC8) = &qword_140C66CC0;
	qword_140C66CC0 = (__int64)&off_140B550A0;
	dword_140C66D34 = *a3;
	dword_140C66D38 = a3[1];
	v6 = a3[2];
	qword_140C66D50 = (__int64)sub_1400163B0;
	dword_140C66D3C = v6;
	dword_140C66CE8[0] = v6;
	dword_140C66CF4 = v6;
	dword_140C66D00 = v6;
	dword_140C66D0C = v6;
	dword_140C66D18 = v6;
	qword_140C66D40 = 0i64;
	dword_140C66D48 = 0;
	dword_140C66CE0[0] = dword_140C66D34;
	dword_140C66CE4[0] = dword_140C66D38;
	dword_140C66CEC = dword_140C66D34;
	dword_140C66CF0 = dword_140C66D38;
	dword_140C66CF8 = dword_140C66D34;
	dword_140C66CFC = dword_140C66D38;
	dword_140C66D04 = dword_140C66D34;
	dword_140C66D08 = dword_140C66D38;
	dword_140C66D10 = dword_140C66D34;
	dword_140C66D14 = dword_140C66D38;
	return &qword_140C66CC0;
}
// 140B550A0: using guessed type __int64 (__fastcall *off_140B550A0)();
// 140B5E6E8: using guessed type __int64 (__fastcall *off_140B5E6E8)();
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C66CC0: using guessed type __int64 qword_140C66CC0;
// 140C66CC8: using guessed type __int64 qword_140C66CC8;
// 140C66CD0: using guessed type int dword_140C66CD0;
// 140C66CD4: using guessed type int dword_140C66CD4;
// 140C66CD8: using guessed type int dword_140C66CD8;
// 140C66CE0: using guessed type int dword_140C66CE0[];
// 140C66CE4: using guessed type int dword_140C66CE4[];
// 140C66CE8: using guessed type int dword_140C66CE8[];
// 140C66CEC: using guessed type int dword_140C66CEC;
// 140C66CF0: using guessed type int dword_140C66CF0;
// 140C66CF4: using guessed type int dword_140C66CF4;
// 140C66CF8: using guessed type int dword_140C66CF8;
// 140C66CFC: using guessed type int dword_140C66CFC;
// 140C66D00: using guessed type int dword_140C66D00;
// 140C66D04: using guessed type int dword_140C66D04;
// 140C66D08: using guessed type int dword_140C66D08;
// 140C66D0C: using guessed type int dword_140C66D0C;
// 140C66D10: using guessed type int dword_140C66D10;
// 140C66D14: using guessed type int dword_140C66D14;
// 140C66D18: using guessed type int dword_140C66D18;
// 140C66D34: using guessed type int dword_140C66D34;
// 140C66D38: using guessed type int dword_140C66D38;
// 140C66D3C: using guessed type int dword_140C66D3C;
// 140C66D40: using guessed type __int64 qword_140C66D40;
// 140C66D48: using guessed type int dword_140C66D48;
// 140C66D50: using guessed type __int64 qword_140C66D50;

