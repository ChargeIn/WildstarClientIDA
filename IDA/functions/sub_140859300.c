#include "../winhttp.h"

//----- (0000000140859300) ----------------------------------------------------
__int64 __fastcall sub_140859300(__int64 a1, int a2)
{
	sub_140851300(a1, a2);
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_DWORD*)(a1 + 128) = 0;
	*(_QWORD*)a1 = off_1409A3F90;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_DWORD*)(a1 + 152) = 0;
	*(_DWORD*)(a1 + 160) = 0;
	*(_DWORD*)(a1 + 164) = 63;
	*(_DWORD*)(a1 + 168) = -1027565158;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_DWORD*)(a1 + 208) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 256) = 0;
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_DWORD*)(a1 + 304) = 0;
	*(_BYTE*)(a1 + 328) &= 0xE0u;
	*(_BYTE*)(a1 + 328) |= 0x60u;
	*(_QWORD*)(a1 + 320) = 0i64;
	return a1;
}
// 1409A3F90: using guessed type __int64 (__fastcall *off_1409A3F90[4])();

