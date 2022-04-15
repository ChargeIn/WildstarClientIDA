#include "../winhttp.h"

//----- (00000001406DCEC0) ----------------------------------------------------
__int64 __fastcall sub_1406DCEC0(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v1 = 0xBFF0000000000000ui64;
	*(_DWORD*)(v1 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

