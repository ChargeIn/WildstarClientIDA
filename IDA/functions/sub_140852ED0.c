//----- (0000000140852ED0) ----------------------------------------------------
char __fastcall sub_140852ED0(_QWORD* a1, int a2, _QWORD* a3, char a4)
{
	__int64 v8; // rax
	int v9; // edx
	_DWORD* v10; // rax
	_DWORD* v11; // rcx
	__int64 v12; // rcx

	while (1)
	{
		v8 = a1[4];
		if (!v8)
			goto LABEL_10;
		while (*(_DWORD*)(v8 + 64) != a2)
		{
			v8 = *(_QWORD*)(v8 + 16);
			if (!v8)
				goto LABEL_10;
		}
		v9 = *(unsigned __int8*)(v8 + 72);
		v10 = (_DWORD*)*a3;
		if (!v9)
			break;
		v11 = (_DWORD*)a3[1];
		if (v10 == v11)
		{
		LABEL_9:
			sub_14087C4C0((__int64)a3, v9);
		}
		else
		{
			while (*v10 != v9)
			{
				if (++v10 == v11)
					goto LABEL_9;
			}
		}
	LABEL_10:
		if (!a4)
		{
			v12 = a1[9];
			if (v12)
			{
				a4 = 1;
				if (sub_14085AB30(v12, a2, a3))
					return 1;
			}
		}
		a1 = (_QWORD*)a1[8];
		if (!a1)
			return 0;
	}
	a3[1] = v10;
	sub_14087C4C0((__int64)a3, 0);
	return 1;
}

