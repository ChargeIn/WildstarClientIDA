//----- (0000000140824270) ----------------------------------------------------
HMODULE __fastcall sub_140824270(_WORD* a1)
{
	HMODULE ModuleHandleW; // [rsp+20h] [rbp-18h]
	WCHAR* lpModuleName; // [rsp+28h] [rbp-10h]

	ModuleHandleW = 0i64;
	SetLastError(0);
	if ((unsigned int)sub_1408251D0(a1))
	{
		SetLastError(0xA0u);
	}
	else
	{
		lpModuleName = sub_140824FE0(a1);
		if (!a1 || lpModuleName)
			ModuleHandleW = GetModuleHandleW(lpModuleName);
		LocalFree(lpModuleName);
	}
	return ModuleHandleW;
}

