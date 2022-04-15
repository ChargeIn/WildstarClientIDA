#include "../winhttp.h"

//----- (00000001403B5000) ----------------------------------------------------
__int64 __fastcall sub_1403B5000(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	_DWORD* i; // rax

	if (!a2)
		return 0i64;
	v2 = *(_QWORD*)(a1 + 112);
	v3 = 0i64;
	for (i = (_DWORD*)(v2 + 408); *i != a2; ++i)
	{
		if ((unsigned __int64)++v3 >= 5)
			return 0i64;
	}
	return 1i64;
}

