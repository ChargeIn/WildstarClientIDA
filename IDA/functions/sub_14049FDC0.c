#include "../winhttp.h"

//----- (000000014049FDC0) ----------------------------------------------------
__int64 __fastcall sub_14049FDC0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned int v4; // edi
	unsigned int v6; // ecx
	int v7; // ebx

	v4 = 0;
	v6 = 0;
	if (qword_140C65970)
		v6 = sub_1404A1950(0i64, a4);
	v7 = a3 - 1;
	if (!v7)
		return v6;
	if (v7 == 1)
		LOBYTE(v4) = v6 == 0;
	return v4;
}
// 140C65970: using guessed type __int64 qword_140C65970;

