#include "../winhttp.h"

//----- (000000014047C1A0) ----------------------------------------------------
_DWORD* __fastcall sub_14047C1A0(__int64 a1, int a2)
{
	__int64* v2; // rcx
	__int64 v3; // r8
	unsigned __int64 v4; // r9
	_DWORD* result; // rax
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v2 = (__int64*)(a1 + 696);
	v3 = 0i64;
	v4 = v2[1];
	if (!v4)
		return (_DWORD*)sub_140003460(v2, &v6);
	for (result = (_DWORD*)*v2; *result != a2; ++result)
	{
		if (++v3 >= v4)
			return (_DWORD*)sub_140003460(v2, &v6);
	}
	return result;
}

