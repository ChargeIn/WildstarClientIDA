//----- (0000000140107290) ----------------------------------------------------
char __fastcall sub_140107290(__int64 a1, __int64 a2)
{
	int* v2; // rbx
	__int64 v5; // rax
	int* v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rdi
	int v11[100]; // [rsp+20h] [rbp-1B8h] BYREF

	v2 = *(int**)(a1 + 96);
	v5 = sub_1401A6C70(a2, (int*)L"Name");
	sub_1401A4C50(v5 + 32, v2);
	v6 = *(int**)(a1 + 64);
	v7 = sub_1401A6C70(a2, (int*)L"Path");
	sub_1401A4C50(v7 + 32, v6);
	LODWORD(v6) = *(_DWORD*)(a1 + 120);
	v8 = sub_1401A6C70(a2, (int*)L"Width");
	sub_1401A4C20(v11, 0xC8ui64, (__int64)L"%d", (unsigned int)v6);
	sub_1401A4C50(v8 + 32, v11);
	LODWORD(v6) = *(_DWORD*)(a1 + 124);
	v9 = sub_1401A6C70(a2, (int*)L"Height");
	sub_1401A4C20(v11, 0xC8ui64, (__int64)L"%d", (unsigned int)v6);
	sub_1401A4C50(v9 + 32, v11);
	return 1;
}
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A1A968: using guessed type wchar_t aPath_1[5];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140107290: using guessed type int var_1B8[100];

