#include "../winhttp.h"

//----- (0000000140128AA0) ----------------------------------------------------
__int64 __fastcall sub_140128AA0(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v4; // eax
	int v5; // r10d
	int v7; // edi
	int v8; // r11d
	int v9; // r9d
	int v11; // ebp
	int v12; // edx
	int v13; // eax
	int v15; // ecx
	int v16; // esi
	int v17; // r10d
	int v18; // ecx
	wchar_t* v19; // r9
	int v21; // eax
	int v22; // [rsp+20h] [rbp-38h]

	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 716);
	v7 = v5 + 4;
	v8 = v4 + 4;
	v9 = v4 + 260;
	v11 = v4 + 260;
	v12 = v4 + 4;
	v13 = *a3;
	v15 = v5 + 260;
	v16 = v5 + 264;
	v17 = v5 + 280;
	if (*a3 >= v7 && v13 < v15)
	{
		v18 = a3[1];
		if (v18 >= v8 && v18 < v9)
		{
			*(_BYTE*)(a1 + 1060) = 1;
			*(_DWORD*)(a1 + 1052) = *a3 - v7;
			*(_DWORD*)(a1 + 1056) = a3[1] - v8;
			sub_140128250(a1);
			v19 = L"c";
		LABEL_6:
			v22 = *(_DWORD*)(a1 + 1040);
			sub_1400D4070(a1, 0x4Au, (char*)a1, v19, v22);
			return 0i64;
		}
	}
	if (v13 >= v16 && v13 < v17)
	{
		v21 = a3[1];
		if (v21 >= v12 && v21 < v11)
		{
			*(_BYTE*)(a1 + 1061) = 1;
			*(_DWORD*)(a1 + 1048) = a3[1] - v12;
			sub_140128250(a1);
			v19 = L"c";
			goto LABEL_6;
		}
	}
	return sub_1400D2120(a1, a2, a3, a4);
}
// 1409D7DBC: using guessed type wchar_t aC_6[2];
// 1409D7E1C: using guessed type wchar_t aC_7[2];

