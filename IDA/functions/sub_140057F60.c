#include "../winhttp.h"

//----- (0000000140057F60) ----------------------------------------------------
__int64 __fastcall sub_140057F60(__int64 a1, __int64* a2, _QWORD* a3)
{
	__int64 result; // rax

	result = a2[1];
	if (result)
	{
		*a3 = result;
		result = *a2;
		a2[1] = 0i64;
	}
	return result;
}

