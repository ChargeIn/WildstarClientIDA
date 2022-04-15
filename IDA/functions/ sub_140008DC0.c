#include "../winhttp.h"

//----- (0000000140008DC0) ----------------------------------------------------
__int64 __fastcall sub_140008DC0(__int64 a1)
{
	unsigned int v3; // eax
	bool v4; // zf
	HWND v5; // rcx
	int v6; // eax
	__int64 v7; // rbx
	__int64 v8; // rsi
	int v9; // r15d
	int v10; // eax
	LONG v11; // r12d
	HWND v12; // rcx
	HWND v13; // rcx
	signed int LowPart; // r13d
	__int64 v15; // rax
	HWND v16; // r14
	HWND v17; // rcx
	int v18; // ecx
	int v19; // eax
	HWND v20; // rcx
	int v21; // r12d
	int v22; // edx
	HWND v23; // rcx
	int v24; // edx
	int v25; // ecx
	int v26; // ebx
	int v27; // ebx
	HWND v28; // rcx
	_QWORD* v29; // rax
	int v30; // ecx
	unsigned int v31; // ebx
	unsigned int v32; // esi
	unsigned int v33; // r8d
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64 v36; // rdx
	unsigned int v37; // eax
	_DWORD* v38; // rax
	LONGLONG v39; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
	struct tagPOINT Point; // [rsp+48h] [rbp-B8h] BYREF
	int v42; // [rsp+50h] [rbp-B0h]
	int v43; // [rsp+54h] [rbp-ACh]
	LONG HighPart; // [rsp+58h] [rbp-A8h]
	int v45; // [rsp+5Ch] [rbp-A4h]
	HWND hWndInsertAfter; // [rsp+60h] [rbp-A0h]
	__int128 TlsValue; // [rsp+68h] [rbp-98h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+78h] [rbp-88h]
	struct tagRECT v49; // [rsp+90h] [rbp-70h] BYREF
	LPVOID v50; // [rsp+A0h] [rbp-60h]
	struct tagRECT Rect; // [rsp+B0h] [rbp-50h] BYREF
	LPVOID Value; // [rsp+C0h] [rbp-40h]
	WINDOWPLACEMENT wndpl; // [rsp+D0h] [rbp-30h] BYREF

	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 608i64))(qword_140C65670))
		return 1i64;
	v3 = *(_DWORD*)(a1 + 64) & 0xFFFFFF9F | 0x20;
	v4 = *(_DWORD*)(a1 + 72) == 4;
	*(_DWORD*)(a1 + 64) = v3;
	if (!v4 && (v3 & 0x4000) == 0)
	{
		v5 = *(HWND*)(a1 + 8);
		*(_DWORD*)(a1 + 128) = 44;
		GetWindowPlacement(v5, (WINDOWPLACEMENT*)(a1 + 128));
	}
	v6 = *(_DWORD*)(a1 + 64);
	v7 = *(int*)(a1 + 72);
	v8 = *(int*)(a1 + 68);
	v9 = v6 << 18 >> 31;
	if ((v6 & 0x4000) != 0 || (v43 = 0, (_DWORD)v7 != (_DWORD)v8))
		v43 = 1;
	*(_DWORD*)(a1 + 72) = v8;
	*(_DWORD*)(a1 + 64) = v6 & 0xFFFFBFFF;
	v10 = dword_140B552D8[v7];
	v11 = dword_140B552D8[v8];
	PerformanceCount.QuadPart = qword_140B552A8[v7];
	hWndInsertAfter = (HWND)qword_140B552A8[v8];
	v45 = v10;
	v42 = 0;
	if (!v9
		|| (unsigned int)(v7 - 3) > 1 && (unsigned int)(v8 - 3) > 1
		|| (_DWORD)v7 == 5
		|| (v12 = *(HWND*)(a1 + 8),
			wndpl.length = 44,
			GetWindowPlacement(v12, &wndpl),
			((wndpl.showCmd - 1) & 0xFFFFFFFD) != 0)
		|| (GetWindowRect(*(HWND*)(a1 + 8), &Rect), Rect.left >= Rect.right)
		|| Rect.top >= Rect.bottom
		|| (GetCursorPos(&Point), Point.x < Rect.left)
		|| Point.x >= Rect.right
		|| Point.y < Rect.top
		|| Point.y >= Rect.bottom)
	{
		LowPart = PerformanceCount.LowPart;
		HighPart = PerformanceCount.HighPart;
	}
	else
	{
		Point.y -= Rect.top;
		v13 = *(HWND*)(a1 + 8);
		v42 = 1;
		Point.x -= Rect.left;
		LowPart = Rect.right - Rect.left;
		HighPart = Rect.bottom - Rect.top;
		SetCapture(v13);
	}
	if ((_DWORD)v7 == 4 && (_DWORD)v8 != 4)
	{
		ClipCursor(0i64);
		SetThreadExecutionState(0x80000001);
		v15 = *(_QWORD*)(a1 + 8);
		wndpl.rcNormalPosition.top = 0;
		wndpl.length = 1;
		*(_QWORD*)&wndpl.flags = 1i64;
		wndpl.ptMinPosition = (POINT)27i64;
		*(_QWORD*)&wndpl.ptMaxPosition.y = v15;
		(*(void(__fastcall**)(__int64, WINDOWPLACEMENT*))(*(_QWORD*)qword_140C65670 + 40i64))(qword_140C65670, &wndpl);
	}
	v16 = hWndInsertAfter;
	if ((v45 != v11 || (HWND)PerformanceCount.QuadPart != hWndInsertAfter) && (_DWORD)v7 != 5)
	{
		v17 = *(HWND*)(a1 + 8);
		wndpl.length = 44;
		GetWindowPlacement(v17, &wndpl);
		if (((wndpl.showCmd - 1) & 0xFFFFFFFD) == 0)
			ShowWindow(*(HWND*)(a1 + 8), 0);
	}
	if (v45 != v11)
		SetWindowLongW(*(HWND*)(a1 + 8), -16, v11);
	if ((HWND)PerformanceCount.QuadPart != v16)
		SetWindowPos(*(HWND*)(a1 + 8), v16, 0, 0, 0, 0, 0x13u);
	if (v43)
	{
		v18 = 3;
		if ((_DWORD)v8 != 3)
			v18 = *(_DWORD*)(a1 + 172);
		v19 = 0;
		if ((_DWORD)v8 != 4)
			v19 = v18;
		v20 = *(HWND*)(a1 + 8);
		*(_DWORD*)(a1 + 136) = v19;
		SetWindowPlacement(v20, (const WINDOWPLACEMENT*)(a1 + 128));
	}
	v21 = 8;
	if ((_DWORD)v8 != 4)
	{
		v22 = 8;
		if (v9)
			v22 = 5;
		ShowWindow(*(HWND*)(a1 + 8), v22);
		v23 = *(HWND*)(a1 + 8);
		wndpl.length = 44;
		GetWindowPlacement(v23, &wndpl);
		if (((wndpl.showCmd - 1) & 0xFFFFFFFD) == 0)
		{
			if (v9)
				SetForegroundWindow(*(HWND*)(a1 + 8));
			GetClientRect(*(HWND*)(a1 + 8), &Rect);
			v24 = Rect.right - Rect.left;
			v25 = Rect.bottom - Rect.top;
			if (Rect.right - Rect.left < (int)qword_140C77768)
				v24 = qword_140C77768;
			if (v25 < SHIDWORD(qword_140C77768))
				v25 = HIDWORD(qword_140C77768);
			*(_DWORD*)(a1 + 80) = v24;
			*(_DWORD*)(a1 + 96) = 0;
			*(_DWORD*)(a1 + 84) = v25;
		}
	}
	*(_QWORD*)(a1 + 104) = *(_QWORD*)(a1 + 8);
	v26 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 40i64))(qword_140C65670, a1 + 80);
	if (v26 < 0)
	{
		Rect = (struct tagRECT)(unsigned __int64)&off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &Rect);
		v49 = Rect;
		*(_QWORD*)&TlsValue = &off_140B5E648;
		v50 = Value;
		*((_QWORD*)&TlsValue + 1) = L"Result";
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		LODWORD(lpTlsValue[1]) = v26;
		*(_QWORD*)&TlsValue = &off_140B5E640;
		*(_OWORD*)&wndpl.ptMinPosition.y = *(_OWORD*)lpTlsValue;
		PerformanceCount.QuadPart = 0x141CD1A48i64;
		*(_OWORD*)&wndpl.length = TlsValue;
		v27 = sub_1401971E0(&dword_140C89FDC, 14, &PerformanceCount, &wndpl, &v49);
		*(_QWORD*)&TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		*(_QWORD*)&Rect.left = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v27)
			DebugBreak();
		*(_DWORD*)(a1 + 64) |= 0x40u;
	}
	if ((_DWORD)v8 == 4)
	{
		if (v9)
			v21 = 5;
		ShowWindow(*(HWND*)(a1 + 8), v21);
	}
	if (v42)
	{
		GetWindowRect(*(HWND*)(a1 + 8), &Rect);
		SetCursorPos(
			Point.x * (Rect.right - Rect.left) / LowPart + Rect.left,
			Rect.top + Point.y * (Rect.bottom - Rect.top) / HighPart);
		ReleaseCapture();
	}
	if ((_DWORD)v8 == 4)
	{
		v28 = *(HWND*)(a1 + 8);
		wndpl.length = 44;
		GetWindowPlacement(v28, &wndpl);
		if (((wndpl.showCmd - 1) & 0xFFFFFFFD) == 0)
		{
			GetWindowRect(*(HWND*)(a1 + 8), &Rect);
			ClipCursor(&Rect);
			SetForegroundWindow(*(HWND*)(a1 + 8));
			SetThreadExecutionState(0x80000003);
		}
	}
	v29 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 16i64))(qword_140C65670);
	*(_QWORD*)(a1 + 80) = *v29;
	*(_QWORD*)(a1 + 88) = v29[1];
	*(_QWORD*)(a1 + 96) = v29[2];
	*(_QWORD*)(a1 + 104) = v29[3];
	*(_QWORD*)(a1 + 112) = v29[4];
	v30 = *(_DWORD*)(a1 + 84);
	if (v30)
		*(float*)(a1 + 248) = (float)*(int*)(a1 + 80) / (float)v30;
	else
		*(_DWORD*)(a1 + 248) = 1065353216;
	*(_DWORD*)(a1 + 252) = 1065353216;
	*(_QWORD*)&Rect.right = 0i64;
	*(_QWORD*)&Rect.left = 0i64;
	if ((*(int(__fastcall**)(__int64, struct tagRECT*))(*(_QWORD*)qword_140C65670 + 32i64))(qword_140C65670, &Rect) >= 0)
	{
		v31 = 0;
		v32 = 0;
		v33 = 0;
		if (*(_QWORD*)&Rect.right)
		{
			v34 = *(_QWORD*)&Rect.left;
			v35 = 0i64;
			do
			{
				v36 = 5 * v35;
				v37 = *(_DWORD*)(*(_QWORD*)&Rect.left + 40 * v35);
				if (v31 < v37 || v31 == v37 && v32 < *(_DWORD*)(*(_QWORD*)&Rect.left + 8 * v36 + 4))
				{
					v32 = *(_DWORD*)(*(_QWORD*)&Rect.left + 8 * v36 + 4);
					v31 = v37;
				}
				v35 = ++v33;
			} while ((unsigned __int64)v33 < *(_QWORD*)&Rect.right);
			if (!v31 || !v32)
				goto LABEL_79;
			v38 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 24i64))(qword_140C65670);
			*(float*)(a1 + 252) = (float)(int)(v31 * v38[1]) / (float)(int)(v32 * *v38);
		}
	}
	v34 = *(_QWORD*)&Rect.left;
LABEL_79:
	if (v34)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v34 - 16) + 8i64))(v34 - 16);
	QueryPerformanceCounter(&PerformanceCount);
	v39 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	*(_DWORD*)(a1 + 64) &= ~0x20u;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 200) = v39;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	return 0i64;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B552A8: using guessed type __int64 qword_140B552A8[6];
// 140B552D8: using guessed type int dword_140B552D8[6];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77768: using guessed type __int64 qword_140C77768;
// 140C89FDC: using guessed type _DWORD dword_140C89FDC;

