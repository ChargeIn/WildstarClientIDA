//----- (0000000140008910) ----------------------------------------------------
__int64 __fastcall sub_140008910(__int64 a1, HINSTANCE a2, const WCHAR* a3, int a4)
{
	const WCHAR* v7; // rsi
	HCURSOR CursorW; // rax
	HICON v9; // rax
	HWND Window; // rax
	int v11; // ebx
	__int64 result; // rax
	LARGE_INTEGER v13; // rcx
	float LowPart; // xmm1_4
	struct tagRECT Rect; // [rsp+60h] [rbp-69h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+70h] [rbp-59h] BYREF
	__int128 v17; // [rsp+78h] [rbp-51h]
	__int64(__fastcall * *v18)(); // [rsp+90h] [rbp-39h] BYREF
	__int128 v19; // [rsp+98h] [rbp-31h]
	WNDCLASSW WndClass; // [rsp+B0h] [rbp-19h] BYREF
	LONG_PTR lParam; // [rsp+130h] [rbp+67h] BYREF
	LONG_PTR v22; // [rsp+138h] [rbp+6Fh] BYREF

	*(_QWORD*)(a1 + 16) = a2;
	v7 = L"WildStar";
	if (a3)
		v7 = a3;
	lParam = 0i64;
	EnumResourceNamesW(a2, (LPCWSTR)0xE, (ENUMRESNAMEPROCW)EnumFunc, (LONG_PTR)&lParam);
	WndClass.style = 11;
	*(_QWORD*)&WndClass.cbClsExtra = 0i64;
	WndClass.hInstance = a2;
	WndClass.lpfnWndProc = (WNDPROC)sub_140009D00;
	if (lParam)
		WndClass.hIcon = LoadIconW(a2, (LPCWSTR)lParam);
	else
		WndClass.hIcon = 0i64;
	CursorW = LoadCursorW(0i64, (LPCWSTR)0x7F00);
	v9 = CopyIcon(CursorW);
	WndClass.lpszClassName = v7;
	WndClass.hCursor = v9;
	*(_OWORD*)&WndClass.hbrBackground = 0i64;
	RegisterClassW(&WndClass);
	*(_QWORD*)&Rect.left = 0i64;
	Rect.right = 1024;
	Rect.bottom = 768;
	AdjustWindowRect(&Rect, 0xCF0000u, 0);
	Window = CreateWindowExW(
		0,
		v7,
		v7,
		0xCF0000u,
		0x80000000,
		0x80000000,
		Rect.right - Rect.left,
		Rect.bottom - Rect.top,
		0i64,
		0i64,
		a2,
		0i64);
	*(_QWORD*)(a1 + 8) = Window;
	if (Window)
	{
		*(_DWORD*)(a1 + 128) = 44;
		GetWindowPlacement(Window, (WINDOWPLACEMENT*)(a1 + 128));
		*(_DWORD*)(a1 + 172) = a4;
		*(_DWORD*)(a1 + 68) = 2;
		v22 = 0i64;
		EnumResourceNamesW(a2, (LPCWSTR)9, (ENUMRESNAMEPROCW)EnumFunc, (LONG_PTR)&v22);
		if (v22)
			*(_QWORD*)(a1 + 24) = LoadAcceleratorsW(a2, (LPCWSTR)v22);
		*(LARGE_INTEGER*)(a1 + 184) = Frequency;
		v13 = Frequency;
		LowPart = (float)(int)Frequency.LowPart;
		*(_QWORD*)(a1 + 176) = Frequency.QuadPart / 0x3E8ui64;
		if (v13.QuadPart < 0)
			LowPart = LowPart + 1.8446744e19;
		*(_DWORD*)(a1 + 64) |= 0x2001u;
		result = 0i64;
		*(float*)(a1 + 192) = 1.0 / LowPart;
	}
	else
	{
		*(_QWORD*)&v17 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v17 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v18 = TlsValue;
		lParam = 0x141CD10A8i64;
		v19 = v17;
		v11 = sub_1401971E0(&dword_140C89FE0, 14, &lParam, &v18);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v17 + 1));
		if (v11)
			DebugBreak();
		return 2147500037i64;
	}
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C89FE0: using guessed type _DWORD dword_140C89FE0;

