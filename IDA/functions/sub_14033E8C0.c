#include "../winhttp.h"

//----- (000000014033E8C0) ----------------------------------------------------
__int64 __fastcall sub_14033E8C0(__int64 a1, __int64* a2)
{
	__int64* v2; // rbx
	__int64 result; // rax

	v2 = (__int64*)(a1 + 320);
	a2[3] = 0i64;
	a2[2] = 0i64;
	*a2 = sub_140338940((__int64*)(a1 + 320));
	result = sub_140338830(v2);
	a2[1] = result;
	return result;
}

