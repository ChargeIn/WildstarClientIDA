#include "../winhttp.h"

//----- (00000001400F0E30) ----------------------------------------------------
_BOOL8 __fastcall sub_1400F0E30(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rcx
	_DWORD* v4; // r8
	bool v5; // zf
	_BOOL8 result; // rax

	*a3 += 8i64;
	v3 = *a3;
	v4 = *(_DWORD**)(a2 + 16);
	v5 = *(_DWORD*)(v3 - 8) == 0;
	v4[2] = 1;
	result = !v5;
	*v4 = result;
	*(_QWORD*)(a2 + 16) += 16i64;
	return result;
}

