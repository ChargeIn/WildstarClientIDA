#include "../winhttp.h"

//----- (0000000140613840) ----------------------------------------------------
__int64 __fastcall sub_140613840(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax
	__int64 v4; // rcx
	int v5; // eax

	*(_DWORD*)(a1 + 31248) = 10;
	*(_DWORD*)(a1 + 31184) = sub_14018CDF0();
	sub_140198D60(v2, (int*)L"soundtarget", (__int64)sub_1406156F0, a1);
	sub_140615630(a1);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
		qword_140C65848,
		a1 + 31144,
		0i64);
	v3 = dword_140C4E540;
	if (*(_DWORD*)qword_140C63750 < dword_140C4E540)
		v3 = *(_DWORD*)qword_140C63750;
	sub_14062DC90(a1 + 31304, (unsigned int)dword_140C4E550[v3]);
	v4 = qword_140C63628;
	*(_OWORD*)(a1 + 31232) = 0i64;
	*(_QWORD*)(a1 + 31200) = 0i64;
	if (v4)
	{
		v5 = dword_140C4E620;
		if (*(_DWORD*)qword_140C63750 < dword_140C4E620)
			v5 = *(_DWORD*)qword_140C63750;
		sub_140051CC0(v4, 1, 149 - (*((_BYTE*)&dword_140C4E630 + v5) != 0));
	}
	return 0i64;
}
// 140613873: variable 'v2' is possibly undefined
// 140B271B0: using guessed type wchar_t aSoundtarget[12];
// 140C4E540: using guessed type int dword_140C4E540;
// 140C4E550: using guessed type int dword_140C4E550[12];
// 140C4E620: using guessed type int dword_140C4E620;
// 140C4E630: using guessed type int dword_140C4E630;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65848: using guessed type __int64 qword_140C65848;

