//----- (00000001401E5490) ----------------------------------------------------
__int64 __fastcall sub_1401E5490(__int64 a1, unsigned int a2)
{
	__int64 v3; // r8
	int v4; // eax
	int v5; // eax
	unsigned int v6; // edx
	_DWORD* v7; // rax
	int v8; // eax
	unsigned int v9; // ecx

	if (a2 >= 7)
		return 2147942487i64;
	v3 = a1 + 4i64 * a2;
	v4 = *(_DWORD*)(v3 + 1224);
	if (!v4)
		return 2147500037i64;
	v5 = v4 - 1;
	*(_DWORD*)(v3 + 1224) = v5;
	if (v5 || a2 > *(_DWORD*)(a1 + 1216))
		return 0i64;
	v6 = a2 + 1;
	if (v6 < 7)
	{
		v7 = (_DWORD*)(a1 + 4 * (v6 + 306i64));
		do
		{
			if (*v7)
				break;
			++v6;
			++v7;
		} while (v6 < 7);
	}
	v8 = sub_1401E5690(a1, v6);
	v9 = 0;
	if (v8 < 0)
		return (unsigned int)v8;
	return v9;
}

