#include "../winhttp.h"

//----- (00000001408B0650) ----------------------------------------------------
__int64 __fastcall sub_1408B0650(__int64 a1, __m128* a2, __int64 a3, int** a4, __int64 a5)
{
	__int64 result; // rax

	result = sub_1408AF090(a4, a2, a5);
	*(_WORD*)(a1 + 12) = 1;
	return result;
}

