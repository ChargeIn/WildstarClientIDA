#include "../winhttp.h"

//----- (000000014084C610) ----------------------------------------------------
__int64 __fastcall sub_14084C610(__int64 a1, int a2)
{
	sub_140851300(a1, a2);
	*(_QWORD*)a1 = off_1409A3290;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_BYTE*)(a1 + 161) &= 0xF8u;
	*(_DWORD*)(a1 + 136) = 0;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_BYTE*)(a1 + 160) = 4;
	return a1;
}
// 1409A3290: using guessed type __int64 (__fastcall *off_1409A3290[4])();

