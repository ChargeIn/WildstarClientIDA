#include "../winhttp.h"

//----- (000000014001C730) ----------------------------------------------------
__int64 __fastcall sub_14001C730(_DWORD* a1)
{
	__int64 result; // rax
	const wchar_t* v3; // rdx

	if (a1[141])
		return 0i64;
	if (!a1[34])
	{
		BinkSetMemory(byte_140001EA0, sub_140001E60);
		BinkSetSoundSystem(BinkOpenDirectSound, 0i64);
		a1[34] = 1;
	}
	a1[14] = 0;
	result = sub_14000B690((__int64)a1, 3i64);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _DWORD*))(*(_QWORD*)qword_140C65670 + 160i64))(
			qword_140C65670,
			L"UI\\Cursors\\Point.tex",
			a1 + 144);
		if ((int)result >= 0)
		{
			sub_140051CC0(qword_140C63628, 5, 158);
			v3 = L"Microsoft YaHei";
			if (*(_DWORD*)(qword_140C635F0 + 5896) != 1)
				v3 = L"Cube Offc Cond";
			(*(void(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65680 + 32i64))(
				qword_140C65680,
				v3,
				30i64);
			a1[141] = 1;
			return 0i64;
		}
	}
	return result;
}
// 14001C788: variable 'a1' is possibly undefined
// 140959B70: using guessed type __int64 __fastcall BinkSetMemory(_QWORD, _QWORD);
// 140959B78: using guessed type __int64 __fastcall BinkSetSoundSystem(_QWORD, _QWORD);
// 1409E6F50: using guessed type wchar_t aCubeOffcCond[15];
// 1409E6F70: using guessed type wchar_t aMicrosoftYahei[16];
// 1409E6F90: using guessed type wchar_t aUiCursorsPoint[21];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;

