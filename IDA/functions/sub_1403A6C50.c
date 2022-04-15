#include "../winhttp.h"

//----- (00000001403A6C50) ----------------------------------------------------
__int64 __fastcall sub_1403A6C50(__int64 a1, int a2)
{
	__int64 v3; // rdx
	unsigned __int64 v4; // rcx
	__int64 v5; // rax
	__int64 i; // rdx
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v8 = a1;
	v3 = *(_QWORD*)(qword_140C65898 + 26392);
	if (!v3)
		return 2147500037i64;
	v4 = *(_QWORD*)(v3 + 32);
	v5 = 0i64;
	if (!v4)
		return 2147500037i64;
	for (i = *(_QWORD*)(v3 + 24); *(_DWORD*)i != a2; i += 80i64)
	{
		if (++v5 >= v4)
			return 2147500037i64;
	}
	if (!i || *(_DWORD*)(i + 4) != *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64))
		return 2147500037i64;
	v8 = 0i64;
	v8 = *(_QWORD*)(i + 16);
	sub_1403F4900(qword_140C65898, 0x194u, (__int64)&v8);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

