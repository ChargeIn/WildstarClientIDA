#include "../winhttp.h"

//----- (000000014034B030) ----------------------------------------------------
__int64 __fastcall sub_14034B030(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
	unsigned __int16* v9; // r8
	char v11[30]; // [rsp+30h] [rbp-58h] BYREF
	__int16 v12; // [rsp+4Eh] [rbp-3Ah]

	if (a4)
	{
		v9 = L"%u.bnk";
		if (*(_DWORD*)(a4 + 4))
			v9 = L"%u.wem";
		sub_14001B370(v11, 15i64, v9, a2);
	}
	else
	{
		sub_14001B370(v11, 15i64, L"%u", a2);
	}
	v12 = 0;
	return (*(__int64(__fastcall**)(__int64, char*, _QWORD, __int64, __int64, __int64))(*(_QWORD*)a1 + 16i64))(
		a1,
		v11,
		a3,
		a4,
		a5,
		a6);
}
// 140AEB494: using guessed type wchar_t aU_1[3];
// 140AF4700: using guessed type wchar_t aUWem[7];
// 140AF4738: using guessed type wchar_t aUBnk[7];

