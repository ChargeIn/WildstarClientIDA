#include "../winhttp.h"

//----- (00000001408562A0) ----------------------------------------------------
__int64 __fastcall sub_1408562A0(__int64 a1)
{
	*(_DWORD*)(a1 + 32) = -1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 16) &= 0xFFFFF800;
	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 4) = -1;
	return a1;
}

