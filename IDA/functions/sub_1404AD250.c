#include "../winhttp.h"

//----- (00000001404AD250) ----------------------------------------------------
__int64 __fastcall sub_1404AD250(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rax
	unsigned int v5; // ebx
	__int64 v6; // rax
	_DWORD** v7; // rbx
	__int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	v9 = a1;
	v2 = qword_140C659D0;
	if (!a2)
		return 2147500037i64;
	v4 = *(_QWORD*)(a2 + 24);
	if (!v4)
		return 2147500037i64;
	v5 = *(_DWORD*)(v4 + 116);
	if (!v5)
		return 2147500037i64;
	if (!sub_1404AD9B0(qword_140C659D0, v5))
		return 2147500037i64;
	v6 = sub_1404AF650(v2, v5);
	v7 = (_DWORD**)v6;
	if (!v6 || !(unsigned int)sub_1404AE1F0(v6))
		return 2147500037i64;
	LODWORD(v9) = **v7;
	v8[0] = 1i64;
	v8[1] = (__int64)&v9;
	sub_1403F4900(qword_140C65898, 0xFFu, (__int64)v8);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D0: using guessed type __int64 qword_140C659D0;

