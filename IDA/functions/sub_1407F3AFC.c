//----- (00000001407F3AFC) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407F3AFC(
	LPSTR lpMultiByteStr,
	LPCWCH lpWideCharStr,
	unsigned __int64 cbMultiByte,
	_OWORD* a4)
{
	unsigned __int64 v4; // rsi
	LPCWCH v5; // r14
	__int64 v7; // rbx
	__int64 v9; // r13
	_QWORD* v11; // rax
	_WORD* v12; // rax
	unsigned __int64 v13; // rcx
	int v14; // eax
	int v15; // eax
	unsigned __int64 v16; // rdi
	int v17; // eax
	__int64 v18; // rdx
	__int64 v19; // rcx
	CHAR v20; // al
	WCHAR v21; // ax
	int v22; // eax
	BOOL UsedDefaultChar; // [rsp+40h] [rbp-40h] BYREF
	__int64 v24; // [rsp+48h] [rbp-38h] BYREF
	__int64 v25; // [rsp+58h] [rbp-28h]
	char v26; // [rsp+60h] [rbp-20h]
	CHAR MultiByteStr[8]; // [rsp+68h] [rbp-18h] BYREF

	v4 = cbMultiByte;
	v5 = lpWideCharStr;
	v7 = 0i64;
	UsedDefaultChar = 0;
	if (lpMultiByteStr && !cbMultiByte)
		return 0i64;
	if (!lpWideCharStr)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return -1i64;
	}
	sub_1407DE348((__int64)&v24, a4);
	if (lpMultiByteStr)
	{
		v9 = v24;
		if (!*(_QWORD*)(v24 + 312))
		{
			if (v4)
			{
				while (*v5 <= 0xFFu)
				{
					lpMultiByteStr[v7] = *(_BYTE*)v5;
					if (*v5++)
					{
						if (++v7 < v4)
							continue;
					}
					goto LABEL_53;
				}
			LABEL_13:
				v11 = sub_1407DE1B0();
				v7 = -1i64;
			LABEL_52:
				*(_DWORD*)v11 = 42;
			}
		LABEL_53:
			v16 = v7;
			goto LABEL_54;
		}
		if (*(_DWORD*)(v24 + 212) == 1)
		{
			if (v4)
			{
				v12 = v5;
				v13 = v4;
				do
				{
					if (!*v12)
						break;
					++v12;
					--v13;
				} while (v13);
				if (v13 && !*v12)
					LODWORD(v4) = v12 - v5 + 1;
			}
			v14 = WideCharToMultiByte(*(_DWORD*)(v24 + 4), 0, v5, v4, lpMultiByteStr, v4, 0i64, &UsedDefaultChar);
			v7 = v14;
			if (v14 && !UsedDefaultChar)
			{
				if (!lpMultiByteStr[v14 - 1])
					v7 = v14 - 1i64;
				goto LABEL_53;
			}
			goto LABEL_13;
		}
		v7 = -1i64;
		v15 = WideCharToMultiByte(*(_DWORD*)(v24 + 4), 0, v5, -1, lpMultiByteStr, v4, 0i64, &UsedDefaultChar);
		v16 = v15;
		if (v15)
		{
			if (!UsedDefaultChar)
			{
				v7 = v15 - 1i64;
				goto LABEL_53;
			}
		LABEL_51:
			v11 = sub_1407DE1B0();
			goto LABEL_52;
		}
		if (UsedDefaultChar || GetLastError() != 122)
			goto LABEL_51;
		if (v4)
		{
		LABEL_32:
			v17 = WideCharToMultiByte(
				*(_DWORD*)(v9 + 4),
				0,
				v5,
				1,
				MultiByteStr,
				*(_DWORD*)(v9 + 212),
				0i64,
				&UsedDefaultChar);
			if (v17)
			{
				if (!UsedDefaultChar && v17 >= 0)
				{
					v18 = v17;
					if ((unsigned __int64)v17 <= 5)
					{
						if (v17 + v16 <= v4)
						{
							v19 = 0i64;
							while (1)
							{
								v20 = MultiByteStr[v19];
								lpMultiByteStr[v16] = v20;
								if (!v20)
									break;
								++v19;
								++v16;
								if (v19 >= v18)
								{
									++v5;
									if (v16 >= v4)
										goto LABEL_54;
									goto LABEL_32;
								}
							}
						}
						goto LABEL_54;
					}
				}
			}
			goto LABEL_51;
		}
	}
	else
	{
		if (!*(_QWORD*)(v24 + 312))
		{
			v21 = *v5;
			v16 = 0i64;
			if (*v5)
			{
				while (v21 <= 0xFFu)
				{
					++v5;
					++v16;
					v21 = *v5;
					if (!*v5)
						goto LABEL_54;
				}
				v16 = -1i64;
				*(_DWORD*)sub_1407DE1B0() = 42;
			}
			goto LABEL_54;
		}
		v7 = -1i64;
		v22 = WideCharToMultiByte(*(_DWORD*)(v24 + 4), 0, v5, -1, 0i64, 0, 0i64, &UsedDefaultChar);
		if (!v22 || UsedDefaultChar)
			goto LABEL_51;
		v16 = v22 - 1i64;
	}
LABEL_54:
	if (v26)
		*(_DWORD*)(v25 + 200) &= ~2u;
	return v16;
}
// 1407F3D2D: conditional instruction was optimized away because rdx.8 is in (1..7FFFFFFF)
// 1407F3AFC: using guessed type CHAR MultiByteStr[8];

