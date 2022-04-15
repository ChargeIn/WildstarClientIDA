#include "../winhttp.h"

//----- (000000014033FDB0) ----------------------------------------------------
__int64 __fastcall sub_14033FDB0(__int64 a1, __int64 a2)
{
	__int64(__fastcall * v2)(__int64, int, _DWORD*, char*); // r8

	v2 = sub_14033FD50;
	if (*(_QWORD*)(a2 + 40))
		v2 = *(__int64(__fastcall**)(__int64, int, _DWORD*, char*))(a2 + 40);
	*(_QWORD*)(a1 + 8) = v2;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 48);
	return 0i64;
}

