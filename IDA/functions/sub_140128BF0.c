//----- (0000000140128BF0) ----------------------------------------------------
__int64 __fastcall sub_140128BF0(__int64 a1, int* a2)
{
	int v4; // r10d
	int v5; // r8d
	int v6; // edx
	int v7; // ecx
	int v8; // edx
	int v9; // eax
	char* v10; // r9
	int v12; // r8d
	int v13; // ecx
	int v14; // edx
	int v15; // [rsp+20h] [rbp-28h]

	if (*(_BYTE*)(a1 + 1060))
	{
		v4 = *(_DWORD*)(a1 + 720) + 4;
		v5 = 255;
		v6 = *a2 - (*(_DWORD*)(a1 + 716) + 4);
		*(_DWORD*)(a1 + 1052) = v6;
		*(_DWORD*)(a1 + 1056) = a2[1] - v4;
		v7 = 255;
		if (v6 < 255)
			v7 = v6;
		v8 = 0;
		v9 = 0;
		if (v7 > 0)
			v9 = v7;
		*(_DWORD*)(a1 + 1052) = v9;
		if (*(int*)(a1 + 1056) < 255)
			v5 = *(_DWORD*)(a1 + 1056);
		if (v5 > 0)
			v8 = v5;
		*(_DWORD*)(a1 + 1056) = v8;
		sub_140128250(a1);
		v10 = (char*)L"c";
	LABEL_11:
		v15 = *(_DWORD*)(a1 + 1040);
		sub_1400D4070(a1, 0x4Au, (char*)a1, v10, v15);
		return 0i64;
	}
	if (*(_BYTE*)(a1 + 1061))
	{
		v12 = 255;
		v13 = a2[1] - (*(_DWORD*)(a1 + 720) + 4);
		if (v13 < 255)
			v12 = v13;
		v14 = 0;
		if (v12 > 0)
			v14 = v12;
		*(_DWORD*)(a1 + 1048) = v14;
		sub_140128250(a1);
		v10 = "c";
		goto LABEL_11;
	}
	return sub_1400D23B0(a1, a2);
}
// 1409D7E3C: using guessed type wchar_t aC_8[2];

