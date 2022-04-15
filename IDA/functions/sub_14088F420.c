#include "../winhttp.h"

//----- (000000014088F420) ----------------------------------------------------
void __fastcall sub_14088F420(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdx
	__int64 v4; // rcx

	++* (_DWORD*)(a1 + 80);
	while (*(_QWORD*)(a1 + 200))
	{
		v2 = *(_QWORD*)(a1 + 200);
		if (v2)
		{
			*(_QWORD*)(a1 + 200) = *(_QWORD*)(v2 + 24);
			sub_140881720(dword_140C10F20, v2);
		}
	}
	sub_1408950A0(a1 + 104);
	v3 = *(_QWORD*)(a1 + 136);
	if (v3)
	{
		*(_QWORD*)(*(_QWORD*)(v3 + 24) + 136i64) = 0i64;
		v4 = *(_QWORD*)(v3 + 24);
		*(_QWORD*)(v3 + 24) = 0i64;
		if (v4)
			sub_14088B630(v4);
	}
	sub_14088B620(a1);
	sub_14088B630(a1);
}
// 140C10F20: using guessed type int dword_140C10F20;

