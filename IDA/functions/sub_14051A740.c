#include "../winhttp.h"

//----- (000000014051A740) ----------------------------------------------------
void __fastcall sub_14051A740(__int64 a1)
{
	_QWORD* v2; // rcx
	void(__fastcall * **v3)(_QWORD, __int64); // rcx
	BOOL v4; // [rsp+20h] [rbp-18h]

	v2 = *(_QWORD**)(a1 + 16);
	if (v2)
	{
		v4 = sub_1406A0570(v2);
		sub_1400D4040(*(_QWORD*)(a1 + 8), "MarketplaceCommoditiesSubmitted", *(char**)(a1 + 8), L"b", v4);
		v3 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 16);
		if (v3)
			(**v3)(v3, 1i64);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
}
// 140B6B934: using guessed type wchar_t aB_1[2];

