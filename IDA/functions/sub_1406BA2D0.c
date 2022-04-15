#include "../winhttp.h"

//----- (00000001406BA2D0) ----------------------------------------------------
__int64 __fastcall sub_1406BA2D0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	int* v5; // r8
	__int64 result; // rax
	int v7; // edx
	_DWORD* v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = (int*)a1[2];
		result = 1i64;
		v7 = *(_DWORD*)(*(_QWORD*)(v4 + 8) + 84i64);
		v5[2] = 1;
		*v5 = v7 & 1;
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

