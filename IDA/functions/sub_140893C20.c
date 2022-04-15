#include "../winhttp.h"

//----- (0000000140893C20) ----------------------------------------------------
__int64 __fastcall sub_140893C20(__int64 a1, int a2)
{
	sub_14086FC30((_QWORD*)a1, a2);
	*(_QWORD*)a1 = off_1409A9020;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_DWORD*)(a1 + 184) = 0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_DWORD*)(a1 + 208) = 0;
	*(_DWORD*)(a1 + 216) = 0;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_DWORD*)(a1 + 240) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_WORD*)(a1 + 256) = -1;
	return a1;
}
// 1409A9020: using guessed type __int64 (__fastcall *off_1409A9020[4])();

