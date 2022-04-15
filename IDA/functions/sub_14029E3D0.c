#include "../winhttp.h"

//----- (000000014029E3D0) ----------------------------------------------------
__int64 __fastcall sub_14029E3D0(__int64 a1)
{
	HWND v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	int v6; // ecx
	__int64 v7; // rax
	WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-48h] BYREF

	if (*(_DWORD*)(a1 + 68))
		return 1i64;
	v3 = *(HWND*)(a1 + 48);
	if (v3)
	{
		wndpl.length = 44;
		GetWindowPlacement(v3, &wndpl);
		if (((wndpl.showCmd - 1) & 0xFFFFFFFD) != 0)
			return 0i64;
	}
	v4 = *(_QWORD*)(a1 + 88);
	if (v4)
	{
		v5 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v4 + 64i64))(v4, 0i64, 1i64);
		v6 = 0;
		if (v5 < 0)
		{
			v7 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 68) = 0;
			*(_DWORD*)(v7 + 6252) = 1;
		}
		else
		{
			LOBYTE(v6) = v5 != 142213121;
			*(_DWORD*)(a1 + 68) = v6;
		}
	}
	return *(unsigned int*)(a1 + 68);
}

