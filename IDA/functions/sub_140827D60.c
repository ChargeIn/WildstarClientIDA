#include "../winhttp.h"

//----- (0000000140827D60) ----------------------------------------------------
__int64 __fastcall sub_140827D60(int a1, __int64 a2)
{
	unsigned __int16 v2; // ax
	int v4; // [rsp+20h] [rbp-48h] BYREF
	__int64 v5; // [rsp+28h] [rbp-40h]
	int v6; // [rsp+30h] [rbp-38h]

	v5 = a2;
	v6 = a1;
	HIWORD(v4) = 10;
	v2 = sub_140055BD0();
	return sub_14082BB30(qword_140C61B68, &v4, v2);
}

