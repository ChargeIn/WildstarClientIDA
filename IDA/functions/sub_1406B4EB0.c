#include "../winhttp.h"

//----- (00000001406B4EB0) ----------------------------------------------------
__int64 __fastcall sub_1406B4EB0(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v1 = 0x4049000000000000i64;
	*(_DWORD*)(v1 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

