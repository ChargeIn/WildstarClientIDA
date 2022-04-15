#include "../winhttp.h"

//----- (00000001401D1190) ----------------------------------------------------
__int64 __fastcall sub_1401D1190(__int64* a1, __int64 a2, __int64 a3, const WCHAR* a4, int* a5, int* a6, __int64 a7)
{
	int* v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rdx
	int* v10; // rcx
	__int16 v11; // ax
	__int64 v12; // rdi
	__int64* v13; // rbx
	__int64 v14; // rdx
	int* v15; // rax
	__int16 v16; // cx
	__int64 v17; // rdi
	__int64 v18; // rsi
	__int64 v19; // rdi
	__int64* v20; // rax
	unsigned __int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rdx
	int* v24; // rcx
	__int16 v25; // ax
	HANDLE FirstFileW; // rdi
	__int64 result; // rax
	int v28; // [rsp+40h] [rbp-C0h]
	int* v31; // [rsp+60h] [rbp-A0h] BYREF
	HANDLE hFindFile; // [rsp+68h] [rbp-98h]
	__int64 v33; // [rsp+70h] [rbp-90h]
	unsigned __int64 v34; // [rsp+78h] [rbp-88h]
	__int64 v35; // [rsp+80h] [rbp-80h]
	__int64 v36; // [rsp+88h] [rbp-78h]
	FILETIME ftLastWriteTime; // [rsp+90h] [rbp-70h]
	__int64 v38; // [rsp+98h] [rbp-68h]
	__int64 v39; // [rsp+A0h] [rbp-60h]
	__int64 v40; // [rsp+A8h] [rbp-58h]
	__int64 v41; // [rsp+B0h] [rbp-50h]
	struct _WIN32_FIND_DATAW FindFileData; // [rsp+D0h] [rbp-30h] BYREF

	v7 = a6;
	v35 = a7;
	v28 = a3;
	v8 = (a7 - (__int64)a6) >> 1;
	v36 = a2;
	v31 = a6;
	v39 = 0i64;
	v40 = 0i64;
	v41 = 0i64;
	v33 = v8;
	if ((unsigned __int64)(v8 - 1) > 0x7FFFFFFE)
	{
		if (v8)
			*(_WORD*)a6 = 0;
	}
	else
	{
		sub_14001B680(a6, (a7 - (__int64)a6) >> 1, a3, a2);
	}
	hFindFile = FindFirstFileW(a4, &FindFileData);
	if (hFindFile == (HANDLE)-1i64)
		goto LABEL_38;
	do
	{
		if ((FindFileData.dwFileAttributes & 0x10) == 0)
		{
			if ((unsigned __int64)(v8 - 1) > 0x7FFFFFFE)
			{
				if (v8)
					*(_WORD*)v7 = 0;
			}
			else
			{
				v14 = v8;
				v15 = v7;
				while (2147483646 - v8 + v14)
				{
					v16 = *(_WORD*)((char*)v15 + (char*)FindFileData.cFileName - (char*)v7);
					if (!v16)
						break;
					*(_WORD*)v15 = v16;
					v15 = (int*)((char*)v15 + 2);
					if (!--v14)
					{
						*((_WORD*)v15 - 1) = 0;
						goto LABEL_32;
					}
				}
				if (!v14)
					v15 = (int*)((char*)v15 - 2);
				*(_WORD*)v15 = 0;
			}
		LABEL_32:
			ftLastWriteTime = FindFileData.ftLastWriteTime;
			v34 = __PAIR64__(FindFileData.nFileSizeHigh, FindFileData.nFileSizeLow);
			v17 = a1[4];
			sub_1401D1A10(a1 + 3, v17 + 1);
			v18 = 0i64;
			v38 = a1[3] + 56 * v17;
			if (*(_WORD*)a5)
			{
				do
					++v18;
				while (*((_WORD*)a5 + v18));
			}
			v19 = a1[6];
			sub_1401CFD00(a1 + 5, v18 + v19 + 1);
			sub_1407DB590((int*)(a1[5] + 2 * v19), a5, 2 * v18 + 2);
			v20 = (__int64*)v38;
			v7 = v31;
			*(FILETIME*)(v38 + 8) = ftLastWriteTime;
			v21 = v34;
			v20[2] = v34;
			v20[3] = v21;
			v22 = v39;
			v20[4] = v39;
			v20[5] = v22;
			v20[6] = v22;
			*v20 = v19;
			goto LABEL_35;
		}
		if ((unsigned int)sub_14018E2C0((__int64)FindFileData.cFileName, (unsigned __int16*)".")
			&& (unsigned int)sub_14018E2C0((__int64)FindFileData.cFileName, L".."))
		{
			if ((unsigned __int64)(v8 - 1) > 0x7FFFFFFE)
			{
				if (v8)
					*(_WORD*)v7 = 0;
			}
			else
			{
				v9 = v8;
				v10 = v7;
				while (2147483646 - v8 + v9)
				{
					v11 = *(_WORD*)((char*)v10 + (char*)FindFileData.cFileName - (char*)v7);
					if (!v11)
						break;
					*(_WORD*)v10 = v11;
					v10 = (int*)((char*)v10 + 2);
					if (!--v9)
					{
						*((_WORD*)v10 - 1) = 0;
						goto LABEL_20;
					}
				}
				if (!v9)
					v10 = (int*)((char*)v10 - 2);
				*(_WORD*)v10 = 0;
			}
		LABEL_20:
			v12 = a1[2];
			sub_14004EED0(a1 + 1, v12 + 1);
			v13 = (__int64*)(a1[1] + 8 * v12);
			*v13 = sub_1401D15D0((__int64)a1, a5);
		LABEL_35:
			v8 = v33;
		}
	} while (FindNextFileW(hFindFile, &FindFileData));
	FindClose(hFindFile);
LABEL_38:
	if (!v28)
		return 0i64;
	if ((unsigned __int64)(v8 - 1) > 0x7FFFFFFE)
	{
		if (v8)
			*(_WORD*)v7 = 0;
	}
	else
	{
		v23 = v8;
		v24 = v7;
		while (2147483646 - v8 + v23)
		{
			v25 = *(_WORD*)((char*)v24 + "*" - (char*)v7);
			if (!v25)
				break;
			*(_WORD*)v24 = v25;
			v24 = (int*)((char*)v24 + 2);
			if (!--v23)
			{
				*((_WORD*)v24 - 1) = 0;
				goto LABEL_50;
			}
		}
		if (!v23)
			v24 = (int*)((char*)v24 - 2);
		*(_WORD*)v24 = 0;
	}
LABEL_50:
	FirstFileW = FindFirstFileW(a4, &FindFileData);
	if (FirstFileW == (HANDLE)-1i64)
		return 0i64;
	while (1)
	{
		if ((FindFileData.dwFileAttributes & 0x10) != 0)
		{
			if ((unsigned int)sub_14018E2C0((__int64)FindFileData.cFileName, (unsigned __int16*)"."))
			{
				if ((unsigned int)sub_14018E2C0((__int64)FindFileData.cFileName, L".."))
				{
					sub_1401A3210(v7, v8, (__int64*)&v31, 0i64, 0, L"%s\\", FindFileData.cFileName);
					result = sub_1401D1190((_DWORD)a1, v36, v28, (_DWORD)a4, (__int64)a5, (__int64)v31, v35);
					if ((int)result < 0)
						break;
				}
			}
		}
		if (!FindNextFileW(FirstFileW, &FindFileData))
		{
			FindClose(FirstFileW);
			return 0i64;
		}
	}
	return result;
}
// 1409E5104: using guessed type wchar_t asc_1409E5104[3];
// 1409E5124: using guessed type wchar_t asc_1409E5124[3];
// 140A487C8: using guessed type wchar_t aS_32[4];

