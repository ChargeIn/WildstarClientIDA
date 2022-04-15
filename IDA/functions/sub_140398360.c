#include "../winhttp.h"

//----- (0000000140398360) ----------------------------------------------------
void __fastcall sub_140398360(__int64 a1)
{
	if ((dword_140C89AA0
		|| sub_1404DAAC0(a1)
		|| sub_1404DAB80(a1)
		|| sub_1404DACF0(a1)
		|| sub_1404DAD90(a1)
		|| *(_DWORD*)(a1 + 28856))
		&& (*(_DWORD*)(a1 + 26660)
			|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
				*(_QWORD*)(a1 + 30088),
				33i64)))
	{
		if (!*(_DWORD*)(a1 + 26656))
			sub_1403980A0(a1);
	}
	else if (*(_DWORD*)(a1 + 26656))
	{
		sub_1403981C0(a1);
	}
}
// 140C89AA0: using guessed type int dword_140C89AA0;

