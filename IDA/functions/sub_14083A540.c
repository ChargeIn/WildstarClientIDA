#include "../winhttp.h"

//----- (000000014083A540) ----------------------------------------------------
__int64 __fastcall sub_14083A540(__int64 a1, unsigned int a2)
{
	unsigned int v2; // ebx
	__int64 v4; // rax

	v2 = 255;
	if (a2)
		v2 = a2;
	*(_DWORD*)(a1 + 24) = v2;
	v4 = sub_1408819F0(dword_140C10F20, 8i64 * v2);
	*(_QWORD*)a1 = v4;
	*(_QWORD*)(a1 + 8) = v4;
	if (!v4)
		return 52i64;
	*(_DWORD*)(a1 + 16) = v2;
	return 1i64;
}
// 14083A55C: conditional instruction was optimized away because ebx.4!=0
// 140C10F20: using guessed type int dword_140C10F20;

