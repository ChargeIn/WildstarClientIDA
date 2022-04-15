#include "../winhttp.h"

//----- (000000014077E0C0) ----------------------------------------------------
__int64 __fastcall sub_14077E0C0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rax
	int v5; // [rsp+30h] [rbp+8h] BYREF
	int v6; // [rsp+34h] [rbp+Ch]

	sub_1405C7150(a1, 1);
	v2 = qword_140C65898;
	*(_QWORD*)a1 = off_140B77BB0;
	if (*(_QWORD*)(v2 + 120))
	{
		v5 = 0;
		v6 = 11;
		v4 = sub_1403AC780(v2 + 160, &v5);
		if (v4)
			sub_1405C7AD0(a1, **(_DWORD**)(v4 + 64), 0);
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
// 140B77BB0: using guessed type __int64 (__fastcall *off_140B77BB0[23])();
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C65898: using guessed type __int64 qword_140C65898;

