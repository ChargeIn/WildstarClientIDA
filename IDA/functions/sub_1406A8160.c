//----- (00000001406A8160) ----------------------------------------------------
__int64 __fastcall sub_1406A8160(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	unsigned __int64 v4; // r15
	unsigned int v8; // ebx
	unsigned int v9; // eax
	unsigned int v10; // esi
	__int64 v11; // rax
	_DWORD* v12; // r13
	__int64 v14; // rbx
	__int64 v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // rdx
	int v18; // r10d
	int v19; // r14d
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	int* v23; // rbx
	__int64 v24; // r12
	unsigned int v25; // r13d
	int v26; // r10d
	__int64 v27; // r9
	_DWORD* v28; // rdx
	__int64 v29; // rcx
	__int64 v30; // rcx
	int v31; // eax
	__int64 v32; // rax
	__int64 v33; // r8
	__int64 v34; // r9
	_DWORD* v35; // rdx
	__int64 v36; // rcx
	unsigned __int64* v37; // r12
	unsigned __int64 v38; // r15
	__int64 v39; // rbx
	__int64 v40; // rax
	__int64 v41; // rcx
	__int64 v42; // r9
	_DWORD* v43; // rdx
	__int64 v44; // rcx
	__int64 v45; // r8
	int v46; // r15d
	__int64 v47; // rbx
	__int64 v48; // rax
	int v49; // r12d
	int* v50; // r13
	__int64 v51; // rbx
	int v52; // r10d
	__int64 v53; // r9
	_DWORD* v54; // rdx
	__int64 v55; // rcx
	__int64 v56; // rcx
	int v57; // eax
	__int64 v58; // rax
	__int64 v59; // r8
	__int64 v60; // r9
	_DWORD* v61; // rdx
	__int64 v62; // rcx
	unsigned __int64 v63; // r14
	unsigned __int64* v64; // r15
	__int64 v65; // rbx
	__int64 v66; // rax
	__int64 v67; // rcx
	__int64 v68; // r9
	_DWORD* v69; // rdx
	__int64 v70; // rcx
	__int64 v71; // r8
	_DWORD* v72; // rdx
	__int64 v73; // rcx
	__int64 v74; // rax
	_DWORD* v75; // rdx
	__int64 v76; // rcx
	__int64 v77; // rax
	_DWORD* v78; // rdx
	__int64 v79; // rcx
	__int64 v80; // rax
	unsigned __int64* v81; // rdx
	unsigned __int64 v82; // r14
	__int64 v83; // rbx
	__int64 v84; // rax
	__int64 v85; // rax
	__int64* v86; // rax
	__int64 v87; // rbx
	__int64 v88; // rax
	__int64 v89; // rcx
	__int64 v90; // rbx
	__int64 v91; // rax
	int v92; // r14d
	unsigned __int64 v93; // rbx
	unsigned int* v94; // rsi
	__int64 v95; // rdx
	__m128i v96; // xmm0
	__int64 v97; // rcx
	__int64 v98; // rcx
	__int64 v99; // rbx
	__int64 v100; // rax
	__int64 v101; // rcx
	__int64 v102; // rbx
	__int64 v103; // rax
	unsigned int* v104; // rbx
	__int64 v105; // rcx
	__m128i v106; // xmm0
	__int64 v107; // rax
	_DWORD* v108; // rsi
	__int64 v109; // rcx
	__int64 v110; // rcx
	unsigned int v111; // [rsp+20h] [rbp-50h]
	int v112; // [rsp+24h] [rbp-4Ch]
	_DWORD* v113; // [rsp+28h] [rbp-48h]
	double v114; // [rsp+30h] [rbp-40h]
	double v115; // [rsp+30h] [rbp-40h]
	double v116; // [rsp+30h] [rbp-40h]
	double v117; // [rsp+30h] [rbp-40h]
	double v118; // [rsp+30h] [rbp-40h]
	double v119; // [rsp+30h] [rbp-40h]
	__int64 v120; // [rsp+38h] [rbp-38h] BYREF
	__int64 v121; // [rsp+40h] [rbp-30h]
	int v123; // [rsp+C0h] [rbp+50h]

	v4 = 0i64;
	v8 = 0;
	if (qword_140C63838)
	{
		v9 = qword_140C63838(off_140A6AA98, qword_140C63858);
	}
	else
	{
		if (dword_140C64A48 || (int)sub_140207F40() < 0)
			return 0i64;
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A00 + 40i64))(qword_140C64A00);
	}
	v10 = v9;
	if (!v9)
		return 0i64;
	while (1)
	{
		if (qword_140C63848)
		{
			v11 = qword_140C63848(off_140A6AA98, v8, qword_140C63858);
		}
		else
		{
			if (dword_140C64A48)
			{
				v12 = 0i64;
				goto LABEL_15;
			}
			if ((int)sub_140207F40() < 0)
			{
				v12 = 0i64;
				goto LABEL_15;
			}
			v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A00 + 32i64))(qword_140C64A00, v8);
		}
		v12 = (_DWORD*)v11;
	LABEL_15:
		v113 = v12;
		if (v12[1] == a4)
			break;
		if (++v8 >= v10)
			return 0i64;
	}
	if (a2)
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v14 = *(_QWORD*)(a1 + 16);
		v15 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v14 + 8) = 5;
		*(_QWORD*)v14 = v15;
		*(_QWORD*)(a1 + 16) += 16i64;
		v112 = sub_1400578C0(a1);
		v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v112);
		v17 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v17 = *v16;
		*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v17, L"nMaintenanceCost", v18);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v19 = 1;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v20 = *(_QWORD*)(a1 + 16);
		v21 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v20 + 8) = 5;
		*(_QWORD*)v20 = v21;
		*(_QWORD*)(a1 + 16) += 16i64;
		v22 = sub_1400578C0(a1);
		v23 = v12 + 3;
		v123 = v22;
		v24 = 3i64;
		v111 = v22 - 1;
		v25 = v22 - 1;
		do
		{
			v26 = *v23;
			v27 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
			if (v25 >= *(_DWORD*)(v27 + 56))
			{
				if ((double)v22 == 0.0)
				{
					v28 = *(_DWORD**)(v27 + 32);
				}
				else
				{
					v114 = (double)v22;
					v28 = (_DWORD*)(*(_QWORD*)(v27 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v114) + HIDWORD(v114)) % (((1i64 << *(_BYTE*)(v27 + 11)) - 1) | 1)));
				}
				while (v28[6] != 3 || (double)v22 != *((double*)v28 + 2))
				{
					v28 = (_DWORD*)*((_QWORD*)v28 + 4);
					if (!v28)
					{
						v28 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v28 = (_DWORD*)(*(_QWORD*)(v27 + 24) + 16i64 * (v22 - 1));
			}
			v29 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v29 = *(_QWORD*)v28;
			*(_DWORD*)(v29 + 8) = v28[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v30 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v30 + 8) = 3;
			v31 = v19++;
			*(double*)v30 = (double)v31;
			*(_QWORD*)(a1 + 16) += 16i64;
			v32 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v32 + 8) = 3;
			*(double*)v32 = (double)v26;
			v33 = *(_QWORD*)(a1 + 16) + 16i64;
			*(_QWORD*)(a1 + 16) = v33;
			sub_14005EA50(a1, (__int64*)(v33 - 48), (int*)(v33 - 32), (unsigned int*)(v33 - 16));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v22 = v123;
			++v23;
			--v24;
		} while (v24);
		v34 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v112 - 1) >= *(_DWORD*)(v34 + 56))
		{
			if ((double)v112 == 0.0)
			{
				v35 = *(_DWORD**)(v34 + 32);
			}
			else
			{
				v115 = (double)v112;
				v35 = (_DWORD*)(*(_QWORD*)(v34 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v115) + HIDWORD(v115)) % (((1i64 << *(_BYTE*)(v34 + 11)) - 1) | 1)));
			}
			while (v35[6] != 3 || (double)v112 != *((double*)v35 + 2))
			{
				v35 = (_DWORD*)*((_QWORD*)v35 + 4);
				if (!v35)
				{
					v35 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v35 = (_DWORD*)(*(_QWORD*)(v34 + 24) + 16i64 * (v112 - 1));
		}
		v36 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v36 = *(_QWORD*)v35;
		*(_DWORD*)(v36 + 8) = v35[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v37 = (unsigned __int64*)sub_14018F0E0(&v120, L"tUpgradeCost")[1];
		if (v37)
		{
			v38 = -1i64;
			do
				++v38;
			while (*((_BYTE*)v37 + v38));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v39 = *(_QWORD*)(a1 + 16);
			v40 = sub_140062650(a1, v37, v38);
			*(_DWORD*)(v39 + 8) = 4;
			*(_QWORD*)v39 = v40;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		}
		v41 = v121;
		*(_QWORD*)(a1 + 16) += 16i64;
		if (v41)
			sub_14018B900(v41, 0);
		v42 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if (v111 >= *(_DWORD*)(v42 + 56))
		{
			if ((double)v123 == 0.0)
			{
				v43 = *(_DWORD**)(v42 + 32);
			}
			else
			{
				v116 = (double)v123;
				v43 = (_DWORD*)(*(_QWORD*)(v42 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v116) + HIDWORD(v116)) % (((1i64 << *(_BYTE*)(v42 + 11)) - 1) | 1)));
			}
			while (v43[6] != 3 || (double)v123 != *((double*)v43 + 2))
			{
				v43 = (_DWORD*)*((_QWORD*)v43 + 4);
				if (!v43)
				{
					v43 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v43 = (_DWORD*)(*(_QWORD*)(v42 + 24) + 16i64 * (v123 - 1));
		}
		v44 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v44 = *(_QWORD*)v43;
		*(_DWORD*)(v44 + 8) = v43[2];
		v45 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v45;
		sub_14005EA50(a1, (__int64*)(v45 - 48), (int*)(v45 - 32), (unsigned int*)(v45 - 16));
		*(_QWORD*)(a1 + 16) -= 48i64;
		v46 = 1;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v47 = *(_QWORD*)(a1 + 16);
		v48 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v47 + 8) = 5;
		*(_QWORD*)v47 = v48;
		*(_QWORD*)(a1 + 16) += 16i64;
		v49 = sub_1400578C0(a1);
		v50 = v113 + 6;
		v51 = 3i64;
		do
		{
			v52 = *v50;
			v53 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
			if ((unsigned int)(v49 - 1) >= *(_DWORD*)(v53 + 56))
			{
				if ((double)v49 == 0.0)
				{
					v54 = *(_DWORD**)(v53 + 32);
				}
				else
				{
					v117 = (double)v49;
					v54 = (_DWORD*)(*(_QWORD*)(v53 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v117) + HIDWORD(v117)) % (((1i64 << *(_BYTE*)(v53 + 11)) - 1) | 1)));
				}
				while (v54[6] != 3 || (double)v49 != *((double*)v54 + 2))
				{
					v54 = (_DWORD*)*((_QWORD*)v54 + 4);
					if (!v54)
					{
						v54 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v54 = (_DWORD*)(*(_QWORD*)(v53 + 24) + 16i64 * (v49 - 1));
			}
			v55 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v55 = *(_QWORD*)v54;
			*(_DWORD*)(v55 + 8) = v54[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v56 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v56 + 8) = 3;
			v57 = v46++;
			*(double*)v56 = (double)v57;
			*(_QWORD*)(a1 + 16) += 16i64;
			v58 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v58 + 8) = 3;
			*(double*)v58 = (double)v52;
			v59 = *(_QWORD*)(a1 + 16) + 16i64;
			*(_QWORD*)(a1 + 16) = v59;
			sub_14005EA50(a1, (__int64*)(v59 - 48), (int*)(v59 - 32), (unsigned int*)(v59 - 16));
			*(_QWORD*)(a1 + 16) -= 48i64;
			++v50;
			--v51;
		} while (v51);
		v60 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v112 - 1) >= *(_DWORD*)(v60 + 56))
		{
			if ((double)v112 == 0.0)
			{
				v61 = *(_DWORD**)(v60 + 32);
			}
			else
			{
				v118 = (double)v112;
				v61 = (_DWORD*)(*(_QWORD*)(v60 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v118) + HIDWORD(v118)) % (((1i64 << *(_BYTE*)(v60 + 11)) - 1) | 1)));
			}
			while (v61[6] != 3 || (double)v112 != *((double*)v61 + 2))
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
			v61 = (_DWORD*)(*(_QWORD*)(v60 + 24) + 16i64 * (v112 - 1));
		}
		v62 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v62 = *(_QWORD*)v61;
		*(_DWORD*)(v62 + 8) = v61[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v63 = -1i64;
		v64 = (unsigned __int64*)sub_14018F0E0(&v120, L"tSpell4IdAbility")[1];
		if (v64)
		{
			do
				++v63;
			while (*((_BYTE*)v64 + v63));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v65 = *(_QWORD*)(a1 + 16);
			v66 = sub_140062650(a1, v64, v63);
			*(_DWORD*)(v65 + 8) = 4;
			*(_QWORD*)v65 = v66;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		}
		v67 = v121;
		*(_QWORD*)(a1 + 16) += 16i64;
		if (v67)
			sub_14018B900(v67, 0);
		v68 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v49 - 1) >= *(_DWORD*)(v68 + 56))
		{
			if ((double)v49 == 0.0)
			{
				v69 = *(_DWORD**)(v68 + 32);
			}
			else
			{
				v119 = (double)v49;
				v69 = (_DWORD*)(*(_QWORD*)(v68 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v119) + HIDWORD(v119)) % (((1i64 << *(_BYTE*)(v68 + 11)) - 1) | 1)));
			}
			while (v69[6] != 3 || (double)v49 != *((double*)v69 + 2))
			{
				v69 = (_DWORD*)*((_QWORD*)v69 + 4);
				if (!v69)
				{
					v69 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v69 = (_DWORD*)(*(_QWORD*)(v68 + 24) + 16i64 * (v49 - 1));
		}
		v70 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v70 = *(_QWORD*)v69;
		*(_DWORD*)(v70 + 8) = v69[2];
		v71 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v71;
		sub_14005EA50(a1, (__int64*)(v71 - 48), (int*)(v71 - 32), (unsigned int*)(v71 - 16));
		*(_QWORD*)(a1 + 16) -= 48i64;
		sub_1400FB2A0(a2, (__int64)L"tWarplotPlugInfo", v112);
		if (v49 >= 0)
		{
			v72 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(a1, -10000) + 32i64);
			while (v72[6] != 3 || *((double*)v72 + 2) != 0.0)
			{
				v72 = (_DWORD*)*((_QWORD*)v72 + 4);
				if (!v72)
				{
					v72 = dword_140A12138;
					break;
				}
			}
			v73 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v73 = *(_QWORD*)v72;
			*(_DWORD*)(v73 + 8) = v72[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140058B30(a1, -10000);
			v74 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v74 + 8) = 3;
			*(double*)v74 = (double)v49;
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140058B30(a1, -10000);
		}
		if (v123 >= 0)
		{
			v75 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(a1, -10000) + 32i64);
			while (v75[6] != 3 || *((double*)v75 + 2) != 0.0)
			{
				v75 = (_DWORD*)*((_QWORD*)v75 + 4);
				if (!v75)
				{
					v75 = dword_140A12138;
					break;
				}
			}
			v76 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v76 = *(_QWORD*)v75;
			*(_DWORD*)(v76 + 8) = v75[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140058B30(a1, -10000);
			v77 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v77 + 8) = 3;
			*(double*)v77 = (double)v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140058B30(a1, -10000);
		}
		if (v112 >= 0)
		{
			v78 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(a1, -10000) + 32i64);
			while (v78[6] != 3 || *((double*)v78 + 2) != 0.0)
			{
				v78 = (_DWORD*)*((_QWORD*)v78 + 4);
				if (!v78)
				{
					v78 = dword_140A12138;
					break;
				}
			}
			v79 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v79 = *(_QWORD*)v78;
			*(_DWORD*)(v79 + 8) = v78[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140058B30(a1, -10000);
			v80 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v80 + 8) = 3;
			*(double*)v80 = (double)v112;
			goto LABEL_149;
		}
	}
	else
	{
		v81 = (unsigned __int64*)sub_14018F0E0(&v120, L"tWarplotPlugInfo")[1];
		if (v81)
		{
			v82 = -1i64;
			do
				++v82;
			while (*((_BYTE*)v81 + v82));
			sub_140058710(a1, v81, v82);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v121)
			sub_14018B900(v121, 0);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v83 = *(_QWORD*)(a1 + 16);
		v84 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v83 + 8) = 5;
		*(_QWORD*)v83 = v84;
		*(_QWORD*)(a1 + 16) += 16i64;
		LODWORD(v83) = v12[2];
		sub_140058710(a1, (unsigned __int64*)"nMaintenanceCost", 0x10ui64);
		v85 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v85 + 8) = 3;
		*(double*)v85 = (double)(int)v83;
		*(_QWORD*)(a1 + 16) += 16i64;
		v86 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v86, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_140058710(a1, (unsigned __int64*)"tUpgradeCost", 0xCui64);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v87 = *(_QWORD*)(a1 + 16);
		v88 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v87 + 8) = 5;
		*(_QWORD*)v87 = v88;
		v89 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) += 16i64;
		if (*(_QWORD*)(v89 + 120) >= *(_QWORD*)(v89 + 112))
			sub_14005E2C0(a1);
		v90 = *(_QWORD*)(a1 + 16);
		v91 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v90 + 8) = 5;
		*(_QWORD*)v90 = v91;
		*(_QWORD*)(a1 + 16) += 16i64;
		v92 = sub_1400578C0(a1);
		v93 = 0i64;
		v94 = v12 + 3;
		do
		{
			v95 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v95 + 8) = 3;
			*(double*)v95 = (double)((int)v93 + 1);
			*(_QWORD*)(a1 + 16) += 16i64;
			v96 = _mm_cvtsi32_si128(*v94);
			v97 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v97 + 8) = 3;
			*(_QWORD*)v97 = *(_OWORD*)&_mm_cvtepi32_pd(v96);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			++v93;
			++v94;
		} while (v93 < 3);
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		v98 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) -= 32i64;
		if (*(_QWORD*)(v98 + 120) >= *(_QWORD*)(v98 + 112))
			sub_14005E2C0(a1);
		v99 = *(_QWORD*)(a1 + 16);
		v100 = sub_140062650(a1, (unsigned __int64*)"tSpell4IdAbility", 0x10ui64);
		*(_DWORD*)(v99 + 8) = 4;
		*(_QWORD*)v99 = v100;
		v101 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) += 16i64;
		if (*(_QWORD*)(v101 + 120) >= *(_QWORD*)(v101 + 112))
			sub_14005E2C0(a1);
		v102 = *(_QWORD*)(a1 + 16);
		v103 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v102 + 8) = 5;
		*(_QWORD*)v102 = v103;
		*(_QWORD*)(a1 + 16) += 16i64;
		v104 = v12 + 6;
		do
		{
			v105 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v105 + 8) = 3;
			*(double*)v105 = (double)((int)v4 + 1);
			*(_QWORD*)(a1 + 16) += 16i64;
			v106 = _mm_cvtsi32_si128(*v104);
			v107 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v107 + 8) = 3;
			*(_QWORD*)v107 = *(_OWORD*)&_mm_cvtepi32_pd(v106);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			++v4;
			++v104;
		} while (v4 < 3);
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		if (v92 >= 0)
		{
			v108 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(a1, -10000) + 32i64);
			while (v108[6] != 3 || *((double*)v108 + 2) != 0.0)
			{
				v108 = (_DWORD*)*((_QWORD*)v108 + 4);
				if (!v108)
				{
					v108 = dword_140A12138;
					break;
				}
			}
			v109 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v109 = *(_QWORD*)v108;
			*(_DWORD*)(v109 + 8) = v108[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140058B30(a1, -10000);
			v110 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v110 + 8) = 3;
			*(double*)v110 = (double)v92;
		LABEL_149:
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140058B30(a1, -10000);
		}
	}
	return 1i64;
}
// 1406A82D1: variable 'v18' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6AA98: using guessed type wchar_t *off_140A6AA98[2];
// 140B35B28: using guessed type wchar_t aTwarplotplugin[17];
// 140B35E78: using guessed type wchar_t aTupgradecost_0[13];
// 140B35E98: using guessed type wchar_t aTspell4idabili_0[17];
// 140B35EF8: using guessed type wchar_t aNmaintenanceco_0[17];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A00: using guessed type __int64 qword_140C64A00;
// 140C64A48: using guessed type int dword_140C64A48;

