#include "../winhttp.h"

//----- (00000001407EF02C) ----------------------------------------------------
__int64 __fastcall sub_1407EF02C(int a1, _BYTE* a2, unsigned int a3)
{
	DWORD v3; // edi
	__int64 v4; // r15
	__int64 v6; // rbx
	__int64 v8; // r13
	__int64 v9; // rcx
	__int64 v10; // r12
	char v11; // si
	BOOL v12; // ebx
	const CHAR* v13; // rbx
	unsigned __int8 v14; // cl
	__int64 v15; // rdx
	CHAR v16; // al
	unsigned __int64 v17; // r8
	CHAR* v18; // rdx
	int v19; // r13d
	int v20; // r13d
	int LastError; // ebx
	__int64 v22; // rcx
	CHAR* v23; // r13
	int v24; // ebx
	CHAR* v25; // rsi
	unsigned __int64 k; // rcx
	CHAR v27; // al
	void* v28; // rcx
	int v29; // ebx
	CHAR* v30; // rsi
	unsigned __int64 i; // rcx
	WCHAR v32; // ax
	void* v33; // rcx
	WCHAR* v34; // rcx
	unsigned __int64 j; // rdx
	WCHAR v36; // ax
	int v37; // esp
	int v38; // kr00_4
	int v39; // eax
	int v40; // esi
	WCHAR WideCharStr[2]; // [rsp+40h] [rbp-C0h] BYREF
	int v42; // [rsp+44h] [rbp-BCh]
	int v43; // [rsp+48h] [rbp-B8h]
	DWORD v44; // [rsp+4Ch] [rbp-B4h] BYREF
	__int64 v45; // [rsp+50h] [rbp-B0h]
	DWORD NumberOfBytesWritten; // [rsp+58h] [rbp-A8h] BYREF
	DWORD Mode; // [rsp+5Ch] [rbp-A4h] BYREF
	CHAR MultiByteStr[16]; // [rsp+60h] [rbp-A0h] BYREF
	WCHAR v49[72]; // [rsp+70h] [rbp-90h] BYREF
	_BYTE v50[1568]; // [rsp+100h] [rbp+0h] BYREF
	CHAR Buffer[5120]; // [rsp+720h] [rbp+620h] BYREF

	v3 = 0;
	v4 = a3;
	v43 = 0;
	v6 = a1;
	if (!a3)
		return 0i64;
	if (!a2
		|| (v8 = (__int64)a1 >> 5,
			v9 = qword_140C60410[v8],
			v45 = v6 >> 5,
			v10 = 88 * (v6 & 0x1F),
			v11 = (char)(2 * *(_BYTE*)(v10 + v9 + 56)) >> 1,
			(unsigned __int8)(v11 - 1) <= 1u)
		&& (a3 & 1) != 0)
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	if ((*(_BYTE*)(v10 + v9 + 8) & 0x20) != 0)
		sub_1407F1094(v6, 0i64, 2u);
	if (!(unsigned int)sub_1407F0A90(v6)
		|| *(char*)(v10 + qword_140C60410[v8] + 8) >= 0
		|| (v12 = *(_QWORD*)(sub_1407E3D94()[24] + 312i64) == 0i64,
			!GetConsoleMode(*(HANDLE*)(v10 + qword_140C60410[v8]), &Mode))
		|| v12 && !v11)
	{
		v22 = qword_140C60410[v8];
		if (*(char*)(v10 + v22 + 8) >= 0)
		{
			if (WriteFile(*(HANDLE*)(v10 + v22), a2, v4, &v44, 0i64))
			{
				v3 = v44;
				LastError = 0;
				goto LABEL_87;
			}
		}
		else
		{
			LastError = 0;
			v23 = a2;
			v42 = 0;
			if (v11)
			{
				if (v11 == 2)
				{
					if (!(_DWORD)v4)
						goto LABEL_92;
					while (1)
					{
						v29 = v43;
						v30 = Buffer;
						for (i = 0i64; i < 0x13FE; i += 2i64)
						{
							if ((int)v23 - (int)a2 >= (unsigned int)v4)
								break;
							v32 = *(_WORD*)v23;
							v23 += 2;
							if (v32 == 10)
							{
								*(_WORD*)v30 = 13;
								v29 += 2;
								v30 += 2;
								i += 2i64;
							}
							*(_WORD*)v30 = v32;
							v30 += 2;
						}
						v33 = *(void**)(v10 + qword_140C60410[v45]);
						v43 = v29;
						LastError = v42;
						if (!WriteFile(v33, Buffer, (_DWORD)v30 - ((unsigned int)v50 + 1568), &v44, 0i64))
							break;
						v3 += v44;
						if ((int)v44 < v30 - Buffer || (int)v23 - (int)a2 >= (unsigned int)v4)
							goto LABEL_87;
					}
				}
				else
				{
					if (!(_DWORD)v4)
						goto LABEL_92;
					while (1)
					{
						v34 = v49;
						for (j = 0i64; j < 0x6A8; j += 2i64)
						{
							if ((int)v23 - (int)a2 >= (unsigned int)v4)
								break;
							v36 = *(_WORD*)v23;
							v23 += 2;
							if (v36 == 10)
							{
								*v34++ = 13;
								j += 2i64;
							}
							*v34++ = v36;
						}
						v38 = (_DWORD)v34 - (v37 + 112);
						v39 = WideCharToMultiByte(0xFDE9u, 0, v49, v38 / 2, Buffer, 3413, 0i64, 0i64);
						v42 = v39;
						if (!v39)
							break;
						v40 = 0;
						while (WriteFile(*(HANDLE*)(v10 + qword_140C60410[v45]), &Buffer[v40], v39 - v40, &v44, 0i64))
						{
							v40 += v44;
							v39 = v42;
							if (v42 <= v40)
								goto LABEL_81;
						}
						LastError = GetLastError();
						v39 = v42;
					LABEL_81:
						if (v39 <= v40)
						{
							v3 = (_DWORD)v23 - (_DWORD)a2;
							if ((int)v23 - (int)a2 < (unsigned int)v4)
								continue;
						}
						goto LABEL_87;
					}
				}
			}
			else
			{
				if (!(_DWORD)v4)
					goto LABEL_92;
				while (1)
				{
					v24 = v43;
					v25 = Buffer;
					for (k = 0i64; k < 0x13FF; ++k)
					{
						if ((int)v23 - (int)a2 >= (unsigned int)v4)
							break;
						v27 = *v23++;
						if (v27 == 10)
						{
							*v25 = 13;
							++v24;
							++v25;
							++k;
						}
						*v25++ = v27;
					}
					v28 = *(void**)(v10 + qword_140C60410[v45]);
					v43 = v24;
					LastError = v42;
					if (!WriteFile(v28, Buffer, (_DWORD)v25 - ((unsigned int)v50 + 1568), &v44, 0i64))
						break;
					v3 += v44;
					if ((int)v44 < v25 - Buffer || (int)v23 - (int)a2 >= (unsigned int)v4)
						goto LABEL_87;
				}
			}
		}
	LABEL_86:
		LastError = GetLastError();
		goto LABEL_87;
	}
	NumberOfBytesWritten = 0;
	v13 = a2;
	Mode = GetConsoleCP();
	if (!(_DWORD)v4)
	{
		LastError = v42;
		goto LABEL_88;
	}
	while (1)
	{
		if (v11)
		{
			if ((unsigned __int8)(v11 - 1) > 1u)
			{
				v20 = v42;
			}
			else
			{
				WideCharStr[0] = *(_WORD*)v13;
				v20 = WideCharStr[0] == 10;
				v13 += 2;
				v42 = v20;
			}
			if ((unsigned __int8)(v11 - 1) <= 1u)
			{
				if ((unsigned __int16)sub_1407F56F4(WideCharStr[0]) != WideCharStr[0])
					goto LABEL_86;
				v3 += 2;
				if (v20)
				{
					WideCharStr[0] = 13;
					if ((unsigned __int16)sub_1407F56F4(0xDu) != 13)
						goto LABEL_86;
					++v3;
					++v43;
				}
			}
			v8 = v45;
			goto LABEL_41;
		}
		v14 = *v13;
		v42 = *v13 == 10;
		v15 = qword_140C60410[v8];
		if (*(_DWORD*)(v10 + v15 + 80))
		{
			v16 = *(_BYTE*)(v10 + v15 + 76);
			MultiByteStr[1] = v14;
			v17 = 2i64;
			MultiByteStr[0] = v16;
			*(_DWORD*)(v10 + v15 + 80) = 0;
			v18 = MultiByteStr;
			goto LABEL_24;
		}
		if ((unsigned int)sub_1407DFECC(v14))
			break;
		v17 = 1i64;
		v18 = (CHAR*)v13;
	LABEL_24:
		if ((unsigned int)sub_1407F156C(WideCharStr, v18, v17) == -1)
			goto LABEL_44;
	LABEL_25:
		++v13;
		v19 = WideCharToMultiByte(Mode, 0, WideCharStr, 1, MultiByteStr, 5, 0i64, 0i64);
		if (!v19)
			goto LABEL_44;
		if (!WriteFile(*(HANDLE*)(v10 + qword_140C60410[v45]), MultiByteStr, v19, &NumberOfBytesWritten, 0i64))
			goto LABEL_86;
		v3 = v43 + (_DWORD)v13 - (_DWORD)a2;
		if ((int)NumberOfBytesWritten < v19)
			goto LABEL_44;
		v8 = v45;
		if (v42)
		{
			MultiByteStr[0] = 13;
			if (!WriteFile(*(HANDLE*)(v10 + qword_140C60410[v45]), MultiByteStr, 1u, &NumberOfBytesWritten, 0i64))
				goto LABEL_86;
			if ((int)NumberOfBytesWritten < 1)
				goto LABEL_44;
			++v43;
			++v3;
		}
	LABEL_41:
		if ((int)v13 - (int)a2 >= (unsigned int)v4)
			goto LABEL_44;
	}
	if ((__int64)&a2[v4 - (_QWORD)v13] > 1)
	{
		if ((unsigned int)sub_1407F156C(WideCharStr, v13, 2ui64) == -1)
			goto LABEL_44;
		++v13;
		goto LABEL_25;
	}
	++v3;
	*(_BYTE*)(v10 + qword_140C60410[v8] + 76) = *v13;
	*(_DWORD*)(v10 + qword_140C60410[v8] + 80) = 1;
LABEL_44:
	LastError = v42;
LABEL_87:
	if (v3)
		return v3 - v43;
LABEL_88:
	if (!LastError)
	{
	LABEL_92:
		if ((*(_BYTE*)(v10 + qword_140C60410[v45] + 8) & 0x40) == 0 || *a2 != 26)
		{
			*(_DWORD*)sub_1407DE1B0() = 28;
			*(_DWORD*)sub_1407DE140() = 0;
			return 0xFFFFFFFFi64;
		}
		return 0i64;
	}
	if (LastError == 5)
	{
		*(_DWORD*)sub_1407DE1B0() = 9;
		*(_DWORD*)sub_1407DE140() = 5;
	}
	else
	{
		sub_1407DE160(LastError);
	}
	return 0xFFFFFFFFi64;
}
// 1407EF5EA: variable 'v37' is possibly undefined
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 1407EF02C: using guessed type CHAR Buffer[5120];

