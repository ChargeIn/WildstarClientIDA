#include "../winhttp.h"

//----- (00000001408909C0) ----------------------------------------------------
__int64 __fastcall sub_1408909C0(__int64 a1, int a2)
{
	sub_14084C610(a1, a2);
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_DWORD*)(a1 + 184) = 0;
	*(_QWORD*)a1 = off_1409A84E0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_BYTE*)(a1 + 208) &= ~1u;
	*(_QWORD*)(a1 + 216) = 0i64;
	return a1;
}
// 1409A84E0: using guessed type __int64 (__fastcall *off_1409A84E0[4])();

