//----- (00000001408246D0) ----------------------------------------------------
HMODULE __fastcall sub_1408246D0(const WCHAR* a1, DWORD a2, int a3)
{
	DWORD LastError; // eax
	HMODULE Library; // [rsp+20h] [rbp-28h]
	WCHAR* hMem; // [rsp+28h] [rbp-20h]
	int v7; // [rsp+30h] [rbp-18h]
	int v8; // [rsp+34h] [rbp-14h] BYREF
	int* v9; // [rsp+38h] [rbp-10h]

	Library = 0i64;
	SetLastError(0);
	hMem = sub_1408259C0(a1, a2);
	if (hMem)
	{
		if (!(unsigned int)sub_140825320(hMem))
		{
			v8 = 0;
			v9 = a3 ? &v8 : 0i64;
			v7 = sub_140825B80(hMem, v9);
			if (v7 && a3 && !v8)
			{
				SetLastError(0x80092009);
				v7 = 0;
			}
			if (!v7)
			{
				LastError = GetLastError();
				if (!(unsigned int)sub_1408267D0(hMem, LastError))
				{
					LocalFree(hMem);
					return 0i64;
				}
			}
		}
		Library = LoadLibraryExW(hMem, 0i64, a2);
		LocalFree(hMem);
	}
	else
	{
		SetLastError(0x7Eu);
	}
	return Library;
}

