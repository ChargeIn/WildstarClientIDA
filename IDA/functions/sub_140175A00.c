#include "../winhttp.h"

//----- (0000000140175A00) ----------------------------------------------------
__int64 __fastcall sub_140175A00(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v8; // eax
	int v9; // ecx
	int v11; // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+24h] [rbp-24h]
	int v13; // [rsp+28h] [rbp-20h]
	int v14; // [rsp+2Ch] [rbp-1Ch]
	char v15[24]; // [rsp+30h] [rbp-18h] BYREF

	sub_140174CE0(a1, &v11);
	sub_140174F70(a1, (__int64)v15);
	sub_140175130(a1, (__int64)v15);
	if ((*(_BYTE*)(a1 + 664) & 8) != 0 && !a2)
	{
		if ((unsigned int)sub_1400C3D70(a1 + 1056, a3) == 2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 576i64))(a1);
		if ((unsigned int)sub_1400C3D70(a1 + 1472, a3) == 2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 568i64))(a1);
	}
	v8 = *a3;
	if (*a3 >= v11 && v8 < v13)
	{
		v9 = a3[1];
		if (v9 >= v12 && v9 < v14)
		{
			if (*(_BYTE*)(a1 + 1041))
				*(_DWORD*)(a1 + 1044) = v9 - v12;
			else
				*(_DWORD*)(a1 + 1044) = v8 - v11;
			*(_BYTE*)(a1 + 1040) = 1;
		}
	}
	return sub_1400D2120(a1, a2, a3, a4);
}

