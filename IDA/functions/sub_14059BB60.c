//----- (000000014059BB60) ----------------------------------------------------
__int64 __fastcall sub_14059BB60(_QWORD* a1)
{
	unsigned int v2; // ecx
	_DWORD* v3; // rdx
	__int64 v4; // rax
	int v5; // edi
	__int64 v6; // rax
	int v7; // edx
	int v8; // ecx
	int v9; // eax
	_DWORD* v10; // rax

	v2 = *(_DWORD*)(qword_140C65898 + 6864);
	if (v2)
	{
		v4 = sub_140245C00(v2);
		if (!v4)
		{
			v5 = 0;
		LABEL_12:
			v10 = (_DWORD*)a1[2];
			v10[2] = 1;
			*v10 = v5;
			goto LABEL_13;
		}
		v6 = sub_140242D40(*(_DWORD*)(v4 + 8));
		v5 = 0;
		if (!v6)
			goto LABEL_12;
		v7 = *(_DWORD*)(v6 + 12);
		v8 = 0;
		if ((v7 & 4) != 0)
		{
			v9 = sub_1405A1EE0(a1);
		}
		else
		{
			if ((v7 & 8) == 0)
			{
			LABEL_11:
				LOBYTE(v5) = v8 != 0;
				goto LABEL_12;
			}
			v9 = sub_1405A1DF0();
		}
		v8 = v9;
		goto LABEL_11;
	}
	v3 = (_DWORD*)a1[2];
	*v3 = 0;
	v3[2] = 1;
LABEL_13:
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

