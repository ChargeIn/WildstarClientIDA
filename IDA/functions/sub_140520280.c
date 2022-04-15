#include "../winhttp.h"

//----- (0000000140520280) ----------------------------------------------------
void __fastcall sub_140520280(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF
	int v5; // [rsp+28h] [rbp-20h]
	int v6; // [rsp+34h] [rbp-14h]

	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		sub_1404FD530(v2, (__int64)&v4, *(_DWORD*)(a1 + 24));
		if (v6 != 9 || v4 <= *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 280i64))
		{
			if (v5 >= 15
				|| ((unsigned int)(v5 - 1) > 0xD ? (v3 = 0i64) : (v3 = *(_QWORD*)(qword_140C65898 + 8i64 * v5 + 5616)), v4 <= v3))
			{
				if ((unsigned int)sub_1404FD1C0(*(_QWORD*)(a1 + 16), *(_DWORD*)(a1 + 24)))
					sub_1400D4040(*(_QWORD*)(a1 + 8), "CommitCustomizationChangesResult", *(char**)(a1 + 8), &byte_140B7B700);
			}
		}
	}
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

