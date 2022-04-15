#include "../winhttp.h"

//----- (00000001400843F0) ----------------------------------------------------
__int64 __fastcall sub_1400843F0(__int64 a1, _QWORD* a2, __int64* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, a3, (__int64)a3);
	if ((int)result >= 0)
		return sub_1400828A0(a1, a2, (__int64)(a3 + 1));
	return result;
}

