#include "../winhttp.h"

//----- (0000000140521E00) ----------------------------------------------------
char __fastcall sub_140521E00(__int64 a1)
{
	__int64 v2; // rdx
	signed int v3; // eax
	int v4; // eax
	int v6; // [rsp+20h] [rbp-18h]

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	v3 = *(_DWORD*)(a1 + 16);
	if (v3 < 4 && qword_140C65970 && v2)
	{
		if (*(_DWORD*)(v2 + 684))
			v4 = 63;
		else
			v4 = sub_14056F550(a1, v3);
	}
	else
	{
		v4 = 1;
	}
	v6 = v4;
	return sub_1400D4040(*(_QWORD*)(a1 + 8), "PathUnlockResult", *(char**)(a1 + 8), L"i", v6);
}
// 140B6B8F8: using guessed type wchar_t aI_12[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

