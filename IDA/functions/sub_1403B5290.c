#include "../winhttp.h"

//----- (00000001403B5290) ----------------------------------------------------
_BOOL8 __fastcall sub_1403B5290(__int64 a1)
{
	int v1; // ecx

	v1 = *(_DWORD*)(*(_QWORD*)(a1 + 112) + 24i64);
	return ((v1 - 2) & 0xFFFFFFFA) == 0 && v1 != 3;
}

