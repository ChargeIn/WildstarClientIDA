#include "../winhttp.h"

//----- (0000000140315E40) ----------------------------------------------------
__int64 __fastcall sub_140315E40(__int64 a1)
{
	int v1; // eax

	v1 = *(_DWORD*)(*(_QWORD*)(a1 + 416) + 3784i64);
	if ((v1 & 0x80u) == 0)
		return 0i64;
	if ((v1 & 0x400) != 0 && (v1 & 0x200) != 0)
		return 4i64;
	if ((v1 & 0x400) != 0)
		return 2i64;
	return (*(_DWORD*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x200 | 0x100u) >> 8;
}

