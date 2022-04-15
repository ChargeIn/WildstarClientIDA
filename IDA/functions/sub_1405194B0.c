#include "../winhttp.h"

//----- (00000001405194B0) ----------------------------------------------------
char __fastcall sub_1405194B0(__int64 a1)
{
	char result; // al
	unsigned int v3; // edx
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]

	result = qword_140C635F0;
	if (!*(_DWORD*)(qword_140C635F0 + 5896))
	{
		v4 = 0i64;
		v5 = 0i64;
		if (*(_DWORD*)(a1 + 16))
		{
			v3 = 613;
			v4 = *(_QWORD*)(a1 + 24);
			LODWORD(v5) = *(_DWORD*)(a1 + 20);
		}
		else
		{
			v6 = 0i64;
			v7 = 0i64;
			v6 = *(_QWORD*)(a1 + 24);
			LODWORD(v7) = *(_DWORD*)(a1 + 20);
			v3 = 619;
		}
		sub_1403F4900(qword_140C65898, v3, (__int64)&v4);
		*(_DWORD*)(*(_QWORD*)(a1 + 8) + 1480i64) = dword_140C636A8;
		return sub_1400D4040(*(_QWORD*)(a1 + 8), "CREDDExchangeOrderSubmitted", *(char**)(a1 + 8), &byte_140B7B700);
	}
	return result;
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

