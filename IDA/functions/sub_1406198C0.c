#include "../winhttp.h"

//----- (00000001406198C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1406198C0(__int64 a1, __int64 a2)
{
	int v2; // ecx
	_BOOL8 result; // rax

	result = 0;
	if ((*(_BYTE*)(a2 + 336) & 8) == 0 && (*(_BYTE*)(a2 + 332) & 0xC0) == 0 && !*(_DWORD*)(a2 + 424))
	{
		v2 = *(_DWORD*)(a2 + 340);
		if ((v2 & 0x80) != 0 && (v2 & 0x8000) == 0 && (v2 & 0x10000) == 0)
			return 1;
	}
	return result;
}

