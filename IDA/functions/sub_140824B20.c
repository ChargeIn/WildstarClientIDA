//----- (0000000140824B20) ----------------------------------------------------
_BOOL8 __fastcall sub_140824B20(const WCHAR* a1, int a2)
{
	DWORD LastError; // eax
	_BOOL8 result; // rax
	int v4; // [rsp+20h] [rbp-18h]
	int v5; // [rsp+24h] [rbp-14h] BYREF
	int* v6; // [rsp+28h] [rbp-10h]

	v5 = 0;
	if (a2)
		v6 = &v5;
	else
		v6 = 0i64;
	v4 = sub_140825B80(a1, v6);
	if (v4 && a2 && !v5)
	{
		SetLastError(0x80092009);
		v4 = 0;
	}
	result = 1;
	if (!v4)
	{
		LastError = GetLastError();
		if (!(unsigned int)sub_1408267D0(a1, LastError))
			return 0;
	}
	return result;
}

