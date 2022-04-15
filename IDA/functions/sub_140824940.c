//----- (0000000140824940) ----------------------------------------------------
__int64 __fastcall sub_140824940(WCHAR* a1, _WORD* a2, int a3)
{
	__int64 v4; // rcx
	_WORD* v5; // rdi
	bool v6; // zf
	__int64 uBytes; // [rsp+20h] [rbp-38h]
	DWORD dwErrCode; // [rsp+28h] [rbp-30h]
	BOOL v9; // [rsp+2Ch] [rbp-2Ch]
	_WORD* hMem; // [rsp+30h] [rbp-28h]
	WCHAR* v11; // [rsp+38h] [rbp-20h]

	hMem = 0i64;
	dwErrCode = 0;
	SetLastError(0);
	v11 = a1;
	if (!a1)
	{
		if (!a2)
		{
			SetLastError(0x57u);
			return 0i64;
		}
		v4 = -1i64;
		v5 = a2;
		do
		{
			if (!v4)
				break;
			v6 = *v5++ == 0;
			--v4;
		} while (!v6);
		uBytes = 2 * (-v4 - 2) + 2;
		hMem = LocalAlloc(0x40u, uBytes);
		if (!hMem)
			return 0i64;
		qmemcpy(hMem, a2, uBytes);
		if (sub_1408252E0(hMem, 0x22u))
			v11 = sub_1408FBDDC(hMem, word_140C10AC0);
		else
			v11 = sub_1408FBDDC(hMem, word_140C10AC4);
	}
	if (v11)
	{
		if (sub_140825250(v11))
		{
			if ((unsigned int)sub_140825320(v11))
			{
				LocalFree(hMem);
				return 1i64;
			}
			else
			{
				v9 = sub_140824B20(v11, a3);
				if (!v9)
					dwErrCode = GetLastError();
				LocalFree(hMem);
				if (!v9)
					SetLastError(dwErrCode);
				return v9;
			}
		}
		else
		{
			LocalFree(hMem);
			SetLastError(0xA0u);
			return 0i64;
		}
	}
	else
	{
		LocalFree(hMem);
		SetLastError(0x57u);
		return 0i64;
	}
}
// 140C10AC0: using guessed type _WORD word_140C10AC0[2];
// 140C10AC4: using guessed type _WORD word_140C10AC4[2];

