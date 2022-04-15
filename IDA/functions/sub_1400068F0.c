#include "../winhttp.h"

//----- (00000001400068F0) ----------------------------------------------------
__int64 __fastcall sub_1400068F0(__int64 a1, int a2)
{
	unsigned __int64 v2; // r8
	__int64 v3; // rax
	__int64 v4; // r9
	_DWORD* i; // rcx

	v2 = *(_QWORD*)(a1 + 160);
	v3 = 0i64;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 152);
	for (i = (_DWORD*)(v4 + 8); *i != a2; i += 4)
	{
		if (++v3 >= v2)
			return 0i64;
	}
	return *(unsigned int*)(v4 + 16 * v3 + 12);
}

