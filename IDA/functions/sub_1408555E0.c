#include "../winhttp.h"

//----- (00000001408555E0) ----------------------------------------------------
__int64 __fastcall sub_1408555E0(__int64 a1, __int16 a2, int a3)
{
	char v5; // al

	sub_140865E10(a1, a3);
	*(_QWORD*)a1 = off_1409A38A0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	v5 = *(_BYTE*)(a1 + 62);
	*(_WORD*)(a1 + 60) = a2;
	*(_BYTE*)(a1 + 62) = v5 & 0x80 | 4;
	return a1;
}
// 1409A38A0: using guessed type __int64 (__fastcall *off_1409A38A0[6])();

