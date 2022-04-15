#include "../winhttp.h"

//----- (000000014062D3A0) ----------------------------------------------------
__int64 __fastcall sub_14062D3A0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v3; // r9
	_DWORD* v4; // r8
	_DWORD* v5; // rcx
	unsigned __int64 v7; // rcx

	v3 = *a3;
	v4 = (_DWORD*)(*a3 + 40 * a1);
	if (*(_DWORD*)(*(_QWORD*)v4 + 4i64))
	{
		v5 = (_DWORD*)(v3 + 40 * a2);
		if (*(_DWORD*)(*(_QWORD*)v5 + 4i64))
			return (unsigned int)(v5[3] - v4[3]);
	}
	v7 = *(_QWORD*)(v3 + 40 * a2);
	if (v7 >= *(_QWORD*)v4)
		return v7 > *(_QWORD*)v4;
	else
		return 0xFFFFFFFFi64;
}

