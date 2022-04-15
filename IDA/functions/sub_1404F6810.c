//----- (00000001404F6810) ----------------------------------------------------
__int64 __fastcall sub_1404F6810(__int64 a1, int a2, int* a3, unsigned __int8 a4)
{
	__int64 v6; // rbp
	int v8; // r10d
	int v9; // eax

	v6 = a2;
	if (*(char*)(a1 + 28) < 0 && (*(_BYTE*)(a1 + 664) & 1) == 0)
	{
		v8 = *a3;
		*(_DWORD*)(a1 + 904) = *a3;
		*(_DWORD*)(a1 + 908) = a3[1];
		*(_DWORD*)(a1 + 8i64 * a2 + 864) = v8;
		*(_DWORD*)(a1 + 8i64 * a2 + 868) = *(_DWORD*)(a1 + 908);
		v9 = sub_14018CDF0();
		*(_DWORD*)(a1 + 932) = v9;
		*(_DWORD*)(a1 + 4 * v6 + 912) = v9;
		if (!(_DWORD)v6)
		{
			*(_DWORD*)(a1 + 2292) = *a3;
			*(_DWORD*)(a1 + 2296) = a3[1];
		}
		*(_DWORD*)(a1 + 2300) = 1;
	}
	return sub_1400D2120(a1, v6, a3, a4);
}

