#include "../winhttp.h"

//----- (0000000140825320) ----------------------------------------------------
__int64 __fastcall sub_140825320(const WCHAR* a1)
{
	ULONGLONG v1; // rax
	ULONGLONG v2; // rax
	__int64 v4; // rcx
	_WORD* v5; // rdi
	bool v6; // zf
	int i; // [rsp+24h] [rbp-54h]
	int v8[4]; // [rsp+28h] [rbp-50h]
	unsigned int v9; // [rsp+38h] [rbp-40h]
	LPWSTR lpBuffer; // [rsp+40h] [rbp-38h]
	int v11; // [rsp+48h] [rbp-30h]
	DWORD nBufferLength; // [rsp+4Ch] [rbp-2Ch]
	HLOCAL hMem; // [rsp+50h] [rbp-28h]
	DWORDLONG dwlConditionMask; // [rsp+58h] [rbp-20h]
	BOOL v15; // [rsp+60h] [rbp-18h]
	BOOL v16; // [rsp+64h] [rbp-14h]

	nBufferLength = 0;
	lpBuffer = 0i64;
	hMem = 0i64;
	v9 = 0;
	v8[0] = 37;
	v8[1] = 41;
	v8[2] = 38;
	v8[3] = 42;
	v11 = 4;
	if (!VersionInformation.dwOSVersionInfoSize)
	{
		v1 = VerSetConditionMask(0i64, 2u, 3u);
		v2 = VerSetConditionMask(v1, 1u, 3u);
		dwlConditionMask = VerSetConditionMask(v2, 0x20u, 3u);
		VersionInformation.dwOSVersionInfoSize = 284;
		VersionInformation.dwMajorVersion = 6;
		VersionInformation.dwMinorVersion = 1;
		VersionInformation.wServicePackMajor = 0;
		v15 = !VerifyVersionInfoW(&VersionInformation, 0x23u, dwlConditionMask);
		dword_140C10B68 = v15;
	}
	if (dword_140C10B68)
		return 1i64;
	if (a1)
	{
		nBufferLength = GetFullPathNameW(a1, 0, 0i64, 0i64);
		if (nBufferLength)
		{
			lpBuffer = (LPWSTR)LocalAlloc(0x40u, 2i64 * nBufferLength);
			if (lpBuffer)
			{
				if (nBufferLength > GetFullPathNameW(a1, nBufferLength, lpBuffer, 0i64))
				{
					for (i = 0; i < v11; ++i)
					{
						hMem = sub_1408255A0(v8[i], word_140C619D8);
						if (!hMem)
							break;
						v4 = -1i64;
						v5 = hMem;
						do
						{
							if (!v4)
								break;
							v6 = *v5++ == 0;
							--v4;
						} while (!v6);
						v16 = sub_1407F0D9C(lpBuffer, (WCHAR*)hMem, -v4 - 2) == 0;
						v9 = v16;
						if (v16)
							break;
						LocalFree(hMem);
						hMem = 0i64;
					}
				}
			}
		}
	}
	LocalFree(hMem);
	LocalFree(lpBuffer);
	return v9;
}
// 140C10B68: using guessed type int dword_140C10B68;
// 140C619D8: using guessed type _WORD word_140C619D8[4];

