//----- (0000000140195100) ----------------------------------------------------
HRESULT __fastcall sub_140195100(LPCWSTR lpFile)
{
	HRESULT result; // eax
	int v3; // edi
	int v4; // ebx

	if (!lpFile)
		return -2147024809;
	result = CoInitialize(0i64);
	if (result >= 0)
	{
		v3 = 0;
		v4 = (unsigned int)ShellExecuteW(0i64, L"open", lpFile, 0i64, 0i64, 1);
		CoUninitialize();
		if (v4 <= 32)
			return -2147467259;
		return v3;
	}
	return result;
}

