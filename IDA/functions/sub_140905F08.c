#include "../winhttp.h"

//----- (0000000140905F08) ----------------------------------------------------
__int64 __fastcall sub_140905F08(
	int a1,
	int a2,
	int a3,
	int a4,
	int a5,
	int a6,
	int a7,
	int a8,
	int a9,
	int a10,
	int a11)
{
	int v12; // r11d
	__int64 v13; // rbp
	int v14; // r10d
	int v15; // r10d
	int v16; // r8d
	int v17; // eax
	int v18; // r10d
	int v19; // eax
	int v20; // r10d
	__int64 result; // rax
	bool v22; // sf
	int v23; // ecx
	int v24; // ecx
	int v25; // [rsp+50h] [rbp+8h] BYREF

	v25 = 0;
	if (a2 == 1)
	{
		v12 = a3 % 4;
		if ((a3 % 4 || a3 == 100 * (a3 / 100)) && a3 + 1900 != 400 * ((a3 + 1900) / 400))
		{
			v13 = a4;
			v14 = dword_140C1B16C[a4];
		}
		else
		{
			v13 = a4;
			v14 = dword_140C1B1A4[a4];
		}
		v15 = v14 + 1;
		v16 = (365 * a3 - 25563 + (a3 + 299) / 400 - (a3 - 1) / 100 + v15 + (a3 - 1) / 4) % 7;
		v17 = 7 * a5 - v16;
		if (v16 <= a6)
			v17 -= 7;
		v18 = a6 + v17 + v15;
		if (a5 == 5)
		{
			if ((v12 || a3 == 100 * (a3 / 100)) && a3 + 1900 != 400 * ((a3 + 1900) / 400))
				v19 = dword_140C1B170[v13];
			else
				v19 = dword_140C1B1A8[v13];
			if (v18 > v19)
				v18 -= 7;
		}
	}
	else
	{
		if ((a3 % 4 || a3 == 100 * (a3 / 100)) && a3 + 1900 != 400 * ((a3 + 1900) / 400))
			v20 = dword_140C1B16C[a4];
		else
			v20 = dword_140C1B1A4[a4];
		v18 = a7 + v20;
	}
	result = (unsigned int)(a11 + 1000 * (a10 + 60 * (a9 + 60 * a8)));
	if (a1 == 1)
	{
		dword_140C1B154 = v18;
		dword_140C1B158 = a11 + 1000 * (a10 + 60 * (a9 + 60 * a8));
		dword_140C1B150 = a3;
		return result;
	}
	dword_140C1B164 = v18;
	dword_140C1B168 = a11 + 1000 * (a10 + 60 * (a9 + 60 * a8));
	if ((unsigned int)sub_140905728(&v25))
	{
		sub_1407DC390();
		JUMPOUT(0x1409061D9i64);
	}
	v22 = 1000 * v25 + dword_140C1B168 < 0;
	v23 = 1000 * v25 + dword_140C1B168;
	result = 86400000i64;
	dword_140C1B168 = v23;
	if (v22)
	{
		v24 = v23 + 86400000;
		--dword_140C1B164;
	LABEL_30:
		dword_140C1B168 = v24;
		goto LABEL_31;
	}
	if (v23 >= 86400000)
	{
		v24 = v23 - 86400000;
		++dword_140C1B164;
		goto LABEL_30;
	}
LABEL_31:
	dword_140C1B160 = a3;
	return result;
}
// 1409061D4: control flows out of bounds to 1409061D9
// 140C1B150: using guessed type int dword_140C1B150;
// 140C1B154: using guessed type int dword_140C1B154;
// 140C1B158: using guessed type int dword_140C1B158;
// 140C1B160: using guessed type int dword_140C1B160;
// 140C1B164: using guessed type int dword_140C1B164;
// 140C1B168: using guessed type int dword_140C1B168;
// 140C1B16C: using guessed type int dword_140C1B16C[];
// 140C1B170: using guessed type int dword_140C1B170[13];
// 140C1B1A4: using guessed type int dword_140C1B1A4[];
// 140C1B1A8: using guessed type int dword_140C1B1A8[14];

