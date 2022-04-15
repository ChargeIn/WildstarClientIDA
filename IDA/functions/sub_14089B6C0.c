#include "../winhttp.h"

//----- (000000014089B6C0) ----------------------------------------------------
__int64 __fastcall sub_14089B6C0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 48i64);
	if (!result)
		return 0i64;
	*(_DWORD*)(result + 24) = 1;
	*(_QWORD*)result = off_1409A9960;
	*(_QWORD*)(result + 8) = 0i64;
	*(_DWORD*)(result + 20) = 0;
	*(_DWORD*)(result + 28) = 0;
	*(_QWORD*)(result + 40) = 0i64;
	*(_QWORD*)(result + 32) = 0i64;
	return result;
}
// 1409A9960: using guessed type __int64 (__fastcall *off_1409A9960[6])();

