#include "../winhttp.h"

//----- (00000001406F0780) ----------------------------------------------------
__int64 __fastcall sub_1406F0780(__int64 a1, __int64 a2, __int64 a3)
{
	if (qword_140C65970 && qword_140C65898)
	{
		if (*(_DWORD*)(qword_140C65970 + 8) == 2 && !*(_DWORD*)(qword_140C65970 + 192))
			sub_1405712A0(a1);
		sub_140398470(a1, a2, a3);
	}
	return 0i64;
}
// 1406F07AE: variable 'a1' is possibly undefined
// 1406F07AE: variable 'a2' is possibly undefined
// 1406F07AE: variable 'a3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

