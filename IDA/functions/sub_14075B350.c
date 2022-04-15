//----- (000000014075B350) ----------------------------------------------------
__int64 __fastcall sub_14075B350(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // r15
	unsigned int* v6; // r9
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned int* v10; // r9
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	unsigned int* v14; // r9
	__int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	unsigned int* v22; // r9
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	unsigned int* v26; // r9
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	unsigned int* v30; // r9
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	unsigned int* v34; // r9
	__int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	unsigned int* v38; // r9
	__int64 v39; // rax
	__int64 v40; // rbx
	__int64 v41; // rax
	unsigned int* v42; // r9
	__int64 v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	unsigned int* v46; // r9
	__int64 v47; // rax
	__int64 v48; // rbx
	__int64 v49; // rax
	unsigned int* v50; // r9
	__int64 v51; // rbx
	__int64 v52; // rax
	__int64 v53; // rdx
	__int64 v54; // rsi
	wchar_t** v55; // rbx
	__int64* v56; // rax
	__int64 v57; // rbx
	__int64 v58; // rax
	unsigned int v59; // r14d
	__int64(__fastcall * v60)(wchar_t**, __int64); // rax
	unsigned int v61; // eax
	unsigned int v62; // r13d
	__int64 v63; // rax
	__int64 v64; // r10
	unsigned __int64 v65; // rcx
	_WORD* v66; // rax
	unsigned __int16* v67; // rdx
	__int64 v68; // r9
	unsigned __int64 v69; // rcx
	unsigned __int16 v70; // r8
	int v71; // r12d
	unsigned __int64 v72; // rsi
	__int64 v73; // rbx
	__int64 v74; // rax
	__int64 v75; // rax
	__int64* v76; // rax
	__int64 v77; // rcx
	__int64 v78; // rbx
	__int64 v79; // rax
	__int64 v80; // rcx
	__int64 v81; // rbx
	__int64 v82; // rax
	__int64 v83; // rdx
	__int64 v84; // rsi
	wchar_t** v85; // rbx
	__int64* v86; // rax
	__int64 v87; // rcx
	__int64 v88; // rbx
	__int64 v89; // rax
	__int64 v90; // rcx
	__int64 v91; // rbx
	__int64 v92; // rax
	__int64 v93; // rdx
	wchar_t** v94; // rbx
	__int64* v95; // rax
	__int64 v97; // [rsp+30h] [rbp-59h] BYREF
	int v98; // [rsp+38h] [rbp-51h]
	char v99; // [rsp+3Fh] [rbp-4Ah]
	unsigned __int64 v100[14]; // [rsp+40h] [rbp-49h] BYREF

	sub_140057020(a1, "GuildLib", &off_140B75DE0);
	v2 = a1[2];
	*(_QWORD*)v2 = 0x3FF0000000000000i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildType_Guild", 0xFui64);
	v5 = 4i64;
	v6 = (unsigned int*)(a1[2] - 16i64);
	v97 = v4;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v97, v6);
	a1[2] -= 16i64;
	v7 = a1[2];
	*(_DWORD*)(v7 + 8) = 3;
	*(_QWORD*)v7 = 0x4000000000000000i64;
	a1[2] += 16i64;
	v8 = a1[2];
	v9 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildType_Circle", 0x10ui64);
	v10 = (unsigned int*)(a1[2] - 16i64);
	v97 = v9;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v8 - 32), (int*)&v97, v10);
	a1[2] -= 16i64;
	v11 = a1[2];
	*(_QWORD*)v11 = 0x4008000000000000i64;
	*(_DWORD*)(v11 + 8) = 3;
	a1[2] += 16i64;
	v12 = a1[2];
	v13 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildType_WarParty", 0x12ui64);
	v14 = (unsigned int*)(a1[2] - 16i64);
	v97 = v13;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v12 - 32), (int*)&v97, v14);
	a1[2] -= 16i64;
	v15 = a1[2];
	*(_QWORD*)v15 = 0x4010000000000000i64;
	*(_DWORD*)(v15 + 8) = 3;
	a1[2] += 16i64;
	v16 = a1[2];
	v17 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildType_ArenaTeam_2v2", 0x17ui64);
	v18 = (unsigned int*)(a1[2] - 16i64);
	v97 = v17;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v16 - 32), (int*)&v97, v18);
	a1[2] -= 16i64;
	v19 = a1[2];
	*(_QWORD*)v19 = 0x4014000000000000i64;
	*(_DWORD*)(v19 + 8) = 3;
	a1[2] += 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildType_ArenaTeam_3v3", 0x17ui64);
	v22 = (unsigned int*)(a1[2] - 16i64);
	v97 = v21;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v20 - 32), (int*)&v97, v22);
	a1[2] -= 16i64;
	v23 = a1[2];
	*(_QWORD*)v23 = 0x4018000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildType_ArenaTeam_5v5", 0x17ui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v97 = v25;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v97, v26);
	a1[2] -= 16i64;
	v27 = a1[2];
	*(_QWORD*)v27 = 0x401C000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildType_Community", 0x13ui64);
	v30 = (unsigned int*)(a1[2] - 16i64);
	v97 = v29;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v28 - 32), (int*)&v97, v30);
	a1[2] -= 16i64;
	v31 = a1[2];
	*(_QWORD*)v31 = 0i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = a1[2];
	v33 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildQueueState_Normal", 0x16ui64);
	v34 = (unsigned int*)(a1[2] - 16i64);
	v97 = v33;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v32 - 32), (int*)&v97, v34);
	a1[2] -= 16i64;
	v35 = a1[2];
	*(_QWORD*)v35 = 0x4008000000000000i64;
	*(_DWORD*)(v35 + 8) = 3;
	a1[2] += 16i64;
	v36 = a1[2];
	v37 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildQueueState_Queuing", 0x17ui64);
	v38 = (unsigned int*)(a1[2] - 16i64);
	v97 = v37;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v36 - 32), (int*)&v97, v38);
	a1[2] -= 16i64;
	v39 = a1[2];
	*(_QWORD*)v39 = 0x4010000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = a1[2];
	v41 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildQueueState_CanLock", 0x17ui64);
	v42 = (unsigned int*)(a1[2] - 16i64);
	v97 = v41;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v40 - 32), (int*)&v97, v42);
	a1[2] -= 16i64;
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4014000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = a1[2];
	v45 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildQueueState_Locked", 0x16ui64);
	v46 = (unsigned int*)(a1[2] - 16i64);
	v97 = v45;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v44 - 32), (int*)&v97, v46);
	a1[2] -= 16i64;
	v47 = a1[2];
	*(_QWORD*)v47 = 0x4018000000000000i64;
	*(_DWORD*)(v47 + 8) = 3;
	a1[2] += 16i64;
	v48 = a1[2];
	v49 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildQueueState_InBattle", 0x18ui64);
	v50 = (unsigned int*)(a1[2] - 16i64);
	v97 = v49;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v48 - 32), (int*)&v97, v50);
	a1[2] -= 16i64;
	sub_1400F0340((__int64)a1);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumGuildEventType", 0x16ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v51 = a1[2];
	v52 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v51 + 8) = 5;
	v54 = 10i64;
	*(_QWORD*)v51 = v52;
	a1[2] += 16i64;
	v55 = &off_140C34C40;
	do
	{
		sub_1400F06F0((__int64)a1, v53, *v55, *((_DWORD*)v55 + 2));
		v55 += 2;
		--v54;
	} while (v54);
	v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Perk", 4ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v57 = a1[2];
	v58 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v57 + 8) = 5;
	v59 = 0;
	*(_QWORD*)v57 = v58;
	v60 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	a1[2] += 16i64;
	if (v60)
	{
		v61 = v60(off_140A6A638, qword_140C63858);
	}
	else
	{
		if (dword_140C655D0 || (int)sub_140202A40() < 0)
			goto LABEL_50;
		v61 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C646B0 + 40i64))(qword_140C646B0);
	}
	v62 = v61;
	if (v61)
	{
		while (!qword_140C63848)
		{
			if (dword_140C655D0)
			{
				v64 = 0i64;
			}
			else
			{
				if ((int)sub_140202A40() >= 0)
				{
					v63 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C646B0 + 32i64))(qword_140C646B0, v59);
					goto LABEL_20;
				}
				v64 = 0i64;
			}
		LABEL_21:
			v65 = *(_QWORD*)(v64 + 24);
			if (v65)
			{
				if (v65 <= qword_140C3FE70)
					v66 = (_WORD*)(v65 + qword_140C3FE68);
				else
					v66 = 0i64;
			}
			else
			{
				v66 = 0i64;
			}
			if (*v66)
			{
				if (v65)
				{
					if (v65 <= qword_140C3FE70)
						v67 = (unsigned __int16*)(v65 + qword_140C3FE68);
					else
						v67 = 0i64;
				}
				else
				{
					v67 = 0i64;
				}
				v68 = -1i64;
				if (v67)
				{
					v69 = 0i64;
					do
					{
						v70 = *v67;
						if (*v67 >= 0x80u)
						{
							if (v70 >= 0x1000u)
							{
								if (v69 >= 0x62)
									break;
								*((_BYTE*)v100 + v69) = (v70 >> 12) | 0xE0;
								*((_BYTE*)v100 + v69 + 1) = (v70 >> 6) & 0x3F | 0x80;
								v69 += 3i64;
								*(&v99 + v69) = *(_BYTE*)v67 & 0x3F | 0x80;
							}
							else
							{
								if (v69 >= 0x63)
									break;
								*((_BYTE*)v100 + v69) = (v70 >> 6) | 0xC0;
								v69 += 2i64;
								*(&v99 + v69) = *(_BYTE*)v67 & 0x3F | 0x80;
							}
						}
						else
						{
							if (v69 >= 0x64)
								break;
							++v69;
							*(&v99 + v69) = v70;
						}
						if (!v70)
							break;
						++v67;
						--v68;
					} while (v68);
				}
				v71 = *(_DWORD*)v64;
				v72 = -1i64;
				do
					++v72;
				while (*((_BYTE*)v100 + v72));
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v73 = a1[2];
				v74 = sub_140062650((__int64)a1, v100, v72);
				*(_DWORD*)(v73 + 8) = 4;
				*(_QWORD*)v73 = v74;
				a1[2] += 16i64;
				v75 = a1[2];
				*(_DWORD*)(v75 + 8) = 3;
				*(double*)v75 = (double)v71;
				a1[2] += 16i64;
				v76 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v76, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
			}
			if (++v59 >= v62)
				goto LABEL_50;
		}
		v63 = qword_140C63848(off_140A6A638, v59, qword_140C63858);
	LABEL_20:
		v64 = v63;
		goto LABEL_21;
	}
LABEL_50:
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v77 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v77 + 120) >= *(_QWORD*)(v77 + 112))
		sub_14005E2C0((__int64)a1);
	v78 = a1[2];
	v79 = sub_140062650((__int64)a1, (unsigned __int64*)"GuildClassification", 0x13ui64);
	*(_DWORD*)(v78 + 8) = 4;
	*(_QWORD*)v78 = v79;
	v80 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v80 + 120) >= *(_QWORD*)(v80 + 112))
		sub_14005E2C0((__int64)a1);
	v81 = a1[2];
	v82 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v81 + 8) = 5;
	v84 = 6i64;
	*(_QWORD*)v81 = v82;
	a1[2] += 16i64;
	v85 = &off_140C31AE0;
	do
	{
		sub_1400F06F0((__int64)a1, v83, *v85, *((_DWORD*)v85 + 2));
		v85 += 2;
		--v84;
	} while (v84);
	v86 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v86, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v87 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v87 + 120) >= *(_QWORD*)(v87 + 112))
		sub_14005E2C0((__int64)a1);
	v88 = a1[2];
	v89 = sub_140062650((__int64)a1, (unsigned __int64*)"RecruitmentDemand", 0x11ui64);
	*(_DWORD*)(v88 + 8) = 4;
	*(_QWORD*)v88 = v89;
	v90 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v90 + 120) >= *(_QWORD*)(v90 + 112))
		sub_14005E2C0((__int64)a1);
	v91 = a1[2];
	v92 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v91 + 8) = 5;
	*(_QWORD*)v91 = v92;
	a1[2] += 16i64;
	v94 = &off_140C33D10;
	do
	{
		sub_1400F06F0((__int64)a1, v93, *v94, *((_DWORD*)v94 + 2));
		v94 += 2;
		--v5;
	} while (v5);
	v95 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v95, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 14075B80A: variable 'v53' is possibly undefined
// 14075BB8A: variable 'v83' is possibly undefined
// 14075BC4A: variable 'v93' is possibly undefined
// 140A6A638: using guessed type wchar_t *off_140A6A638[2];
// 140B75DE0: using guessed type char *off_140B75DE0;
// 140C31AE0: using guessed type wchar_t *off_140C31AE0;
// 140C33D10: using guessed type wchar_t *off_140C33D10;
// 140C34C40: using guessed type wchar_t *off_140C34C40;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C646B0: using guessed type __int64 qword_140C646B0;
// 140C655D0: using guessed type int dword_140C655D0;

