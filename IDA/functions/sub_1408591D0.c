//----- (00000001408591D0) ----------------------------------------------------
__int64 __fastcall sub_1408591D0(__int64* a1, unsigned int a2)
{
	__int64 v2; // r11
	int v3; // r9d
	int v4; // r8d
	int v5; // eax
	unsigned int v6; // ecx

	v2 = *a1;
	v3 = 0;
	v4 = ((a1[1] - *a1) >> 3) - 1;
	if (v4 < 0)
		return 0i64;
	while (1)
	{
		v5 = v3 + (v4 - v3) / 2;
		v6 = *(_DWORD*)(*(_QWORD*)(v2 + 8i64 * v5) + 24i64);
		if (a2 >= v6)
			break;
		v4 = v5 - 1;
	LABEL_6:
		if (v3 > v4)
			return 0i64;
	}
	if (a2 > v6)
	{
		v3 = v5 + 1;
		goto LABEL_6;
	}
	return v2 + 8i64 * v5;
}

