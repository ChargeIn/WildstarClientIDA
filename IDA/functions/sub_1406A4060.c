#include "../winhttp.h"

//----- (00000001406A4060) ----------------------------------------------------
__int64 __fastcall sub_1406A4060(__int64 a1, __int64 a2)
{
	__int64 v4; // rax

	*(_QWORD*)a1 = off_140B70020;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 24) = -2;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 48) = -2;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_DWORD*)(a1 + 72) = -2;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_DWORD*)(a1 + 96) = -2;
	*(_QWORD*)(a1 + 104) = a2;
	if (a2)
		(**(void(__fastcall***)(__int64))a2)(a2);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 112) = a2 + 48;
	*(_QWORD*)(a1 + 120) = *(_QWORD*)(a2 + 48);
	*(_QWORD*)(a2 + 48) = a1;
	v4 = *(_QWORD*)(a1 + 120);
	if (v4)
		*(_QWORD*)(v4 + 112) = a1 + 120;
	return a1;
}
// 140B70020: using guessed type __int64 (__fastcall *off_140B70020[2])();

