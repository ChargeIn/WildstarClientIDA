#include "../winhttp.h"

//----- (00000001407ABCF0) ----------------------------------------------------
__int64 __fastcall sub_1407ABCF0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax

	result = a2;
	*(_DWORD*)(a1 + 4i64 * a2 + 436360) = a3;
	return result;
}

