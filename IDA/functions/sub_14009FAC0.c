#include "../winhttp.h"

//----- (000000014009FAC0) ----------------------------------------------------
__int64 __fastcall sub_14009FAC0(__int64 a1, __int64 a2, int* a3)
{
	__int64 result; // rax
	unsigned __int64 v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 6ui64);
	if ((int)result >= 0)
	{
		v7 = *a3;
		if (v7 >= 0x24)
			return 2147500037i64;
		return ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_14009FB1E[v7])(a1, a2, a3 + 2);
	}
	return result;
}
// 140C1E870: using guessed type __int64 (__fastcall *funcs_14009FB1E[107])();

