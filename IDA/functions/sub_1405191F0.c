#include "../winhttp.h"

//----- (00000001405191F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405191F0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax

	v3 = sub_1401E8C20(*(_DWORD*)(a2 + 8));
	return v3 && (*(_BYTE*)(v3 + 4) & 1) == 0 && !*(_DWORD*)(a2 + 40);
}

