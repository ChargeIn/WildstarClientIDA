#include "../winhttp.h"

//----- (0000000140130CE0) ----------------------------------------------------
__int64 __fastcall sub_140130CE0(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	__int64 v6; // rsi
	bool v8; // al
	int v9; // ecx
	int v10; // eax
	int v11; // eax
	int v12; // eax
	int v13; // eax
	__int64 v15; // rdx

	v6 = a2;
	v8 = a2 && *(char*)(a1 + 664) >= 0;
	if (*(char*)(a1 + 28) < 0 && !v8)
	{
		v9 = *a3;
		*(_DWORD*)(a1 + 904) = *a3;
		*(_DWORD*)(a1 + 908) = a3[1];
		*(_DWORD*)(a1 + 8i64 * a2 + 864) = v9;
		*(_DWORD*)(a1 + 8i64 * a2 + 868) = *(_DWORD*)(a1 + 908);
		v10 = sub_14018CDF0();
		*(_DWORD*)(a1 + 932) = v10;
		*(_DWORD*)(a1 + 4 * v6 + 912) = v10;
		*(_BYTE*)(a1 + 1444) = a4;
		v11 = sub_1400C3D70(a1 + 1024, a3) - 2;
		if (v11)
		{
			v12 = v11 - 1;
			if (v12)
			{
				v13 = v12 - 4;
				if (v13)
					return v13 == 2;
			LABEL_15:
				*(_DWORD*)(a1 + 1440) = v6;
				return 0i64;
			}
			v15 = 33i64;
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 568i64))(a1, 33i64, (unsigned int)v6);
			v15 = 32i64;
		}
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 568i64))(a1, v15, (unsigned int)v6, 0i64);
		goto LABEL_15;
	}
	return sub_1400D2120(a1, a2, a3, a4);
}

