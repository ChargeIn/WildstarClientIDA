//----- (00000001403DA850) ----------------------------------------------------
__int64 __fastcall sub_1403DA850(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
	unsigned int v4; // esi
	unsigned int v5; // ebx
	int* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	int v10; // ecx
	unsigned int* v11; // rax
	__int64 v13; // rax
	__int64 v14; // rdi

	v4 = 17512;
	v5 = 17512;
	switch (a2)
	{
	case 0:
		v6 = sub_1400B5DF0(qword_140C658F0, a3, 0i64);
		if (!v6)
			goto LABEL_26;
		goto LABEL_3;
	case 6:
		v8 = sub_140248AC0(a3);
		if (!v8)
			goto LABEL_26;
		v7 = sub_1403D8EB0(qword_140C658F0, v8);
		goto LABEL_23;
	case 7:
		v9 = sub_140211B00(a3);
		if (v9)
			v5 = *(_DWORD*)(v9 + 12);
		goto LABEL_26;
	}
	if (a2 != 2)
	{
		if (a2 != 8)
		{
			if (a2 != 9)
				goto LABEL_26;
			v7 = sub_1403D8F70(qword_140C658F0, a3);
			goto LABEL_23;
		}
		v13 = sub_1401E8C20(a3);
		v14 = v13;
		if (!v13)
			goto LABEL_26;
		v6 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v13 + 8), 0i64);
		if (!v6)
		{
			if (*(_DWORD*)(v14 + 28))
				v5 = 19830;
			goto LABEL_26;
		}
	LABEL_3:
		v7 = sub_1403D8D00(qword_140C658F0, v6);
	LABEL_23:
		if (v7)
			v5 = *(_DWORD*)(v7 + 28);
		else
			v5 = 0;
	LABEL_26:
		if (v5)
			return v5;
		return v4;
	}
	v10 = 3;
	v11 = (unsigned int*)&unk_140AF6B24;
	while (a4 < *v11)
	{
		--v11;
		--v10;
		if ((__int64)v11 < (__int64)&unk_140AF6B18)
			return 19830i64;
	}
	return dword_140C58BC8[v10];
}
// 140C58BC8: using guessed type unsigned int dword_140C58BC8[4];
// 140C658F0: using guessed type __int64 qword_140C658F0;

