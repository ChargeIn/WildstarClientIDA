#include "../winhttp.h"

//----- (00000001408805B0) ----------------------------------------------------
__int64 __fastcall sub_1408805B0(__int64 a1, __int64 a2)
{
	sub_14087FF30(a1, a2);
	*(_QWORD*)a1 = off_1409A76B0;
	*(_BYTE*)(a1 + 126) &= 0xE0u;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_DWORD*)(a1 + 120) = 0;
	*(_WORD*)(a1 + 124) = 0;
	return a1;
}
// 1409A76B0: using guessed type __int64 (__fastcall *off_1409A76B0[10])();

