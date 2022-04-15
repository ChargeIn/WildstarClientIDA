#include "../winhttp.h"

//----- (000000014006BD80) ----------------------------------------------------
__int64 __fastcall sub_14006BD80(__int64 a1, float a2)
{
	__int64 v2; // r8
	__int64 v4; // rcx
	_QWORD* v5; // rdx
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	if (!v2)
		return sub_140336470(a1, LODWORD(a2), 0x20ui64);
	v4 = *(_QWORD*)(a1 + 16);
	if ((unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v4) < 0x40)
		return sub_140336470(a1, LODWORD(a2), 0x20ui64);
	v5 = *(_QWORD**)(v2 + 32);
	*v5 &= (1i64 << v4) - 1;
	*v5 |= (unsigned __int64)LODWORD(a2) << *(_QWORD*)(a1 + 16);
	v6 = *(_QWORD*)(a1 + 16);
	if (((v6 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
		*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = (unsigned __int64)LODWORD(a2) >> (64 - (unsigned __int8)v6);
	*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
	*(_QWORD*)(a1 + 16) &= 7ui64;
	return 0i64;
}

