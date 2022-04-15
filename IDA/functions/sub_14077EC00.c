#include "../winhttp.h"

//----- (000000014077EC00) ----------------------------------------------------
const wchar_t* sub_14077EC00()
{
	if (!qword_140C65970)
		return L"Icon_ItemMisc_UI_Item_Donut";
	if (*(_DWORD*)(qword_140C65970 + 8) == 2)
		return L"Icon_ItemMisc_gadget_0001";
	if (*(_DWORD*)(qword_140C65970 + 8) == 3)
		return L"Icon_ItemMisc_gadget_0002";
	return L"Icon_ItemMisc_UI_Item_Donut";
}
// 140B4FA30: using guessed type wchar_t aIconItemmiscUi_2[28];
// 140B4FA68: using guessed type wchar_t aIconItemmiscGa_1[26];
// 140B4FAA0: using guessed type wchar_t aIconItemmiscGa_2[26];
// 140B4FAD8: using guessed type wchar_t aIconItemmiscUi_1[28];
// 140C65970: using guessed type __int64 qword_140C65970;

