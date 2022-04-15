#include "../winhttp.h"

//----- (000000014077EE00) ----------------------------------------------------
const wchar_t* sub_14077EE00()
{
	const wchar_t* result; // rax

	if (!qword_140C65970)
		return L"Icon_ItemMisc_UI_Item_Donut";
	result = L"Icon_ItemMisc_UI_Item_Donut";
	if (*(_DWORD*)(qword_140C65970 + 8) == 2)
		return L"Icon_ItemMisc_gadget_0001";
	return result;
}
// 140B4FE00: using guessed type wchar_t aIconItemmiscUi_6[28];
// 140B4FE38: using guessed type wchar_t aIconItemmiscGa_4[26];
// 140B4FE70: using guessed type wchar_t aIconItemmiscUi_5[28];
// 140C65970: using guessed type __int64 qword_140C65970;

