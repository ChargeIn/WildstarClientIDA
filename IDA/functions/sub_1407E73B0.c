//----- (00000001407E73B0) ----------------------------------------------------
UINT __fastcall sub_1407E73B0(WCHAR* a1, __int64 a2)
{
	UINT result; // eax
	UINT v5; // [rsp+30h] [rbp+8h] BYREF

	if (a1 && *a1 && (unsigned int)sub_1407E6BB8((char*)a1, (char*)L"ACP"))
	{
		if ((unsigned int)sub_1407E6BB8((char*)a1, (char*)L"OCP"))
			return sub_1407DF510(a1);
		if (sub_1407E8688(a2 + 600, 0x2000000Bu, (WCHAR*)&v5, 2))
			return v5;
		return 0;
	}
	if (!sub_1407E8688(a2 + 600, 0x20001004u, (WCHAR*)&v5, 2))
		return 0;
	result = v5;
	if (!v5)
		return GetACP();
	return result;
}
// 1409600F0: using guessed type wchar_t aAcp[4];
// 1409600F8: using guessed type wchar_t aOcp[4];

