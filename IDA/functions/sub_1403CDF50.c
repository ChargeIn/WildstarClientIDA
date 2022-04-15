//----- (00000001403CDF50) ----------------------------------------------------
__int64 __fastcall sub_1403CDF50(__int64 a1, int a2, unsigned __int8 a3, int a4)
{
	unsigned __int64 v8; // r9
	__int64 v9; // rdx
	int v10; // edi
	__int64 v11; // rcx
	unsigned __int64 v12; // r8
	unsigned __int64 v13; // r11
	unsigned __int16* v14; // rcx
	unsigned __int16* i; // rcx

	if (a3 >= 4u)
		return 0i64;
	v8 = *(_QWORD*)(a1 + 28344);
	v9 = 0i64;
	if (a3 != *(_DWORD*)(a1 + 28140) || a4 || (v10 = 1, !v8))
		v10 = 0;
	v11 = a3;
	v12 = 0i64;
	v13 = *(_QWORD*)(a1 + 16i64 * (unsigned int)v11 + 28280);
	if (v13)
	{
		v14 = *(unsigned __int16**)(a1 + 16 * (v11 + 1767));
		while (*v14 != a2)
		{
			++v12;
			++v14;
			if (v12 >= v13)
				goto LABEL_11;
		}
	}
	else
	{
	LABEL_11:
		if (!v10 || !v8)
			return 0i64;
		for (i = *(unsigned __int16**)(a1 + 28336); *i != a2; ++i)
		{
			if (++v9 >= v8)
				return 0i64;
		}
	}
	return 1i64;
}

