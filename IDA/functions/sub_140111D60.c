#include "../winhttp.h"

//----- (0000000140111D60) ----------------------------------------------------
__int64 __fastcall sub_140111D60(__int64 a1)
{
	HWND DesktopWindow; // rax
	HANDLE ClipboardData; // rax
	void* v4; // rbx
	_WORD* v5; // rax
	__int64 v6; // r9
	__int64 v7; // r8
	HANDLE v8; // rax
	void* v9; // rbx
	char* v10; // rax
	__int64 v11; // rsi
	__int64 v12; // r9
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]
	__int64 v16; // [rsp+30h] [rbp-18h]

	DesktopWindow = GetDesktopWindow();
	if (OpenClipboard(DesktopWindow))
	{
		ClipboardData = GetClipboardData(0xDu);
		v4 = ClipboardData;
		if (ClipboardData)
		{
			v5 = GlobalLock(ClipboardData);
			v7 = 0i64;
			if (*v5)
			{
				do
					++v7;
				while (v5[v7]);
			}
			sub_14010EA70(a1, (__int64)v5, v7, v6, v14, v15);
			GlobalUnlock(v4);
		}
		else
		{
			v8 = GetClipboardData(1u);
			v9 = v8;
			if (v8)
			{
				v10 = (char*)GlobalLock(v8);
				sub_14018F2D0(&v14, v10);
				v11 = v15;
				sub_14010EA70(a1, v15, (v16 - v15) >> 1, v12, v14, v15);
				GlobalUnlock(v9);
				if (v11)
					sub_14018B900(v11, 0);
			}
		}
		CloseClipboard();
		*(_BYTE*)(a1 + 1065) = 1;
	}
	return 0i64;
}
// 140111DC1: variable 'v6' is possibly undefined
// 140111E15: variable 'v12' is possibly undefined

