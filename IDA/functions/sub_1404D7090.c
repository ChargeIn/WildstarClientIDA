#include "../winhttp.h"

//----- (00000001404D7090) ----------------------------------------------------
__int64 __fastcall sub_1404D7090(__int64 a1, __int64 a2)
{
	int v4; // eax

	sub_1404D7130(a1, a2);
	v4 = *(_DWORD*)(a1 + 30096);
	if (v4 == 3 && !*(_QWORD*)(a2 + 16) || v4 == 4 && *(_QWORD*)(a2 + 16) == *(_QWORD*)(qword_140C635F0 + 5792))
	{
		(*(void(__fastcall**)(_QWORD, const wchar_t*, _QWORD, _QWORD))(**(_QWORD**)(a1 + 30088) + 432i64))(
			*(_QWORD*)(a1 + 30088),
			L"UI\\InputMap_Base.xml",
			0i64,
			0i64);
		sub_1404D7330(a1, *(_QWORD*)(a2 + 16), 0, 0);
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "KeyBindingUpdated", &byte_140B7B700);
	}
	return 0i64;
}
// 140B0A618: using guessed type wchar_t aUiInputmapBase_2[21];
// 140B7B700: using guessed type char byte_140B7B700;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

