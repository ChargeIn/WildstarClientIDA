//----- (0000000140859140) ----------------------------------------------------
__int64 __fastcall sub_140859140(__int64* a1, unsigned int a2)
{
	__int64 v2; // r10
	int v3; // r9d
	int v5; // r8d
	__int64 v6; // rax
	unsigned int v7; // ecx

	v2 = *a1;
	v3 = 0;
	v5 = ((a1[1] - *a1) >> 3) - 1;
	if (v5 < 0)
	{
	LABEL_7:
		if (v2)
		{
			v6 = v3;
			goto LABEL_9;
		}
		return sub_140859980((__int64)a1);
	}
	while (1)
	{
		LODWORD(v6) = v3 + (v5 - v3) / 2;
		v7 = *(_DWORD*)(*(_QWORD*)(v2 + 8i64 * (int)v6) + 24i64);
		if (a2 >= v7)
			break;
		v5 = v6 - 1;
	LABEL_6:
		if (v3 > v5)
			goto LABEL_7;
	}
	if (a2 > v7)
	{
		v3 = v6 + 1;
		goto LABEL_6;
	}
	v6 = (int)v6;
LABEL_9:
	if (v2 + 8 * v6)
		return sub_14085AE30((__int64)a1, (8 * v6) >> 3);
	return sub_140859980((__int64)a1);
}

