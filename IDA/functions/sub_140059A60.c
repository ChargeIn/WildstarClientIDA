#include "../winhttp.h"

//----- (0000000140059A60) ----------------------------------------------------
__int64 __fastcall sub_140059A60(__int64 a1, __int64 a2)
{
	_DWORD* v2; // r8
	__int64 v3; // rcx
	int v4; // eax
	__int64 v5; // rcx

	v2 = *(_DWORD**)(a2 + 8);
	if (v2[2] != 6 || *(_BYTE*)(*(_QWORD*)v2 + 10i64))
		return 0xFFFFFFFFi64;
	if (a2 == *(_QWORD*)(a1 + 40))
		*(_QWORD*)(a2 + 24) = *(_QWORD*)(a1 + 48);
	v3 = *(_QWORD*)(*(_QWORD*)v2 + 32i64);
	v4 = ((__int64)(*(_QWORD*)(a2 + 24) - *(_QWORD*)(v3 + 24)) >> 2) - 1;
	if (v4 < 0)
		return 0xFFFFFFFFi64;
	v5 = *(_QWORD*)(v3 + 40);
	if (v5)
		return *(unsigned int*)(v5 + 4i64 * v4);
	else
		return 0i64;
}

