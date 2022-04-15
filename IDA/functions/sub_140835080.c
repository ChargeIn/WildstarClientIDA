//----- (0000000140835080) ----------------------------------------------------
void __fastcall sub_140835080(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // r11
	__int64 v3; // r10
	int v4; // esi
	int v6; // edi
	int v7; // eax
	unsigned __int64 v8; // rdx
	unsigned __int64 v9; // rdi

	v2 = a1[1];
	v3 = *a1;
	v4 = 0;
	v6 = ((v2 - *a1) >> 3) - 1;
	if (v6 < 0)
		return;
	while (1)
	{
		v7 = v4 + (v6 - v4) / 2;
		v8 = *(_QWORD*)(v3 + 8i64 * v7);
		if (a2 >= v8)
			break;
		v6 = v7 - 1;
	LABEL_6:
		if (v4 > v6)
			return;
	}
	if (a2 > v8)
	{
		v4 = v7 + 1;
		goto LABEL_6;
	}
	v9 = v3 + 8i64 * v7;
	if (v9 < v2 - 8)
		qmemcpy((void*)v9, (const void*)(v9 + 8), 8 * (((v2 - 8 - v9 - 1) >> 3) + 1));
	a1[1] -= 8i64;
}

