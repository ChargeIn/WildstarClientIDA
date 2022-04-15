#include "../winhttp.h"

//----- (0000000140937050) ----------------------------------------------------
__int64 __fastcall sub_140937050(__int64 a1)
{
	__int64 v2; // [rsp+30h] [rbp-28h] BYREF
	int v3; // [rsp+38h] [rbp-20h]
	const wchar_t* v4; // [rsp+40h] [rbp-18h] BYREF
	int v5; // [rsp+48h] [rbp-10h]

	v2 = 0i64;
	v3 = 0;
	v4 = L"video.exclusiveDisplayMode";
	v5 = 2;
	sub_140019CB0(a1, (__int64)&v4, (int*)&v2);
	return sub_1407DD89C(sub_14094CAA0);
}
// 1409DE5F0: using guessed type wchar_t aVideoExclusive[27];

