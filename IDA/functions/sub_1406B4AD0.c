#include "../winhttp.h"

//----- (00000001406B4AD0) ----------------------------------------------------
__int64 __fastcall sub_1406B4AD0(_QWORD* a1)
{
	int v1; // esi
	__int64* v3; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rax

	v1 = 1;
	v3 = (__int64*)sub_140056AB0(a1, 1u);
	if (v3)
		v4 = *v3;
	else
		v4 = 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		v1 = sub_140056D60(a1, 2u);
	sub_14062A8C0((unsigned int*)(qword_140C65898 + 27592), v4, v1 - 1);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

