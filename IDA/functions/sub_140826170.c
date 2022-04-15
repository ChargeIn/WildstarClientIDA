//----- (0000000140826170) ----------------------------------------------------
__int64 __fastcall sub_140826170(const char* a1, _DWORD* a2)
{
	WCHAR* hMem; // [rsp+20h] [rbp-18h]
	unsigned int v4; // [rsp+28h] [rbp-10h]

	v4 = 0;
	hMem = sub_140825110(a1);
	if (!a1 || hMem)
		v4 = sub_140825B80(hMem, a2);
	LocalFree(hMem);
	return v4;
}

