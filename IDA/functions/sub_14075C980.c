//----- (000000014075C980) ----------------------------------------------------
__int64 __fastcall sub_14075C980(_QWORD* a1)
{
	int v2; // r13d
	unsigned int v3; // ebp
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r15d
	__int64(__fastcall * v7)(wchar_t**, __int64); // rax
	unsigned int i; // r12d
	unsigned int j; // r14d
	unsigned int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rsi
	int v13; // eax
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // eax
	unsigned __int64 v17; // rcx
	int v18; // ebx
	unsigned __int16* v19; // r10
	unsigned int v20; // ebp
	__int64 v21; // r9
	_DWORD* v22; // rdx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int16* v25; // r10
	__int64 v26; // r9
	_DWORD* v27; // rdx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int16* v30; // r10
	__int64 v31; // r9
	_DWORD* v32; // rdx
	__int64 v33; // rcx
	__int64 v34; // r9
	__int64 v35; // r10
	_DWORD* v36; // rcx
	__int64 v37; // rcx
	int v38; // eax
	__int64 v39; // rax
	__int64 v40; // r10
	__int64 v41; // r9
	_DWORD* v42; // rcx
	__int64 v43; // r8
	__int64 v44; // rdx
	__int64 v45; // r9
	_DWORD* v46; // r8
	__int64 v47; // rdx
	unsigned int v49; // [rsp+70h] [rbp+8h]
	double v50; // [rsp+70h] [rbp+8h]
	double v51; // [rsp+78h] [rbp+10h]
	double v52; // [rsp+78h] [rbp+10h]
	double v53; // [rsp+78h] [rbp+10h]
	double v54; // [rsp+78h] [rbp+10h]
	double v55; // [rsp+78h] [rbp+10h]

	v2 = 1;
	v3 = sub_140056D60(a1, 1u);
	v49 = v3;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = sub_1400578C0((__int64)a1);
	v7 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	for (i = 0; i < 0x20; ++i)
	{
		for (j = 0; ; ++j)
		{
			if (v7)
			{
				v10 = v7(off_140A6A5C8, qword_140C63858);
				goto LABEL_10;
			}
			if (dword_140C63BB0)
				goto LABEL_77;
			if ((int)sub_1402021C0() < 0)
				break;
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C648C8 + 40i64))(qword_140C648C8);
		LABEL_10:
			if (j >= v10)
				break;
			if (qword_140C63848)
			{
				v11 = qword_140C63848(off_140A6A5C8, j, qword_140C63858);
			}
			else
			{
				if (dword_140C63BB0)
				{
					v12 = 0i64;
					goto LABEL_19;
				}
				if ((int)sub_1402021C0() < 0)
				{
					v12 = 0i64;
					goto LABEL_19;
				}
				v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648C8 + 32i64))(qword_140C648C8, j);
			}
			v12 = v11;
		LABEL_19:
			v13 = *(_DWORD*)(v12 + 28);
			if ((!v13 || _bittest(&v13, v3)) && *(_DWORD*)(v12 + 32) == i)
			{
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v14 = a1[2];
				v15 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v14 + 8) = 5;
				*(_QWORD*)v14 = v15;
				a1[2] += 16i64;
				v16 = sub_1400578C0((__int64)a1);
				v17 = *(_QWORD*)(v12 + 16);
				v18 = v16;
				if (v17)
				{
					if (v17 <= qword_140C3FE70)
						v19 = (unsigned __int16*)(v17 + qword_140C3FE68);
					else
						v19 = 0i64;
				}
				else
				{
					v19 = 0i64;
				}
				v20 = v16 - 1;
				v21 = *(_QWORD*)(a1[4] + 160i64);
				if ((unsigned int)(v16 - 1) >= *(_DWORD*)(v21 + 56))
				{
					if ((double)v16 == 0.0)
					{
						v22 = *(_DWORD**)(v21 + 32);
					}
					else
					{
						v51 = (double)v16;
						v22 = (_DWORD*)(*(_QWORD*)(v21 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v51) + HIDWORD(v51)) % (((1i64 << *(_BYTE*)(v21 + 11)) - 1) | 1)));
					}
					while (v22[6] != 3 || (double)v16 != *((double*)v22 + 2))
					{
						v22 = (_DWORD*)*((_QWORD*)v22 + 4);
						if (!v22)
						{
							v22 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v22 = (_DWORD*)(*(_QWORD*)(v21 + 24) + 16i64 * (v16 - 1));
				}
				v23 = a1[2];
				*(_QWORD*)v23 = *(_QWORD*)v22;
				*(_DWORD*)(v23 + 8) = v22[2];
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, (__int64)v22, L"strLuaVariable", v19);
				a1[2] -= 16i64;
				v25 = sub_14034BDD0(v24, *(_DWORD*)(v12 + 4));
				v26 = *(_QWORD*)(a1[4] + 160i64);
				if (v20 >= *(_DWORD*)(v26 + 56))
				{
					if ((double)v18 == 0.0)
					{
						v27 = *(_DWORD**)(v26 + 32);
					}
					else
					{
						v52 = (double)v18;
						v27 = (_DWORD*)(*(_QWORD*)(v26 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v52) + HIDWORD(v52)) % (((1i64 << *(_BYTE*)(v26 + 11)) - 1) | 1)));
					}
					while (v27[6] != 3 || (double)v18 != *((double*)v27 + 2))
					{
						v27 = (_DWORD*)*((_QWORD*)v27 + 4);
						if (!v27)
						{
							v27 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v27 = (_DWORD*)(*(_QWORD*)(v26 + 24) + 16i64 * (v18 - 1));
				}
				v28 = a1[2];
				*(_QWORD*)v28 = *(_QWORD*)v27;
				*(_DWORD*)(v28 + 8) = v27[2];
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, (__int64)v27, L"strName", (unsigned __int16*)v25);
				a1[2] -= 16i64;
				v30 = sub_14034BDD0(v29, *(_DWORD*)(v12 + 8));
				v31 = *(_QWORD*)(a1[4] + 160i64);
				if (v20 >= *(_DWORD*)(v31 + 56))
				{
					if ((double)v18 == 0.0)
					{
						v32 = *(_DWORD**)(v31 + 32);
					}
					else
					{
						v53 = (double)v18;
						v32 = (_DWORD*)(*(_QWORD*)(v31 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v53) + HIDWORD(v53)) % (((1i64 << *(_BYTE*)(v31 + 11)) - 1) | 1)));
					}
					while (v32[6] != 3 || (double)v18 != *((double*)v32 + 2))
					{
						v32 = (_DWORD*)*((_QWORD*)v32 + 4);
						if (!v32)
						{
							v32 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v32 = (_DWORD*)(*(_QWORD*)(v31 + 24) + 16i64 * (v18 - 1));
				}
				v33 = a1[2];
				*(_QWORD*)v33 = *(_QWORD*)v32;
				*(_DWORD*)(v33 + 8) = v32[2];
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, (__int64)v32, L"strDescription", (unsigned __int16*)v30);
				a1[2] -= 16i64;
				v34 = *(_QWORD*)(a1[4] + 160i64);
				v35 = a1[2];
				if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v34 + 56))
				{
					if ((double)v6 == 0.0)
					{
						v36 = *(_DWORD**)(v34 + 32);
					}
					else
					{
						v54 = (double)v6;
						v36 = (_DWORD*)(*(_QWORD*)(v34 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v54) + HIDWORD(v54)) % (((1i64 << *(_BYTE*)(v34 + 11)) - 1) | 1)));
					}
					while (v36[6] != 3 || (double)v6 != *((double*)v36 + 2))
					{
						v36 = (_DWORD*)*((_QWORD*)v36 + 4);
						if (!v36)
						{
							v36 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v36 = (_DWORD*)(*(_QWORD*)(v34 + 24) + 16i64 * (v6 - 1));
				}
				*(_QWORD*)v35 = *(_QWORD*)v36;
				*(_DWORD*)(v35 + 8) = v36[2];
				a1[2] += 16i64;
				v37 = a1[2];
				*(_DWORD*)(v37 + 8) = 3;
				v38 = v2++;
				*(double*)v37 = (double)v38;
				v39 = a1[4];
				v40 = a1[2] + 16i64;
				a1[2] = v40;
				v41 = *(_QWORD*)(v39 + 160);
				if (v20 >= *(_DWORD*)(v41 + 56))
				{
					if ((double)v18 == 0.0)
					{
						v42 = *(_DWORD**)(v41 + 32);
					}
					else
					{
						v55 = (double)v18;
						v42 = (_DWORD*)(*(_QWORD*)(v41 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v55) + HIDWORD(v55)) % (((1i64 << *(_BYTE*)(v41 + 11)) - 1) | 1)));
					}
					while (v42[6] != 3 || (double)v18 != *((double*)v42 + 2))
					{
						v42 = (_DWORD*)*((_QWORD*)v42 + 4);
						if (!v42)
						{
							v42 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v42 = (_DWORD*)(*(_QWORD*)(v41 + 24) + 16i64 * (v18 - 1));
				}
				*(_QWORD*)v40 = *(_QWORD*)v42;
				*(_DWORD*)(v40 + 8) = v42[2];
				v43 = a1[2] + 16i64;
				a1[2] = v43;
				sub_14005EA50((__int64)a1, (__int64*)(v43 - 48), (int*)(v43 - 32), (unsigned int*)(v43 - 16));
				a1[2] -= 48i64;
				sub_1400579E0((__int64)a1, v44, v18);
				v3 = v49;
			}
			v7 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		}
		v7 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	LABEL_77:
		;
	}
	v45 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v45 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v46 = *(_DWORD**)(v45 + 32);
		}
		else
		{
			v50 = (double)v6;
			v46 = (_DWORD*)(*(_QWORD*)(v45 + 32)
				+ 40 * ((unsigned int)(LODWORD(v50) + HIDWORD(v50)) % (((1i64 << *(_BYTE*)(v45 + 11)) - 1) | 1)));
		}
		while (v46[6] != 3 || (double)v6 != *((double*)v46 + 2))
		{
			v46 = (_DWORD*)*((_QWORD*)v46 + 4);
			if (!v46)
			{
				v46 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v46 = (_DWORD*)(*(_QWORD*)(v45 + 24) + 16i64 * (v6 - 1));
	}
	v47 = a1[2];
	*(_QWORD*)v47 = *(_QWORD*)v46;
	*(_DWORD*)(v47 + 8) = v46[2];
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v47, v6);
	return 1i64;
}
// 14075CBD0: variable 'v24' is possibly undefined
// 14075CC8D: variable 'v29' is possibly undefined
// 14075CED6: variable 'v44' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A5C8: using guessed type wchar_t *off_140A6A5C8[2];
// 140B75C80: using guessed type wchar_t aStrdescription_20[15];
// 140B75CA0: using guessed type wchar_t aStrluavariable_0[15];
// 140B75CE0: using guessed type wchar_t aStrname_104[8];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BB0: using guessed type int dword_140C63BB0;
// 140C648C8: using guessed type __int64 qword_140C648C8;

