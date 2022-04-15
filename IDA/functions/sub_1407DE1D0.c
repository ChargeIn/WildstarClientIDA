#include "../winhttp.h"

//----- (00000001407DE1D0) ----------------------------------------------------
__int64 __fastcall sub_1407DE1D0(int a1)
{
	int v1; // edx
	unsigned int* v2; // r8
	__int64 result; // rax

	v1 = 0;
	v2 = dword_140C0F570;
	do
	{
		if (a1 == *v2)
			return dword_140C0F570[2 * v1 + 1];
		++v1;
		v2 += 2;
	} while ((unsigned __int64)v1 < 0x2D);
	if ((unsigned int)(a1 - 19) <= 0x11)
		return 13i64;
	result = 22i64;
	if ((unsigned int)(a1 - 188) <= 0xE)
		return 8i64;
	return result;
}
// 140C0F570: using guessed type unsigned int dword_140C0F570[90];

