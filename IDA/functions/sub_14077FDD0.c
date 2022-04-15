#include "../winhttp.h"

//----- (000000014077FDD0) ----------------------------------------------------
__int64 __fastcall sub_14077FDD0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	unsigned int v4; // edx

	result = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		if (!*(_DWORD*)(a1 + 276))
		{
			v3 = sub_140200220(0x457u);
			if (v3)
				v4 = *(_DWORD*)(v3 + 4);
			else
				v4 = 0;
			sub_1405C7960((__int64*)a1, v4);
		}
		return sub_1405C8EC0(a1);
	}
	else
	{
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
	return result;
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C65898: using guessed type __int64 qword_140C65898;

