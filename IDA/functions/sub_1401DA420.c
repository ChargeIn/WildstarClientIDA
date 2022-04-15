#include "../winhttp.h"

//----- (00000001401DA420) ----------------------------------------------------
__int64 __fastcall sub_1401DA420(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rax

	*(_QWORD*)a1 = off_140B600E0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_DWORD*)(a1 + 80) = 1414420037;
	*(_DWORD*)(a1 + 148) = 3;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	(**(void(__fastcall***)(__int64))a2)(a2);
	v6 = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = v6;
	if (a3)
	{
		*(_DWORD*)(a1 + 40) = 1;
		*(_DWORD*)(a1 + 48) = *(_DWORD*)a3;
		*(_QWORD*)(a1 + 64) = *(_QWORD*)(a3 + 16);
		*(_QWORD*)(a1 + 56) = *(_QWORD*)(a3 + 8);
		*(_QWORD*)(a1 + 72) = *(_QWORD*)(a3 + 24);
	}
	else
	{
		*(_DWORD*)(a1 + 40) = 0;
	}
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_DWORD*)(a1 + 168) = 0;
	return a1;
}
// 140B600E0: using guessed type __int64 (__fastcall *off_140B600E0[8])();

