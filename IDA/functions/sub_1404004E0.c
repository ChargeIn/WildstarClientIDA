#include "../winhttp.h"

//----- (00000001404004E0) ----------------------------------------------------
__int64 __fastcall sub_1404004E0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(__int64, __int64))
{
	__int64 v5; // rbx
	__int64 i; // rdi

	v5 = 2 * a2 + 2;
	for (i = a2; v5 < a3; v5 = 2 * v5 + 2)
	{
		if (a5(a1 + 112 * v5, a1 + 112 * v5 - 112))
			--v5;
		sub_140474EC0(a1 + 112 * i, a1 + 112 * v5);
		i = v5;
	}
	if (v5 == a3)
	{
		sub_140474EC0(a1 + 112 * i, 112 * v5 + a1 - 112);
		i = v5 - 1;
	}
	return sub_1404005C0(a1, i, a2, a4, a5);
}

