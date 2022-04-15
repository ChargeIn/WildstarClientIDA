#include "../winhttp.h"

//----- (0000000140430D20) ----------------------------------------------------
__int64 __fastcall sub_140430D20(
	__int64 a1,
	unsigned int a2,
	int a3,
	__int64 a4,
	__int64 a5,
	__int64 a6,
	__int64 a7,
	__int64 a8,
	__int64 a9,
	__int64 a10,
	__int64 a11,
	__int64 a12)
{
	int v14; // [rsp+30h] [rbp-38h]
	int v15; // [rsp+38h] [rbp-30h]
	int v16; // [rsp+48h] [rbp-20h]
	int v17; // [rsp+50h] [rbp-18h]
	int v18; // [rsp+58h] [rbp-10h]
	__int64 v19; // [rsp+A0h] [rbp+38h]

	if (a7)
	{
		v18 = a10;
		v17 = a9;
		v16 = a8;
		v15 = a6;
		v14 = a5;
		return sub_1400EA3E0(a1, "ShowTutorial", "ibSibWiii", a2, a3, a4, v14, v15, a7, v16, v17, v18);
	}
	else
	{
		LODWORD(a8) = a6;
		v19 = (unsigned int)a5;
		LODWORD(a5) = a3;
		return sub_1400EA3E0(a1, "ShowTutorial", "ibSib", a2, a5, a4, v19, a8, a9, a10, a11, a12);
	}
}
// 140430D20: using guessed type _QWORD arg_40;
// 140430D20: using guessed type _QWORD arg_38;
// 140430D20: using guessed type _QWORD arg_20;

