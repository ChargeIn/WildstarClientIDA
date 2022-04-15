#include "../winhttp.h"

//----- (0000000140348380) ----------------------------------------------------
__int64 __fastcall sub_140348380(__int64 a1)
{
	int v2; // ecx
	_QWORD* v3; // rax

	*(_QWORD*)a1 = off_140B652D0;
	*(_DWORD*)(a1 + 16) = -2147024809;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 8) = off_140B65328;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 40) = 1;
	v2 = 1;
	v3 = (_QWORD*)(a1 + 112);
	do
	{
		--v2;
		*v3 = 0i64;
		v3[1] = 0i64;
		*(v3 - 2) = 0i64;
		*(v3 - 1) = 0i64;
		v3 += 4;
	} while (v2 >= 0);
	*(_DWORD*)(a1 + 160) = 1;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	sub_14034A1A0(a1 + 8, 0x80070057);
	return a1;
}
// 140B652D0: using guessed type __int64 (__fastcall *off_140B652D0[24])();
// 140B65328: using guessed type __int64 (__fastcall *off_140B65328[13])();

