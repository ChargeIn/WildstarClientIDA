#include "../winhttp.h"

//----- (000000014051B300) ----------------------------------------------------
char __fastcall sub_14051B300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
	__int64 v7; // rax
	HWND DesktopWindow; // rax
	unsigned __int64 v10; // r14
	HGLOBAL v11; // rax
	void* v12; // rsi
	int* v13; // rax
	int* v14; // rdi

	v7 = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(a1 + 24) != v7)
	{
		DesktopWindow = GetDesktopWindow();
		if (OpenClipboard(DesktopWindow))
		{
			EmptyClipboard();
			v10 = 2 * ((__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 1);
			v11 = GlobalAlloc(0x2002u, v10 + 2);
			v12 = v11;
			if (v11)
			{
				v13 = (int*)GlobalLock(v11);
				v14 = v13;
				if (v13)
				{
					sub_1407DB590(v13, *(int**)(a1 + 24), v10);
					*(_WORD*)((char*)v14 + v10) = 0;
					GlobalUnlock(v12);
					SetClipboardData(0xDu, v12);
				}
			}
			CloseClipboard();
		}
		LOBYTE(v7) = sub_1400D4040(
			*(_QWORD*)(a1 + 8),
			"StringCopiedToClipboard",
			*(char**)(a1 + 8),
			&byte_140B7B700,
			a5,
			a6,
			a7);
	}
	return v7;
}
// 140B7B700: using guessed type char byte_140B7B700;

