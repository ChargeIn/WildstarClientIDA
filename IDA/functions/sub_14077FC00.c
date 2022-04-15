#include "../winhttp.h"

//----- (000000014077FC00) ----------------------------------------------------
__int64 __fastcall sub_14077FC00(__int64 a1)
{
	unsigned int v2; // edx
	__int64 v3; // rax

	v2 = *(_DWORD*)(qword_140C65898 + 32620);
	if (v2 != *(_DWORD*)(a1 + 276)
		&& v2
		&& (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v3 = sub_1405A5B90(qword_140C65898, v2)) != 0
			|| (v3 = sub_1407A0FD0(qword_140C65B70, v2)) != 0))
	{
		sub_1405C7620((__int64*)a1, v3);
	}
	return sub_1405C8EC0(a1);
}
// 14077FC3F: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

