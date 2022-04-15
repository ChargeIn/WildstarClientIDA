#include "../winhttp.h"

//----- (00000001408D8CC0) ----------------------------------------------------
__int64 __fastcall sub_1408D8CC0(__int64 a1, int a2, __int64 a3, int a4)
{
	__int64 result; // rax

	result = a4;
	*(float*)(a3 + 4i64 * a4) = (float)a2;
	return result;
}

