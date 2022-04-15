#include "../winhttp.h"

//----- (00000001408D8CA0) ----------------------------------------------------
__int64 __fastcall sub_1408D8CA0(__int64 a1, double a2, __int64 a3, int a4)
{
	__int64 result; // rax
	float v5; // xmm0_4

	result = a4;
	v5 = a2;
	*(float*)(a3 + 4i64 * a4) = v5;
	return result;
}

