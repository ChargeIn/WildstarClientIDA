#include "../winhttp.h"

//----- (000000014004BD20) ----------------------------------------------------
__int64 __fastcall sub_14004BD20(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rax
	_DWORD* v7; // rcx
	bool v8; // zf
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	if (!v4)
		return 0i64;
	v5 = *(_QWORD*)(v4 + 16);
	if (!v5)
		return 0i64;
	v6 = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 64i64))(v5, 20i64);
	v7 = (_DWORD*)a1[2];
	v8 = *v6 == 0i64;
	v7[2] = 1;
	result = 1i64;
	*v7 = !v8;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

