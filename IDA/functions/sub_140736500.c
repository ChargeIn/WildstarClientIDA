#include "../winhttp.h"

//----- (0000000140736500) ----------------------------------------------------
__int64 sub_140736500()
{
	__int64 v0; // rax
	char v2; // [rsp+38h] [rbp+10h] BYREF

	if ((dword_140DC4D1C & 1) == 0)
	{
		dword_140DC4D24 = 0;
		dword_140DC4D1C |= 1u;
		dword_140DC4D28 = 1000;
		dword_140DC4D2C = 1;
		dword_140DC4D30 = 1000;
		dword_140DC4D20 = dword_140C636A8 - 1000;
		sub_1407DD89C(nullsub_14);
	}
	if (dword_140C636A8 - dword_140DC4D20 >= (unsigned int)dword_140DC4D30)
	{
		if (dword_140C636A8 - dword_140DC4D20 < (unsigned int)dword_140DC4D28)
		{
			dword_140DC4D20 += dword_140DC4D30;
		}
		else
		{
			dword_140DC4D20 = dword_140C636A8;
			dword_140DC4D24 = 1;
		}
	}
	else
	{
		if (dword_140DC4D24 == dword_140DC4D2C)
			return 0i64;
		++dword_140DC4D24;
	}
	v0 = *(_QWORD*)(qword_140C65898 + 120);
	if (v0 && *(_DWORD*)(v0 + 128) == 20)
	{
		v2 = 0;
		sub_1403F4740(qword_140C65898, 0x52Cu, (__int64)&v2);
	}
	return 0i64;
}
// 140956A80: using guessed type __int64 __fastcall nullsub_14();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4D1C: using guessed type int dword_140DC4D1C;
// 140DC4D20: using guessed type int dword_140DC4D20;
// 140DC4D24: using guessed type int dword_140DC4D24;
// 140DC4D28: using guessed type int dword_140DC4D28;
// 140DC4D2C: using guessed type int dword_140DC4D2C;
// 140DC4D30: using guessed type int dword_140DC4D30;

