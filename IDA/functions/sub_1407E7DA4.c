//----- (00000001407E7DA4) ----------------------------------------------------
UINT __fastcall sub_1407E7DA4(WCHAR* a1, __int64 a2)
{
	UINT result; // eax
	UINT LCData; // [rsp+30h] [rbp+8h] BYREF

	if (a1 && *a1 && (unsigned int)sub_1407E6BB8((char*)a1, (char*)L"ACP"))
	{
		if ((unsigned int)sub_1407E6BB8((char*)a1, (char*)L"OCP"))
			return sub_1407DF510(a1);
		if (GetLocaleInfoW(*(_DWORD*)(a2 + 8), 0x2000000Bu, (LPWSTR)&LCData, 2))
			return LCData;
		return 0;
	}
	if (!GetLocaleInfoW(*(_DWORD*)(a2 + 8), 0x20001004u, (LPWSTR)&LCData, 2))
		return 0;
	result = LCData;
	if (!LCData)
		return GetACP();
	return result;
}
// 1409600F0: using guessed type wchar_t aAcp[4];
// 1409600F8: using guessed type wchar_t aOcp[4];

