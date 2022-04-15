#include "../winhttp.h"

//----- (0000000140668520) ----------------------------------------------------
__int64 __fastcall sub_140668520(_QWORD* a1)
{
	__int64 v1; // rax
	int v3; // [rsp+38h] [rbp+10h] BYREF

	v1 = sub_140056AB0(a1, 1u);
	if (v1)
	{
		v3 = **(_DWORD**)(*(_QWORD*)v1 + 8i64);
		sub_1403F4900(qword_140C65898, 0x45Fu, (__int64)&v3);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

