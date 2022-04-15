#include "../winhttp.h"

//----- (00000001405F76F0) ----------------------------------------------------
__int64 __fastcall sub_1405F76F0(__int64 a1)
{
	int v1; // eax

	v1 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64) + 40i64);
	if (v1 == 4 || v1 == 18)
		return ((*(_DWORD*)(a1 + 24)
			- ((*(_DWORD*)(a1 + 24) >> 2) & 0x9249249)
			- ((*(_DWORD*)(a1 + 24) >> 1) & 0x5B6DB6DB)
			+ ((*(_DWORD*)(a1 + 24)
				- ((*(_DWORD*)(a1 + 24) >> 2) & 0x9249249)
				- ((*(_DWORD*)(a1 + 24) >> 1) & 0x5B6DB6DBu)) >> 3)) & 0xC71C71C7)
		% 0x3F;
	else
		return *(unsigned int*)(a1 + 24);
}

