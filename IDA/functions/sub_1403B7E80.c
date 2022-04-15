#include "../winhttp.h"

//----- (00000001403B7E80) ----------------------------------------------------
__int64 __fastcall sub_1403B7E80(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 result; // rax
	__int64 v5; // rsi
	__int64 v7; // rax
	_QWORD* v8; // rsi
	void(__fastcall * v9)(__int64, _WORD*); // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	v2 = *(unsigned int*)(a2 + 4);
	result = *(_QWORD*)(a1 + 2704);
	v5 = *(_QWORD*)(result + 8 * v2);
	if (v5)
	{
		v7 = sub_1405A4B80(*(_QWORD*)(result + 8 * v2), 1);
		v10 = 0;
		v9 = sub_1405A5EA0;
		if (v7)
			sub_1405A5FE0(a1, v7, (__int64)&v9);
		sub_1403BAA80(a1, *(_DWORD*)(v5 + 64));
		v8 = (_QWORD*)(*(_QWORD*)(a1 + 2704) + 8i64 * *(unsigned int*)(a2 + 4));
		if (*v8)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v8 + 8i64))(*v8);
			*v8 = 0i64;
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 2704) + 8i64 * *(unsigned int*)(a2 + 4)) = 0i64;
		result = qword_140C65898;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

