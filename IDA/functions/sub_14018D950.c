#include "../winhttp.h"

//----- (000000014018D950) ----------------------------------------------------
__int64 __fastcall sub_14018D950(int* lpFileName, __int64 a2, __int64* a3)
{
	int* v7; // rax
	__int64 v8; // r8
	__int64 v9; // rdi
	int v10; // ebx
	DWORD FileAttributesW; // eax
	int* v12; // rax
	__int64 v13; // r8
	__int64 v14; // rbx
	int v15; // eax
	int* v16; // rax
	__int64 v17; // r8
	unsigned int v18; // edi
	struct $BC2FB811D417144E831EE3AEA4A279C8 UrlComponents; // [rsp+20h] [rbp-88h] BYREF

	if (!a3)
		return 2147942487i64;
	sub_1407E4830((int*)&UrlComponents, 0i64, 0x68ui64);
	UrlComponents.dwStructSize = 104;
	if (WinHttpCrackUrl((LPCWSTR)lpFileName, 0, 0, &UrlComponents) && UrlComponents.nScheme == INTERNET_SCHEME_FTP)
	{
		v7 = sub_14018B280(152i64, 0);
		v9 = (__int64)v7;
		if (v7)
		{
			*(_QWORD*)v7 = off_140B5F2E0;
			*((_QWORD*)v7 + 1) = 0i64;
			*((_QWORD*)v7 + 15) = 0i64;
			*((_QWORD*)v7 + 16) = 0i64;
			v7[36] = 1;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = sub_1401C0780(v9, lpFileName, v8, a2);
		if (v10 < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			return (unsigned int)v10;
		}
		*a3 = v9;
	}
	else
	{
		FileAttributesW = GetFileAttributesW((LPCWSTR)lpFileName);
		if (FileAttributesW == -1 || ((FileAttributesW >> 4) & 1) == 0)
		{
			v16 = sub_14018B280(144i64, 0);
			if (v16)
				v14 = sub_1401C1300((__int64)v16);
			else
				v14 = 0i64;
			v15 = sub_1401C1440(v14, lpFileName, v17, a2);
		}
		else
		{
			v12 = sub_14018B280(544i64, 0);
			v14 = (__int64)v12;
			if (v12)
			{
				*(_QWORD*)v12 = off_140B5F380;
				v12[134] = 1;
				v15 = sub_1401C0C50((__int64)v12, (__int64)lpFileName, v13, a2);
			}
			else
			{
				v14 = 0i64;
				v15 = sub_1401C0C50(0i64, (__int64)lpFileName, v13, a2);
			}
		}
		v18 = v15;
		if (v15 < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
			return v18;
		}
		*a3 = v14;
	}
	return 0i64;
}
// 14018DA0E: variable 'v8' is possibly undefined
// 14018DA7E: variable 'v13' is possibly undefined
// 14018DABF: variable 'v17' is possibly undefined
// 140B5F2E0: using guessed type __int64 (__fastcall *off_140B5F2E0[19])();
// 140B5F380: using guessed type __int64 (__fastcall *off_140B5F380[13])();

