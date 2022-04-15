//----- (000000014063AD00) ----------------------------------------------------
int __fastcall sub_14063AD00(int* a1)
{
	HWND DesktopWindow; // rax
	HGLOBAL v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rdi
	void* v6; // r14
	int* v7; // rax
	int* v8; // rsi
	unsigned __int64 v9; // rdi

	DesktopWindow = GetDesktopWindow();
	LODWORD(v3) = OpenClipboard(DesktopWindow);
	if ((_DWORD)v3)
	{
		v4 = 0i64;
		v5 = 0i64;
		if (*(_WORD*)a1)
		{
			do
				++v5;
			while (*((_WORD*)a1 + v5));
		}
		v3 = GlobalAlloc(0x2002u, 2i64 * ((int)v5 + 3));
		v6 = v3;
		if (v3)
		{
			v7 = (int*)GlobalLock(v3);
			v8 = v7;
			if (v7)
			{
				v9 = 2i64 * (int)v5;
				sub_1407DB590(v7, a1, v9);
				*(int*)((char*)v8 + v9) = 655373;
				*(_WORD*)((char*)v8 + v9 + 4) = 0;
				EmptyClipboard();
				if (*(_WORD*)v8)
				{
					do
						++v4;
					while (*((_WORD*)v8 + v4));
					if (v4)
					{
						SetClipboardData(0xDu, v8);
						GlobalUnlock(v6);
					}
				}
			}
			LODWORD(v3) = CloseClipboard();
		}
	}
	return (int)v3;
}

