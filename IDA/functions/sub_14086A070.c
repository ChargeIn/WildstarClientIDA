#include "../winhttp.h"

//----- (000000014086A070) ----------------------------------------------------
__int64 __fastcall sub_14086A070(__int64 a1, int a2)
{
	__int64 result; // rax

	sub_140874010(a1, a2);
	sub_14087B9A0((_QWORD*)(a1 + 216));
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_DWORD*)(a1 + 240) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 256) = 0;
	*(_QWORD*)a1 = off_1409A50C0;
	*(_QWORD*)(a1 + 216) = off_1409A5368;
	*(_QWORD*)(a1 + 224) = off_1409A5378;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_DWORD*)(a1 + 296) = 0;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_DWORD*)(a1 + 344) = 0;
	result = a1;
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_DWORD*)(a1 + 392) = 0;
	return result;
}
// 1409A50C0: using guessed type __int64 (__fastcall *off_1409A50C0[4])();
// 1409A5368: using guessed type __int64 (__fastcall *off_1409A5368[7])();
// 1409A5378: using guessed type __int64 (__fastcall *off_1409A5378[5])();

