#include "../winhttp.h"

//----- (00000001406FBE80) ----------------------------------------------------
__int64 __fastcall sub_1406FBE80(__int64 a1)
{
	__int64 v2; // rax
	_DWORD* v3; // r8
	bool v4; // zf
	__int64 result; // rax

	v2 = sub_1401ED460(*(_DWORD*)(qword_140C65898 + 5780));
	v3 = *(_DWORD**)(a1 + 16);
	v4 = v2 == 0;
	v3[2] = 1;
	result = 1i64;
	*v3 = !v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

