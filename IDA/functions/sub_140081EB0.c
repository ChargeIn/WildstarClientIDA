#include "../winhttp.h"

//----- (0000000140081EB0) ----------------------------------------------------
__int64 __fastcall sub_140081EB0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C1C0(a1, a3);
	if ((int)result >= 0)
		return sub_14006C1C0(a1, a3 + 1);
	return result;
}

