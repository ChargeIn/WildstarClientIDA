#include "../winhttp.h"

//----- (0000000140828EB0) ----------------------------------------------------
__int64 __fastcall sub_140828EB0(__int64 a1)
{
	unsigned __int16 v1; // ax
	int v3; // [rsp+20h] [rbp-48h] BYREF
	__int64 v4; // [rsp+28h] [rbp-40h]

	v4 = a1;
	HIWORD(v3) = 25;
	v1 = sub_1403B55D0();
	return sub_14082BB30(qword_140C61B68, &v3, v1);
}

