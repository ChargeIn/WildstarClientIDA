#include "../winhttp.h"

//----- (00000001404BC740) ----------------------------------------------------
_BOOL8 __fastcall sub_1404BC740(__int64 a1, __int64 a2)
{
	return *(_DWORD*)a1 == *(_DWORD*)a2 && *(_QWORD*)(a1 + 8) == *(_QWORD*)(a2 + 8);
}

