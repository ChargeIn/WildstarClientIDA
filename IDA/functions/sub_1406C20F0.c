#include "../winhttp.h"

//----- (00000001406C20F0) ----------------------------------------------------
__int64 __fastcall sub_1406C20F0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rax

	result = sub_1406C01C0(a1);
	v3 = result;
	if (result)
	{
		v4 = a1[2];
		*(double*)v4 = *(float*)(v3 + 1876);
		*(_DWORD*)(v4 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

