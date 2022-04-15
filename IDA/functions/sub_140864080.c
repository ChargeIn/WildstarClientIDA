#include "../winhttp.h"

//----- (0000000140864080) ----------------------------------------------------
__int64 __fastcall sub_140864080(__int64 a1)
{
	__int64 v1; // rdx

	v1 = *(_QWORD*)(a1 + 848);
	if (v1)
	{
		sub_140881720(dword_140C10F28, v1);
		*(_QWORD*)(a1 + 848) = 0i64;
	}
	sub_140862E30(a1);
	return 1i64;
}
// 140C10F28: using guessed type int dword_140C10F28;

