#include "../winhttp.h"

//----- (00000001401C7F70) ----------------------------------------------------
__int64 __fastcall sub_1401C7F70(__int64 a1)
{
	*(_DWORD*)(a1 + 4) = TlsAlloc();
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 72) = a1 + 48;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 80) = a1 + 56;
	*(_QWORD*)(a1 + 88) = a1 + 64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 144) = a1 + 120;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 152) = a1 + 128;
	*(_QWORD*)(a1 + 160) = a1 + 136;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_DWORD*)a1 = 1;
	*(_DWORD*)(a1 + 184) = 0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	return a1;
}

