#include "../winhttp.h"

//----- (0000000140829450) ----------------------------------------------------
__int64 __fastcall sub_140829450(__int64 a1)
{
	unsigned __int16 v2; // ax
	int v3; // [rsp+20h] [rbp-48h] BYREF
	__int64 v4; // [rsp+28h] [rbp-40h]

	if (!a1)
		return 2i64;
	v4 = a1;
	HIWORD(v3) = 12;
	v2 = sub_1403B55D0();
	return sub_14082BB30(qword_140C61B68, &v3, v2);
}

