//----- (00000001406431B0) ----------------------------------------------------
__int64 __fastcall sub_1406431B0(__int64 a1)
{
	__int64 v1; // rdi
	unsigned int v2; // eax
	unsigned int v3; // ebx
	__int64 v4; // rax
	bool v5; // cf
	__int64 v6; // rax
	int* v7; // rax
	int v8; // ecx
	__int64 v9; // rsi
	int* v10; // rdx
	_QWORD* v11; // rax
	unsigned int v12; // r12d
	__int64 v13; // r14
	__int64 v14; // r15
	int* v15; // rax
	unsigned __int64 v16; // rsi
	int** v17; // rbx
	int* v18; // rax
	int* v19; // rcx
	unsigned int v20; // ebx
	int v21; // esi
	__int64 v22; // rax
	__int64 v23; // rdx
	int* v24; // rax
	__int64 v25; // rcx
	unsigned __int64 v26; // r8
	unsigned __int64 v27; // rdx
	_DWORD* v28; // rcx
	__int64 v29; // rdx
	int* v30; // rcx
	__int64 v31; // rax
	int* v32; // rdx
	unsigned int v33; // eax
	unsigned int v34; // r13d
	unsigned int i; // r12d
	__int64 v36; // rax
	unsigned __int64 v37; // r14
	_QWORD* v38; // rbx
	__int64* v39; // rbx
	__int64 v40; // rbx
	__int64 v41; // rax
	__int64 v42; // rcx
	int* v43; // rax
	unsigned int v44; // eax
	__int64 v45; // r15
	_QWORD* v46; // r14
	unsigned __int64 v47; // rsi
	_QWORD* v48; // rbx
	__int64 v49; // rax
	unsigned int v50; // eax
	unsigned int v51; // r15d
	unsigned int j; // r14d
	int* v53; // rax
	_DWORD* v54; // rax
	_DWORD* v55; // rsi
	__int64 v56; // r10
	unsigned int v57; // r9d
	bool v58; // r8
	__int64 v59; // rdx
	__int64 v60; // rbx
	__int64 v61; // rcx
	int* v62; // rcx
	__int64 v63; // rax
	__int64 v64; // rax
	__int64 k; // rax
	__int64 v66; // rax
	unsigned int v67; // eax
	unsigned int v68; // r15d
	unsigned int m; // r14d
	__int64 v70; // rax
	__int64 v71; // rsi
	__int64 v72; // r9
	unsigned int v73; // r8d
	bool v74; // al
	__int64 v75; // rdx
	__int64 v76; // rbx
	__int64 v77; // rcx
	int* v78; // rcx
	__int64 v79; // rax
	__int64 v80; // rax
	__int64 n; // rax
	__int64 v82; // rax
	unsigned int v83; // eax
	unsigned int v84; // r13d
	unsigned int v85; // r12d
	__int64 v86; // rax
	__int64 v87; // r15
	unsigned int* v88; // rsi
	__int64 v89; // r14
	unsigned int v90; // r8d
	__int64 v91; // r9
	int v92; // eax
	__int64 v93; // rdx
	__int64 v94; // rbx
	bool v95; // al
	__int64 v96; // rcx
	int* v97; // rcx
	__int64 v98; // rax
	__int64 v99; // rax
	__int64 ii; // rax
	__int64 v101; // rax
	__int64 v103; // [rsp+20h] [rbp-58h]
	int* v104; // [rsp+28h] [rbp-50h] BYREF
	int* v105; // [rsp+30h] [rbp-48h] BYREF
	int* v106; // [rsp+38h] [rbp-40h] BYREF
	__int64 v107; // [rsp+40h] [rbp-38h] BYREF
	unsigned int v108; // [rsp+50h] [rbp-28h] BYREF
	__int64 v109; // [rsp+58h] [rbp-20h]
	__int64 v110; // [rsp+60h] [rbp-18h]
	__int64 v111; // [rsp+C0h] [rbp+48h] BYREF
	int v112; // [rsp+C8h] [rbp+50h] BYREF
	int v113; // [rsp+D0h] [rbp+58h] BYREF
	__int64 v114; // [rsp+D8h] [rbp+60h]

	v111 = a1;
	v1 = qword_140C65C28;
	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A69138, qword_140C63858);
	}
	else
	{
		if (dword_140C64944)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401E9240() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64218 + 40i64))(qword_140C64218);
	}
	v3 = v2;
LABEL_9:
	LODWORD(v111) = v3;
	v103 = v3;
	v4 = 48i64 * v3;
	if (!is_mul_ok(v3, 0x30ui64))
		v4 = -1i64;
	v5 = __CFADD__(v4, 8i64);
	v6 = v4 + 8;
	if (v5)
		v6 = -1i64;
	v7 = sub_14018B280(v6, 0);
	if (v7)
	{
		v8 = v3 - 1;
		*v7 = v3;
		v9 = 0i64;
		v10 = v7 + 2;
		if ((int)(v3 - 1) >= 0)
		{
			v11 = v7 + 6;
			do
			{
				--v8;
				*(v11 - 2) = 0i64;
				*(v11 - 1) = 0i64;
				*v11 = 0i64;
				v11[1] = 0i64;
				v11[2] = 0i64;
				v11[3] = 0i64;
				v11 += 6;
			} while (v8 >= 0);
		}
	}
	else
	{
		v9 = 0i64;
		v10 = 0i64;
	}
	*(_QWORD*)(v1 + 24) = v10;
	v12 = 0;
	if (v3)
	{
		v13 = 0i64;
		v114 = 0i64;
		do
		{
			v14 = v13 + *(_QWORD*)(v1 + 24);
			v107 = v14;
			if (qword_140C63848)
			{
				v15 = (int*)qword_140C63848(off_140A69138, v12, qword_140C63858);
			}
			else if (dword_140C64944)
			{
				v15 = 0i64;
			}
			else if ((int)sub_1401E9240() >= 0)
			{
				v15 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64218 + 32i64))(
					qword_140C64218,
					v12);
			}
			else
			{
				v15 = 0i64;
			}
			*(_QWORD*)v14 = v15;
			v112 = *v15;
			if (*(_QWORD*)(v1 + 32) == *(_QWORD*)(v1 + 40))
				sub_1400290D0(v1 + 32);
			v16 = (*(__int64(__fastcall**)(int*))(v1 + 56))(&v112);
			v17 = (int**)(*(_QWORD*)(v1 + 48) + 8 * (v16 % *(_QWORD*)(v1 + 40)));
			v18 = sub_14018B280(32i64, 0);
			if (v18)
			{
				v19 = *v17;
				*(_QWORD*)v18 = v16;
				*((_QWORD*)v18 + 1) = v19;
				LODWORD(v19) = v112;
				*((_QWORD*)v18 + 3) = v14;
				v18[4] = (int)v19;
			}
			*v17 = v18;
			++* (_QWORD*)(v1 + 32);
			v20 = *(_DWORD*)(*(_QWORD*)v14 + 16i64);
			v21 = *(_DWORD*)(*(_QWORD*)v14 + 8i64);
			v113 = v21;
			if (v20 && v21)
			{
				if (qword_140C63840)
				{
					v22 = qword_140C63840(off_140A6E3E8, v20, qword_140C63858);
				LABEL_39:
					if (v22 && *(_DWORD*)(v22 + 12))
					{
						v23 = *(_QWORD*)(v1 + 280);
						v24 = (int*)v23;
						v25 = *(_QWORD*)(v23 + 8);
						while (v25)
						{
							if (*(_DWORD*)(v25 + 32) < v20)
							{
								v25 = *(_QWORD*)(v25 + 24);
							}
							else
							{
								v24 = (int*)v25;
								v25 = *(_QWORD*)(v25 + 16);
							}
						}
						if (v24 == (int*)v23 || v20 < v24[8])
						{
							v110 = 0i64;
							v109 = 0i64;
							v108 = v20;
							v104 = v24;
							sub_140451770(v1 + 272, &v105, (__int64*)&v104, (int*)&v108);
							v24 = v105;
						}
						v26 = *((_QWORD*)v24 + 6);
						v27 = 0i64;
						if (v26)
						{
							v28 = (_DWORD*)*((_QWORD*)v24 + 5);
							while (*v28 != v21)
							{
								++v27;
								++v28;
								if (v27 >= v26)
									goto LABEL_53;
							}
						}
						else
						{
						LABEL_53:
							v29 = *(_QWORD*)(v1 + 280);
							v30 = (int*)v29;
							v31 = *(_QWORD*)(v29 + 8);
							while (v31)
							{
								if (*(_DWORD*)(v31 + 32) < v20)
								{
									v31 = *(_QWORD*)(v31 + 24);
								}
								else
								{
									v30 = (int*)v31;
									v31 = *(_QWORD*)(v31 + 16);
								}
							}
							if (v30 == (int*)v29 || v20 < v30[8])
							{
								v110 = 0i64;
								v109 = 0i64;
								v104 = v30;
								v108 = v20;
								sub_140451770(v1 + 272, &v106, (__int64*)&v104, (int*)&v108);
								v30 = v106;
							}
							sub_140003460((__int64*)v30 + 5, &v113);
						}
						v13 = v114;
					}
					goto LABEL_63;
				}
				if (!dword_140C64634 && (int)sub_14024D920() >= 0)
				{
					v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v20);
					goto LABEL_39;
				}
			}
		LABEL_63:
			if (*(_DWORD*)(*(_QWORD*)v14 + 4i64) == 37)
			{
				v32 = *(int**)(v1 + 88);
				if (v32 == *(int**)(v1 + 96))
				{
					sub_14010A1C0((_QWORD*)(v1 + 72), v32, &v107);
				}
				else
				{
					if (v32)
						*(_QWORD*)v32 = v14;
					*(_QWORD*)(v1 + 88) += 8i64;
				}
			}
			v13 += 48i64;
			++v12;
			v9 = 0i64;
			v114 = v13;
		} while (v12 < (unsigned int)v111);
	}
	if (qword_140C63838)
	{
		v33 = qword_140C63838(off_140A69218, qword_140C63858);
	}
	else
	{
		if (dword_140C64AA8)
		{
			v34 = 0;
			goto LABEL_78;
		}
		if ((int)sub_1401EA340() < 0)
		{
			v34 = 0;
			goto LABEL_78;
		}
		v33 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A90 + 40i64))(qword_140C63A90);
	}
	v34 = v33;
LABEL_78:
	for (i = 0; i < v34; v9 = 0i64)
	{
		if (qword_140C63848)
		{
			v36 = qword_140C63848(off_140A69218, i, qword_140C63858);
		}
		else
		{
			if (dword_140C64AA8 || (int)sub_1401EA340() < 0)
				goto LABEL_85;
			v36 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A90 + 32i64))(qword_140C63A90, i);
		}
		v9 = v36;
	LABEL_85:
		v37 = (*(__int64(__fastcall**)(__int64))(v1 + 56))(v9 + 4);
		v38 = *(_QWORD**)(*(_QWORD*)(v1 + 48) + 8 * (v37 % *(_QWORD*)(v1 + 40)));
		if (!v38)
			goto LABEL_99;
		while (v37 != *v38 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v1 + 64))(v9 + 4, v38 + 2))
		{
			v38 = (_QWORD*)v38[1];
			if (!v38)
				goto LABEL_99;
		}
		v39 = v38 + 3;
		if (!v39)
			goto LABEL_99;
		v40 = *v39;
		if (!*(_DWORD*)(v9 + 12) && (unsigned int)sub_1406428D0(v40) != 5)
			goto LABEL_99;
		v41 = *(unsigned int*)(v9 + 8);
		if ((unsigned int)v41 >= 0x20)
			goto LABEL_99;
		v42 = *(_QWORD*)(v40 + 24);
		if (!v42)
		{
			v43 = sub_14018B280(256i64, 0);
			*(_QWORD*)(v40 + 24) = v43;
			sub_1407E4830(v43, 0i64, 0x100ui64);
		LABEL_97:
			v44 = *(_DWORD*)(v9 + 8);
			if (v44 < 0x20)
				*(_QWORD*)(*(_QWORD*)(v40 + 24) + 8i64 * v44) = v9;
			goto LABEL_99;
		}
		if (!*(_QWORD*)(v42 + 8 * v41))
			goto LABEL_97;
	LABEL_99:
		++i;
	}
	if ((_DWORD)v111)
	{
		v45 = 0i64;
		do
		{
			v46 = (_QWORD*)(v45 + *(_QWORD*)(v1 + 24));
			LODWORD(v111) = *(_DWORD*)(*v46 + 68i64);
			if ((_DWORD)v111)
			{
				v47 = (*(__int64(__fastcall**)(__int64*))(v1 + 56))(&v111);
				v48 = *(_QWORD**)(*(_QWORD*)(v1 + 48) + 8 * (v47 % *(_QWORD*)(v1 + 40)));
				if (v48)
				{
					while (v47 != *v48 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v1 + 64))(&v111, v48 + 2))
					{
						v48 = (_QWORD*)v48[1];
						if (!v48)
							goto LABEL_111;
					}
					if (v48 != (_QWORD*)-24i64)
					{
						v49 = v48[3];
						if (!*(_QWORD*)(v49 + 16))
						{
							*(_QWORD*)(v49 + 16) = v46;
							v46[1] = v49;
						}
					}
				}
			}
		LABEL_111:
			v45 += 48i64;
			--v103;
		} while (v103);
	}
	if (qword_140C63838)
	{
		v50 = qword_140C63838(off_140A69170, qword_140C63858);
	}
	else
	{
		if (dword_140C638BC)
		{
			v51 = 0;
			goto LABEL_120;
		}
		if ((int)sub_1401E9680() < 0)
		{
			v51 = 0;
			goto LABEL_120;
		}
		v50 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64768 + 40i64))(qword_140C64768);
	}
	v51 = v50;
LABEL_120:
	for (j = 0; j < v51; ++j)
	{
		if (qword_140C63848)
		{
			v53 = (int*)qword_140C63848(off_140A69170, j, qword_140C63858);
		}
		else if (dword_140C638BC)
		{
			v53 = 0i64;
		}
		else if ((int)sub_1401E9680() >= 0)
		{
			v53 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 32i64))(qword_140C64768, j);
		}
		else
		{
			v53 = 0i64;
		}
		v54 = (_DWORD*)sub_140644C60(v1, v53);
		v55 = v54;
		if (!v54)
			continue;
		v56 = *(_QWORD*)(v1 + 168);
		v57 = *v54;
		v58 = 1;
		v59 = *(_QWORD*)(v56 + 8);
		LODWORD(v107) = *v54;
		v60 = v56;
		while (v59)
		{
			v60 = v59;
			v58 = v57 < *(_DWORD*)(v59 + 32);
			if (v57 >= *(_DWORD*)(v59 + 32))
				v59 = *(_QWORD*)(v59 + 24);
			else
				v59 = *(_QWORD*)(v59 + 16);
		}
		v61 = v60;
		if (v58)
		{
			if (v60 == *(_QWORD*)(v56 + 16))
			{
				if (v60 == v56 || v57 < *(_DWORD*)(v60 + 32))
					goto LABEL_142;
				goto LABEL_138;
			}
			if (*(_BYTE*)v60 || *(_QWORD*)(*(_QWORD*)(v60 + 8) + 8i64) != v60)
			{
				v61 = *(_QWORD*)(v60 + 16);
				if (v61)
				{
					for (k = *(_QWORD*)(v61 + 24); k; k = *(_QWORD*)(k + 24))
						v61 = k;
				}
				else
				{
					v61 = *(_QWORD*)(v60 + 8);
					if (v60 == *(_QWORD*)(v61 + 16))
					{
						do
						{
							v66 = v61;
							v61 = *(_QWORD*)(v61 + 8);
						} while (v66 == *(_QWORD*)(v61 + 16));
					}
				}
			}
			else
			{
				v61 = *(_QWORD*)(v60 + 24);
			}
		}
		if (*(_DWORD*)(v61 + 32) >= v57)
			continue;
		if (v60 == v56 || v57 < *(_DWORD*)(v60 + 32))
		{
		LABEL_142:
			v62 = sub_14018B280(48i64, 0);
			if (v62 != (int*)-32i64)
			{
				*((_QWORD*)v62 + 4) = v107;
				*((_QWORD*)v62 + 5) = v55;
			}
			*(_QWORD*)(v60 + 16) = v62;
			v64 = *(_QWORD*)(v1 + 168);
			if (v60 == v64)
			{
				*(_QWORD*)(v64 + 8) = v62;
				*(_QWORD*)(*(_QWORD*)(v1 + 168) + 24i64) = v62;
			}
			else if (v60 == *(_QWORD*)(v64 + 16))
			{
				*(_QWORD*)(v64 + 16) = v62;
			}
			goto LABEL_148;
		}
	LABEL_138:
		v62 = sub_14018B280(48i64, 0);
		if (v62 != (int*)-32i64)
		{
			*((_QWORD*)v62 + 4) = v107;
			*((_QWORD*)v62 + 5) = v55;
		}
		*(_QWORD*)(v60 + 24) = v62;
		v63 = *(_QWORD*)(v1 + 168);
		if (v60 == *(_QWORD*)(v63 + 24))
			*(_QWORD*)(v63 + 24) = v62;
	LABEL_148:
		*((_QWORD*)v62 + 1) = v60;
		*((_QWORD*)v62 + 2) = 0i64;
		*((_QWORD*)v62 + 3) = 0i64;
		sub_1400081C0((__int64)v62, (_QWORD*)(*(_QWORD*)(v1 + 168) + 8i64));
		++* (_QWORD*)(v1 + 176);
	}
	if (qword_140C63838)
	{
		v67 = qword_140C63838(off_140A6DB28, qword_140C63858);
	}
	else
	{
		if (dword_140C64B14)
		{
			v68 = 0;
			goto LABEL_171;
		}
		if ((int)sub_140242F20() < 0)
		{
			v68 = 0;
			goto LABEL_171;
		}
		v67 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63E50 + 40i64))(qword_140C63E50);
	}
	v68 = v67;
LABEL_171:
	for (m = 0; m < v68; ++m)
	{
		if (qword_140C63848)
		{
			v70 = qword_140C63848(off_140A6DB28, m, qword_140C63858);
		}
		else
		{
			if (dword_140C64B14)
			{
				v71 = 0i64;
				goto LABEL_180;
			}
			if ((int)sub_140242F20() < 0)
			{
				v71 = 0i64;
				goto LABEL_180;
			}
			v70 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E50 + 32i64))(qword_140C63E50, m);
		}
		v71 = v70;
	LABEL_180:
		v72 = *(_QWORD*)(v1 + 200);
		v73 = *(_DWORD*)(v71 + 4);
		v74 = 1;
		v75 = *(_QWORD*)(v72 + 8);
		LODWORD(v107) = v73;
		v76 = v72;
		while (v75)
		{
			v76 = v75;
			v74 = v73 < *(_DWORD*)(v75 + 32);
			if (v73 >= *(_DWORD*)(v75 + 32))
				v75 = *(_QWORD*)(v75 + 24);
			else
				v75 = *(_QWORD*)(v75 + 16);
		}
		v77 = v76;
		if (v74)
		{
			if (v76 == *(_QWORD*)(v72 + 16))
			{
				if (v76 == v72 || v73 < *(_DWORD*)(v76 + 32))
					goto LABEL_193;
				goto LABEL_189;
			}
			if (*(_BYTE*)v76 || *(_QWORD*)(*(_QWORD*)(v76 + 8) + 8i64) != v76)
			{
				v77 = *(_QWORD*)(v76 + 16);
				if (v77)
				{
					for (n = *(_QWORD*)(v77 + 24); n; n = *(_QWORD*)(n + 24))
						v77 = n;
				}
				else
				{
					v77 = *(_QWORD*)(v76 + 8);
					if (v76 == *(_QWORD*)(v77 + 16))
					{
						do
						{
							v82 = v77;
							v77 = *(_QWORD*)(v77 + 8);
						} while (v82 == *(_QWORD*)(v77 + 16));
					}
				}
			}
			else
			{
				v77 = *(_QWORD*)(v76 + 24);
			}
		}
		if (*(_DWORD*)(v77 + 32) >= v73)
			continue;
		if (v76 == v72 || v73 < *(_DWORD*)(v76 + 32))
		{
		LABEL_193:
			v78 = sub_14018B280(48i64, 0);
			if (v78 != (int*)-32i64)
			{
				*((_QWORD*)v78 + 4) = v107;
				*((_QWORD*)v78 + 5) = v71;
			}
			*(_QWORD*)(v76 + 16) = v78;
			v80 = *(_QWORD*)(v1 + 200);
			if (v76 == v80)
			{
				*(_QWORD*)(v80 + 8) = v78;
				*(_QWORD*)(*(_QWORD*)(v1 + 200) + 24i64) = v78;
			}
			else if (v76 == *(_QWORD*)(v80 + 16))
			{
				*(_QWORD*)(v80 + 16) = v78;
			}
			goto LABEL_199;
		}
	LABEL_189:
		v78 = sub_14018B280(48i64, 0);
		if (v78 != (int*)-32i64)
		{
			*((_QWORD*)v78 + 4) = v107;
			*((_QWORD*)v78 + 5) = v71;
		}
		*(_QWORD*)(v76 + 24) = v78;
		v79 = *(_QWORD*)(v1 + 200);
		if (v76 == *(_QWORD*)(v79 + 24))
			*(_QWORD*)(v79 + 24) = v78;
	LABEL_199:
		*((_QWORD*)v78 + 1) = v76;
		*((_QWORD*)v78 + 2) = 0i64;
		*((_QWORD*)v78 + 3) = 0i64;
		sub_1400081C0((__int64)v78, (_QWORD*)(*(_QWORD*)(v1 + 200) + 8i64));
		++* (_QWORD*)(v1 + 208);
	}
	if (qword_140C63838)
	{
		v83 = qword_140C63838(off_140A6DB60, qword_140C63858);
	}
	else
	{
		if (dword_140C63D5C)
		{
			v84 = 0;
			goto LABEL_222;
		}
		if ((int)sub_140243360() < 0)
		{
			v84 = 0;
			goto LABEL_222;
		}
		v83 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C643A0 + 40i64))(qword_140C643A0);
	}
	v84 = v83;
LABEL_222:
	v85 = 0;
	if (v84)
	{
		while (!qword_140C63848)
		{
			if (dword_140C63D5C)
			{
				v87 = 0i64;
			}
			else
			{
				if ((int)sub_140243360() >= 0)
				{
					v86 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C643A0 + 32i64))(qword_140C643A0, v85);
					goto LABEL_230;
				}
				v87 = 0i64;
			}
		LABEL_231:
			v88 = (unsigned int*)(v87 + 20);
			v89 = 8i64;
			do
			{
				v90 = *v88;
				if (!*v88)
					goto LABEL_266;
				v91 = *(_QWORD*)(v1 + 232);
				v92 = *(_DWORD*)(v87 + 4);
				LODWORD(v111) = *v88;
				v93 = *(_QWORD*)(v91 + 8);
				HIDWORD(v111) = v92;
				v94 = v91;
				v95 = 1;
				while (v93)
				{
					v94 = v93;
					v95 = v90 < *(_DWORD*)(v93 + 32);
					if (v90 >= *(_DWORD*)(v93 + 32))
						v93 = *(_QWORD*)(v93 + 24);
					else
						v93 = *(_QWORD*)(v93 + 16);
				}
				v96 = v94;
				if (v95)
				{
					if (v94 == *(_QWORD*)(v91 + 16))
					{
						if (v94 == v91 || v90 < *(_DWORD*)(v94 + 32))
							goto LABEL_246;
						goto LABEL_242;
					}
					if (*(_BYTE*)v94 || *(_QWORD*)(*(_QWORD*)(v94 + 8) + 8i64) != v94)
					{
						v96 = *(_QWORD*)(v94 + 16);
						if (v96)
						{
							for (ii = *(_QWORD*)(v96 + 24); ii; ii = *(_QWORD*)(ii + 24))
								v96 = ii;
						}
						else
						{
							v96 = *(_QWORD*)(v94 + 8);
							if (v94 == *(_QWORD*)(v96 + 16))
							{
								do
								{
									v101 = v96;
									v96 = *(_QWORD*)(v96 + 8);
								} while (v101 == *(_QWORD*)(v96 + 16));
							}
						}
					}
					else
					{
						v96 = *(_QWORD*)(v94 + 24);
					}
				}
				if (*(_DWORD*)(v96 + 32) < v90)
				{
					if (v94 == v91 || v90 < *(_DWORD*)(v94 + 32))
					{
					LABEL_246:
						v97 = sub_14018B280(40i64, 0);
						if (v97 != (int*)-32i64)
							*((_QWORD*)v97 + 4) = v111;
						*(_QWORD*)(v94 + 16) = v97;
						v99 = *(_QWORD*)(v1 + 232);
						if (v94 == v99)
						{
							*(_QWORD*)(v99 + 8) = v97;
							*(_QWORD*)(*(_QWORD*)(v1 + 232) + 24i64) = v97;
						}
						else if (v94 == *(_QWORD*)(v99 + 16))
						{
							*(_QWORD*)(v99 + 16) = v97;
						}
						goto LABEL_252;
					}
				LABEL_242:
					v97 = sub_14018B280(40i64, 0);
					if (v97 != (int*)-32i64)
						*((_QWORD*)v97 + 4) = v111;
					*(_QWORD*)(v94 + 24) = v97;
					v98 = *(_QWORD*)(v1 + 232);
					if (v94 == *(_QWORD*)(v98 + 24))
						*(_QWORD*)(v98 + 24) = v97;
				LABEL_252:
					*((_QWORD*)v97 + 1) = v94;
					*((_QWORD*)v97 + 2) = 0i64;
					*((_QWORD*)v97 + 3) = 0i64;
					sub_1400081C0((__int64)v97, (_QWORD*)(*(_QWORD*)(v1 + 232) + 8i64));
					++* (_QWORD*)(v1 + 240);
				}
			LABEL_266:
				++v88;
				--v89;
			} while (v89);
			if (++v85 >= v84)
				return 0i64;
		}
		v86 = qword_140C63848(off_140A6DB60, v85, qword_140C63858);
	LABEL_230:
		v87 = v86;
		goto LABEL_231;
	}
	return 0i64;
}
// 14064380D: conditional instruction was optimized away because rdx.8==0
// 14064392F: conditional instruction was optimized away because rdx.8==0
// 140643A5A: conditional instruction was optimized away because rdx.8==0
// 140643B6F: conditional instruction was optimized away because rdx.8==0
// 140643CBA: conditional instruction was optimized away because rdx.8==0
// 140643DCF: conditional instruction was optimized away because rdx.8==0
// 140A69138: using guessed type wchar_t *off_140A69138[2];
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140A69218: using guessed type wchar_t *off_140A69218[2];
// 140A6DB28: using guessed type wchar_t *off_140A6DB28[2];
// 140A6DB60: using guessed type wchar_t *off_140A6DB60[2];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C63A90: using guessed type __int64 qword_140C63A90;
// 140C63D5C: using guessed type int dword_140C63D5C;
// 140C63E50: using guessed type __int64 qword_140C63E50;
// 140C64218: using guessed type __int64 qword_140C64218;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C643A0: using guessed type __int64 qword_140C643A0;
// 140C64634: using guessed type int dword_140C64634;
// 140C64768: using guessed type __int64 qword_140C64768;
// 140C64944: using guessed type int dword_140C64944;
// 140C64AA8: using guessed type int dword_140C64AA8;
// 140C64B14: using guessed type int dword_140C64B14;
// 140C65C28: using guessed type __int64 qword_140C65C28;

