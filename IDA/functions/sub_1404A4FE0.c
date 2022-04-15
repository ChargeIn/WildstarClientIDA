//----- (00000001404A4FE0) ----------------------------------------------------
__int64 __fastcall sub_1404A4FE0(__int64 a1, __int64 a2, int a3, int a4)
{
	_QWORD* v7; // rbx
	unsigned int v8; // edi
	unsigned int v9; // ecx
	int v10; // esi

	if (!a2)
		return 0i64;
	v7 = *(_QWORD**)(a2 + 5584);
	v8 = 0;
	if (v7)
	{
		while ((*(unsigned int(__fastcall**)(_QWORD*))(*v7 + 48i64))(v7) != a4)
		{
			v7 = (_QWORD*)v7[6];
			if (!v7)
				goto LABEL_6;
		}
		v9 = 1;
	}
	else
	{
	LABEL_6:
		v9 = 0;
	}
	v10 = a3 - 1;
	if (v10)
	{
		if (v10 == 1)
		{
			LOBYTE(v8) = v9 == 0;
			return v8;
		}
	}
	else
	{
		return v9;
	}
	return v8;
}

