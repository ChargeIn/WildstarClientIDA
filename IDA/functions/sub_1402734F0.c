#include "../winhttp.h"

//----- (00000001402734F0) ----------------------------------------------------
__int64 __fastcall sub_1402734F0(__int64 a1)
{
	HWND v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	BOOL v6; // ecx
	__int64 v7; // rcx
	int v8; // eax
	WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-48h] BYREF

	if (*(_DWORD*)(a1 + 6628))
		return 1i64;
	v3 = *(HWND*)(a1 + 80);
	if (v3)
	{
		wndpl.length = 44;
		GetWindowPlacement(v3, &wndpl);
		if (((wndpl.showCmd - 1) & 0xFFFFFFFD) != 0)
			return 0i64;
	}
	v4 = *(_QWORD*)(a1 + 6616);
	if (v4)
	{
		v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 1024i64))(v4, *(_QWORD*)(a1 + 80));
		if (v5 == -2005530520)
			goto LABEL_16;
		if (v5 && v5 != 141953143)
		{
			if (v5 != 141953144)
			{
			LABEL_11:
				v6 = (*(int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 40i64))(a1, a1 + 56) >= 0;
			LABEL_17:
				*(_DWORD*)(a1 + 6628) = v6;
				return *(unsigned int*)(a1 + 6628);
			}
		LABEL_16:
			v6 = 0;
			goto LABEL_17;
		}
		goto LABEL_15;
	}
	v7 = *(_QWORD*)(a1 + 6608);
	if (v7)
	{
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7);
		if (v8 == -2005530520)
			goto LABEL_16;
		if (v8)
			goto LABEL_11;
	LABEL_15:
		*(_DWORD*)(a1 + 6628) = 1;
	}
	return *(unsigned int*)(a1 + 6628);
}

