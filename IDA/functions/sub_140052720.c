//----- (0000000140052720) ----------------------------------------------------
__int64 __fastcall sub_140052720(_DWORD* a1)
{
	unsigned int v1; // r11d
	int v2; // ebx
	unsigned int v3; // r9d
	unsigned int v4; // r8d
	unsigned int v5; // r10d
	unsigned int v6; // eax

	v1 = 0;
	v2 = 0;
	if (a1[19] == 2)
	{
		v3 = a1[23];
		v4 = dword_140C636A8 - a1[22];
		if (v3 && (int)(v4 - v3) > 0)
		{
			v2 = 1;
			a1[19] = 4;
		}
		v5 = a1[24];
		if (v5 && v4 < v5)
		{
			v6 = 255 * v4;
		LABEL_14:
			a1[26] = (65793 * (v6 / v5)) | 0xFF000000;
			goto LABEL_16;
		}
		v5 = a1[25];
		if (!v5 || !v3 || v4 <= v3 - v5)
		{
			a1[26] = -1;
			goto LABEL_16;
		}
		if (v4 < v3)
		{
			v6 = 255 * (v3 - v4);
			goto LABEL_14;
		}
		a1[26] = -16777216;
	}
LABEL_16:
	if ((unsigned int)(a1[19] - 3) <= 1 && !a1[14])
	{
		LOBYTE(v1) = v2 == 0;
		(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 120i64))(a1, v1);
	}
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;

