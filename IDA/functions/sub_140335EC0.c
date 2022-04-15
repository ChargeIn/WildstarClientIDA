#include "../winhttp.h"

//----- (0000000140335EC0) ----------------------------------------------------
__int64 __fastcall sub_140335EC0(unsigned int a1)
{
	unsigned int v1; // edx
	__int64 result; // rax

	if (a1 < 3)
		return 131070i64;
	if (a1 < dword_140C1E564)
	{
		v1 = *(_DWORD*)(qword_140C65828 + 16i64 * (a1 - 3));
		result = v1;
		if (v1)
			return result;
		return 131070i64;
	}
	result = 131070i64;
	if (((HIWORD(a1) - 1) & 0xFFFFFFFD) != 0)
		return 0i64;
	return result;
}
// 140C1E564: using guessed type int dword_140C1E564;
// 140C65828: using guessed type __int64 qword_140C65828;

