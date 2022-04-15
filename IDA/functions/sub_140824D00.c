//----- (0000000140824D00) ----------------------------------------------------
__int64 __fastcall sub_140824D00(
	__int64 a1,
	WCHAR* a2,
	_WORD* a3,
	__int64 a4,
	__int64 a5,
	int a6,
	int a7,
	__int64 a8,
	__int64 a9,
	__int64 a10,
	int a11,
	__int64 a12)
{
	SetLastError(0);
	if (!(unsigned int)sub_140824940(a2, a3, a11))
		return 0i64;
	if (!qword_140C61998)
	{
		qword_140C61998 = sub_140824350(aAdvapi32Dll_0, 0);
		if (!qword_140C61998)
			return 0i64;
	}
	if (CreateProcessAsUserW)
		return ((__int64(__fastcall*)(__int64, WCHAR*, _WORD*, __int64, __int64, int, int, __int64, __int64, __int64, __int64))CreateProcessAsUserW)(
			a1,
			a2,
			a3,
			a4,
			a5,
			a6,
			a7,
			a8,
			a9,
			a10,
			a12);
	CreateProcessAsUserW = (BOOL(__stdcall*)(HANDLE, LPCWSTR, LPWSTR, LPSECURITY_ATTRIBUTES, LPSECURITY_ATTRIBUTES, BOOL, DWORD, LPVOID, LPCWSTR, LPSTARTUPINFOW, LPPROCESS_INFORMATION))GetProcAddress(qword_140C61998, aCreateprocessa);
	if (CreateProcessAsUserW)
		return ((__int64(__fastcall*)(__int64, WCHAR*, _WORD*, __int64, __int64, int, int, __int64, __int64, __int64, __int64))CreateProcessAsUserW)(
			a1,
			a2,
			a3,
			a4,
			a5,
			a6,
			a7,
			a8,
			a9,
			a10,
			a12);
	return 0i64;
}
// 140C619C8: invalid function type has been ignored
// 140C10AC8: using guessed type wchar_t aAdvapi32Dll_0[13];

