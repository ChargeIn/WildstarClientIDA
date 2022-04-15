#include "../winhttp.h"

//----- (0000000140430A40) ----------------------------------------------------
__int64 __fastcall sub_140430A40(__int64 a1, __int64 a2)
{
	char v4[64]; // [rsp+20h] [rbp-58h] BYREF

	sub_14001B370(v4, 30i64, L"%I64u", a2);
	return sub_1400EA3E0(a1, "RefreshMail", L"S", v4);
}
// 1409EEC7C: using guessed type wchar_t aS_36[2];
// 140B01478: using guessed type wchar_t aI64u_2[6];

