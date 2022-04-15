#include "../winhttp.h"

//----- (000000014056A3F0) ----------------------------------------------------
__int64 __fastcall sub_14056A3F0(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 64);
	if ((*(_BYTE*)(v1 + 336) & 8) != 0
		|| (*(_BYTE*)(v1 + 332) & 0xC0) != 0
		|| *(_DWORD*)(v1 + 424)
		|| (*(_DWORD*)(v1 + 340) & 0x80) == 0)
	{
		return 1i64;
	}
	else
	{
		return *(_DWORD*)(a1 + 128) & 1;
	}
}

