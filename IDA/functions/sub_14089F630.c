#include "../winhttp.h"

//----- (000000014089F630) ----------------------------------------------------
__int64 __fastcall sub_14089F630(_DWORD* a1, __int64 a2, __int64 a3, unsigned int a4)
{
	if (a4)
		return (*(__int64(__fastcall**)(_DWORD*, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	a1[2] = 0;
	return 1i64;
}

