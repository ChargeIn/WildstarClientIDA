//----- (00000001404B1290) ----------------------------------------------------
__int64 __fastcall sub_1404B1290(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
	__int64 v5; // rdi
	unsigned int v6; // r14d
	__int64 v7; // r15
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // esi
	unsigned int v12; // r12d
	int v13; // r13d
	unsigned __int64 v14; // rdx
	__int64 v15; // rbx
	__int64 v16; // rdx
	__int64 v17; // r8
	__int64 v18; // rcx
	_QWORD* v19; // rax
	unsigned __int64 v20; // rax
	int* v21; // rax
	__int64 v22; // rcx
	unsigned __int64 v23; // rax
	__int64 v24; // r13
	_QWORD* v25; // rbx
	_QWORD* v26; // r12
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // r15
	int* v30; // r13
	int* v31; // rdi
	unsigned __int64 v32; // r14
	int* v33; // rsi
	unsigned __int64 v34; // r8
	__int64 v35; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v38; // rsi
	_QWORD* v39; // rbx
	_QWORD* v40; // r12
	__int64 v41; // rcx
	__int64 v42; // rax
	__int64 v43; // r13
	int* v44; // r15
	_DWORD* v45; // rdi
	unsigned __int64 v46; // r14
	int* v47; // rsi
	__int64 v48; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v51; // rsi
	unsigned __int64 v52; // r14
	__int64 v53; // rcx
	unsigned __int64 v54; // rax
	__int64 v55; // rbx
	__int64 v56; // rax
	int v57; // eax
	unsigned int* v58; // rcx
	int v59; // ebx
	__int64 v60; // r9
	_DWORD* v61; // rdx
	__int64 v62; // rcx
	__int64 v63; // rcx
	int v64; // eax
	__int64 v65; // rax
	__int64 v66; // r10
	__int64 v67; // r9
	_DWORD* v68; // rcx
	__int64 v69; // r8
	_DWORD* v70; // rdx
	__int64 v71; // rcx
	__int64 v72; // rax
	__int64 v73; // r9
	_DWORD* v74; // rcx
	__int64 v75; // rdx
	int v76; // eax
	__int64 v77; // rcx
	_DWORD* v78; // rdx
	__int64 v79; // rcx
	__int64 v80; // rcx
	__int64 v81; // [rsp+20h] [rbp-61h] BYREF
	int* v82; // [rsp+28h] [rbp-59h] BYREF
	unsigned __int64 v83; // [rsp+30h] [rbp-51h]
	int v84; // [rsp+38h] [rbp-49h] BYREF
	__int64 v85; // [rsp+40h] [rbp-41h]
	unsigned __int64 v86[2]; // [rsp+48h] [rbp-39h] BYREF
	__int64(__fastcall * *v87)(); // [rsp+58h] [rbp-29h] BYREF
	int v88; // [rsp+60h] [rbp-21h]
	__int64 v89; // [rsp+68h] [rbp-19h]
	int v90; // [rsp+70h] [rbp-11h]
	__int64 v91; // [rsp+E0h] [rbp+5Fh]
	double v92; // [rsp+E0h] [rbp+5Fh]
	double v93; // [rsp+E0h] [rbp+5Fh]
	double v94; // [rsp+E0h] [rbp+5Fh]
	int v97; // [rsp+F8h] [rbp+77h]

	HIDWORD(v91) = HIDWORD(a1);
	v5 = (int)a4;
	v6 = a3;
	v85 = qword_140C659D8;
	v7 = a2;
	if (a4 > 1)
	{
		*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
		return 0i64;
	}
	v97 = 1;
	if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
		sub_14005E2C0(a2);
	v9 = *(_QWORD*)(v7 + 16);
	v10 = sub_14005C1B0(v7, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(v7 + 16) += 16i64;
	v11 = a5;
	v12 = 0;
	v13 = sub_1400578C0(v7);
	v14 = 0i64;
	LODWORD(v91) = v13;
	v82 = 0i64;
	v83 = 0i64;
	if (a5)
	{
		v81 = v91;
	LABEL_23:
		v24 = 32 * v5;
		v86[0] = 32 * v5;
		v25 = *(_QWORD**)(32 * v5 + v85 + 8);
		v26 = v25;
		v27 = v25[1];
		v28 = v27;
		if (v27)
		{
			do
			{
				if (v6 >= *(_DWORD*)(v28 + 32))
				{
					v28 = *(_QWORD*)(v28 + 24);
				}
				else
				{
					v26 = (_QWORD*)v28;
					v28 = *(_QWORD*)(v28 + 16);
				}
			} while (v28);
			do
			{
				if (*(_DWORD*)(v27 + 32) < v6)
				{
					v27 = *(_QWORD*)(v27 + 24);
				}
				else
				{
					v25 = (_QWORD*)v27;
					v27 = *(_QWORD*)(v27 + 16);
				}
			} while (v27);
		}
		if (v25 != v26)
		{
			v29 = v81;
			v30 = v82;
			do
			{
				v31 = (int*)v25[5];
				if (v31)
				{
					if ((unsigned int)sub_1404AF7D0((_DWORD*)v25[5], v6))
					{
						if (!v11)
						{
							v84 = *v31;
							sub_1400293C0(v29, (__int64)&v87, &v84);
						}
						v32 = v83;
						v33 = sub_14018DB00((__int64)v30, v83 + 1, 8i64);
						v34 = 8 * v83;
						*(_QWORD*)&v33[2 * v83] = v31;
						if (v30 != v33)
						{
							sub_1407DB590(v33, v30, v34);
							if (v30)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
							v30 = v33;
							v82 = v33;
						}
						v14 = v32 + 1;
						v6 = a3;
						v83 = v14;
					}
					else
					{
						v14 = v83;
					}
				}
				v35 = v25[3];
				if (v35)
				{
					v25 = (_QWORD*)v25[3];
					for (i = *(_QWORD**)(v35 + 16); i; i = (_QWORD*)i[2])
						v25 = i;
				}
				else
				{
					for (j = v25[1]; v25 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v25 = (_QWORD*)j;
					if (v25[3] != j)
						v25 = (_QWORD*)j;
				}
				v11 = a5;
			} while (v25 != v26);
			v7 = a2;
			v24 = v86[0];
		}
		v38 = v85;
		v39 = *(_QWORD**)(v24 + v85 + 8);
		v40 = v39;
		v41 = v39[1];
		v42 = v41;
		if (v41)
		{
			do
				v42 = *(_QWORD*)(v42 + 24);
			while (v42);
			do
			{
				if (*(_DWORD*)(v41 + 32) == -1)
				{
					v39 = (_QWORD*)v41;
					v41 = *(_QWORD*)(v41 + 16);
				}
				else
				{
					v41 = *(_QWORD*)(v41 + 24);
				}
			} while (v41);
		}
		if (v39 != v40)
		{
			v43 = v81;
			v44 = v82;
			do
			{
				v45 = (_DWORD*)v39[5];
				if (v45)
				{
					if ((unsigned int)sub_1404AF7D0((_DWORD*)v39[5], v6))
					{
						if (!a5)
						{
							LODWORD(v81) = *v45;
							v84 = v81;
							if (*(_QWORD*)(qword_140C65898 + 120))
							{
								sub_1400EE810(v38 + 96, &v84);
								sub_1404B2680(v38);
							}
							sub_1400293C0(v43, (__int64)&v87, (int*)&v81);
						}
						v46 = v83;
						v47 = sub_14018DB00((__int64)v44, v83 + 1, 8i64);
						*(_QWORD*)&v47[2 * v46] = v45;
						if (v44 != v47)
						{
							sub_1407DB590(v47, v44, 8 * v46);
							if (v44)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
							v44 = v47;
							v82 = v47;
						}
						v38 = v85;
						v14 = v46 + 1;
						v83 = v46 + 1;
					}
					else
					{
						v14 = v83;
					}
				}
				v48 = v39[3];
				if (v48)
				{
					v39 = (_QWORD*)v39[3];
					for (k = *(_QWORD**)(v48 + 16); k; k = (_QWORD*)k[2])
						v39 = k;
				}
				else
				{
					for (m = v39[1]; v39 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
						v39 = (_QWORD*)m;
					if (v39[3] != m)
						v39 = (_QWORD*)m;
				}
				v6 = a3;
			} while (v39 != v40);
			v7 = a2;
		}
		if (v14 > 1)
		{
			sub_1404B3F40((__int64*)&v82, (__int64)sub_1404AF890);
			v14 = v83;
		}
		v13 = v91;
		v51 = (__int64)v82;
		if (v14)
		{
			v52 = 0i64;
			do
			{
				v53 = *(_QWORD*)(v7 + 32);
				v87 = off_140B569F0;
				v89 = v7;
				v54 = *(_QWORD*)(v53 + 112);
				v90 = 1;
				if (*(_QWORD*)(v53 + 120) >= v54)
					sub_14005E2C0(v7);
				v55 = *(_QWORD*)(v7 + 16);
				v56 = sub_14005C1B0(v7, 0, 0);
				*(_DWORD*)(v55 + 8) = 5;
				*(_QWORD*)v55 = v56;
				*(_QWORD*)(v7 + 16) += 16i64;
				v57 = sub_1400578C0(v7);
				v58 = *(unsigned int**)(v51 + 8 * v52);
				v59 = v57;
				v88 = v57;
				sub_1404B39C0(v58, (__int64)&v87);
				v60 = *(_QWORD*)(*(_QWORD*)(v7 + 32) + 160i64);
				if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v60 + 56))
				{
					if ((double)v13 == 0.0)
					{
						v61 = *(_DWORD**)(v60 + 32);
					}
					else
					{
						v92 = (double)v13;
						v61 = (_DWORD*)(*(_QWORD*)(v60 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v92) + HIDWORD(v92)) % (((1i64 << *(_BYTE*)(v60 + 11)) - 1) | 1)));
					}
					while (v61[6] != 3 || (double)v13 != *((double*)v61 + 2))
					{
						v61 = (_DWORD*)*((_QWORD*)v61 + 4);
						if (!v61)
						{
							v61 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v61 = (_DWORD*)(*(_QWORD*)(v60 + 24) + 16i64 * (v13 - 1));
				}
				v62 = *(_QWORD*)(v7 + 16);
				*(_QWORD*)v62 = *(_QWORD*)v61;
				*(_DWORD*)(v62 + 8) = v61[2];
				*(_QWORD*)(v7 + 16) += 16i64;
				v63 = *(_QWORD*)(v7 + 16);
				*(_DWORD*)(v63 + 8) = 3;
				v64 = v97++;
				*(double*)v63 = (double)v64;
				v65 = *(_QWORD*)(v7 + 32);
				v66 = *(_QWORD*)(v7 + 16) + 16i64;
				*(_QWORD*)(v7 + 16) = v66;
				v67 = *(_QWORD*)(v65 + 160);
				if ((unsigned int)(v59 - 1) >= *(_DWORD*)(v67 + 56))
				{
					if ((double)v59 == 0.0)
					{
						v68 = *(_DWORD**)(v67 + 32);
					}
					else
					{
						v93 = (double)v59;
						v68 = (_DWORD*)(*(_QWORD*)(v67 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v93) + HIDWORD(v93)) % (((1i64 << *(_BYTE*)(v67 + 11)) - 1) | 1)));
					}
					while (v68[6] != 3 || (double)v59 != *((double*)v68 + 2))
					{
						v68 = (_DWORD*)*((_QWORD*)v68 + 4);
						if (!v68)
						{
							v68 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v68 = (_DWORD*)(*(_QWORD*)(v67 + 24) + 16i64 * (v59 - 1));
				}
				*(_QWORD*)v66 = *(_QWORD*)v68;
				*(_DWORD*)(v66 + 8) = v68[2];
				v69 = *(_QWORD*)(v7 + 16) + 16i64;
				*(_QWORD*)(v7 + 16) = v69;
				sub_14005EA50(v7, (__int64*)(v69 - 48), (int*)(v69 - 32), (unsigned int*)(v69 - 16));
				*(_QWORD*)(v7 + 16) -= 48i64;
				if (v59 >= 0)
				{
					v70 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v7, -10000) + 32i64);
					while (v70[6] != 3 || *((double*)v70 + 2) != 0.0)
					{
						v70 = (_DWORD*)*((_QWORD*)v70 + 4);
						if (!v70)
						{
							v70 = dword_140A12138;
							break;
						}
					}
					v71 = *(_QWORD*)(v7 + 16);
					*(_QWORD*)v71 = *(_QWORD*)v70;
					*(_DWORD*)(v71 + 8) = v70[2];
					*(_QWORD*)(v7 + 16) += 16i64;
					sub_140058B30(v7, -10000);
					v72 = *(_QWORD*)(v7 + 16);
					*(_DWORD*)(v72 + 8) = 3;
					*(double*)v72 = (double)v59;
					*(_QWORD*)(v7 + 16) += 16i64;
					sub_140058B30(v7, -10000);
				}
				++v52;
			} while (v52 < v83);
		}
		v73 = *(_QWORD*)(*(_QWORD*)(v7 + 32) + 160i64);
		if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v73 + 56))
		{
			if ((double)v13 == 0.0)
			{
				v74 = *(_DWORD**)(v73 + 32);
			}
			else
			{
				v94 = (double)v13;
				v74 = (_DWORD*)(*(_QWORD*)(v73 + 32)
					+ 40 * ((unsigned int)(LODWORD(v94) + HIDWORD(v94)) % (((1i64 << *(_BYTE*)(v73 + 11)) - 1) | 1)));
			}
			while (v74[6] != 3 || (double)v13 != *((double*)v74 + 2))
			{
				v74 = (_DWORD*)*((_QWORD*)v74 + 4);
				if (!v74)
				{
					v74 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v74 = (_DWORD*)(*(_QWORD*)(v73 + 24) + 16i64 * (v13 - 1));
		}
		v75 = *(_QWORD*)(v7 + 16);
		*(_QWORD*)v75 = *(_QWORD*)v74;
		v76 = v74[2];
		v77 = v85;
		*(_DWORD*)(v75 + 8) = v76;
		*(_QWORD*)(v7 + 16) += 16i64;
		sub_1404B2680(v77);
		v12 = 1;
		if (v51)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v51 - 16) + 8i64))(v51 - 16);
		goto LABEL_127;
	}
	v15 = *(_QWORD*)(qword_140C65898 + 120);
	if (v15)
	{
		v16 = v85;
		v17 = *(_QWORD*)(v85 + 136);
		v18 = v17;
		v19 = *(_QWORD**)(v17 + 8);
		if (v19)
		{
			do
			{
				if (v19[4] < *(_QWORD*)(v15 + 424))
				{
					v19 = (_QWORD*)v19[3];
				}
				else
				{
					v18 = (__int64)v19;
					v19 = (_QWORD*)v19[2];
				}
			} while (v19);
			v16 = v85;
		}
		if (v18 == v17 || (v20 = *(_QWORD*)(v18 + 32), v81 = v18, *(_QWORD*)(v15 + 424) < v20))
			v81 = v17;
		if (v81 == *(_QWORD*)(v16 + 136))
		{
			v21 = sub_14018B280(32i64, 0);
			if (v21)
				v22 = sub_140028FC0((__int64)v21);
			else
				v22 = 0i64;
			v23 = *(_QWORD*)(v15 + 424);
			v81 = v22;
			v86[1] = v22;
			v86[0] = v23;
			sub_1400EEDD0(v85 + 128, (__int64)&v87, v86);
			v11 = 0;
			v14 = v83;
		}
		else
		{
			v11 = 0;
			v81 = *(_QWORD*)(v81 + 40);
			v14 = v83;
		}
		goto LABEL_23;
	}
LABEL_127:
	if (v13 >= 0)
	{
		v78 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v7, -10000) + 32i64);
		while (v78[6] != 3 || *((double*)v78 + 2) != 0.0)
		{
			v78 = (_DWORD*)*((_QWORD*)v78 + 4);
			if (!v78)
			{
				v78 = dword_140A12138;
				break;
			}
		}
		v79 = *(_QWORD*)(v7 + 16);
		*(_QWORD*)v79 = *(_QWORD*)v78;
		*(_DWORD*)(v79 + 8) = v78[2];
		*(_QWORD*)(v7 + 16) += 16i64;
		sub_140058B30(v7, -10000);
		v80 = *(_QWORD*)(v7 + 16);
		*(_DWORD*)(v80 + 8) = 3;
		*(double*)v80 = (double)v13;
		*(_QWORD*)(v7 + 16) += 16i64;
		sub_140058B30(v7, -10000);
	}
	return v12;
}
// 1404B149B: conditional instruction was optimized away because rcx.8!=0
// 1404B15FC: conditional instruction was optimized away because rcx.8!=0
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D8: using guessed type __int64 qword_140C659D8;

