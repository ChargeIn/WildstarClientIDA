#include "../winhttp.h"

//----- (0000000140846A10) ----------------------------------------------------
__int64 __fastcall sub_140846A10(__int64 a1, __int64 a2)
{
	*(_QWORD*)a1 = off_1409A3000;
	*(_QWORD*)(a1 + 8) = 0i64;
	sub_14001C280(a1 + 16);
	*(_QWORD*)(a1 + 200) = a2;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_WORD*)(a1 + 112) = 0;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 100) = 43i64;
	*(_DWORD*)(a1 + 128) = -1;
	*(_DWORD*)(a1 + 132) = 1065353216;
	*(_DWORD*)(a1 + 136) = -1;
	*(_DWORD*)(a1 + 140) = 1;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_WORD*)(a1 + 168) = 0;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 156) = 43i64;
	*(_DWORD*)(a1 + 184) = -1;
	*(_DWORD*)(a1 + 188) = 1065353216;
	*(_DWORD*)(a1 + 192) = -1;
	*(_DWORD*)(a1 + 196) = 1;
	return a1;
}
// 1409A3000: using guessed type __int64 (__fastcall *off_1409A3000[9])();

