#include "../winhttp.h"

//----- (00000001407ED230) ----------------------------------------------------
int __fastcall sub_1407ED230(__int64 a1, unsigned int a2, WCHAR* a3, int a4, WCHAR* a5, int a6)
{
	unsigned int v6; // eax

	v6 = a4;
	if (a4 > 0)
		v6 = sub_1407E6CBC(a3, a4);
	return sub_1407E87C8(a1, a2, a3, v6, a5, a6);
}

