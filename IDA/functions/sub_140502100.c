#include "../winhttp.h"

//----- (0000000140502100) ----------------------------------------------------
__int64 __fastcall sub_140502100(_QWORD* a1)
{
	int v1; // esi
	__int64 result; // rax
	__int64 v4; // rbx
	_DWORD* v5; // rax

	v1 = 1;
	result = sub_140056AB0(a1, 1u);
	v4 = result;
	if (result)
	{
		*(_DWORD*)(result + 8) = 15;
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v1 = sub_140056D60(a1, 2u);
		*(_DWORD*)(v4 + 12) = v1;
		result = 0i64;
		*(_QWORD*)(v4 + 16) = 0i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

