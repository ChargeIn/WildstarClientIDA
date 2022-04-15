#include "../winhttp.h"

//----- (000000014005ECD0) ----------------------------------------------------
_QWORD* __fastcall sub_14005ECD0(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* result; // rax
	char v7; // dl
	__int64 v8; // rsi
	_QWORD* v9; // rax
	int v10; // eax
	__int64 v11; // rcx

	if (!a2)
		return 0i64;
	if ((*(_BYTE*)(a2 + 10) & 0x10) != 0)
		return 0i64;
	result = sub_140062370(a2, 4, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 328i64));
	v8 = (__int64)result;
	if (!result)
		return 0i64;
	if (a2 == a3)
		return result;
	if (!a3)
		return 0i64;
	if ((*(_BYTE*)(a3 + 10) & 0x10) != 0)
		return 0i64;
	v9 = sub_140062370(a3, v7, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 328i64));
	if (!v9)
		return 0i64;
	v10 = sub_14005AC20(v8, (__int64)v9);
	v11 = 0i64;
	if (v10)
		return (_QWORD*)v8;
	return (_QWORD*)v11;
}
// 14005ED36: variable 'v7' is possibly undefined

