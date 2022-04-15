#include "../winhttp.h"

//----- (000000014077DFA0) ----------------------------------------------------
__int64 __fastcall sub_14077DFA0(__int64 a1)
{
	__int64 v2; // r8
	__int64 result; // rax
	__int64 v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // rax

	sub_1405C7150(a1, 3);
	v2 = qword_140C65898;
	*(_QWORD*)a1 = off_140B77AF0;
	if (*(_QWORD*)(v2 + 120))
	{
		v4 = *(_QWORD*)(v2 + 28048);
		if (v4)
			v5 = *(_DWORD*)(v4 + 4i64 * *(_QWORD*)(v4 + 48) + 8);
		else
			v5 = 0;
		if (v5)
		{
			if (v2 && (v6 = sub_1405A5B90(v2, v5)) != 0 || (v6 = sub_1407A0FD0(qword_140C65B70, v5)) != 0)
				sub_1405C7620((__int64*)a1, v6);
		}
		return a1;
	}
	else
	{
		result = a1;
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
	return result;
}
// 14077E01F: variable 'v5' is possibly undefined
// 140B77AF0: using guessed type __int64 (__fastcall *off_140B77AF0[23])();
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

