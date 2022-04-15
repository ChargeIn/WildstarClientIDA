#include "../winhttp.h"

//----- (0000000140878AF0) ----------------------------------------------------
__int64 __fastcall sub_140878AF0(__int64 a1)
{
	__int64 v2; // rax

	*(_DWORD*)(a1 + 44) = sub_1408801C0(a1);
	v2 = *(_QWORD*)(a1 + 24);
	*(_BYTE*)(v2 + 383) &= 0xF1u;
	*(_DWORD*)(v2 + 372) = 0;
	return 2 - (unsigned int)(*(_DWORD*)(a1 + 44) < *(_DWORD*)(a1 + 40));
}

