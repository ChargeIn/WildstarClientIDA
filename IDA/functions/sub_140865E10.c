#include "../winhttp.h"

//----- (0000000140865E10) ----------------------------------------------------
__int64 __fastcall sub_140865E10(__int64 a1, int a2)
{
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 24) = a2;
	*(_QWORD*)a1 = &off_1409A47E8;
	return a1;
}
// 1409A47E8: using guessed type __int64 (__fastcall *off_1409A47E8)();

