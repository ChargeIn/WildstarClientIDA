#include "../winhttp.h"

//----- (00000001406F2230) ----------------------------------------------------
__int64 __fastcall sub_1406F2230(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rax
	__int64 v4; // rax
	_QWORD* v5; // rax
	bool v6; // zf
	int v7; // eax
	_DWORD* v8; // rcx
	__int64 result; // rax

	v1 = 0;
	if (*(_DWORD*)(qword_140C635F0 + 5896)
		|| (v3 = sub_140056AB0(a1, 1u)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0
		|| (v5 = (_QWORD*)(v4 + 8)) == 0i64
		|| (v6 = *v5 == 0i64, v7 = 1, v6))
	{
		v7 = 0;
	}
	v8 = (_DWORD*)a1[2];
	v6 = v7 == 0;
	result = 1i64;
	LOBYTE(v1) = !v6;
	v8[2] = 1;
	*v8 = v1;
	a1[2] += 16i64;
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

