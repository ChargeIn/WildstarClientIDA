#include "../winhttp.h"

//----- (00000001403C1FD0) ----------------------------------------------------
__int64 __fastcall sub_1403C1FD0(__int64 a1, int a2, unsigned __int8 a3)
{
	__int64 v3; // r9
	__int64* i; // rcx
	__int64 result; // rax

	if (!*(_QWORD*)(a1 + 120) || a3 >= 4u)
		return 0i64;
	v3 = 0i64;
	for (i = (__int64*)(384i64 * a3 + a1 + 2752); ; ++i)
	{
		result = *i;
		if (*i)
		{
			if (*(_DWORD*)(result + 280) == a2)
				break;
		}
		if ((unsigned __int64)++v3 >= 0x30)
			return 0i64;
	}
	return result;
}

