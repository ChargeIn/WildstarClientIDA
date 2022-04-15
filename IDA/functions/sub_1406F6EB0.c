#include "../winhttp.h"

//----- (00000001406F6EB0) ----------------------------------------------------
__int64 __fastcall sub_1406F6EB0(_QWORD* a1)
{
	__int64 v1; // rdx
	int v3; // [rsp+38h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(qword_140C65898 + 28048);
	if (v1)
		v3 = *(_DWORD*)(v1 + 4i64 * *(_QWORD*)(v1 + 48) + 8);
	else
		v3 = 0;
	return sub_1403D3470(a1, &v3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

