#include "../winhttp.h"

//----- (0000000140275940) ----------------------------------------------------
__int64 __fastcall sub_140275940(__int64* a1)
{
	unsigned __int64 v1; // rbx
	__int64 result; // rax
	__int64 v4; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		do
		{
			result = *a1;
			v4 = *(_QWORD*)(*a1 + 8 * v1);
			if (v4)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
			++v1;
		} while (v1 < a1[1]);
		a1[1] = 0i64;
	}
	else
	{
		a1[1] = 0i64;
	}
	return result;
}

