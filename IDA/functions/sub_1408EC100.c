#include "../winhttp.h"

//----- (00000001408EC100) ----------------------------------------------------
__int64 __fastcall sub_1408EC100(__int64 a1, int a2)
{
	int v2; // edx
	__int64 result; // rax

	v2 = *(_DWORD*)a1 + a2;
	*(_DWORD*)a1 = v2 & 7;
	*(_DWORD*)(a1 + 16) -= v2 >> 3;
	result = (__int64)v2 >> 3;
	*(_QWORD*)(a1 + 8) += result;
	return result;
}

