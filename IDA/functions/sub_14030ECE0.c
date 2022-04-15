#include "../winhttp.h"

//----- (000000014030ECE0) ----------------------------------------------------
__int64 __fastcall sub_14030ECE0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // r11
	__int64 v5; // rax

	v3 = *((_QWORD*)a3 + 1);
	if ((unsigned __int64)(v3 + a2) < *a1 || a2 + v3 + 112 * (unsigned __int64)*a3 > a1[1])
		return 2147500037i64;
	v5 = 0i64;
	if (*a3)
		v5 = v3 + a2;
	*((_QWORD*)a3 + 1) = v5;
	return 0i64;
}

