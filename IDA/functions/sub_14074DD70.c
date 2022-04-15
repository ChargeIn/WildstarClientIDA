//----- (000000014074DD70) ----------------------------------------------------
__int64 __fastcall sub_14074DD70(_QWORD* a1)
{
	__int64 v2; // r14
	__int64 v4; // rdi
	__int64 v5; // rax
	int v6; // r15d
	unsigned int v7; // r8d
	__int64 v8; // rdx
	__int64 v9; // rdi
	_QWORD* v10; // rax
	__int64 v11; // rdx
	int v12; // r10d
	__int64 v13; // rcx
	_QWORD* v14; // rax
	unsigned __int16* v15; // r10
	unsigned __int16* v16; // r8
	__int64 v17; // rax
	unsigned int v18; // ecx
	__int64 v19; // rdi
	_QWORD* v20; // rax
	__int64 v21; // rdx
	int v22; // r10d
	__int64 v23; // rcx
	unsigned int v24; // edi
	unsigned int v25; // ebp
	__int64 v26; // rax
	__int64 v27; // rsi
	_DWORD* v28; // rax
	unsigned int v29; // ecx
	__int64 v30; // rsi
	_QWORD* v31; // rax
	__int64 v32; // rdx
	int v33; // r10d
	__int64 v34; // rcx
	__int64 v35; // rdx
	_QWORD* v36; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = sub_1400578C0((__int64)a1);
	if (!*(_QWORD*)(v2 + 24))
	{
		v7 = 363;
		switch (*(_DWORD*)v2)
		{
		case 0:
		case 5:
			v7 = 70;
			break;
		case 1:
		case 0xA:
		case 0xE:
			v7 = 65;
			break;
		case 2:
			v7 = 78;
			break;
		case 8:
		case 0xB:
		case 0xF:
			v7 = 162;
			break;
		default:
			break;
		}
		v9 = sub_1401E98E0(v7);
		if (!v9)
			goto LABEL_12;
		v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		v11 = a1[2];
		*(_QWORD*)v11 = *v10;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v11, L"nCategoryId", v12);
		a1[2] -= 16i64;
		sub_14034BDD0(v13, *(_DWORD*)(v9 + 4));
		v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		v16 = L"strCategoryName";
		goto LABEL_28;
	}
	v17 = *(_QWORD*)(v2 + 16);
	if (v17)
	{
		v18 = *(_DWORD*)(v17 + 28);
		if (!v18)
			goto LABEL_29;
		v19 = sub_1401E98E0(v18);
		if (v19)
		{
			v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			v21 = a1[2];
			*(_QWORD*)v21 = *v20;
			*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v21, L"nCategoryId", v22);
			a1[2] -= 16i64;
			sub_14034BDD0(v23, *(_DWORD*)(v19 + 4));
			v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			v16 = L"strCategoryName";
		LABEL_28:
			v35 = a1[2];
			*(_QWORD*)v35 = *v14;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v14 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v35, v16, v15);
			a1[2] -= 16i64;
		LABEL_29:
			v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			v8 = a1[2];
			*(_QWORD*)v8 = *v36;
			*(_DWORD*)(v8 + 8) = *((_DWORD*)v36 + 2);
			goto LABEL_30;
		}
	}
	else
	{
		v24 = 0;
		v25 = sub_1402151F0();
		if (v25)
		{
			while (1)
			{
				v26 = sub_1402152A0(v24);
				v27 = v26;
				if (v26)
				{
					v28 = (_DWORD*)sub_140214E00(*(_DWORD*)(v26 + 16));
					if (v28)
					{
						v8 = **(unsigned int**)(v2 + 24);
						if (*v28 == (_DWORD)v8)
						{
							v29 = *(_DWORD*)(v27 + 28);
							if (v29)
							{
								v30 = sub_1401E98E0(v29);
								if (v30)
									break;
							}
						}
					}
				}
				if (++v24 >= v25)
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					goto LABEL_30;
				}
			}
			v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			v32 = a1[2];
			*(_QWORD*)v32 = *v31;
			*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v32, L"nCategoryId", v33);
			a1[2] -= 16i64;
			sub_14034BDD0(v34, *(_DWORD*)(v30 + 4));
			v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
			v16 = L"strCategoryName";
			goto LABEL_28;
		}
	}
LABEL_12:
	*(_DWORD*)(a1[2] + 8i64) = 0;
LABEL_30:
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v8, v6);
	return 1i64;
}
// 14074DF6B: conditional instruction was optimized away because rax.8!=0
// 14074DEA3: variable 'v12' is possibly undefined
// 14074DEB0: variable 'v13' is possibly undefined
// 14074DF34: variable 'v22' is possibly undefined
// 14074DF41: variable 'v23' is possibly undefined
// 14074E00A: variable 'v33' is possibly undefined
// 14074E017: variable 'v34' is possibly undefined
// 14074E054: variable 'v15' is possibly undefined
// 14074E08C: variable 'v8' is possibly undefined
// 140B4ABE8: using guessed type wchar_t aStrcategorynam_2[16];
// 140B4AC08: using guessed type wchar_t aNcategoryid_5[12];
// 140B4AC20: using guessed type wchar_t aStrcategorynam_1[16];
// 140B4AC40: using guessed type wchar_t aNcategoryid_4[12];
// 140B4AC58: using guessed type wchar_t aStrcategorynam_0[16];
// 140B4AC78: using guessed type wchar_t aNcategoryid_3[12];

