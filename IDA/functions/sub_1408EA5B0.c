#include "../winhttp.h"

//----- (00000001408EA5B0) ----------------------------------------------------
__int64 __fastcall sub_1408EA5B0(__int64 a1, __int16 a2)
{
	__int16 v3; // r8
	__int64 result; // rax

	if (*(_WORD*)(a1 + 84) == 1)
		v3 = *(_WORD*)(a1 + 310);
	else
		v3 = *(_WORD*)(a1 + 298);
	result = sub_1408EBAE0(a1 + 104, a2, v3);
	*(_DWORD*)(a1 + 96) = 3;
	return result;
}

