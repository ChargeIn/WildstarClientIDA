#include "../winhttp.h"

//----- (00000001406D3140) ----------------------------------------------------
__int64 __fastcall sub_1406D3140(__int64 a1, int* a2)
{
	unsigned __int64 v2; // r10
	int v3; // r9d
	int v4; // r8d
	__int64 v5; // rdx
	__int64 v6; // r11
	__int64 i; // rcx
	_DWORD* v8; // rax

	v2 = *(_QWORD*)(a1 + 1120);
	v3 = *a2;
	v4 = a2[1];
	v5 = 0i64;
	if (!v2)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 1112);
	for (i = v6; ; i += 8i64)
	{
		v8 = *(_DWORD**)i;
		if (v3 >= *(_DWORD*)(*(_QWORD*)i + 20i64) && v3 < v8[7] && v4 >= v8[6] && v4 < v8[8])
			break;
		if (++v5 >= v2)
			return 0i64;
	}
	return *(_QWORD*)(v6 + 8 * v5);
}

