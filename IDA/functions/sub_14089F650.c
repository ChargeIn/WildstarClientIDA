#include "../winhttp.h"

//----- (000000014089F650) ----------------------------------------------------
__int64 __fastcall sub_14089F650(__int64 a1, __int16 a2, _DWORD* a3)
{
	if (!a3 || a2 != 1)
		return 31i64;
	*(_DWORD*)(a1 + 8) = *a3;
	return (unsigned int)a2;
}

