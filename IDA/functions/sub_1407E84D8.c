//----- (00000001407E84D8) ----------------------------------------------------
__int64 __fastcall sub_1407E84D8(int a1, char* a2, int a3)
{
	__int64 v3; // rbx
	int v6; // eax
	wchar_t* v7; // rbp
	int v8; // eax
	int v9; // edi

	v3 = a3;
	if ((a1 & 0xFFFFF3FF) == 0 && a1 != 3072)
		return 0i64;
	if (!a2 && a3 > 0)
		return 0i64;
	if (a3 < 0)
		return 0i64;
	v6 = sub_1407E8378(a1);
	if (v6 < 0)
		return 0i64;
	v7 = (&off_140961A68)[2 * v6];
	v8 = sub_1407E6CBC(v7, 0x55ui64);
	v9 = v8;
	if ((int)v3 > 0)
	{
		if (v8 < (int)v3)
		{
			if ((unsigned int)sub_1407E6BF4(a2, v3, (char*)v7))
			{
				sub_1407DC390();
				JUMPOUT(0x1407E8586i64);
			}
			return (unsigned int)(v9 + 1);
		}
		return 0i64;
	}
	return (unsigned int)(v9 + 1);
}
// 1407E8581: control flows out of bounds to 1407E8586
// 140961A68: using guessed type wchar_t *off_140961A68;

