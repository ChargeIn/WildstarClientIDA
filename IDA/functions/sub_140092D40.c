#include "../winhttp.h"

//----- (0000000140092D40) ----------------------------------------------------
__int64 __fastcall sub_140092D40(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // esi
	__int64 v8; // rax
	__int64 i; // rbx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 >= 0)
	{
		v8 = sub_1403374E0(a2, 48i64 * *a3);
		*((_QWORD*)a3 + 1) = v8;
		if (!v8)
			return 2147500037i64;
		for (i = 0i64; (unsigned int)i < *a3; i = (unsigned int)(i + 1))
		{
			v7 = sub_140091240(a1, a2, *((_QWORD*)a3 + 1) + 48 * i);
			if (v7 < 0)
				break;
		}
	}
	return (unsigned int)v7;
}

