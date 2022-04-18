#include "../winhttp.h"

//----- (00000001405DA4E0) ----------------------------------------------------
__int64 __fastcall sub_1405DA4E0(__int64 a1, char a2)
{
	int v3; // edx
	__int64 v5; // rax
	int v7; // [rsp+20h] [rbp-18h]

	v3 = *(_DWORD*)(a1 + 92);
	*(_QWORD*)a1 = off_140B6DE60;
	v5 = sub_1403D90D0(qword_140C65898, v3);
	if (v5)
	{
		*(_DWORD*)(v5 + 5636) = 0;
		v7 = 0;
		Apollo_LUAEvent(
			*(_QWORD*)(qword_140C65898 + 29504),
			"ShieldsOverloaded",
			byte_1409EB71C,
			*(unsigned int*)(a1 + 92),
			v7);
	}
	sub_1405D6680(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 1409EB71C: using guessed type _BYTE byte_1409EB71C[32];
// 140B6DE60: using guessed type __int64 (__fastcall *off_140B6DE60[103])();
// 140C65898: using guessed type __int64 qword_140C65898;

