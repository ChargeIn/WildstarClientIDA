#include "../winhttp.h"

//----- (00000001408A37D0) ----------------------------------------------------
__int64 __fastcall sub_1408A37D0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 192i64);
	if (!result)
		return 0i64;
	*(_QWORD*)result = off_1409A9DD0;
	*(_QWORD*)(result + 8) = 0i64;
	*(_QWORD*)(result + 16) = 0i64;
	*(_QWORD*)(result + 24) = 0i64;
	*(_QWORD*)(result + 32) = 0i64;
	*(_QWORD*)(result + 40) = 0i64;
	*(_DWORD*)(result + 176) = -1;
	*(_DWORD*)(result + 180) = 0;
	*(_QWORD*)(result + 48) = 0i64;
	*(_QWORD*)(result + 56) = 0i64;
	*(_QWORD*)(result + 64) = 0i64;
	*(_QWORD*)(result + 72) = 0i64;
	*(_QWORD*)(result + 80) = 0i64;
	*(_QWORD*)(result + 88) = 0i64;
	*(_QWORD*)(result + 96) = 0i64;
	*(_QWORD*)(result + 104) = 0i64;
	*(_QWORD*)(result + 112) = 0i64;
	*(_QWORD*)(result + 120) = 0i64;
	*(_QWORD*)(result + 128) = 0i64;
	*(_QWORD*)(result + 136) = 0i64;
	*(_QWORD*)(result + 144) = 0i64;
	*(_QWORD*)(result + 152) = 0i64;
	*(_QWORD*)(result + 160) = 0i64;
	*(_QWORD*)(result + 168) = 0i64;
	return result;
}
// 1409A9DD0: using guessed type __int64 (__fastcall *off_1409A9DD0[6])();

