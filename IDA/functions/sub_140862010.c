#include "../winhttp.h"

//----- (0000000140862010) ----------------------------------------------------
__int64 __fastcall sub_140862010(__int64 a1, __int64 a2, int a3)
{
	*(_DWORD*)(a1 + 8) = a3;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 40) = a2;
	*(_QWORD*)a1 = off_1409A45B0;
	return a1;
}
// 1409A45B0: using guessed type __int64 (__fastcall *off_1409A45B0[19])();

