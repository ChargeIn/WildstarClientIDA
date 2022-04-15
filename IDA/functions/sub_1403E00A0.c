#include "../winhttp.h"

//----- (00000001403E00A0) ----------------------------------------------------
__int64 __fastcall sub_1403E00A0(unsigned int a1, int a2, unsigned int a3)
{
	__int64 v4; // rdi
	__int64 v5; // rax

	v4 = a2;
	v5 = sub_140200220(a1);
	if (v5)
		return *(unsigned int*)(v5 + 4 * v4 + 4);
	else
		return a3;
}

