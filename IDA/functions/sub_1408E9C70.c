#include "../winhttp.h"

//----- (00000001408E9C70) ----------------------------------------------------
__int64 __fastcall sub_1408E9C70(__int64 a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	unsigned int v4; // edi
	int v5; // edx
	__int16 v6; // r8

	v2 = sub_1408EA070(a1);
	v3 = *(_QWORD*)(a1 + 24);
	v4 = v2;
	if ((*(_BYTE*)(v3 + 383) & 2) != 0)
		v5 = 0;
	else
		v5 = *(_DWORD*)(v3 + 372);
	*(_BYTE*)(v3 + 383) &= 0xF1u;
	*(_DWORD*)(v3 + 372) = 0;
	*(_DWORD*)(a1 + 44) += v5;
	if (*(_WORD*)(a1 + 84) == 1)
		v6 = *(_WORD*)(a1 + 310);
	else
		v6 = *(_WORD*)(a1 + 298);
	sub_1408EBAE0(a1 + 104, v5, v6);
	*(_DWORD*)(a1 + 96) = 3;
	return v4;
}

