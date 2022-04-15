#include "../winhttp.h"

//----- (00000001402CCE80) ----------------------------------------------------
__int64 __fastcall sub_1402CCE80(_QWORD* a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rdx
	__int64 i; // rsi
	__int64 v5; // rbx
	__int64 result; // rax
	__int64 v7; // rcx
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	if (!a1[65])
	{
		v2 = a1 + 66;
		v3 = (_QWORD*)(qword_140C657F0 + 1240);
		*(v2 - 1) = qword_140C657F0 + 1240;
		*v2 = *v3;
		*v3 = a1;
		if (*v2)
			*(_QWORD*)(*v2 + 520i64) = v2;
	}
	for (i = 0i64; ; i = (unsigned int)(i + 1))
	{
		v5 = a1[3];
		v8[0] = -1;
		if (*(_DWORD*)(v5 + 24) != 3)
			sub_1402C9AE0(v5, (__int64)v8, 3);
		result = *(_QWORD*)(v5 + 64);
		if ((unsigned int)i >= *(_DWORD*)(result + 256))
			break;
		v7 = a1[31]
			+ 416i64 * *(unsigned int*)(*(_QWORD*)((*(__int64(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1) + 264) + 4 * i);
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 160i64))(v7, 1i64, 1i64);
	}
	return result;
}
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 1402CCE80: using guessed type int var_18[6];

