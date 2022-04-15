#include "../winhttp.h"

//----- (000000014051A0E0) ----------------------------------------------------
void __fastcall sub_14051A0E0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdx
	int v4; // [rsp+20h] [rbp-18h]

	v2 = *(_QWORD*)(a1 + 40);
	if (v2)
	{
		if (*(_DWORD*)(a1 + 48))
			v3 = *(_QWORD*)(v2 + 32);
		else
			v3 = *(_QWORD*)(a1 + 16);
		v4 = sub_1406A0740(v2, v3);
		sub_1400D4040(*(_QWORD*)(a1 + 8), "ItemAuctionBuyOrderSubmitted", *(char**)(a1 + 8), L"b", v4);
	}
}
// 140B6B934: using guessed type wchar_t aB_1[2];

