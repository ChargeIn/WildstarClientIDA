#include "../winhttp.h"

//----- (0000000140888020) ----------------------------------------------------
__int64 __fastcall sub_140888020(__int64 a1)
{
	__int64 v2; // rdx

	sub_1408894E0(a1);
	v2 = *(_QWORD*)(a1 + 304);
	if (v2)
	{
		*(_QWORD*)(a1 + 296) = 0i64;
		sub_140881720(dword_140C111C0, v2);
	}
	*(_QWORD*)(a1 + 296) = 0i64;
	return sub_140883EC0(a1);
}
// 140C111C0: using guessed type int dword_140C111C0;

