//----- (00000001408255A0) ----------------------------------------------------
_WORD* __fastcall sub_1408255A0(unsigned int a1, _WORD* a2)
{
	__int64 v3; // rcx
	_WORD* v4; // rdi
	bool v5; // zf
	__int64 v6; // rdx
	__int64 v7; // rcx
	_WORD* v8; // rdi
	_WORD* v9; // [rsp+30h] [rbp-248h]
	_WORD v10[264]; // [rsp+50h] [rbp-228h] BYREF
	unsigned __int64 v11; // [rsp+260h] [rbp-18h]

	v9 = 0i64;
	if (a2)
	{
		memset(v10, 0, 0x20Aui64);
		if (!qword_140C61928)
		{
			qword_140C61928 = sub_140824350(aShell32Dll_0, 0);
			if (qword_140C61928)
				SHGetFolderPathW_0 = (HRESULT(__stdcall*)(HWND, int, HANDLE, DWORD, LPWSTR))GetProcAddress(
					qword_140C61928,
					aShgetfolderpat);
		}
		if (!SHGetFolderPathW_0)
			return 0i64;
		if (!(unsigned int)((__int64(__fastcall*)(_QWORD, _QWORD, _QWORD, _QWORD, _WORD*))SHGetFolderPathW_0)(
			0i64,
			a1,
			0i64,
			0i64,
			v10))
		{
			v3 = -1i64;
			v4 = v10;
			do
			{
				if (!v3)
					break;
				v5 = *v4++ == 0;
				--v3;
			} while (!v5);
			v6 = -v3 - 2;
			v7 = -1i64;
			v8 = a2;
			do
			{
				if (!v7)
					break;
				v5 = *v8++ == 0;
				--v7;
			} while (!v5);
			v11 = v6 - v7;
			v9 = LocalAlloc(0x40u, 2 * (v6 - v7));
			if (!v9)
				return 0i64;
			sub_140826D30(v9, v11, v10);
			sub_140826D90(v9, v11, asc_140C10B64);
			sub_140826D90(v9, v11, a2);
		}
	}
	return v9;
}
// 140C61930: invalid function type has been ignored
// 140C10B38: using guessed type wchar_t aShell32Dll_0[12];
// 1408255A0: using guessed type _WORD var_228[264];

