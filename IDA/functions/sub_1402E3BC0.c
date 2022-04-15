#include "../winhttp.h"

//----- (00000001402E3BC0) ----------------------------------------------------
__int64 __fastcall sub_1402E3BC0(__int64 a1, int a2, unsigned int a3, _DWORD* a4)
{
	__int64 v4; // rdi
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 56);
	if (!v4 || !(unsigned int)sub_1402E3C50(a1, a2, a3, &v7))
		return 0i64;
	if (a4)
		*a4 = *(_DWORD*)(v4 + 12 * v7 + 12);
	return 1i64;
}

