#include "../winhttp.h"

//----- (00000001403AD990) ----------------------------------------------------
__int64 __fastcall sub_1403AD990(__m128* a1, __m128* a2)
{
	int v4; // edx
	__int64 v5; // r8

	if (!a1)
		return 2i64;
	if (!a2)
		return 3i64;
	v4 = 0;
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	if (v5
		&& (a1->m128_i32[2] == *(_DWORD*)(v5 + 8) && *(_QWORD*)(qword_140C65898 + 26392)
			|| a2->m128_i32[2] == *(_DWORD*)(v5 + 8) && (LOBYTE(v4) = *(_QWORD*)(qword_140C65898 + 26392) != 0i64, v4)))
	{
		return 4i64;
	}
	else
	{
		return sub_1403ADA10(a1, a2);
	}
}
// 1403AD9DE: conditional instruction was optimized away because r8.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;

