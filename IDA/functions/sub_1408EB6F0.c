#include "../winhttp.h"

//----- (00000001408EB6F0) ----------------------------------------------------
__int64 __fastcall sub_1408EB6F0(__int64 a1, __int16 a2)
{
	__int16 v3; // r8
	__int64 result; // rax

	if (*(_WORD*)(a1 + 84) == 1)
		v3 = *(_WORD*)(a1 + 350);
	else
		v3 = *(_WORD*)(a1 + 338);
	result = sub_1408EBAE0(a1 + 144, a2, v3);
	*(_DWORD*)(a1 + 136) = 3;
	return result;
}

