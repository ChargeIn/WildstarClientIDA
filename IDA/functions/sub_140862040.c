#include "../winhttp.h"

//----- (0000000140862040) ----------------------------------------------------
__int64 __fastcall sub_140862040(__int64 a1, __int64 a2)
{
	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = off_1409A46F0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	return a1;
}
// 1409A46F0: using guessed type __int64 (__fastcall *off_1409A46F0[19])();

