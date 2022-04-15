#include "../winhttp.h"

//----- (00000001401C3DC0) ----------------------------------------------------
signed int __fastcall sub_1401C3DC0(__int64 a1, const WCHAR* a2, __int64 a3, unsigned int a4, _QWORD* dwContext)
{
	__int64 v5; // rbx
	void* v8; // rax
	void* v9; // rsi
	signed int result; // eax
	signed int LastError; // eax
	unsigned int v12; // ebx
	__int64 v13; // r14
	int v14; // ebx
	__int64 v15; // r8
	signed int v16; // eax
	__int64 v17; // [rsp+40h] [rbp-D8h] BYREF
	int szHeaders[32]; // [rsp+50h] [rbp-C8h] BYREF

	v5 = a4;
	if (!a2 || !a3 || !a4 || !dwContext)
		return -2147024809;
	v8 = WinHttpOpenRequest(*(HINTERNET*)a1, 0i64, a2, 0i64, 0i64, &off_140C58718, 0);
	v9 = v8;
	if (v8)
	{
		if (WinHttpSetStatusCallback(v8, (WINHTTP_STATUS_CALLBACK)sub_1401C40C0, 0xFFFFFFFF, 0i64) == (WINHTTP_STATUS_CALLBACK)-1i64)
		{
			LastError = GetLastError();
			v12 = LastError;
			if (LastError > 0)
				v12 = (unsigned __int16)LastError | 0x80070000;
			WinHttpCloseHandle(v9);
			return v12;
		}
		else
		{
			v13 = dwContext[2];
			v14 = sub_1401A3210(szHeaders, 0x40ui64, &v17, 0i64, 0, L"Range:bytes=%I64u-%I64u", v13, v5 + v13 - 1);
			if (v14 >= 0)
			{
				v15 = v17 - (_QWORD)szHeaders;
				*dwContext = *(_QWORD*)(a1 + 8);
				dwContext[1] = 0i64;
				dwContext[2] = a3;
				if (WinHttpSendRequest(v9, (LPCWSTR)szHeaders, v15 >> 1, 0i64, 0, 0, (DWORD_PTR)dwContext))
					return 0;
				v16 = GetLastError();
				v14 = v16;
				if (v16 > 0)
					v14 = (unsigned __int16)v16 | 0x80070000;
				*dwContext = 0i64;
				dwContext[1] = 0i64;
				dwContext[2] = v13;
			}
			WinHttpCloseHandle(v9);
			return v14;
		}
	}
	else
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}
// 140A477E8: using guessed type wchar_t aRangeBytesI64u_0[24];
// 1401C3DC0: using guessed type int szHeaders[32];

