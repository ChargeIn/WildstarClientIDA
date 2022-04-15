#include "../winhttp.h"

//----- (00000001408A1560) ----------------------------------------------------
__int64 __fastcall sub_1408A1560(__int64 a1)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 64) = -1;
	*(_DWORD*)(a1 + 68) = 0;
	result = a1;
	*(_DWORD*)(a1 + 96) = 0;
	return result;
}

