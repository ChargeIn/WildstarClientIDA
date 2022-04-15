//----- (00000001403B95C0) ----------------------------------------------------
__int64 __fastcall sub_1403B95C0(__int64 a1, int* a2)
{
	unsigned int v2; // r8d
	int v3; // eax
	int v4; // edx
	__int64 v5; // r9
	unsigned int v6; // eax

	v2 = a2[1];
	v3 = *a2;
	v4 = *(_DWORD*)(a1 + 28124);
	v5 = *(unsigned int*)(a1 + 28120);
	*(_DWORD*)(a1 + 28128) = v2;
	*(_DWORD*)(a1 + 28120) = v3;
	if (v4 != -1)
	{
		v6 = v4 + v3 - v5;
		if (v6 > v2)
			v6 = v2;
		*(_DWORD*)(a1 + 28124) = v6;
	}
	sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "AbilityBookChange", &unk_1409D10C6, v5);
	return 0i64;
}

