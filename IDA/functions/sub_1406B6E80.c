#include "../winhttp.h"

//----- (00000001406B6E80) ----------------------------------------------------
__int64 __fastcall sub_1406B6E80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	int* v4; // rdi
	_DWORD* v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		return 0i64;
	v4 = sub_1403A8810(qword_140C65898, *(_DWORD*)(v3 + 8), *(_DWORD*)(v3 + 12));
	if (!v4)
		return 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2])
		return 0i64;
	if (v5 == dword_140A12138)
		return 0i64;
	if (*(int*)(a1[3] + 24i64) <= 0)
		return 0i64;
	v6 = sub_140056D60(a1, 2u);
	if (v6 >= 4)
		return 0i64;
	v7 = sub_140224D00(*((unsigned __int16*)v4 + v6 + 36));
	sub_140434100(a1, v7);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

