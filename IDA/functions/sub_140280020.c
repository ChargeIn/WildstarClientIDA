#include "../winhttp.h"

//----- (0000000140280020) ----------------------------------------------------
void __fastcall sub_140280020(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v8; // rcx
	DWORD v9; // eax
	HWND v10; // rax
	HWND v11; // rdi
	__int64 v12; // rax
	int v13; // ecx
	struct tagPOINT Point; // [rsp+20h] [rbp-58h] BYREF
	struct tagRECT Rect; // [rsp+28h] [rbp-50h] BYREF
	int v16[4]; // [rsp+38h] [rbp-40h] BYREF
	ICONINFO piconinfo; // [rsp+48h] [rbp-30h] BYREF
	DWORD dwProcessId; // [rsp+88h] [rbp+10h] BYREF

	if (a2 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2))
	{
		if (*(_QWORD*)(a1 + 8536) != a2 || *(_DWORD*)(a1 + 8544) != a3 || *(_DWORD*)(a1 + 8548) != a4)
		{
			*(_QWORD*)(a1 + 8536) = a2;
			*(_DWORD*)(a1 + 8544) = a3;
			*(_DWORD*)(a1 + 8548) = a4;
			v16[0] = -1;
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a2 + 32i64))(a2, v16);
			DestroyIcon(*(HICON*)(a1 + 8552));
			v8 = *(_QWORD*)(a1 + 8536);
			piconinfo.xHotspot = *(_DWORD*)(a1 + 8544);
			v9 = *(_DWORD*)(a1 + 8548);
			piconinfo.fIcon = 0;
			piconinfo.yHotspot = v9;
			piconinfo.hbmMask = *(HBITMAP*)(v8 + 48);
			piconinfo.hbmColor = *(HBITMAP*)(v8 + 56);
			*(_QWORD*)(a1 + 8552) = CreateIconIndirect(&piconinfo);
		}
		if (*(HCURSOR*)(a1 + 8552) != GetCursor())
		{
			GetCursorPos(&Point);
			v10 = WindowFromPoint(Point);
			v11 = v10;
			if (v10)
			{
				GetWindowThreadProcessId(v10, &dwProcessId);
				if (dwProcessId == GetCurrentProcessId())
				{
					GetClientRect(v11, &Rect);
					ScreenToClient(v11, &Point);
					if (Point.x >= Rect.left && Point.x < Rect.right && Point.y >= Rect.top && Point.y < Rect.bottom)
						SetCursor(*(HCURSOR*)(a1 + 8552));
				}
			}
		}
		v12 = *(_QWORD*)(a1 + 8536);
		v13 = *(_DWORD*)(a1 + 240);
		if (*(_DWORD*)(v12 + 76) != v13)
		{
			*(_DWORD*)(v12 + 76) = v13;
			_InterlockedIncrement((volatile signed __int32*)(a1 + 1052));
			_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 1056), 0x1000u);
		}
	}
}
// 140280020: using guessed type int var_40[4];

