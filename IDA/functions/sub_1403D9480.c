#include "../winhttp.h"

//----- (00000001403D9480) ----------------------------------------------------
__int64 __fastcall sub_1403D9480(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v3; // rcx
	__int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

	v2 = qword_140C65898;
	if (*(_DWORD*)(a2 + 128) != 20 || (*(_DWORD*)(a2 + 8) & 0xC0000000) != 0)
		return 1i64;
	v3 = *(_QWORD*)(a2 + 424);
	v5[0] = *(_QWORD*)(a2 + 416);
	v5[1] = v3;
	if (!LODWORD(v5[0]) || !v3)
		return 2147500037i64;
	sub_1403DF940(qword_140C65898 + 28504, (unsigned int*)v5);
	sub_1405FE1C0(*(_QWORD*)(v2 + 32144), (__int64)v5);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

