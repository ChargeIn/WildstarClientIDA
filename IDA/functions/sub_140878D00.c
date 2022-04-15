#include "../winhttp.h"

//----- (0000000140878D00) ----------------------------------------------------
__int64 __fastcall sub_140878D00(__int64 a1, int a2, char a3)
{
	__int64 v4; // rax
	__int64 v6; // rax

	if (!a2)
	{
		v4 = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 44) = 0;
		*(_WORD*)(a1 + 84) = *(_WORD*)(v4 + 376);
		return 1i64;
	}
	if (!a3 || a2 != 1)
		return 1i64;
	*(_DWORD*)(a1 + 44) = sub_1408801C0(a1);
	v6 = *(_QWORD*)(a1 + 24);
	*(_BYTE*)(v6 + 383) &= 0xF1u;
	*(_DWORD*)(v6 + 372) = 0;
	return 2 - (unsigned int)(*(_DWORD*)(a1 + 44) < *(_DWORD*)(a1 + 40));
}

