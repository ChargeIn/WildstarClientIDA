#include "../winhttp.h"

//----- (00000001404E62B0) ----------------------------------------------------
__int64 __fastcall sub_1404E62B0(__int64 a1)
{
	__int64 v1; // r8
	int v2; // eax
	double v3; // xmm0_8
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 384i64);
	*(_DWORD*)(v1 + 8) = 3;
	v3 = (double)v2;
	result = 1i64;
	*(double*)v1 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

