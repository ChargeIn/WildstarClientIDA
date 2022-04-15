#include "../winhttp.h"

//----- (00000001405B31F0) ----------------------------------------------------
void __fastcall sub_1405B31F0(__int64 a1, _QWORD* a2)
{
	__int64 v4; // rcx
	__int16* v5; // rcx

	if (*(_DWORD*)(a1 + 276))
	{
		sub_1405C8BB0(a1, a2);
	}
	else
	{
		v4 = *(unsigned int*)(a1 + 528);
		if ((unsigned int)v4 > 0x23)
			v5 = L"Unknown game command";
		else
			v5 = sub_1405B2FE0(v4);
		(*(void(__fastcall**)(_QWORD*, void*, __int64, _QWORD, __int16*))(*a2 + 120i64))(
			a2,
			&unk_1409F3394,
			5i64,
			*(unsigned int*)(a1 + 528),
			v5);
	}
}
// 140B212D8: using guessed type wchar_t aUnknownGameCom[21];

