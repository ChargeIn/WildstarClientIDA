#include "../winhttp.h"

//----- (0000000140420080) ----------------------------------------------------
__int64 __fastcall sub_140420080(__int64 a1, _QWORD* a2, unsigned int a3, _QWORD* a4)
{
	__int64 result; // rax

	result = sub_140056AB0(a2, a3);
	*a4 += 8i64;
	**(_QWORD**)(*a4 - 8i64) = result;
	return result;
}

