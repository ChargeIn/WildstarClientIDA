#include "../winhttp.h"

//----- (000000014083C5D0) ----------------------------------------------------
__int64 __fastcall sub_14083C5D0(__int64 a1, int* a2, unsigned int a3)
{
	__int64 result; // rax
	unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

	v5 = 0;
	result = sub_14083C410(a1, a2, a3, &v5);
	if ((_DWORD)result == 1 && a3 != v5)
		return 56i64;
	return result;
}

