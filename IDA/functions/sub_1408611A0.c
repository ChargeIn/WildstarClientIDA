#include "../winhttp.h"

//----- (00000001408611A0) ----------------------------------------------------
__int64 __fastcall sub_1408611A0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	*(_BYTE*)(a1 + 32) &= 0xFCu;
	*(_QWORD*)a1 = off_1409A43D0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	result = a1;
	*(_QWORD*)(a1 + 24) = a2;
	return result;
}
// 1409A43D0: using guessed type __int64 (__fastcall *off_1409A43D0[8])();

