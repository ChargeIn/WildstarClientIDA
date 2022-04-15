#include "../winhttp.h"

//----- (0000000140874D50) ----------------------------------------------------
__int64 __fastcall sub_140874D50(__int64 a1, _QWORD* a2)
{
	char v2; // r8

	v2 = *(_BYTE*)(*a2)++;
	*(_BYTE*)(a1 + 96) = v2 != 0;
	return 1i64;
}

