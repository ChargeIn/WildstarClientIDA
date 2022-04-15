#include "../winhttp.h"

//----- (00000001408267D0) ----------------------------------------------------
__int64 __fastcall sub_1408267D0(const WCHAR* a1, DWORD a2)
{
	__int64 v3; // rcx
	char* v4; // rdi
	bool v5; // zf
	char* v6; // rdx
	signed __int64 v7; // rcx
	unsigned __int16 v8; // ax
	int v9; // eax
	int i; // [rsp+40h] [rbp-1E8h]
	int j; // [rsp+40h] [rbp-1E8h]
	int v12; // [rsp+44h] [rbp-1E4h]
	WCHAR OutputString[12]; // [rsp+50h] [rbp-1D8h] BYREF
	int v14; // [rsp+68h] [rbp-1C0h] BYREF
	__int16 v15; // [rsp+6Ch] [rbp-1BCh]
	__int16 v16; // [rsp+6Eh] [rbp-1BAh]
	char v17; // [rsp+70h] [rbp-1B8h]
	char v18; // [rsp+71h] [rbp-1B7h]
	char v19; // [rsp+72h] [rbp-1B6h]
	char v20; // [rsp+73h] [rbp-1B5h]
	char v21; // [rsp+74h] [rbp-1B4h]
	char v22; // [rsp+75h] [rbp-1B3h]
	char v23; // [rsp+76h] [rbp-1B2h]
	char v24; // [rsp+77h] [rbp-1B1h]
	__int16 v25[4]; // [rsp+78h] [rbp-1B0h]
	char v26[80]; // [rsp+80h] [rbp-1A8h] BYREF
	__int64 v27; // [rsp+D0h] [rbp-158h] BYREF
	int v28; // [rsp+D8h] [rbp-150h]
	int v29; // [rsp+DCh] [rbp-14Ch]
	unsigned int v30; // [rsp+E0h] [rbp-148h]
	int v31; // [rsp+E4h] [rbp-144h] BYREF
	int v32; // [rsp+E8h] [rbp-140h] BYREF
	int v33; // [rsp+ECh] [rbp-13Ch] BYREF
	char v34[256]; // [rsp+F0h] [rbp-138h] BYREF
	int v35; // [rsp+1F0h] [rbp-38h]
	unsigned int v36; // [rsp+1F4h] [rbp-34h]
	BOOL v37; // [rsp+1F8h] [rbp-30h]
	BOOL v38; // [rsp+1FCh] [rbp-2Ch]

	v12 = dword_140C61AFC;
	qmemcpy(OutputString, a0x00000000, sizeof(OutputString));
	OutputDebugStringW(aWarningPeSigna);
	OutputDebugStringW(a1);
	OutputDebugStringW(aError_5);
	for (i = 0; i < 8; ++i)
	{
		OutputString[i + 2] = (a2 >> (4 * (7 - i))) & 0xF;
		if (OutputString[i + 2] >= 0xAu)
			v35 = 55;
		else
			v35 = 48;
		OutputString[i + 2] += v35;
	}
	OutputDebugStringW(OutputString);
	if (!v12 && dword_140C10B6C)
	{
		v25[0] = 256;
		v25[1] = 512;
		v25[2] = 0;
		v14 = 1107084808;
		v15 = -31594;
		v16 = 19951;
		v17 = -76;
		v18 = 62;
		v19 = 125;
		v20 = -101;
		v21 = -42;
		v22 = 117;
		v23 = -90;
		v24 = -1;
		dword_140C10B6C = 0;
		if (!qword_140C61998)
		{
			qword_140C61998 = sub_140824350(aAdvapi32Dll_2, 0);
			if (qword_140C61998)
			{
				RegOpenKeyExW_0 = (LSTATUS(__stdcall*)(HKEY, LPCWSTR, DWORD, REGSAM, PHKEY))GetProcAddress(
					qword_140C61998,
					aRegopenkeyexw);
				RegEnumValueW = (LSTATUS(__stdcall*)(HKEY, DWORD, LPWSTR, LPDWORD, LPDWORD, LPDWORD, LPBYTE, LPDWORD))GetProcAddress(qword_140C61998, aRegenumvaluew);
				RegCloseKey_0 = (LSTATUS(__stdcall*)(HKEY))GetProcAddress(qword_140C61998, aRegclosekey);
			}
		}
		if (!RegOpenKeyExW_0 || !RegEnumValueW || !RegCloseKey_0)
			return 0i64;
		if (!qword_140C619B8)
		{
			qword_140C619B8 = sub_140824350(aOle32Dll_2, 0);
			if (qword_140C619B8)
				StringFromGUID2 = (int(__stdcall*)(const GUID* const, LPOLESTR, int))GetProcAddress(
					qword_140C619B8,
					aStringfromguid);
		}
		if (!StringFromGUID2)
			return 0i64;
		memset(v26, 0, 0x4Eui64);
		if ((int)((__int64(__fastcall*)(int*, char*, __int64))StringFromGUID2)(&v14, v26, 39i64) != 39i64)
			return 0i64;
		for (j = 0; !v12 && v25[j]; ++j)
		{
			v27 = 0i64;
			v28 = ((__int64(__fastcall*)(__int64, wchar_t*, _QWORD, _QWORD, __int64*))RegOpenKeyExW_0)(
				-2147483646i64,
				aSoftwareNvidia,
				0i64,
				(unsigned __int16)v25[j] | 0x20019u,
				&v27);
			if (!v28)
			{
				v30 = 0;
				v29 = 0;
				do
				{
					v32 = 128;
					v31 = 4;
					memset(v34, 0, sizeof(v34));
					v36 = v30;
					v28 = ((__int64(__fastcall*)(__int64, _QWORD, char*, int*, _QWORD, _QWORD, int*, int*))RegEnumValueW)(
						v27,
						v30++,
						v34,
						&v32,
						0i64,
						0i64,
						&v33,
						&v31);
					if (!v28)
					{
						v3 = -1i64;
						v4 = v26;
						do
						{
							if (!v3)
								break;
							v5 = *(_WORD*)v4 == 0;
							v4 += 2;
							--v3;
						} while (!v5);
						if (-v3 - 2 == v32)
						{
							v6 = v26;
							v7 = v34 - v26;
							while (1)
							{
								v8 = *(_WORD*)v6;
								if (*(_WORD*)v6 != *(_WORD*)&v6[v7])
									break;
								v6 += 2;
								if (!v8)
								{
									v9 = 0;
									goto LABEL_38;
								}
							}
							v9 = -(v8 < *(_WORD*)&v6[v7]) - ((*(_WORD*)v6 < *(_WORD*)&v6[v7]) - 1);
						LABEL_38:
							if (!v9)
							{
								v37 = v33 != 0;
								v29 |= v37;
							}
						}
					}
				} while (v28 != 259);
				((void(__fastcall*)(__int64))RegCloseKey_0)(v27);
				v38 = v29 != 0;
				dword_140C61AFC = v38;
				v12 = v38;
			}
		}
	}
	if (v12 || dword_140C61AFC)
	{
		OutputDebugStringW(aSignatureOverr);
		SetLastError(0);
		return 1i64;
	}
	else
	{
		SetLastError(a2);
		return 0i64;
	}
}
// 140C619C0: invalid function type has been ignored
// 140C619A0: invalid function type has been ignored
// 140C619A8: invalid function type has been ignored
// 140C619B0: invalid function type has been ignored
// 140C10B6C: using guessed type int dword_140C10B6C;
// 140C10D40: using guessed type wchar_t a0x00000000[12];
// 140C10E08: using guessed type wchar_t aAdvapi32Dll_2[13];
// 140C10E58: using guessed type wchar_t aOle32Dll_2[10];
// 140C10E80: using guessed type wchar_t aSoftwareNvidia[35];
// 140C61AFC: using guessed type int dword_140C61AFC;
// 1408267D0: using guessed type WCHAR OutputString[12];

