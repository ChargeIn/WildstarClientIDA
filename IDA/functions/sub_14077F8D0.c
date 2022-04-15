#include "../winhttp.h"

//----- (000000014077F8D0) ----------------------------------------------------
__int64 __fastcall sub_14077F8D0(__int64 a1)
{
	__int64 v2; // rax
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 120) && *(_QWORD*)(qword_140C65898 + 29960))
	{
		if (!*(_DWORD*)(a1 + 276))
		{
			v2 = sub_140200220(0x30Au);
			if (v2)
				LODWORD(v2) = *(_DWORD*)(v2 + 4);
			sub_1405C7960((__int64*)a1, v2);
		}
		return sub_1405C8EC0(a1);
	}
	else
	{
		result = 0i64;
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
	return result;
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C65898: using guessed type __int64 qword_140C65898;

