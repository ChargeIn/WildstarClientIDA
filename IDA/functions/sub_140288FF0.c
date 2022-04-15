#include "../winhttp.h"

//----- (0000000140288FF0) ----------------------------------------------------
__int64 __fastcall sub_140288FF0(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	*(_DWORD*)(a1 + 16) = 1;
	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = off_140B616B0;
	(**a2)(a2);
	*(_QWORD*)(a1 + 20) = 0i64;
	*(_QWORD*)(a1 + 28) = 0i64;
	*(_DWORD*)(a1 + 36) = 0;
	return a1;
}
// 140B616B0: using guessed type __int64 (__fastcall *off_140B616B0[9])();

