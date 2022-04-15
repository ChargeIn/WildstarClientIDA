#include "../winhttp.h"

//----- (00000001404DB630) ----------------------------------------------------
__int64 __fastcall sub_1404DB630(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
	(*(void(__fastcall**)(_QWORD, const wchar_t*, _QWORD))(**(_QWORD**)(a1 + 30088) + 432i64))(
		*(_QWORD*)(a1 + 30088),
		L"UI\\InputMap_Base.xml",
		0i64);
	if (a2 == 4)
		return sub_1404D7330(a1, *(_QWORD*)(qword_140C635F0 + 5792), 1, a4);
	if (a2 == 3)
		return sub_1404D7330(a1, 0i64, 1, a4);
	return 1i64;
}
// 140B0A618: using guessed type wchar_t aUiInputmapBase_2[21];
// 140C635F0: using guessed type __int64 qword_140C635F0;

