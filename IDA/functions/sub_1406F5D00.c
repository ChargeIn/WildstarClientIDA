#include "../winhttp.h"

//----- (00000001406F5D00) ----------------------------------------------------
_BOOL8 __fastcall sub_1406F5D00(_QWORD* a1)
{
	unsigned __int64 v2; // rdi
	int v3; // eax
	__int64 v4; // rdx
	_BOOL8 result; // rax

	v2 = (int)sub_140056D60(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	result = ((unsigned int)v2 > 0x38 || (v4 = 0x160040030000000i64, !_bittest64(&v4, v2)))
		&& (_DWORD)v2 != 285
		&& (_DWORD)v2 != 312
		&& (v3 != 4 || (_DWORD)v2 != 62);
	return result;
}

