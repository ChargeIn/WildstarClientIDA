#include "../winhttp.h"

//----- (00000001404AB3B0) ----------------------------------------------------
__int64 __fastcall sub_1404AB3B0(__int64* a1, unsigned int a2)
{
	unsigned int* v4; // rcx
	unsigned int v5; // eax
	unsigned __int64 v7; // [rsp+20h] [rbp-18h] BYREF
	__int64 v8; // [rsp+28h] [rbp-10h]

	if (!a2)
		return 2147500037i64;
	if (!(unsigned int)sub_1404AB150(a1, a2))
		return 2147500037i64;
	v4 = (unsigned int*)*a1;
	if ((*(_BYTE*)(*a1 + 32) & 1) == 0)
		return 2147500037i64;
	v7 = 0i64;
	v8 = 0i64;
	v5 = *v4;
	v8 = 0i64;
	v7 = __PAIR64__(a2, v5);
	sub_1403F4900(qword_140C65898, 0xD7u, (__int64)&v7);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

