#include "../winhttp.h"

//----- (00000001408EA6B0) ----------------------------------------------------
__int64 __fastcall sub_1408EA6B0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	__int64 v4; // rax
	int v5; // edx
	__int16 v6; // r8

	result = sub_1408806D0(a1);
	if ((_DWORD)result == 1)
	{
		v3 = *(_QWORD*)(a1 + 392);
		if (v3)
		{
			sub_140881720(dword_140C10F28, v3);
			*(_QWORD*)(a1 + 392) = 0i64;
			*(_DWORD*)(a1 + 400) = 0;
			*(_WORD*)(a1 + 404) = 0;
		}
		v4 = *(_QWORD*)(a1 + 24);
		if ((*(_BYTE*)(v4 + 383) & 2) != 0)
			v5 = 0;
		else
			v5 = *(_DWORD*)(v4 + 372);
		*(_BYTE*)(v4 + 383) &= 0xF1u;
		*(_DWORD*)(v4 + 372) = 0;
		*(_DWORD*)(a1 + 44) += v5;
		if (*(_WORD*)(a1 + 84) == 1)
			v6 = *(_WORD*)(a1 + 350);
		else
			v6 = *(_WORD*)(a1 + 338);
		sub_1408EBAE0(a1 + 144, v5, v6);
		*(_DWORD*)(a1 + 136) = 3;
		return 1i64;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

