//----- (00000001408A1760) ----------------------------------------------------
__int64 __fastcall sub_1408A1760(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	int v8; // r11d
	int i; // r10d
	char v10; // al
	int v11; // r9d

	sub_1408A1CC0(a1, a2);
	v8 = 0;
	for (i = a4; i; i &= i - 1)
		++v8;
	*(_DWORD*)(a1 + 96) = v8;
	v10 = *(_BYTE*)(a3 + 20);
	*(_BYTE*)(a1 + 109) = v10;
	if ((a4 & 8) != 0 && !v10)
		*(_DWORD*)(a1 + 96) = v8 - 1;
	v11 = *(_DWORD*)(a1 + 96);
	if (v11)
		return sub_1408A16D0(a1, a2, (int)(float)((float)*(int*)(a1 + 100) * *(float*)(a3 + 16)), v11);
	else
		return 2i64;
}

