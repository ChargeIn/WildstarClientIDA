#include "../winhttp.h"

//----- (000000014006AED0) ----------------------------------------------------
__int64 __fastcall sub_14006AED0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 v3; // r9
	_DWORD* v4; // rdx
	__int64 result; // rax

	v2 = *(int*)(a2 + 8);
	v3 = *(_QWORD*)(*(_QWORD*)a1 + 24i64) + 4 * v2;
	if ((int)v2 < 1 || (v4 = (_DWORD*)(v3 - 4), byte_140A12408[*(_DWORD*)(v3 - 4) & 0x3F] >= 0))
		v4 = (_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 24i64) + 4 * v2);
	result = *v4 ^ ((unsigned __int16)*v4 ^ (((*v4 & 0x3FC0) == 0) << 6)) & 0x3FC0u;
	*v4 = result;
	return result;
}

