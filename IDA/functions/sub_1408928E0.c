#include "../winhttp.h"

//----- (00000001408928E0) ----------------------------------------------------
__int64 __fastcall sub_1408928E0(__int64 a1, int a2)
{
	__int64 result; // rax

	sub_1408957A0(a1, a2);
	*(_QWORD*)a1 = off_1409A8AA0;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_DWORD*)(a1 + 264) = 0;
	*(_DWORD*)(a1 + 272) = 50000;
	*(_QWORD*)(a1 + 248) = off_1409A8A78;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_DWORD*)(a1 + 296) = 0;
	result = a1;
	*(_DWORD*)(a1 + 304) = 0;
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_WORD*)(a1 + 320) = 256;
	*(_BYTE*)(a1 + 322) = 0;
	*(_WORD*)(a1 + 324) = 0;
	return result;
}
// 1409A8A78: using guessed type __int64 (__fastcall *off_1409A8A78[4])();
// 1409A8AA0: using guessed type __int64 (__fastcall *off_1409A8AA0[4])();

