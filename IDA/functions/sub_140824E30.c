//----- (0000000140824E30) ----------------------------------------------------
__int64 __fastcall sub_140824E30(
	__int64 a1,
	const char* a2,
	const char* a3,
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
	_WORD* hMem; // [rsp+60h] [rbp-18h]
	_WORD* v14; // [rsp+68h] [rbp-10h]

	hMem = 0i64;
	v14 = 0i64;
	SetLastError(0);
	if (a2)
		hMem = sub_140825110(a2);
	if (a3)
		v14 = sub_140825110(a3);
	if ((unsigned int)sub_140824940(hMem, v14, a11))
	{
		LocalFree(hMem);
		LocalFree(v14);
		if (qword_140C61998 || (qword_140C61998 = sub_140824350(aAdvapi32Dll_1, 0)) != 0i64)
		{
			if (CreateProcessAsUserA)
				return ((__int64(__fastcall*)(__int64, const char*, const char*, __int64, __int64, int, int, __int64, __int64, __int64, __int64))CreateProcessAsUserA)(
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
			CreateProcessAsUserA = (BOOL(__stdcall*)(HANDLE, LPCSTR, LPSTR, LPSECURITY_ATTRIBUTES, LPSECURITY_ATTRIBUTES, BOOL, DWORD, LPVOID, LPCSTR, LPSTARTUPINFOA, LPPROCESS_INFORMATION))GetProcAddress(qword_140C61998, aCreateprocessa_0);
			if (CreateProcessAsUserA)
				return ((__int64(__fastcall*)(__int64, const char*, const char*, __int64, __int64, int, int, __int64, __int64, __int64, __int64))CreateProcessAsUserA)(
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
			else
				return 0i64;
		}
		else
		{
			return 0i64;
		}
	}
	else
	{
		LocalFree(hMem);
		LocalFree(v14);
		return 0i64;
	}
}
// 140C619D0: invalid function type has been ignored
// 140C10B00: using guessed type wchar_t aAdvapi32Dll_1[13];

