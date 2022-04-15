//----- (00000001409071F8) ----------------------------------------------------
unsigned __int64 __fastcall sub_1409071F8(
	LPWSTR lpWideCharStr,
	CHAR* lpMultiByteStr,
	unsigned __int64 cchWideChar,
	_OWORD* a4)
{
	LPWSTR v6; // rdi
	unsigned __int64 v7; // rbx
	int v9; // eax
	__int64 v10; // rcx
	int v11; // r15d
	unsigned __int8* v12; // rsi
	bool i; // zf
	int v14; // eax
	int v15; // eax
	__int128 v16; // [rsp+30h] [rbp-38h] BYREF
	__int64 v17; // [rsp+40h] [rbp-28h]
	char v18; // [rsp+48h] [rbp-20h]

	v6 = lpWideCharStr;
	v7 = 0i64;
	if (lpWideCharStr)
	{
		if (!cchWideChar)
			return 0i64;
		*lpWideCharStr = 0;
	}
	if (!lpMultiByteStr)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return -1i64;
	}
	sub_1407DE348((__int64)&v16, a4);
	if (v6)
	{
		if (!*(_QWORD*)(v16 + 312))
		{
			if (cchWideChar)
			{
				do
				{
					*v6 = (unsigned __int8)lpMultiByteStr[v7];
					if (!lpMultiByteStr[v7])
						break;
					++v7;
					++v6;
				} while (v7 < cchWideChar);
			}
			goto LABEL_29;
		}
		v7 = -1i64;
		v9 = MultiByteToWideChar(*(_DWORD*)(v16 + 4), 9u, lpMultiByteStr, -1, v6, cchWideChar);
		v10 = v9;
		if (!v9)
		{
			if (GetLastError() != 122)
				goto LABEL_22;
			v11 = cchWideChar;
			v12 = (unsigned __int8*)lpMultiByteStr;
			for (i = (_DWORD)cchWideChar == 0; !i; i = v11 == 0)
			{
				--v11;
				if (!*v12)
					break;
				if ((unsigned int)sub_1407DFE88(*v12, &v16))
				{
					if (!*++v12)
						goto LABEL_22;
				}
				++v12;
			}
			v14 = MultiByteToWideChar(
				*(_DWORD*)(v16 + 4),
				1u,
				lpMultiByteStr,
				(_DWORD)v12 - (_DWORD)lpMultiByteStr,
				v6,
				cchWideChar);
			if (v14)
			{
				v7 = v14;
			}
			else
			{
			LABEL_22:
				*(_DWORD*)sub_1407DE1B0() = 42;
				*v6 = 0;
			}
			goto LABEL_29;
		}
		goto LABEL_28;
	}
	if (*(_QWORD*)(v16 + 312))
	{
		v7 = -1i64;
		v15 = MultiByteToWideChar(*(_DWORD*)(v16 + 4), 9u, lpMultiByteStr, -1, 0i64, 0);
		v10 = v15;
		if (v15)
		{
		LABEL_28:
			v7 = v10 - 1;
			goto LABEL_29;
		}
		*(_DWORD*)sub_1407DE1B0() = 42;
	}
	else
	{
		v7 = sub_1407E1990((__int64)lpMultiByteStr);
	}
LABEL_29:
	if (v18)
		*(_DWORD*)(v17 + 200) &= ~2u;
	return v7;
}

