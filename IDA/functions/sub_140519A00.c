#include "../winhttp.h"

//----- (0000000140519A00) ----------------------------------------------------
void __fastcall sub_140519A00(__int64* a1)
{
	__int64 v2; // rdx
	__int64 v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	__int64 v5; // [rsp+30h] [rbp-18h]

	if (a1[2])
	{
		v2 = a1[8];
		if (v2)
		{
			if (sub_1403ACBB0(qword_140C65898 + 160, v2))
			{
				v3 = 0i64;
				v4 = 0i64;
				v5 = 0i64;
				v3 = a1[8];
				v4 = a1[2];
				v5 = a1[5];
				sub_1403F4900(qword_140C65898, 0x6DCu, (__int64)&v3);
				sub_1400D4040(a1[1], "ItemAuctionSellOrderSubmitted", (char*)a1[1], &byte_140B7B700);
			}
		}
	}
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C65898: using guessed type __int64 qword_140C65898;

