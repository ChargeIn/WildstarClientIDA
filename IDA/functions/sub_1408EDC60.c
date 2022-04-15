#include "../winhttp.h"

//----- (00000001408EDC60) ----------------------------------------------------
__int64 __fastcall sub_1408EDC60(__int64 a1, char a2, char a3)
{
	int v3; // r9d
	int v4; // edx

	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	v3 = 1 << a2;
	v4 = 1 << a3;
	*(_DWORD*)a1 = v3;
	*(_DWORD*)(a1 + 4) = 1 << a3;
	if (v3 < 64 || v4 < v3 || v4 > 0x2000)
		return 4294967163i64;
	else
		return 0i64;
}

