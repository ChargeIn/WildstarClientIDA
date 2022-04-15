#include "../winhttp.h"

//----- (0000000140888F20) ----------------------------------------------------
__int64 __fastcall sub_140888F20(__int64 a1)
{
	*(_QWORD*)a1 = &off_1409A8128;
	*(_QWORD*)(a1 + 16) = 0i64;
	InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_BYTE*)(a1 + 104) = 0;
	*(_DWORD*)(a1 + 108) = 0;
	return a1;
}
// 1409A8128: using guessed type __int64 (__fastcall *off_1409A8128)();

