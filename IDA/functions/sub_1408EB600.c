#include "../winhttp.h"

//----- (00000001408EB600) ----------------------------------------------------
__int64 __fastcall sub_1408EB600(__int64 a1, __int64 a2, char a3)
{
	unsigned int v3; // ebx
	__int64 result; // rax
	unsigned int v6; // esi
	__int64 v7; // rcx
	int v8; // edx
	__int16 v9; // r8

	v3 = a2;
	result = sub_140881040(a1, a2, a3);
	v6 = result;
	if (v3 <= 1)
	{
		v7 = *(_QWORD*)(a1 + 24);
		if ((*(_BYTE*)(v7 + 383) & 2) != 0)
			v8 = 0;
		else
			v8 = *(_DWORD*)(v7 + 372);
		*(_BYTE*)(v7 + 383) &= 0xF1u;
		*(_DWORD*)(v7 + 372) = 0;
		*(_DWORD*)(a1 + 44) += v8;
		if (*(_WORD*)(a1 + 84) == 1)
			v9 = *(_WORD*)(a1 + 350);
		else
			v9 = *(_WORD*)(a1 + 338);
		sub_1408EBAE0(a1 + 144, v8, v9);
		*(_DWORD*)(a1 + 136) = 3;
		return v6;
	}
	return result;
}

