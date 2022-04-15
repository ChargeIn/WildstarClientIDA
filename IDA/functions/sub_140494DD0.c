#include "../winhttp.h"

//----- (0000000140494DD0) ----------------------------------------------------
__int64 __fastcall sub_140494DD0(_QWORD* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rsi
	__int64 result; // rax

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			result = (**(__int64(__fastcall***)(__int64, _QWORD))(v3 + *a1))(v3 + *a1, 0i64);
			++v1;
			v3 += 24i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
	return result;
}

