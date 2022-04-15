//----- (0000000140111ED0) ----------------------------------------------------
__int64 __fastcall sub_140111ED0(__int64 a1)
{
	unsigned __int64 v1; // rsi
	unsigned __int64 v2; // rbx
	HWND DesktopWindow; // rax
	unsigned __int64 v5; // r14
	HGLOBAL v6; // rax
	void* v7; // rbx
	int* v8; // rbp
	__int64 v9; // rax

	v1 = *(_QWORD*)(a1 + 1040);
	v2 = *(_QWORD*)(a1 + 1048);
	if (v1 >= v2)
	{
		v1 = 0i64;
		v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
	}
	DesktopWindow = GetDesktopWindow();
	if (OpenClipboard(DesktopWindow))
	{
		EmptyClipboard();
		if ((*(_BYTE*)(a1 + 664) & 8) == 0)
		{
			v5 = 2 * (v2 - v1);
			v6 = GlobalAlloc(0x2002u, v5 + 2);
			v7 = v6;
			if (v6)
			{
				v8 = (int*)GlobalLock(v6);
				if (v8)
				{
					v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
					sub_1407DB590(v8, (int*)(v9 + 2 * v1), v5);
					*(_WORD*)((char*)v8 + v5) = 0;
					GlobalUnlock(v7);
					SetClipboardData(0xDu, v7);
				}
			}
		}
		CloseClipboard();
	}
	return 0i64;
}

