#include "../winhttp.h"

//----- (00000001407B6110) ----------------------------------------------------
__int64 __fastcall sub_1407B6110(__int64 a1, int* a2)
{
	__int64 v2; // rax

	v2 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v2;
		while (*((_WORD*)a2 + v2));
	}
	sub_14001C480(a1 + 16, a2, (int*)((char*)a2 + 2 * v2));
	return 0i64;
}

