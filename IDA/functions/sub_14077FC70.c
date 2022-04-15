#include "../winhttp.h"

//----- (000000014077FC70) ----------------------------------------------------
void __fastcall sub_14077FC70(__int64 a1, unsigned int a2)
{
	unsigned int v4; // edx
	__int64 v5; // rax

	v4 = *(_DWORD*)(qword_140C65898 + 32620);
	if (v4 != *(_DWORD*)(a1 + 276)
		&& v4
		&& (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v5 = sub_1405A5B90(qword_140C65898, v4)) != 0
			|| (v5 = sub_1407A0FD0(qword_140C65B70, v4)) != 0))
	{
		sub_1405C7620((__int64*)a1, v5);
	}
	sub_1405C9B90((_DWORD*)a1, a2);
}
// 14077FCB5: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

