#include "../winhttp.h"

//----- (00000001408D8130) ----------------------------------------------------
__int64 __fastcall sub_1408D8130(__int64 a1, int a2, char a3)
{
	unsigned int v3; // ebx
	int v5; // esi
	__int64 result; // rax

	v3 = 0;
	v5 = 0;
	if (!a3)
	{
		result = a2;
		v5 = 24 - dword_1409B19A0[a2];
	}
	if (*(_DWORD*)(a1 + 4))
	{
		do
			result = sub_1408D8CC0(a1, v5, *(_QWORD*)(a1 + 8) + 100i64 * v3++, 2);
		while (v3 < *(_DWORD*)(a1 + 4));
	}
	return result;
}
// 1409B19A0: using guessed type _DWORD dword_1409B19A0[16];

