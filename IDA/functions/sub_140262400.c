#include "../winhttp.h"

//----- (0000000140262400) ----------------------------------------------------
__int64 __fastcall sub_140262400(__int64 a1, float* a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // [rsp+20h] [rbp-38h] BYREF
	__int64 v9; // [rsp+28h] [rbp-30h]
	__int64 v10; // [rsp+30h] [rbp-28h]
	__int64 v11; // [rsp+38h] [rbp-20h]
	__int64 v12; // [rsp+40h] [rbp-18h]

	*(_DWORD*)(a1 + 148) = 11;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v8 = *(_QWORD*)(a1 + 1648);
	v4 = *(_QWORD*)(a1 + 2048);
	v10 = 0x200000000i64;
	v9 = v4;
	v11 = 1i64;
	v12 = 0i64;
	sub_140258740(a1, (__int64)&v8, a2);
	v8 = *(_QWORD*)(a1 + 1648);
	v5 = *(_QWORD*)(a1 + 1656);
	v10 = 0i64;
	v11 = 1i64;
	v12 = 0i64;
	v9 = v5;
	result = sub_140258CC0(a1, (__int64)&v8, (__int64)a2);
	if ((_DWORD)result)
	{
		v7 = *(_QWORD*)(a1 + 1648);
		result = *(_QWORD*)(a1 + 1656);
		*(_QWORD*)(a1 + 1648) = result;
		*(_QWORD*)(a1 + 1656) = v7;
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

