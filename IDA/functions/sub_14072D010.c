#include "../winhttp.h"

//----- (000000014072D010) ----------------------------------------------------
__int64 __fastcall sub_14072D010(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned int v5; // ecx
	int* v6; // rdx
	__int64 result; // rax
	_DWORD* v8; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = sub_1401F1860(*(_DWORD*)(v3 + 8))) != 0)
	{
		v5 = *(_DWORD*)(v4 + 24);
		v6 = (int*)a1[2];
		result = 1i64;
		v6[2] = 1;
		*v6 = (v5 >> 3) & 1;
		a1[2] += 16i64;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

