//----- (000000014045E3D0) ----------------------------------------------------
__int64 __fastcall sub_14045E3D0(__int64 a1, int a2)
{
	unsigned int v4; // edi
	__int64 v5; // r9
	unsigned __int64 v6; // rbx
	__int64 v7; // rsi
	__int64 i; // r10
	__int64 v9; // rcx
	int v10; // edx
	int v11; // r8d

	if (a2 >= 28)
		return 0i64;
	v4 = 0;
	v5 = 0i64;
	v6 = *(_QWORD*)(a1 + 16i64 * a2 + 728);
	if (!v6)
		return 0i64;
	v7 = *(_QWORD*)(a1 + 5584);
	for (i = *(_QWORD*)(a1 + 16 * (a2 + 45i64)); ; i += 8i64)
	{
		v9 = *(_QWORD*)(a1 + 5584);
		v10 = *(_DWORD*)(*(_QWORD*)i + 28i64);
		v11 = *(_DWORD*)(*(_QWORD*)i + 24i64);
		if (v7)
			break;
	LABEL_11:
		v9 = *(_QWORD*)(a1 + 5592);
		if (v9)
		{
			while (v11 && *(_DWORD*)(*(_QWORD*)(v9 + 80) + 92i64) != v11 || v10 && *(_DWORD*)(v9 + 100) != v10)
			{
				v9 = *(_QWORD*)(v9 + 64);
				if (!v9)
					goto LABEL_19;
			}
			goto LABEL_18;
		}
	LABEL_19:
		if (++v5 >= v6)
			return 0i64;
	}
	while (v11 && *(_DWORD*)(*(_QWORD*)(v9 + 80) + 92i64) != v11 || v10 && *(_DWORD*)(v9 + 100) != v10)
	{
		v9 = *(_QWORD*)(v9 + 48);
		if (!v9)
			goto LABEL_11;
	}
LABEL_18:
	if (!v9)
		goto LABEL_19;
	if (*(_QWORD*)(v9 + 208))
		return (unsigned int)sub_140195F70(v9 + 192);
	return v4;
}

