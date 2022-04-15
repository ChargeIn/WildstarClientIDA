#include "../winhttp.h"

//----- (00000001400FDD10) ----------------------------------------------------
__int64 __fastcall sub_1400FDD10(__int64 a1, int* a2)
{
	__int64 v2; // rax

	v2 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v2;
		while (*((_WORD*)a2 + v2));
	}
	return sub_14001C480(a1 + 64, a2, (int*)((char*)a2 + 2 * v2));
}

