#include "../winhttp.h"

//----- (000000014082B2C0) ----------------------------------------------------
__int64 __fastcall sub_14082B2C0(__int64 a1, __int64 a2)
{
	*(_QWORD*)a1 = off_1409A2DF8;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 68) = 0;
	*(_QWORD*)(a1 + 72) = a2;
	if (a2)
		*(_DWORD*)(a2 + 136) ^= (*(_DWORD*)(a2 + 136) ^ (*(_DWORD*)(a2 + 136) + 1)) & 0x3FFFFFFF;
	return a1;
}
// 1409A2DF8: using guessed type __int64 (__fastcall *off_1409A2DF8[2])();

