//----- (0000000140399DE0) ----------------------------------------------------
__int64 __fastcall sub_140399DE0(__int64 a1, int* a2, int* a3, int a4, int a5)
{
	__int64 v9; // rdx
	int v11; // eax
	unsigned int v12; // ecx
	unsigned int v13; // edx
	unsigned int v14; // ecx
	_QWORD* v15; // rax
	int v16; // eax
	__int64 v17; // rax
	int v18; // r9d
	unsigned int v19; // edx
	unsigned int v20; // ecx
	__int64 v21; // r8
	_QWORD* v22; // rbx
	__int64 v23; // rax
	int v24; // edi
	int v25; // eax
	int v26; // [rsp+50h] [rbp+8h] BYREF
	unsigned int v27; // [rsp+54h] [rbp+Ch]

	v9 = sub_1403AC780(a1 + 160, a2);
	if (!v9)
		return 22i64;
	v11 = *a3;
	v12 = a3[1];
	v26 = v11;
	v27 = v12;
	if (v11 < 300 && v12 != -1 && (v11 || v12 < 0x1F))
	{
	LABEL_31:
		v22 = (_QWORD*)sub_1403AC780(a1 + 160, a2);
		v23 = sub_1403AC780(a1 + 160, a3);
		v24 = a5;
		if (a5)
		{
			if (!v22)
				return 20i64;
			v25 = sub_1403AD100(a1, v22, v23, &v26, 0, 0);
		}
		else
		{
			v25 = sub_1403C17D0(a1, a2, &v26, a4);
		}
		switch (v25)
		{
		case 0:
			if (!v24)
				*(_DWORD*)(a1 + 28568) = 1;
			return 0i64;
		case 2:
			return 14i64;
		case 42:
			return 26i64;
		case 40:
			return 319i64;
		case 39:
			return 318i64;
		}
		return 20i64;
	}
	if (!*(_DWORD*)(v9 + 32))
	{
		v13 = *(_DWORD*)(a1 + 196);
		v14 = 0;
		v26 = 300;
		v27 = -1;
		if (v13)
		{
			v15 = *(_QWORD**)(a1 + 200);
			while (*v15)
			{
				++v14;
				++v15;
				if (v14 >= v13)
					goto LABEL_31;
			}
			v16 = *(_DWORD*)(a1 + 184);
			v27 = v14;
			v26 = v16;
		}
		goto LABEL_31;
	}
	v17 = *(_QWORD*)(v9 + 64);
	if ((*(_DWORD*)(v17 + 340) & 0x100) != 0)
	{
		v26 = 300;
		v27 = -1;
		sub_1403ACC80(qword_140C65898 + 160, v9, &v26);
		if (v26 >= 300 || v27 == -1 || !v26 && v27 >= 0x1F)
			return 20i64;
		goto LABEL_31;
	}
	v19 = -1;
	v20 = 0;
	v21 = 0i64;
	while (1)
	{
		v18 = *(_DWORD*)(v17 + 384);
		if (_bittest(&v18, v20))
			break;
	LABEL_26:
		++v20;
		v21 += 8i64;
		if (v20 >= 0x1F)
			goto LABEL_29;
	}
	if (v20 < *(_DWORD*)(a1 + 164) && *(_QWORD*)(v21 + *(_QWORD*)(a1 + 176)))
	{
		if (v19 == -1)
			v19 = v20;
		goto LABEL_26;
	}
	v19 = v20;
LABEL_29:
	if (v19 != -1)
	{
		v26 = 0;
		v27 = v19;
		goto LABEL_31;
	}
	return 20i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

