#include "../winhttp.h"

//----- (0000000140420020) ----------------------------------------------------
__int64 __fastcall sub_140420020(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	__int64 result; // rax

	result = sub_1405E9400(a2, a3);
	*a4 += 8i64;
	**(_QWORD**)(*a4 - 8i64) = result;
	return result;
}

