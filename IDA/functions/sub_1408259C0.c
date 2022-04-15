//----- (00000001408259C0) ----------------------------------------------------
WCHAR* __fastcall sub_1408259C0(const WCHAR* a1, int a2)
{
	WCHAR* lpFilename; // [rsp+20h] [rbp-38h]
	HMODULE hModule; // [rsp+28h] [rbp-30h]
	__int64 v5; // [rsp+38h] [rbp-20h] BYREF
	DWORD nSize; // [rsp+40h] [rbp-18h]
	DWORD v7; // [rsp+44h] [rbp-14h]
	DWORD ModuleFileNameW; // [rsp+48h] [rbp-10h]

	v5 = 0i64;
	lpFilename = 0i64;
	if (!qword_140C61938)
	{
		qword_140C61938 = sub_140824350(aNtdllDll, 0);
		if (qword_140C61938)
		{
			LdrLockLoaderLock = (__int64(__fastcall*)(_QWORD, _QWORD, _QWORD))GetProcAddress(
				qword_140C61938,
				aLdrlockloaderl);
			LdrUnlockLoaderLock = (__int64(__fastcall*)(_QWORD, _QWORD))GetProcAddress(qword_140C61938, aLdrunlockloade);
		}
	}
	if (!LdrLockLoaderLock || !LdrUnlockLoaderLock)
		return 0i64;
	if (!(unsigned int)LdrLockLoaderLock(0i64, 0i64, &v5))
	{
		hModule = LoadLibraryExW(a1, 0i64, a2 | 1u);
		if (hModule)
		{
			v7 = 4096;
			nSize = 128;
			while (!lpFilename)
			{
				if (nSize >= v7)
					break;
				nSize *= 2;
				lpFilename = (WCHAR*)LocalAlloc(0x40u, 2i64 * nSize);
				if (!lpFilename)
					break;
				ModuleFileNameW = GetModuleFileNameW(hModule, lpFilename, nSize);
				if (ModuleFileNameW == nSize || GetLastError() == 122)
				{
					SetLastError(0);
					LocalFree(lpFilename);
					lpFilename = 0i64;
				}
			}
			FreeLibrary(hModule);
		}
		LdrUnlockLoaderLock(0i64, v5);
	}
	return lpFilename;
}
// 140C61940: invalid function type has been ignored
// 140C61948: invalid function type has been ignored
// 140C10B70: using guessed type wchar_t aNtdllDll[10];
// 140C61940: using guessed type __int64 (__fastcall *LdrLockLoaderLock)(_QWORD, _QWORD, _QWORD);
// 140C61948: using guessed type __int64 (__fastcall *LdrUnlockLoaderLock)(_QWORD, _QWORD);

