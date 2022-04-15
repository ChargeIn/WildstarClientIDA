#include "../winhttp.h"

//----- (0000000140511C60) ----------------------------------------------------
__int64 __fastcall sub_140511C60(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v1 = 0i64;
	*(_DWORD*)(v1 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

