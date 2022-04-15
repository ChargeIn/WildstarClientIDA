#include "../winhttp.h"

//----- (00000001400B62B0) ----------------------------------------------------
_QWORD* __fastcall sub_1400B62B0(_QWORD* a1, char a2)
{
	*a1 = &off_140B56190;
	SteamAPI_Shutdown();
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140959C78: using guessed type __int64 SteamAPI_Shutdown(void);
// 140B56190: using guessed type __int64 (__fastcall *off_140B56190)();

