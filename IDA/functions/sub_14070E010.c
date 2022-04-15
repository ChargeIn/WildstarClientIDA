#include "../winhttp.h"

//----- (000000014070E010) ----------------------------------------------------
__int64 __fastcall sub_14070E010(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	BOOL v3; // eax
	BOOL v5; // [rsp+38h] [rbp+10h] BYREF

	v1 = dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	v3 = v2 && (v2 != 1 || *v1);
	v5 = v3;
	sub_1403F4900(qword_140C65898, 0xB8u, (__int64)&v5);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

