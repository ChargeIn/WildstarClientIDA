#include "../winhttp.h"

//----- (0000000140874010) ----------------------------------------------------
__int64 __fastcall sub_140874010(__int64 a1, int a2)
{
	sub_14087BC10(a1, a2);
	*(_QWORD*)a1 = off_1409A60A0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_DWORD*)(a1 + 208) = 0;
	return a1;
}
// 1409A60A0: using guessed type __int64 (__fastcall *off_1409A60A0[4])();

