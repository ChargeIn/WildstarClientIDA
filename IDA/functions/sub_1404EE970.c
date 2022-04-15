//----- (00000001404EE970) ----------------------------------------------------
__int64 __fastcall sub_1404EE970(__int64 a1)
{
	int v1; // esi
	unsigned __int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	int v7; // edx
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rax
	int v12; // edx
	__int64 v13; // r10
	__int64 result; // rax
	__int64 v15; // rax
	int v16; // edx
	__int64 v17; // r10
	__int64 v18; // rax
	unsigned int v19; // edx
	__int64 v20; // rax
	unsigned int v21; // edx
	__int64 v22; // rax
	__int64 v23; // r14
	__int64 v24; // rcx
	int v25; // r15d
	__int64 v26; // rbx
	__int64 v27; // rbp
	unsigned __int64 v28; // r8
	unsigned int v29; // r10d
	unsigned __int64 v30; // rdx
	unsigned __int64 v31; // rax
	int* v32; // rcx
	int* v33; // rax
	__int64 v34; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v37; // rbx
	__int64 v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // rdx
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	_QWORD* v44; // rax
	__int64 v45; // r10
	__int64 v46; // rdx
	int v47; // r11d
	__int64* v48; // rax
	__int64 v49; // rdx
	__int64 v50; // r10

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0i64;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v4 = (unsigned int)(v4 + 1);
			v5 = (unsigned int)v4;
		} while ((unsigned int)v4 < v3);
	}
	if ((dword_140DC3200 & 1) != 0)
	{
		if (dword_140DC320C)
		{
			v7 = dword_140DC3208;
			goto LABEL_12;
		}
	}
	else
	{
		dword_140DC3200 |= 1u;
	}
	dword_140DC320C = 1;
	v6 = sub_140200220(0x934u);
	if (v6)
	{
		v7 = *(_DWORD*)(v6 + 4);
		dword_140DC3208 = v7;
	}
	else
	{
		v7 = 0;
		dword_140DC3208 = 0;
	}
LABEL_12:
	v9 = sub_1405A8A40(v4, v7);
	v10 = qword_140C65898;
	if (!qword_140C65898)
		goto LABEL_43;
	v8 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v8)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8) == 167)
		{
			if ((dword_140DC3200 & 2) != 0)
			{
				if (dword_140DC3214)
				{
					v12 = dword_140DC3210;
				LABEL_22:
					v13 = sub_1405A8A40(v8, v12);
					if ((!v9 || !(unsigned int)sub_140552F50(v9)) && (!v13 || !(unsigned int)sub_140552F50(v13)))
					{
						result = 1i64;
						*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
						*(_QWORD*)(a1 + 16) += 16i64;
						return result;
					}
					goto LABEL_43;
				}
			}
			else
			{
				dword_140DC3200 |= 2u;
			}
			dword_140DC3214 = 1;
			v11 = sub_140200220(0x934u);
			if (v11)
			{
				v12 = *(_DWORD*)(v11 + 8);
				dword_140DC3210 = v12;
			}
			else
			{
				v12 = 0;
				dword_140DC3210 = 0;
			}
			goto LABEL_22;
		}
		v10 = qword_140C65898;
	}
	if (!v10)
		goto LABEL_43;
	v8 = *(_QWORD*)(v10 + 7152);
	if (!v8 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8) != 166)
		goto LABEL_43;
	if ((dword_140DC3200 & 4) == 0)
	{
		dword_140DC3200 |= 4u;
		goto LABEL_34;
	}
	if (!dword_140DC321C)
	{
	LABEL_34:
		dword_140DC321C = 1;
		v15 = sub_140200220(0x934u);
		if (v15)
		{
			v16 = *(_DWORD*)(v15 + 12);
			dword_140DC3218 = v16;
		}
		else
		{
			v16 = 0;
			dword_140DC3218 = 0;
		}
		goto LABEL_38;
	}
	v16 = dword_140DC3218;
LABEL_38:
	v17 = sub_1405A8A40(v8, v16);
	if ((!v9 || !(unsigned int)sub_140552F50(v9)) && (!v17 || !(unsigned int)sub_140552F50(v17)))
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
LABEL_43:
	if ((dword_140DC3200 & 8) == 0)
	{
		dword_140DC3200 |= 8u;
		goto LABEL_46;
	}
	if (!dword_140DC3224)
	{
	LABEL_46:
		dword_140DC3224 = 1;
		v18 = sub_140200220(0x934u);
		if (v18)
		{
			v19 = *(_DWORD*)(v18 + 20);
			dword_140DC3220 = v19;
		}
		else
		{
			v19 = 0;
			dword_140DC3220 = 0;
		}
		goto LABEL_50;
	}
	v19 = dword_140DC3220;
LABEL_50:
	v20 = sub_14044FB30(v8, v19);
	if (!v20 || (v21 = *(_DWORD*)(v20 + 12)) == 0 && !*(_DWORD*)(v20 + 24))
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	v22 = sub_14044F8C0(qword_140C65908, v21);
	v23 = v22;
	if (!v22 || !*(_QWORD*)(v22 + 32))
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	v24 = *(_QWORD*)(v22 + 24);
	v25 = 0;
	v26 = *(_QWORD*)(v24 + 16);
	if (v26 == v24)
		goto LABEL_79;
	v27 = qword_140C65908;
	do
	{
		v28 = *(_QWORD*)(v27 + 80);
		v29 = *(_DWORD*)(v26 + 32);
		v30 = 0i64;
		if (!v28)
			goto LABEL_68;
		while (1)
		{
			v31 = v30 + ((v28 - v30) >> 1);
			v32 = *(int**)(*(_QWORD*)(v27 + 72) + 8 * v31);
			if (v29 < *v32)
			{
				v28 = v30 + ((v28 - v30) >> 1);
				goto LABEL_62;
			}
			if (v29 <= *v32)
				break;
			v30 = v31 + 1;
		LABEL_62:
			if (v30 >= v28)
				goto LABEL_68;
		}
		if (v32)
		{
			if (v32[3])
			{
				v25 = *v32;
				v33 = (int*)sub_14044F870(v27, v32[1]);
				if (v33)
				{
					if (v33[3])
					{
						v1 = v25;
						v25 = *v33;
						break;
					}
				}
			}
		}
	LABEL_68:
		v34 = *(_QWORD*)(v26 + 24);
		if (v34)
		{
			v26 = *(_QWORD*)(v26 + 24);
			for (i = *(_QWORD*)(v34 + 16); i; i = *(_QWORD*)(i + 16))
				v26 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v26 + 8); v26 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v26 = j;
			if (*(_QWORD*)(v26 + 24) != j)
				v26 = j;
		}
	} while (v26 != *(_QWORD*)(v23 + 24));
LABEL_79:
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v37 = *(_QWORD*)(a1 + 16);
	v38 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v37 + 8) = 5;
	*(_QWORD*)v37 = v38;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v37) = sub_1400578C0(a1);
	v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v37);
	v40 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v40 = *v39;
	*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v40, L"nCategoryId", v25);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v37);
	*(_QWORD*)v42 = *v41;
	*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v43, L"nSubCategoryId", v1);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v44 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v37);
	*(_QWORD*)v45 = *v44;
	*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v46, L"nOfferGroupId", v47);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v48 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v37);
	v49 = *v48;
	*(_QWORD*)v50 = *v48;
	*(_DWORD*)(v50 + 8) = *((_DWORD*)v48 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v49, v37);
	return 1i64;
}
// 1404EEA07: variable 'v4' is possibly undefined
// 1404EEA91: variable 'v8' is possibly undefined
// 1404EEAB1: variable 'v13' is possibly undefined
// 1404EEB7A: variable 'v17' is possibly undefined
// 1404EEDDD: variable 'v42' is possibly undefined
// 1404EEDEF: variable 'v43' is possibly undefined
// 1404EEE20: variable 'v45' is possibly undefined
// 1404EEE32: variable 'v46' is possibly undefined
// 1404EEE32: variable 'v47' is possibly undefined
// 1404EEE5B: variable 'v50' is possibly undefined
// 140B0DC28: using guessed type wchar_t aNcategoryid_0[12];
// 140B0DC40: using guessed type wchar_t aNsubcategoryid[15];
// 140B0DC60: using guessed type wchar_t aNoffergroupid_0[14];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140DC3200: using guessed type int dword_140DC3200;
// 140DC3208: using guessed type int dword_140DC3208;
// 140DC320C: using guessed type int dword_140DC320C;
// 140DC3210: using guessed type int dword_140DC3210;
// 140DC3214: using guessed type int dword_140DC3214;
// 140DC3218: using guessed type int dword_140DC3218;
// 140DC321C: using guessed type int dword_140DC321C;
// 140DC3220: using guessed type int dword_140DC3220;
// 140DC3224: using guessed type int dword_140DC3224;

