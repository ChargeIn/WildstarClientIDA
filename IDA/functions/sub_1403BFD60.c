//----- (00000001403BFD60) ----------------------------------------------------
__int64 __fastcall sub_1403BFD60(__int64 a1, unsigned int* a2, int* a3, int a4)
{
	int* v5; // rsi
	__int64 result; // rax
	__int64 v9; // rax
	int v10; // r15d
	int v11; // edx
	__int64 v12; // rax
	__int64 v13; // rcx
	unsigned int v14; // edi
	unsigned int v15; // eax
	__int64 v16; // rax
	__int64 v17; // r9
	__int64 v18; // rcx
	__int64 v19; // r12
	__int64 v20; // rdx
	__int64 v21; // rbx
	unsigned int v22; // eax
	__int64 v23; // rdx
	__int64 v24; // rcx
	__int64 v25; // rax
	int v26; // r8d
	unsigned int v27; // edx
	int v28; // eax
	__int64 v29; // rax
	__int64 v30; // r13
	__int64 v31; // r15
	__int64 v32; // rbx
	__int64 v33; // rbx
	int v34; // edi
	unsigned __int64 v35; // rsi
	int v36; // edi
	__int64 v37; // rbx
	int v38; // eax
	__int64 v39; // rdi
	__int64 v40; // rbx
	int v41; // eax
	__int64 v42; // rax
	unsigned int v43; // edx
	unsigned int v44; // edx
	int v45; // eax
	__int64 v46; // rcx
	int v47; // edx
	__int64 v48; // [rsp+20h] [rbp-48h]
	unsigned int v49; // [rsp+78h] [rbp+10h]
	__int64 v50; // [rsp+78h] [rbp+10h]

	v5 = a3;
	if (!*a2)
	{
		*a3 = 5;
		return 0i64;
	}
	v9 = *(_QWORD*)(a1 + 25744);
	v10 = 0;
	v11 = 0;
	if (v9)
		v11 = *(_DWORD*)(v9 + 264);
	v12 = sub_1403D90D0(a1, v11);
	v14 = sub_1403D3520(v13, *a2, *(_QWORD*)(a1 + 120), v12);
	v15 = sub_1403C0190(a1, a2[1]);
	if (v15)
		v14 = v15;
	*a2 = v14;
	v49 = v14;
	v16 = sub_1403ACD90(qword_140C65B70, v14, *(_QWORD*)(a1 + 120));
	v17 = *(_QWORD*)(a1 + 5512);
	v18 = *(_QWORD*)(v17 + 8);
	v19 = v16;
	v20 = v17;
	while (v18)
	{
		if (*(_DWORD*)(v18 + 32) < *a2)
		{
			v18 = *(_QWORD*)(v18 + 24);
		}
		else
		{
			v20 = v18;
			v18 = *(_QWORD*)(v18 + 16);
		}
	}
	if (v20 == v17 || (v48 = v20, *a2 < *(_DWORD*)(v20 + 32)))
		v48 = *(_QWORD*)(a1 + 5512);
	if (v48 != v17)
	{
		v21 = *(_QWORD*)(v48 + 40);
		v22 = sub_1403BFBF0((_QWORD*)a1, v14);
		if (v22 != *a2)
			a2[2] = *a2;
		*a2 = v22;
		result = sub_1403ACD90(qword_140C65B70, v22, *(_QWORD*)(a1 + 120));
		v19 = result;
		if (!result)
		{
			*v5 = 4;
			return result;
		}
		if (!a4 || *(_DWORD*)(v21 + 12) || *(_DWORD*)(v21 + 4))
			return v19;
		v23 = *(_QWORD*)(a1 + 5512);
		v24 = v23;
		v25 = *(_QWORD*)(v23 + 8);
		while (v25)
		{
			if (*(_DWORD*)(v25 + 32) < v14)
			{
				v25 = *(_QWORD*)(v25 + 24);
			}
			else
			{
				v24 = v25;
				v25 = *(_QWORD*)(v25 + 16);
			}
		}
		if (v24 == v23 || (v50 = v24, v14 < *(_DWORD*)(v24 + 32)))
			v50 = *(_QWORD*)(a1 + 5512);
		if (v50 != v23)
			v10 = **(_DWORD**)(v50 + 40);
		v26 = v10;
		v27 = v14;
		goto LABEL_77;
	}
	v28 = dword_140C45E80;
	if (*(_DWORD*)qword_140C63750 < dword_140C45E80)
		v28 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C45E90 + v28)
		|| *(_DWORD*)(*(_QWORD*)(v19 + 112) + 24i64) != 7
		|| *(_DWORD*)(a1 + 25444))
	{
		v46 = *(_QWORD*)(v19 + 112);
		v47 = *(_DWORD*)(v46 + 24);
		if (((v47 - 2) & 0xFFFFFFFA) == 0 && v47 != 3 && !*(_DWORD*)(v46 + 388))
			*v5 = 285;
		return v19;
	}
	v29 = sub_1403ACD90(qword_140C65B70, a2[1], *(_QWORD*)(a1 + 120));
	v30 = *(_QWORD*)(a1 + 120);
	v31 = v29;
	if ((*(_DWORD*)(*(_QWORD*)(v29 + 112) + 36i64) & 0xFFFFFFFD) != 0 || (v32 = *(_QWORD*)(v30 + 5640)) == 0)
	{
	LABEL_45:
		v33 = *(_QWORD*)(v30 + 5640);
		v34 = **(_DWORD**)(v31 + 112);
		if (v33)
		{
			while (*(_DWORD*)(v33 + 4) != 1
				|| v34 != *(_DWORD*)(v33 + 12)
				|| !*(_QWORD*)(v33 + 32)
				|| !(unsigned int)sub_140195F70(v33 + 16))
			{
				v33 = *(_QWORD*)(v33 + 136);
				if (!v33)
					goto LABEL_51;
			}
			v38 = 15;
		}
		else
		{
		LABEL_51:
			if (*(_QWORD*)(v31 + 56))
			{
				v35 = 0i64;
				while (1)
				{
					v36 = *(_DWORD*)(v35 + *(_QWORD*)(v31 + 56) + 4);
					if (v36)
					{
						v37 = *(_QWORD*)(v30 + 5640);
						if (v37)
							break;
					}
				LABEL_60:
					v35 += 4i64;
					if (v35 >= 0xC)
						goto LABEL_61;
				}
				while (*(_DWORD*)(v37 + 4) != 2
					|| v36 != *(_DWORD*)(v37 + 12)
					|| !*(_QWORD*)(v37 + 32)
					|| !(unsigned int)sub_140195F70(v37 + 16))
				{
					v37 = *(_QWORD*)(v37 + 136);
					if (!v37)
						goto LABEL_60;
				}
				v38 = 16;
			}
			else
			{
			LABEL_61:
				v38 = 0;
			}
		}
	}
	else
	{
		while (*(_DWORD*)(v32 + 4) || !*(_QWORD*)(v32 + 32) || !(unsigned int)sub_140195F70(v32 + 16))
		{
			v32 = *(_QWORD*)(v32 + 136);
			if (!v32)
				goto LABEL_45;
		}
		v38 = 14;
	}
	v5 = a3;
	*a3 = v38;
	if (v38)
		return 0i64;
	v39 = *(_QWORD*)(a1 + 120);
	v40 = 0i64;
	while (1)
	{
		v41 = sub_1403B3320(v40, v19, v39);
		if (v41)
		{
			if (v41 != 317)
				break;
		}
		if ((unsigned __int64)++v40 >= 2)
		{
			v41 = 0;
			break;
		}
	}
	*a3 = v41;
	if (v41)
		return 0i64;
	v42 = sub_140564F40(qword_140C65B70, *a2, 0);
	if (v42)
	{
		a2[2] = v43;
		v44 = *(_DWORD*)(v42 + 4);
		*a2 = v44;
		result = sub_1403ACD90(qword_140C65B70, v44, *(_QWORD*)(a1 + 120));
		v19 = result;
		if (!result)
		{
			*a3 = 4;
			return result;
		}
		if (a4)
		{
			v27 = v49;
			v26 = 0;
		LABEL_77:
			v45 = sub_1403C0620(a1, v27, v26);
			*v5 = v45;
			if (v45 && v45 != 317)
				return 0i64;
		}
	}
	return v19;
}
// 1403C0076: conditional instruction was optimized away because eax.4 is in (E..10)
// 1403C00B1: conditional instruction was optimized away because eax.4 is in (1..13C|>=13Eu)
// 1403BFDCF: variable 'v13' is possibly undefined
// 1403C00D2: variable 'v43' is possibly undefined
// 140C45E80: using guessed type int dword_140C45E80;
// 140C45E90: using guessed type int dword_140C45E90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65B70: using guessed type __int64 qword_140C65B70;

