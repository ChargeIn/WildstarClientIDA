#include "../winhttp.h"

//----- (0000000140736410) ----------------------------------------------------
__int64 sub_140736410()
{
	__int64 v0; // rax
	char v2; // [rsp+38h] [rbp+10h] BYREF

	if ((dword_140DC4D04 & 1) == 0)
	{
		dword_140DC4D0C = 0;
		dword_140DC4D04 |= 1u;
		dword_140DC4D10 = 1000;
		dword_140DC4D14 = 1;
		dword_140DC4D18 = 1000;
		dword_140DC4D08 = dword_140C636A8 - 1000;
		sub_1407DD89C(nullsub_13);
	}
	if (dword_140C636A8 - dword_140DC4D08 >= (unsigned int)dword_140DC4D18)
	{
		if (dword_140C636A8 - dword_140DC4D08 < (unsigned int)dword_140DC4D10)
		{
			dword_140DC4D08 += dword_140DC4D18;
		}
		else
		{
			dword_140DC4D08 = dword_140C636A8;
			dword_140DC4D0C = 1;
		}
	}
	else
	{
		if (dword_140DC4D0C == dword_140DC4D14)
			return 0i64;
		++dword_140DC4D0C;
	}
	v0 = *(_QWORD*)(qword_140C65898 + 120);
	if (v0 && *(_DWORD*)(v0 + 128) == 20)
	{
		v2 = 0;
		sub_1403F4740(qword_140C65898, 0x52Du, (__int64)&v2);
	}
	return 0i64;
}
// 140956A70: using guessed type __int64 __fastcall nullsub_13();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4D04: using guessed type int dword_140DC4D04;
// 140DC4D08: using guessed type int dword_140DC4D08;
// 140DC4D0C: using guessed type int dword_140DC4D0C;
// 140DC4D10: using guessed type int dword_140DC4D10;
// 140DC4D14: using guessed type int dword_140DC4D14;
// 140DC4D18: using guessed type int dword_140DC4D18;

