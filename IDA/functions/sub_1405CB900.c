#include "../winhttp.h"

//----- (00000001405CB900) ----------------------------------------------------
__int64 __fastcall sub_1405CB900(__int64 a1)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rbp
	_QWORD* v4; // rbx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int64 result; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF

	sub_1400B6120(*(_QWORD*)a1 + 688i64, a1 + 8);
	v2 = qword_140C65BB0;
	v8 = *(_DWORD*)(a1 + 8);
	v3 = (*(__int64(__fastcall**)(int*))(qword_140C65BB0 + 40))(&v8);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 32) + 8 * (v3 % *(_QWORD*)(v2 + 24)));
	if (v4)
	{
		while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 48))(&v8, v4 + 2))
		{
			v4 = (_QWORD*)v4[1];
			if (!v4)
				goto LABEL_8;
		}
		if (v4 != (_QWORD*)-24i64)
		{
			sub_140624200(v4[3]);
			sub_1400B6120(v2 + 16, (__int64)&v8);
		}
	}
LABEL_8:
	v5 = *(_QWORD**)(a1 + 16);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 24);
	v6 = *(_QWORD*)(a1 + 24);
	if (v6)
		*(_QWORD*)(v6 + 16) = *(_QWORD*)(a1 + 16);
	result = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	return result;
}
// 140C65BB0: using guessed type __int64 qword_140C65BB0;

