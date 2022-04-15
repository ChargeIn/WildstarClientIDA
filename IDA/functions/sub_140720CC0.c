//----- (0000000140720CC0) ----------------------------------------------------
__int64 __fastcall sub_140720CC0(_QWORD* a1)
{
	unsigned int v1; // ebx
	unsigned int v3; // eax
	unsigned int v4; // r15d
	unsigned int v5; // esi
	__int64 v6; // rax
	_DWORD* v7; // r14
	int* v8; // rax
	int* v9; // rbx
	int* v10; // rax
	unsigned int v11; // eax
	unsigned int v12; // r13d
	unsigned int v13; // r15d
	__int64 v14; // rax
	_DWORD* v15; // rsi
	__int64 v16; // r8
	__int64 v17; // rcx
	__int64 v18; // rax
	unsigned __int64* v19; // rbx
	unsigned __int64 v20; // rbx
	unsigned int v21; // r14d
	__int64 v22; // rax
	__int64 v23; // r14
	int v24; // r12d
	int* v25; // rax
	int* v26; // rbx
	unsigned int v27; // eax
	unsigned int v28; // r14d
	unsigned int v29; // esi
	_DWORD* v30; // rax
	unsigned int v31; // ecx
	__int64 v32; // rdx
	__int64 v33; // rax
	__int64 v34; // rbx
	int* v35; // rcx
	__int64 v36; // rax
	__int64 v37; // rax
	unsigned int v38; // eax
	unsigned int v39; // r13d
	unsigned int v40; // r12d
	__int64 v41; // rax
	__int64 v42; // r14
	__int64 v43; // rsi
	__int64 v44; // rax
	__int64 v45; // r8
	unsigned int v46; // edx
	__int64 v47; // rcx
	__int64 v48; // r15
	__int64 v49; // rbx
	int* v50; // rcx
	__int64 v51; // rax
	__int64 v52; // rax
	__int64 v53; // rdx
	unsigned int v54; // ecx
	__int64 v55; // rax
	__int64 v56; // rbx
	int* v57; // rcx
	__int64 v58; // rax
	__int64 v59; // rax
	unsigned int v60; // r8d
	__int64 v61; // r9
	bool v62; // al
	__int64 v63; // rdx
	__int64 v64; // rbx
	__int64 v65; // rcx
	int* v66; // rcx
	__int64 v67; // rax
	__int64 v68; // rax
	__int64 i; // rax
	__int64 v70; // rax
	unsigned int v71; // r8d
	__int64 v72; // r9
	bool v73; // al
	__int64 v74; // rdx
	__int64 v75; // rbx
	__int64 v76; // rcx
	int* v77; // rcx
	__int64 v78; // rax
	__int64 v79; // rax
	__int64 j; // rax
	__int64 v81; // rax
	unsigned int v82; // eax
	unsigned int v83; // r14d
	unsigned int v84; // esi
	__int64 v85; // rax
	int* v86; // rbx
	unsigned int v87; // edx
	__int64 v88; // r8
	int* v89; // rax
	__int64 v90; // rcx
	unsigned int v91; // eax
	unsigned int v92; // r14d
	__int64 v93; // rax
	__int64 v94; // rax
	__int64 v95; // r9
	__int64 v96; // rdx
	__int64 v97; // rsi
	unsigned int v98; // r8d
	int* v99; // rcx
	__int64 v100; // rdx
	__int64 v101; // rax
	__int64 v102; // rcx
	__int64 k; // rcx
	__int64 m; // rcx
	__int64 v106; // [rsp+20h] [rbp-40h]
	__int64 v107; // [rsp+30h] [rbp-30h]
	__int64 v108; // [rsp+40h] [rbp-20h]
	__int64 v109[2]; // [rsp+50h] [rbp-10h] BYREF
	unsigned __int64 v110; // [rsp+A0h] [rbp+40h] BYREF
	int* v111; // [rsp+A8h] [rbp+48h] BYREF
	int* v112; // [rsp+B0h] [rbp+50h] BYREF

	v1 = 0;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6BBE0, qword_140C63858);
	}
	else
	{
		if (dword_140C65148)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_14021CF60() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64720 + 40i64))(qword_140C64720);
	}
	v4 = v3;
LABEL_9:
	v5 = 0;
	if (!v4)
		goto LABEL_22;
	do
	{
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A6BBE0, v5, qword_140C63858);
		}
		else
		{
			if (dword_140C65148 || (int)sub_14021CF60() < 0)
				goto LABEL_20;
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64720 + 32i64))(qword_140C64720, v5);
		}
		v7 = (_DWORD*)v6;
		if (v6)
		{
			v8 = sub_14018B280(40i64, 0);
			v9 = v8;
			if (v8)
			{
				*(_QWORD*)v8 = v7;
				v10 = sub_14018B280(48i64, 0);
				*((_QWORD*)v9 + 2) = v10;
				*((_QWORD*)v9 + 3) = 0i64;
				*(_BYTE*)v10 = 0;
				*(_QWORD*)(*((_QWORD*)v9 + 2) + 8i64) = 0i64;
				*(_QWORD*)(*((_QWORD*)v9 + 2) + 16i64) = *((_QWORD*)v9 + 2);
				*(_QWORD*)(*((_QWORD*)v9 + 2) + 24i64) = *((_QWORD*)v9 + 2);
			}
			else
			{
				v9 = 0i64;
			}
			*(_QWORD*)sub_140055BE0((__int64)(a1 + 1), v7) = v9;
		}
	LABEL_20:
		++v5;
	} while (v5 < v4);
	v1 = 0;
LABEL_22:
	if (qword_140C63838)
	{
		v11 = qword_140C63838(off_140A6BC88, qword_140C63858);
		goto LABEL_29;
	}
	if (dword_140C63A20)
	{
		v12 = 0;
	}
	else if ((int)sub_14021DC20() >= 0)
	{
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64BF8 + 40i64))(qword_140C64BF8);
	LABEL_29:
		v12 = v11;
	}
	else
	{
		v12 = 0;
	}
	v13 = 0;
	if (!v12)
		goto LABEL_60;
	while (2)
	{
		if (qword_140C63848)
		{
			v14 = qword_140C63848(off_140A6BC88, v13, qword_140C63858);
		LABEL_36:
			v15 = (_DWORD*)v14;
			if (v14)
			{
				v16 = a1[2];
				v17 = v16;
				v18 = *(_QWORD*)(v16 + 8);
				while (v18)
				{
					if (*(_DWORD*)(v18 + 32) < v15[1])
					{
						v18 = *(_QWORD*)(v18 + 24);
					}
					else
					{
						v17 = v18;
						v18 = *(_QWORD*)(v18 + 16);
					}
				}
				if (v17 == v16 || v15[1] < *(_DWORD*)(v17 + 32))
				{
					v111 = (int*)a1[2];
					v19 = (unsigned __int64*)&v111;
				}
				else
				{
					v110 = v17;
					v19 = &v110;
				}
				v20 = *v19;
				if (v20 != v16)
				{
					v21 = v15[2];
					if (qword_140C63840)
					{
						v22 = qword_140C63840(off_140A6E228, v21, qword_140C63858);
						goto LABEL_52;
					}
					if (!dword_140C63E98 && (int)sub_14024B720() >= 0)
					{
						v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(
							qword_140C65388,
							v21);
					LABEL_52:
						if (v22 && *(float*)(v22 + 4) > 0.0000099999997)
						{
							v23 = *(_QWORD*)(v20 + 40);
							v24 = *(_DWORD*)(v23 + 24);
							v25 = sub_14018B280(16i64, 0);
							v26 = v25;
							if (v25)
							{
								*(_QWORD*)v25 = v15;
								v25[2] = v24;
							}
							else
							{
								v26 = 0i64;
							}
							*(_QWORD*)sub_140055BE0(v23 + 8, v15) = v26;
						}
					}
				}
			}
		}
		else if (!dword_140C63A20 && (int)sub_14021DC20() >= 0)
		{
			v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BF8 + 32i64))(qword_140C64BF8, v13);
			goto LABEL_36;
		}
		if (++v13 < v12)
			continue;
		break;
	}
	v1 = 0;
LABEL_60:
	if (qword_140C63838)
	{
		v27 = qword_140C63838(off_140A6BC18, qword_140C63858);
		goto LABEL_67;
	}
	if (dword_140C6467C)
	{
		v28 = 0;
	}
	else if ((int)sub_14021D3A0() >= 0)
	{
		v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64F68 + 40i64))(qword_140C64F68);
	LABEL_67:
		v28 = v27;
	}
	else
	{
		v28 = 0;
	}
	v29 = 0;
	if (v28)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v30 = (_DWORD*)qword_140C63848(off_140A6BC18, v29, qword_140C63858);
				goto LABEL_74;
			}
			if (!dword_140C6467C && (int)sub_14021D3A0() >= 0)
			{
				v30 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F68 + 32i64))(
					qword_140C64F68,
					v29);
			LABEL_74:
				if (v30)
				{
					v31 = v30[1];
					if (v31)
					{
						v32 = a1[10];
						v110 = __PAIR64__(*v30, v31);
						v33 = *(_QWORD*)(v32 + 8);
						v34 = v32;
						while (v33)
						{
							v34 = v33;
							if (v31 >= *(_DWORD*)(v33 + 32))
								v33 = *(_QWORD*)(v33 + 24);
							else
								v33 = *(_QWORD*)(v33 + 16);
						}
						if (v34 == v32 || v31 < *(_DWORD*)(v34 + 32))
						{
							v35 = sub_14018B280(40i64, 0);
							if (v35 != (int*)-32i64)
								*((_QWORD*)v35 + 4) = v110;
							*(_QWORD*)(v34 + 16) = v35;
							v37 = a1[10];
							if (v34 == v37)
							{
								*(_QWORD*)(v37 + 8) = v35;
								*(_QWORD*)(a1[10] + 24i64) = v35;
							}
							else if (v34 == *(_QWORD*)(v37 + 16))
							{
								*(_QWORD*)(v37 + 16) = v35;
							}
						}
						else
						{
							v35 = sub_14018B280(40i64, 0);
							if (v35 != (int*)-32i64)
								*((_QWORD*)v35 + 4) = v110;
							*(_QWORD*)(v34 + 24) = v35;
							v36 = a1[10];
							if (v34 == *(_QWORD*)(v36 + 24))
								*(_QWORD*)(v36 + 24) = v35;
						}
						*((_QWORD*)v35 + 1) = v34;
						v1 = 0;
						*((_QWORD*)v35 + 2) = 0i64;
						*((_QWORD*)v35 + 3) = 0i64;
						sub_1400081C0((__int64)v35, (_QWORD*)(a1[10] + 8i64));
						++a1[11];
					}
				}
			}
			if (++v29 >= v28)
				break;
			continue;
		}
	}
	if (qword_140C63838)
	{
		v38 = qword_140C63838(off_140A6BC50, qword_140C63858);
		goto LABEL_102;
	}
	if (dword_140C653E4)
	{
		v39 = 0;
	}
	else if ((int)sub_14021D7E0() >= 0)
	{
		v38 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63BF8 + 40i64))(qword_140C63BF8);
	LABEL_102:
		v39 = v38;
	}
	else
	{
		v39 = 0;
	}
	v40 = 0;
	if (v39)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v41 = qword_140C63848(off_140A6BC50, v40, qword_140C63858);
				goto LABEL_109;
			}
			if (!dword_140C653E4 && (int)sub_14021D7E0() >= 0)
			{
				v41 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BF8 + 32i64))(qword_140C63BF8, v40);
			LABEL_109:
				v42 = v41;
				if (v41)
				{
					v43 = (*(__int64(__fastcall**)(_QWORD*, __int64, __int64))(*a1 + 32i64))(a1, v41, 1i64);
					v44 = (*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD))(*a1 + 32i64))(a1, v42, 0i64);
					v45 = a1[6];
					v46 = *(_DWORD*)(*(_QWORD*)(v43 + 8) + 20i64);
					v47 = *(_QWORD*)(v45 + 8);
					v48 = v44;
					LODWORD(v108) = v46;
					v49 = v45;
					while (v47)
					{
						v49 = v47;
						if (v46 >= *(_DWORD*)(v47 + 32))
							v47 = *(_QWORD*)(v47 + 24);
						else
							v47 = *(_QWORD*)(v47 + 16);
					}
					if (v49 == v45 || v46 < *(_DWORD*)(v49 + 32))
					{
						v50 = sub_14018B280(48i64, 0);
						if (v50 != (int*)-32i64)
						{
							*((_QWORD*)v50 + 4) = v108;
							*((_QWORD*)v50 + 5) = v43;
						}
						*(_QWORD*)(v49 + 16) = v50;
						v52 = a1[6];
						if (v49 == v52)
						{
							*(_QWORD*)(v52 + 8) = v50;
							*(_QWORD*)(a1[6] + 24i64) = v50;
						}
						else if (v49 == *(_QWORD*)(v52 + 16))
						{
							*(_QWORD*)(v52 + 16) = v50;
						}
					}
					else
					{
						v50 = sub_14018B280(48i64, 0);
						if (v50 != (int*)-32i64)
						{
							*((_QWORD*)v50 + 4) = v108;
							*((_QWORD*)v50 + 5) = v43;
						}
						*(_QWORD*)(v49 + 24) = v50;
						v51 = a1[6];
						if (v49 == *(_QWORD*)(v51 + 24))
							*(_QWORD*)(v51 + 24) = v50;
					}
					*((_QWORD*)v50 + 1) = v49;
					*((_QWORD*)v50 + 2) = 0i64;
					*((_QWORD*)v50 + 3) = 0i64;
					sub_1400081C0((__int64)v50, (_QWORD*)(a1[6] + 8i64));
					++a1[7];
					v53 = a1[6];
					v54 = *(_DWORD*)(*(_QWORD*)(v48 + 8) + 20i64);
					v55 = *(_QWORD*)(v53 + 8);
					LODWORD(v109[0]) = v54;
					v56 = v53;
					while (v55)
					{
						v56 = v55;
						if (v54 >= *(_DWORD*)(v55 + 32))
							v55 = *(_QWORD*)(v55 + 24);
						else
							v55 = *(_QWORD*)(v55 + 16);
					}
					if (v56 == v53 || v54 < *(_DWORD*)(v56 + 32))
					{
						v57 = sub_14018B280(48i64, 0);
						if (v57 != (int*)-32i64)
						{
							*((_QWORD*)v57 + 4) = v109[0];
							*((_QWORD*)v57 + 5) = v48;
						}
						*(_QWORD*)(v56 + 16) = v57;
						v59 = a1[6];
						if (v56 == v59)
						{
							*(_QWORD*)(v59 + 8) = v57;
							*(_QWORD*)(a1[6] + 24i64) = v57;
						}
						else if (v56 == *(_QWORD*)(v59 + 16))
						{
							*(_QWORD*)(v59 + 16) = v57;
						}
					}
					else
					{
						v57 = sub_14018B280(48i64, 0);
						if (v57 != (int*)-32i64)
						{
							*((_QWORD*)v57 + 4) = v109[0];
							*((_QWORD*)v57 + 5) = v48;
						}
						*(_QWORD*)(v56 + 24) = v57;
						v58 = a1[6];
						if (v56 == *(_QWORD*)(v58 + 24))
							*(_QWORD*)(v58 + 24) = v57;
					}
					*((_QWORD*)v57 + 1) = v56;
					v1 = 0;
					*((_QWORD*)v57 + 2) = 0i64;
					*((_QWORD*)v57 + 3) = 0i64;
					sub_1400081C0((__int64)v57, (_QWORD*)(a1[6] + 8i64));
					++a1[7];
					v60 = *(_DWORD*)(v42 + 12);
					if (v60)
					{
						v61 = a1[14];
						LODWORD(v106) = *(_DWORD*)(v42 + 12);
						v62 = 1;
						v63 = *(_QWORD*)(v61 + 8);
						v64 = v61;
						while (v63)
						{
							v64 = v63;
							v62 = v60 < *(_DWORD*)(v63 + 32);
							if (v60 >= *(_DWORD*)(v63 + 32))
								v63 = *(_QWORD*)(v63 + 24);
							else
								v63 = *(_QWORD*)(v63 + 16);
						}
						v65 = v64;
						if (v62)
						{
							if (v64 == *(_QWORD*)(v61 + 16))
							{
								if (v64 != v61 && v60 >= *(_DWORD*)(v64 + 32))
									goto LABEL_154;
							LABEL_158:
								v66 = sub_14018B280(48i64, 0);
								if (v66 != (int*)-32i64)
								{
									*((_QWORD*)v66 + 4) = v106;
									*((_QWORD*)v66 + 5) = v43;
								}
								*(_QWORD*)(v64 + 16) = v66;
								v68 = a1[14];
								if (v64 == v68)
								{
									*(_QWORD*)(v68 + 8) = v66;
									*(_QWORD*)(a1[14] + 24i64) = v66;
								}
								else if (v64 == *(_QWORD*)(v68 + 16))
								{
									*(_QWORD*)(v68 + 16) = v66;
								}
								goto LABEL_164;
							}
							if (*(_BYTE*)v64 || *(_QWORD*)(*(_QWORD*)(v64 + 8) + 8i64) != v64)
							{
								v65 = *(_QWORD*)(v64 + 16);
								if (v65)
								{
									for (i = *(_QWORD*)(v65 + 24); i; i = *(_QWORD*)(i + 24))
										v65 = i;
								}
								else
								{
									v65 = *(_QWORD*)(v64 + 8);
									if (v64 == *(_QWORD*)(v65 + 16))
									{
										do
										{
											v70 = v65;
											v65 = *(_QWORD*)(v65 + 8);
										} while (v70 == *(_QWORD*)(v65 + 16));
									}
								}
							}
							else
							{
								v65 = *(_QWORD*)(v64 + 24);
							}
						}
						if (*(_DWORD*)(v65 + 32) >= v60)
						{
							v1 = 0;
						}
						else
						{
							if (v64 == v61 || v60 < *(_DWORD*)(v64 + 32))
								goto LABEL_158;
						LABEL_154:
							v66 = sub_14018B280(48i64, 0);
							if (v66 != (int*)-32i64)
							{
								*((_QWORD*)v66 + 4) = v106;
								*((_QWORD*)v66 + 5) = v43;
							}
							*(_QWORD*)(v64 + 24) = v66;
							v67 = a1[14];
							if (v64 == *(_QWORD*)(v67 + 24))
								*(_QWORD*)(v67 + 24) = v66;
						LABEL_164:
							*((_QWORD*)v66 + 1) = v64;
							v1 = 0;
							*((_QWORD*)v66 + 2) = 0i64;
							*((_QWORD*)v66 + 3) = 0i64;
							sub_1400081C0((__int64)v66, (_QWORD*)(a1[14] + 8i64));
							++a1[15];
						}
					}
					v71 = *(_DWORD*)(v42 + 16);
					if (v71)
					{
						v72 = a1[14];
						LODWORD(v107) = *(_DWORD*)(v42 + 16);
						v73 = 1;
						v74 = *(_QWORD*)(v72 + 8);
						v75 = v72;
						while (v74)
						{
							v75 = v74;
							v73 = v71 < *(_DWORD*)(v74 + 32);
							if (v71 >= *(_DWORD*)(v74 + 32))
								v74 = *(_QWORD*)(v74 + 24);
							else
								v74 = *(_QWORD*)(v74 + 16);
						}
						v76 = v75;
						if (v73)
						{
							if (v75 == *(_QWORD*)(v72 + 16))
							{
								if (v75 != v72 && v71 >= *(_DWORD*)(v75 + 32))
									goto LABEL_189;
							LABEL_193:
								v77 = sub_14018B280(48i64, 0);
								if (v77 != (int*)-32i64)
								{
									*((_QWORD*)v77 + 4) = v107;
									*((_QWORD*)v77 + 5) = v48;
								}
								*(_QWORD*)(v75 + 16) = v77;
								v79 = a1[14];
								if (v75 == v79)
								{
									*(_QWORD*)(v79 + 8) = v77;
									*(_QWORD*)(a1[14] + 24i64) = v77;
								}
								else if (v75 == *(_QWORD*)(v79 + 16))
								{
									*(_QWORD*)(v79 + 16) = v77;
								}
								goto LABEL_199;
							}
							if (*(_BYTE*)v75 || *(_QWORD*)(*(_QWORD*)(v75 + 8) + 8i64) != v75)
							{
								v76 = *(_QWORD*)(v75 + 16);
								if (v76)
								{
									for (j = *(_QWORD*)(v76 + 24); j; j = *(_QWORD*)(j + 24))
										v76 = j;
								}
								else
								{
									v76 = *(_QWORD*)(v75 + 8);
									if (v75 == *(_QWORD*)(v76 + 16))
									{
										do
										{
											v81 = v76;
											v76 = *(_QWORD*)(v76 + 8);
										} while (v81 == *(_QWORD*)(v76 + 16));
									}
								}
							}
							else
							{
								v76 = *(_QWORD*)(v75 + 24);
							}
						}
						if (*(_DWORD*)(v76 + 32) >= v71)
						{
							v1 = 0;
						}
						else
						{
							if (v75 == v72 || v71 < *(_DWORD*)(v75 + 32))
								goto LABEL_193;
						LABEL_189:
							v77 = sub_14018B280(48i64, 0);
							if (v77 != (int*)-32i64)
							{
								*((_QWORD*)v77 + 4) = v107;
								*((_QWORD*)v77 + 5) = v48;
							}
							*(_QWORD*)(v75 + 24) = v77;
							v78 = a1[14];
							if (v75 == *(_QWORD*)(v78 + 24))
								*(_QWORD*)(v78 + 24) = v77;
						LABEL_199:
							*((_QWORD*)v77 + 1) = v75;
							v1 = 0;
							*((_QWORD*)v77 + 2) = 0i64;
							*((_QWORD*)v77 + 3) = 0i64;
							sub_1400081C0((__int64)v77, (_QWORD*)(a1[14] + 8i64));
							++a1[15];
						}
					}
				}
			}
			if (++v40 >= v39)
				break;
			continue;
		}
	}
	if (qword_140C63838)
	{
		v82 = qword_140C63838(off_140A6BD30, qword_140C63858);
		goto LABEL_222;
	}
	if (dword_140C63F78)
	{
		v83 = 0;
	}
	else if ((int)sub_14021E8E0() >= 0)
	{
		v82 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64418 + 40i64))(qword_140C64418);
	LABEL_222:
		v83 = v82;
	}
	else
	{
		v83 = 0;
	}
	v84 = 0;
	if (!v83)
		goto LABEL_243;
	while (2)
	{
		if (qword_140C63848)
		{
			v85 = qword_140C63848(off_140A6BD30, v84, qword_140C63858);
			goto LABEL_229;
		}
		if (!dword_140C63F78 && (int)sub_14021E8E0() >= 0)
		{
			v85 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64418 + 32i64))(qword_140C64418, v84);
		LABEL_229:
			v86 = (int*)v85;
			if (v85)
			{
				if (*(_DWORD*)(v85 + 4))
				{
					v87 = *(_DWORD*)(v85 + 40);
					if (v87)
					{
						v88 = a1[26];
						v89 = (int*)v88;
						v90 = *(_QWORD*)(v88 + 8);
						while (v90)
						{
							if (*(_DWORD*)(v90 + 32) < v87)
							{
								v90 = *(_QWORD*)(v90 + 24);
							}
							else
							{
								v89 = (int*)v90;
								v90 = *(_QWORD*)(v90 + 16);
							}
						}
						if (v89 == (int*)v88 || v87 < v89[8])
						{
							v110 = v87;
							v111 = v89;
							sub_140032B30((__int64)(a1 + 25), &v112, (__int64*)&v111, &v110);
							v89 = v112;
						}
						v89[9] = *v86;
					}
				}
			}
		}
		if (++v84 < v83)
			continue;
		break;
	}
	v1 = 0;
LABEL_243:
	if (qword_140C63838)
	{
		v91 = qword_140C63838(off_140A6BCC0, qword_140C63858);
		goto LABEL_250;
	}
	if (dword_140C65668)
	{
		v92 = 0;
	}
	else if ((int)sub_14021E060() >= 0)
	{
		v91 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64CD8 + 40i64))(qword_140C64CD8);
	LABEL_250:
		v92 = v91;
	}
	else
	{
		v92 = 0;
	}
	if (v92)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v93 = qword_140C63848(off_140A6BCC0, v1, qword_140C63858);
			LABEL_257:
				if (v93)
				{
					v94 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 56i64))(a1, v93);
					v95 = a1[30];
					v96 = *(_QWORD*)(v95 + 8);
					v97 = v94;
					v98 = **(_DWORD**)(v94 + 8);
					v99 = (int*)v95;
					while (v96)
					{
						if (*(_DWORD*)(v96 + 32) < v98)
						{
							v96 = *(_QWORD*)(v96 + 24);
						}
						else
						{
							v99 = (int*)v96;
							v96 = *(_QWORD*)(v96 + 16);
						}
					}
					if (v99 == (int*)v95 || v98 < v99[8])
					{
						LODWORD(v109[0]) = **(_DWORD**)(v94 + 8);
						v110 = (unsigned __int64)v99;
						v109[1] = 0i64;
						sub_140055C60((__int64)(a1 + 29), &v111, (__int64*)&v110, v109);
						v99 = v111;
					}
					*((_QWORD*)v99 + 5) = v97;
				}
			}
			else if (!dword_140C65668 && (int)sub_14021E060() >= 0)
			{
				v93 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64CD8 + 32i64))(qword_140C64CD8, v1);
				goto LABEL_257;
			}
			if (++v1 >= v92)
				break;
			continue;
		}
	}
	v100 = a1[2];
	v101 = *(_QWORD*)(v100 + 16);
	while (v101 != v100)
	{
		v102 = *(_QWORD*)(v101 + 24);
		if (v102)
		{
			v101 = *(_QWORD*)(v101 + 24);
			for (k = *(_QWORD*)(v102 + 16); k; k = *(_QWORD*)(k + 16))
				v101 = k;
		}
		else
		{
			for (m = *(_QWORD*)(v101 + 8); v101 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
				v101 = m;
			if (*(_QWORD*)(v101 + 24) != m)
				v101 = m;
		}
	}
	return 0i64;
}
// 140721077: conditional instruction was optimized away because rax.8==0
// 14072122F: conditional instruction was optimized away because rcx.8==0
// 14072130F: conditional instruction was optimized away because rax.8==0
// 14072141A: conditional instruction was optimized away because rdx.8==0
// 14072152F: conditional instruction was optimized away because rdx.8==0
// 1407215AA: conditional instruction was optimized away because rdx.8==0
// 1407216BF: conditional instruction was optimized away because rdx.8==0
// 140721250: variable 'v108' is possibly undefined
// 14072143C: variable 'v106' is possibly undefined
// 1407215CC: variable 'v107' is possibly undefined
// 140A6BBE0: using guessed type wchar_t *off_140A6BBE0[2];
// 140A6BC18: using guessed type wchar_t *off_140A6BC18[2];
// 140A6BC50: using guessed type wchar_t *off_140A6BC50[2];
// 140A6BC88: using guessed type wchar_t *off_140A6BC88[2];
// 140A6BCC0: using guessed type wchar_t *off_140A6BCC0[2];
// 140A6BD30: using guessed type wchar_t *off_140A6BD30[2];
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A20: using guessed type int dword_140C63A20;
// 140C63BF8: using guessed type __int64 qword_140C63BF8;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C63F78: using guessed type int dword_140C63F78;
// 140C64418: using guessed type __int64 qword_140C64418;
// 140C6467C: using guessed type int dword_140C6467C;
// 140C64720: using guessed type __int64 qword_140C64720;
// 140C64BF8: using guessed type __int64 qword_140C64BF8;
// 140C64CD8: using guessed type __int64 qword_140C64CD8;
// 140C64F68: using guessed type __int64 qword_140C64F68;
// 140C65148: using guessed type int dword_140C65148;
// 140C65388: using guessed type __int64 qword_140C65388;
// 140C653E4: using guessed type int dword_140C653E4;
// 140C65668: using guessed type int dword_140C65668;

