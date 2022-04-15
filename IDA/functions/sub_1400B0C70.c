//----- (00000001400B0C70) ----------------------------------------------------
signed int sub_1400B0C70()
{
	signed int result; // eax
	HMODULE v1; // rax

	if (dword_140C3BEA8)
		return -2147023649;
	v1 = sub_1401938D0((__int64)L"StsConnLib64.MT.dll", 0i64);
	hModule = v1;
	if (v1
		&& (InitializeStsConnLib = GetProcAddress(v1, "InitializeStsConnLib")) != 0i64
		&& (FinalizeStsConnLib = (__int64)GetProcAddress(hModule, "FinalizeStsConnLib")) != 0
		&& (CreateStsConn = (__int64)GetProcAddress(hModule, "CreateStsConn")) != 0)
	{
		if (InitializeStsConnLib)
			InitializeStsConnLib();
		return 0;
	}
	else
	{
		result = GetLastError();
		dword_140C3BEAC = result;
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}
// 140A130B8: using guessed type wchar_t aStsconnlib64Mt[20];
// 140C3BEA8: using guessed type int dword_140C3BEA8;
// 140C3BEAC: using guessed type int dword_140C3BEAC;
// 140C3BEB8: using guessed type __int64 (*InitializeStsConnLib)(void);
// 140C3BEC0: using guessed type __int64 FinalizeStsConnLib;
// 140C3BEC8: using guessed type __int64 CreateStsConn;

