//----- (000000014077ED20) ----------------------------------------------------
const wchar_t* sub_14077ED20()
{
	const wchar_t* result; // rax

	if (!qword_140C65970)
		return L"Icon_ItemMisc_UI_Item_Donut";
	result = L"Icon_ItemMisc_UI_Item_Donut";
	if (*(_DWORD*)(qword_140C65970 + 8) == 2)
		return L"Icon_ItemMisc_gadget_0001";
	return result;
}
// 140B4F9C0: using guessed type wchar_t aIconItemmiscGa_3[26];
// 140B4F9F8: using guessed type wchar_t aIconItemmiscUi_3[28];
// 140B4FEA8: using guessed type wchar_t aIconItemmiscUi_4[28];
// 140C65970: using guessed type __int64 qword_140C65970;

