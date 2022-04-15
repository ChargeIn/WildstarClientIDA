//----- (00000001400D2120) ----------------------------------------------------
__int64 __fastcall sub_1400D2120(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	__int64 v6; // rbp
	int v9; // ecx
	int v10; // eax
	unsigned int v11; // ebx
	int* v12; // rax
	int v13; // ecx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rcx
	bool v17; // dl
	__int64 v18; // rax
	__int64 v19; // rcx
	int v20; // edx
	char v21[40]; // [rsp+50h] [rbp-28h] BYREF
	int v22; // [rsp+80h] [rbp+8h] BYREF

	v6 = a2;
	if (*(char*)(a1 + 28) >= 0)
		return 1i64;
	if ((unsigned int)a2 <= 4)
	{
		v9 = *a3;
		*(_DWORD*)(a1 + 904) = *a3;
		*(_DWORD*)(a1 + 908) = a3[1];
		*(_DWORD*)(a1 + 8i64 * a2 + 864) = v9;
		*(_DWORD*)(a1 + 8i64 * a2 + 868) = *(_DWORD*)(a1 + 908);
		v10 = sub_14018CDF0();
		*(_DWORD*)(a1 + 932) = v10;
		*(_DWORD*)(a1 + 4 * v6 + 912) = v10;
	}
	if ((*(_BYTE*)(a1 + 656) & 0x40) != 0 && !(_DWORD)v6)
	{
		v11 = 0;
		while (1)
		{
			v12 = (int*)sub_1400DF5A0(a1, (__int64)v21, v11);
			if (*a3 >= *v12 && *a3 < v12[2])
			{
				v13 = a3[1];
				if (v13 >= v12[1] && v13 < v12[3])
					break;
			}
			if ((int)++v11 >= 8)
				goto LABEL_13;
		}
		v17 = !v11 || v11 - 6 <= 1;
		sub_1400CA2D0(a1, v17, v11 <= 2, v11 - 2 <= 2, v11 - 4 <= 2);
		return 0i64;
	}
LABEL_13:
	if ((*(_BYTE*)(a1 + 656) & 2) == 0)
		goto LABEL_19;
	v14 = *(_QWORD*)(a1 + 472);
	if (v14 && sub_1400C4C10(v14, v6, a3))
		sub_1400CAC90((_QWORD*)a1);
	v15 = *(_QWORD*)(a1 + 472);
	if (!v15 || (*(_BYTE*)(v15 + 1392) & 4) == 0)
	{
	LABEL_19:
		if ((*(_BYTE*)(a1 + 656) & 4) != 0)
		{
			v16 = *(_QWORD*)(a1 + 464);
			if (v16 && sub_1400C4C10(v16, v6, a3))
			{
				sub_1400CAE90((_QWORD*)a1);
				return 0i64;
			}
			v18 = *(_QWORD*)(a1 + 464);
			if (v18 && (*(_BYTE*)(v18 + 1392) & 4) != 0)
				return 0i64;
		}
		v19 = *(_QWORD*)(a1 + 656);
		if ((v19 & 0x20) == 0
			|| (v19 & 0x400000) != 0
			&& (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 2876i64) & *(_DWORD*)(*(_QWORD*)(a1 + 32) + 108i64)) == 0
			|| (_DWORD)v6)
		{
			v20 = *a3;
			v22 = 0;
			*(_DWORD*)(a1 + 848) = v20;
			*(_DWORD*)(a1 + 852) = a3[1];
			sub_1400D4070(
				a1,
				0x34u,
				(char*)a1,
				"iiibi>b",
				v6,
				v20,
				*(_DWORD*)(a1 + 852),
				a4,
				*(_DWORD*)(*(_QWORD*)(a1 + 32) + 2876i64),
				&v22);
			if (!v22 && (*(_DWORD*)(a1 + 656) & 0x4000i64) != 0)
				return 1i64;
		}
		else
		{
			sub_1400CA2D0(a1, 1, 1, 1, 1);
		}
	}
	return 0i64;
}
// 1400D2120: using guessed type char var_28[40];

