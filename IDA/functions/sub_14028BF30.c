#include "../winhttp.h"

//----- (000000014028BF30) ----------------------------------------------------
__int64 __fastcall sub_14028BF30(__int64 a1, __int64 a2)
{
	int v2; // eax

	*(_QWORD*)a1 = off_140B618D0;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_DWORD*)(a1 + 200) = 0;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 80) = 0;
	*(_DWORD*)(a1 + 88) = 0;
	*(_DWORD*)(a1 + 92) = -2147483638;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_DWORD*)(a1 + 96) = 0;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_DWORD*)(a1 + 136) = 0;
	v2 = *(_DWORD*)(a2 + 240);
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_DWORD*)(a1 + 140) = v2 - 1;
	return a1;
}
// 140B618D0: using guessed type __int64 (__fastcall *off_140B618D0[12])();

