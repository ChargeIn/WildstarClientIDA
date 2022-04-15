#include "../winhttp.h"

//----- (0000000140878DF0) ----------------------------------------------------
__int64 __fastcall sub_140878DF0(__int64 a1)
{
	__int64 v1; // rdx

	v1 = *(_QWORD*)(a1 + 128);
	*(_DWORD*)(a1 + 140) = 0;
	if (v1)
	{
		sub_140881720(dword_140C10F28, v1);
		*(_QWORD*)(a1 + 128) = 0i64;
		*(_DWORD*)(a1 + 136) = 0;
	}
	return sub_1408806D0(a1);
}
// 140C10F28: using guessed type int dword_140C10F28;

