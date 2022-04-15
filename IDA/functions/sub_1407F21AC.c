#include "../winhttp.h"

//----- (00000001407F21AC) ----------------------------------------------------
__int64 __fastcall sub_1407F21AC(int* a1, int* a2, unsigned __int64 a3, WCHAR a4, _OWORD* a5)
{
	unsigned int v9; // ebx
	int v10; // eax
	__int64 v11; // [rsp+40h] [rbp-28h] BYREF
	__int64 v12; // [rsp+50h] [rbp-18h]
	char v13; // [rsp+58h] [rbp-10h]
	BOOL UsedDefaultChar; // [rsp+78h] [rbp+10h] BYREF
	WCHAR WideCharStr; // [rsp+88h] [rbp+20h] BYREF

	WideCharStr = a4;
	if (a2 || !a3)
	{
		if (a1)
			*a1 = -1;
		if (a3 > 0x7FFFFFFF)
		{
			v9 = 22;
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
			return v9;
		}
		sub_1407DE348((__int64)&v11, a5);
		if (!*(_QWORD*)(v11 + 312))
		{
			if (WideCharStr > 0xFFu)
			{
				if (a2 && a3)
					sub_1407E4830(a2, 0i64, a3);
				goto LABEL_15;
			}
			if (!a2)
				goto LABEL_22;
			if (a3)
			{
				*(_BYTE*)a2 = WideCharStr;
			LABEL_22:
				if (a1)
					*a1 = 1;
			LABEL_28:
				v9 = 0;
				goto LABEL_16;
			}
		LABEL_33:
			v9 = 34;
			*(_DWORD*)sub_1407DE1B0() = 34;
			sub_1407DC370();
		LABEL_16:
			if (v13)
				*(_DWORD*)(v12 + 200) &= ~2u;
			return v9;
		}
		UsedDefaultChar = 0;
		v10 = WideCharToMultiByte(*(_DWORD*)(v11 + 4), 0, &WideCharStr, 1, (LPSTR)a2, a3, 0i64, &UsedDefaultChar);
		if (v10)
		{
			if (!UsedDefaultChar)
			{
				if (a1)
					*a1 = v10;
				goto LABEL_28;
			}
		}
		else if (GetLastError() == 122)
		{
			if (a2 && a3)
				sub_1407E4830(a2, 0i64, a3);
			goto LABEL_33;
		}
	LABEL_15:
		*(_DWORD*)sub_1407DE1B0() = 42;
		v9 = *(_DWORD*)sub_1407DE1B0();
		goto LABEL_16;
	}
	if (a1)
		*a1 = 0;
	return 0i64;
}

