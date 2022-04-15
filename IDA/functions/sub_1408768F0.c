#include "../winhttp.h"

//----- (00000001408768F0) ----------------------------------------------------
__int64 __fastcall sub_1408768F0(__int64 a1, __int16 a2, int a3)
{
	sub_1408555E0(a1, a2, a3);
	*(_QWORD*)a1 = off_1409A6A70;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 80) = 0;
	return a1;
}
// 1409A6A70: using guessed type __int64 (__fastcall *off_1409A6A70[6])();

