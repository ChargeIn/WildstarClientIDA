#include "../winhttp.h"

//----- (000000014077DD90) ----------------------------------------------------
__int64 __fastcall sub_14077DD90(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	unsigned int v4; // eax
	int v5; // edx
	__int64 v6; // rax

	sub_1405C7150(a1, 3);
	v2 = qword_140C65898;
	*(_QWORD*)a1 = off_140B77A30;
	if (*(_QWORD*)(v2 + 120))
	{
		v4 = sub_140397740(v2);
		v5 = v4;
		if (v4)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v6 = sub_1405A5B90(qword_140C65898, v4)) != 0
				|| (v6 = sub_1407A0FD0(qword_140C65B70, v5)) != 0)
			{
				sub_1405C7620((__int64*)a1, v6);
			}
		}
		return a1;
	}
	else
	{
		*(_DWORD*)(a1 + 240) = 0;
		result = a1;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
	return result;
}
// 14077DE0B: variable 'v5' is possibly undefined
// 140B77A30: using guessed type __int64 (__fastcall *off_140B77A30[23])();
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

