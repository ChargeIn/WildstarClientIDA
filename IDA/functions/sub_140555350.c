#include "../winhttp.h"

//----- (0000000140555350) ----------------------------------------------------
void __fastcall sub_140555350(__int64 a1, __int64 a2)
{
	__int64 v3; // r12
	int* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // rbx
	int* v8; // r13
	__int64 v9; // rcx
	int v10; // edx
	int v11; // eax
	__int64 v12; // rax
	__int64 v13; // rdi
	int* v14; // rax
	int* i; // rdi
	__int64 v16; // rsi
	int v17; // r12d
	_QWORD* v18; // rax
	int* v19; // rax
	int* v20; // r14
	int* v21; // rax
	int* v22; // r15
	int* v23; // rbx
	int* v24; // rcx
	__int64 v25; // rdx
	int* v26; // rsi
	_QWORD* v27; // rax
	int v28; // eax
	int* v29; // rsi
	_QWORD* v30; // rax
	int* v31; // rbx
	__int64 v32; // rcx
	int* v33; // rbx
	__int64 v34; // rcx
	int* v35; // rbx
	__int64 v36; // rcx
	__int64 v37; // rdx
	__int64 v38; // rax
	__int64 v39; // rdx
	__int64 v40; // r15
	int v41; // edi
	int v42; // eax
	__int64 v43; // rsi
	unsigned __int64 v44; // r14
	_QWORD* v45; // rbx
	int* k; // rbx
	__int64 v47; // r14
	int v48; // r15d
	_QWORD* v49; // rax
	_QWORD* v50; // rax
	__int64 v51; // rcx
	unsigned int v52; // edi
	__int64 v53; // rsi
	int v54; // edx
	__int16* v55; // rax
	_QWORD* v56; // rax
	_QWORD* v57; // rax
	int* v58; // rbx
	__int64 v59; // rcx
	__int64 v60; // r15
	__int64 v61; // rax
	__int64 v62; // rdx
	__int64 v63; // r14
	int v64; // edx
	int v65; // eax
	__int64 v66; // rdi
	unsigned __int64 v67; // rsi
	_QWORD* v68; // rbx
	int* m; // rbx
	__int64 v70; // r14
	int v71; // r15d
	_QWORD* v72; // rax
	int* v73; // rcx
	unsigned int v74; // edi
	__int64 v75; // rsi
	int v76; // edx
	__int16* v77; // rax
	_QWORD* v78; // rax
	_QWORD* v79; // rax
	int* v80; // rbx
	__int64 v81; // rcx
	__int64 v82; // rax
	__int64 v83; // rdx
	__int64 v84; // r15
	int v85; // r14d
	int v86; // eax
	__int64 v87; // rdi
	unsigned __int64 v88; // rsi
	_QWORD* v89; // rbx
	_QWORD* v90; // rax
	__int64* v91; // rbx
	__int64 v92; // rbx
	unsigned int v93; // r10d
	_QWORD** v94; // r9
	_QWORD* j; // rax
	__int64 v96; // rdx
	unsigned int v97; // ecx
	int v98; // r11d
	__int64 v99; // r9
	_QWORD* v100; // r11
	unsigned int v101; // r8d
	__int64 v102; // rax
	__int64 v103; // rdx
	__int64 v104; // rcx
	__int64* v105; // rcx
	__int16 v106; // dx
	int* v107; // rax
	__int64* v108; // rbx
	__int64 v109; // rbx
	unsigned int* v110; // rcx
	unsigned int v111; // edx
	__int64 v112; // r8
	__int64 v113; // rcx
	__int64 v114; // rax
	__int64* v115; // rax
	__int64 v116; // rax
	int v117; // eax
	unsigned __int64 v118; // rdx
	unsigned __int64 v119; // rcx
	_DWORD* v120; // rax
	int* v121; // rax
	__int64* v122; // rbx
	__int64 v123; // rbx
	unsigned int* v124; // rcx
	unsigned int v125; // eax
	unsigned int v126; // edx
	__int64 v127; // r8
	__int64 v128; // rcx
	__int64 v129; // rax
	__int64* v130; // rax
	__int64 v131; // rax
	unsigned int v132; // r10d
	_QWORD** v133; // r9
	_QWORD* v134; // rax
	__int64 v135; // rdx
	unsigned int v136; // ecx
	int v137; // r11d
	int v138; // ecx
	int* v139; // rdx
	int v140; // eax
	int* v141; // rax
	int* n; // rbx
	__int64 v143; // rdi
	int v144; // esi
	_QWORD* v145; // rax
	_QWORD* v146; // rax
	int* v147; // rbx
	__int64 v148; // rcx
	int v149; // [rsp+20h] [rbp-89h]
	__int64 v150; // [rsp+40h] [rbp-69h] BYREF
	__int64 v151; // [rsp+48h] [rbp-61h]
	int v152; // [rsp+50h] [rbp-59h] BYREF
	__int64 v153; // [rsp+58h] [rbp-51h] BYREF
	char v154[8]; // [rsp+60h] [rbp-49h] BYREF
	int* v155; // [rsp+68h] [rbp-41h]
	__int64 v156; // [rsp+70h] [rbp-39h] BYREF
	__int64 v157; // [rsp+78h] [rbp-31h]
	__int64 v158[2]; // [rsp+90h] [rbp-19h] BYREF
	__int64 v159; // [rsp+A0h] [rbp-9h] BYREF
	int* v160; // [rsp+A8h] [rbp-1h]
	__int64 v161[8]; // [rsp+C0h] [rbp+17h] BYREF

	v151 = a2;
	v3 = a1;
	v150 = a1;
	v4 = sub_14018B280(24i64, 0);
	v5 = qword_140C66650;
	*(_QWORD*)v4 = v4;
	*((_QWORD*)v4 + 1) = v4;
	v6 = *(_QWORD*)(a2 + 96);
	v7 = 0i64;
	v8 = v4;
	v155 = v4;
	if (*(_DWORD*)(v5 + 4 * v6))
	{
		do
		{
			v9 = v6 + v7;
			v10 = *(_DWORD*)(qword_140C66650 + 4 * (v6 + v7));
			if (v10)
			{
				v11 = *(_DWORD*)(v3 + 20);
				if (!v11 || v11 == v10)
				{
					v12 = sub_1405A8A40(v9, v10);
					v13 = v12;
					if (v12)
					{
						if ((unsigned int)sub_140553030(v12, *(_DWORD*)(v3 + 8) != 0))
						{
							v14 = sub_14018B280(24i64, 0);
							if (v14 != (int*)-16i64)
								*((_QWORD*)v14 + 2) = v13;
							*(_QWORD*)v14 = v8;
							*((_QWORD*)v14 + 1) = *((_QWORD*)v8 + 1);
							**((_QWORD**)v8 + 1) = v14;
							*((_QWORD*)v8 + 1) = v14;
						}
					}
				}
			}
			v6 = *(_QWORD*)(a2 + 96);
			++v7;
		} while (*(_DWORD*)(qword_140C66650 + 4 * (v6 + v7)));
	}
	if (*(int**)v8 != v8)
	{
		sub_140558E90((__int64)v154);
		v8 = v155;
	}
	for (i = *(int**)v8; i != v8; i = *(int**)i)
	{
		v16 = *((_QWORD*)i + 2);
		v17 = **(_DWORD**)(v16 + 8);
		v18 = sub_1405582B0(v150, &v159, 7, v16, 0, 0);
		sub_1405564F0(v150, 1, (int*)v18[1], 7, v17, 0, 0);
		if (v160)
			sub_14018B900((__int64)v160, 0);
		v19 = sub_14018B280(24i64, 0);
		*(_QWORD*)v19 = v19;
		v20 = v19;
		v158[1] = (__int64)v19;
		*((_QWORD*)v19 + 1) = v19;
		v21 = sub_14018B280(24i64, 0);
		*(_QWORD*)v21 = v21;
		*((_QWORD*)v21 + 1) = v21;
		v22 = v21;
		v161[1] = (__int64)v21;
		sub_140551AC0((__int64*)v16, (__int64)v158, (__int64)v161);
		v23 = *(int**)v20;
		v24 = *(int**)v20;
		v25 = 0i64;
		if (*(int**)v20 == v20)
			goto LABEL_98;
		do
		{
			v24 = *(int**)v24;
			++v25;
		} while (v24 != v20);
		if (!v25)
		{
		LABEL_98:
			v90 = sub_1405582B0(v150, &v156, 10, v16, 0, 0);
			sub_1405564F0(v150, 3, (int*)v90[1], 10, v17, 0, 0);
			if (v157)
				sub_14018B900(v157, 0);
		}
		else if (v23 != v20)
		{
			do
			{
				v26 = (int*)*((_QWORD*)v23 + 2);
				v27 = sub_14048BA10(&v156, v26);
				sub_14018F0E0(&v159, (unsigned __int16*)v27[1]);
				v28 = *v26;
				v29 = v160;
				sub_1405564F0(v150, 3, v160, 10, v17, v28, 0);
				if (v29)
					sub_14018B900((__int64)v29, 0);
				if (v157)
					sub_14018B900(v157, 0);
				v23 = *(int**)v23;
			} while (v23 != v20);
			v8 = v155;
		}
		v30 = sub_1405582B0(v150, &v156, 9, 0i64, 0, 0);
		v149 = v17;
		v3 = v150;
		sub_1405564F0(v150, 3, (int*)v30[1], 9, v149, 0, 0);
		if (v157)
			sub_14018B900(v157, 0);
		v31 = *(int**)v22;
		while (v31 != v22)
		{
			v32 = (__int64)v31;
			v31 = *(int**)v31;
			sub_14018B900(v32, 0);
		}
		*(_QWORD*)v22 = v22;
		*((_QWORD*)v22 + 1) = v22;
		sub_14018B900((__int64)v22, 0);
		v33 = *(int**)v20;
		while (v33 != v20)
		{
			v34 = (__int64)v33;
			v33 = *(int**)v33;
			sub_14018B900(v34, 0);
		}
		*(_QWORD*)v20 = v20;
		*((_QWORD*)v20 + 1) = v20;
		sub_14018B900((__int64)v20, 0);
	}
	v35 = *(int**)v8;
	while (v35 != v8)
	{
		v36 = (__int64)v35;
		v35 = *(int**)v35;
		sub_14018B900(v36, 0);
	}
	v37 = v151;
	v38 = qword_140C66650;
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	v39 = *(_QWORD*)(v37 + 88);
	v40 = 0i64;
	if (*(_DWORD*)(v38 + 4 * v39))
	{
		do
		{
			v41 = *(_DWORD*)(qword_140C66650 + 4 * (v39 + v40));
			if (v41)
			{
				v42 = *(_DWORD*)(v3 + 20);
				if (!v42 || v42 == v41)
				{
					v43 = qword_140C65B80;
					v152 = *(_DWORD*)(qword_140C66650 + 4 * (v39 + v40));
					v44 = (*(__int64(__fastcall**)(int*))(qword_140C65B80 + 32))(&v152);
					v45 = *(_QWORD**)(*(_QWORD*)(v43 + 24) + 8 * (v44 % *(_QWORD*)(v43 + 16)));
					if (v45)
					{
						while (v44 != *v45 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v43 + 40))(&v152, v45 + 2))
						{
							v45 = (_QWORD*)v45[1];
							if (!v45)
								goto LABEL_43;
						}
						v91 = v45 + 3;
						if (v91)
						{
							v92 = *v91;
							if (v92)
							{
								v93 = 0;
								v94 = (_QWORD**)(*(_QWORD*)(v3 + 112) + 8i64);
								do
								{
									for (j = (_QWORD*)**v94; j != *v94; j = (_QWORD*)*j)
									{
										v96 = j[2];
										v97 = *(_DWORD*)(v96 + 56);
										if (v97 <= 0xD)
										{
											v98 = 11712;
											if (_bittest(&v98, v97))
											{
												if (*(_DWORD*)(v96 + 60) == v41)
													goto LABEL_43;
											}
										}
									}
									++v93;
									v94 += 2;
								} while (v93 < 0xB);
								if (!*(_DWORD*)(v3 + 8))
								{
									v106 = -8193;
								LABEL_126:
									if (!(unsigned int)sub_140552550(v92, v106))
									{
										v107 = sub_14018B280(24i64, 0);
										if (v107 != (int*)-16i64)
											*((_QWORD*)v107 + 2) = v92;
										*(_QWORD*)v107 = v8;
										*((_QWORD*)v107 + 1) = *((_QWORD*)v8 + 1);
										**((_QWORD**)v8 + 1) = v107;
										*((_QWORD*)v8 + 1) = v107;
									}
									goto LABEL_43;
								}
								v99 = *(_QWORD*)(v92 + 8);
								v100 = *(_QWORD**)qword_140C65B80;
								v101 = *(_DWORD*)v99;
								v102 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
								v103 = v102;
								v104 = *(_QWORD*)(v102 + 8);
								while (v104)
								{
									if (*(_DWORD*)(v104 + 32) < v101)
									{
										v104 = *(_QWORD*)(v104 + 24);
									}
									else
									{
										v103 = v104;
										v104 = *(_QWORD*)(v104 + 16);
									}
								}
								if (v103 == v102 || v101 < *(_DWORD*)(v103 + 32))
								{
									v153 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
									v105 = &v153;
								}
								else
								{
									v150 = v103;
									v105 = &v150;
								}
								if (*v105 != v102
									|| (unsigned int)sub_1405FBC40(v100, v101) == 3
									&& ((v99 = *(_QWORD*)(v92 + 8), (*(_BYTE*)(v99 + 12) & 0x20) != 0) || *(_DWORD*)(v99 + 436)))
								{
									if ((*(_BYTE*)(v99 + 12) & 4) != 0)
									{
										v106 = -513;
										goto LABEL_126;
									}
								}
							}
						}
					}
				}
			}
		LABEL_43:
			++v40;
			v39 = *(_QWORD*)(v151 + 88);
		} while (*(_DWORD*)(qword_140C66650 + 4 * (v39 + v40)));
	}
	if (*(int**)v8 != v8)
	{
		sub_140558E90((__int64)v154);
		v8 = v155;
	}
	for (k = *(int**)v8; k != v8; k = *(int**)k)
	{
		v47 = *((_QWORD*)k + 2);
		v48 = **(_DWORD**)(v47 + 8);
		v49 = sub_1405582B0(v3, &v156, 6, v47, 0, 0);
		sub_1405564F0(v3, 1, (int*)v49[1], 6, v48, 0, 0);
		if (v157)
			sub_14018B900(v157, 0);
		v50 = sub_1405582B0(v3, &v156, 11, v47, 0, 0);
		sub_1405564F0(v3, 2, (int*)v50[1], 11, v48, 0, 0);
		if (v157)
			sub_14018B900(v157, 0);
		sub_140437A10((_QWORD*)qword_140C658D8, 0x161u, 0, 0i64, 0, 0, 1);
		v52 = 0;
		v53 = 332i64;
		do
		{
			v54 = *(_DWORD*)(v53 + *(_QWORD*)(v47 + 8));
			if (!v54)
				break;
			v55 = sub_14034BDD0(v51, v54);
			if (!v55 || !*v55)
				break;
			v56 = sub_1405582B0(v3, &v156, 13, v47, 1, v52);
			sub_1405564F0(v3, 2, (int*)v56[1], 13, v48, 0, v52);
			v51 = v157;
			if (v157)
				sub_14018B900(v157, 0);
			++v52;
			v53 += 4i64;
		} while (v52 < 5);
		v57 = sub_1405582B0(v3, &v156, 14, v47, 0, 0);
		sub_1405564F0(v3, 2, (int*)v57[1], 9, v48, 0, 0);
		if (v157)
			sub_14018B900(v157, 0);
	}
	v58 = *(int**)v8;
	while (v58 != v8)
	{
		v59 = (__int64)v58;
		v58 = *(int**)v58;
		sub_14018B900(v59, 0);
	}
	v60 = v151;
	v61 = qword_140C66650;
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	v62 = *(_QWORD*)(v60 + 88);
	v63 = 0i64;
	if (*(_DWORD*)(v61 + 4 * v62))
	{
		while (1)
		{
			v64 = *(_DWORD*)(qword_140C66650 + 4 * (v62 + v63));
			if (!v64)
				goto LABEL_71;
			v65 = *(_DWORD*)(v3 + 20);
			if (v65)
			{
				if (v65 != v64)
					goto LABEL_71;
			}
			v66 = qword_140C65B80;
			LODWORD(v153) = v64;
			v67 = (*(__int64(__fastcall**)(__int64*))(qword_140C65B80 + 32))(&v153);
			v68 = *(_QWORD**)(*(_QWORD*)(v66 + 24) + 8 * (v67 % *(_QWORD*)(v66 + 16)));
			if (!v68)
				goto LABEL_71;
			while (v67 != *v68 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v66 + 40))(&v153, v68 + 2))
			{
				v68 = (_QWORD*)v68[1];
				if (!v68)
					goto LABEL_71;
			}
			v108 = v68 + 3;
			if (!v108)
				goto LABEL_71;
			v109 = *v108;
			if (!v109)
				goto LABEL_71;
			if (*(_DWORD*)(v3 + 8))
			{
				v110 = *(unsigned int**)(v109 + 8);
				if ((v110[3] & 4) == 0)
					goto LABEL_71;
				v111 = *v110;
				v112 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
				v113 = v112;
				v114 = *(_QWORD*)(v112 + 8);
				while (v114)
				{
					if (*(_DWORD*)(v114 + 32) < v111)
					{
						v114 = *(_QWORD*)(v114 + 24);
					}
					else
					{
						v113 = v114;
						v114 = *(_QWORD*)(v114 + 16);
					}
				}
				if (v113 == v112 || v111 < *(_DWORD*)(v113 + 32))
				{
					v158[0] = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
					v115 = v158;
				}
				else
				{
					v150 = v113;
					v115 = &v150;
				}
				v116 = *v115;
				if (v116 == v112 || *(_DWORD*)(v116 + 36) == 7)
					goto LABEL_71;
			}
			v117 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v109 + 8));
			if (v117 == 1)
				goto LABEL_151;
			if (v117 == 2)
				break;
		LABEL_71:
			v62 = *(_QWORD*)(v60 + 88);
			++v63;
			if (!*(_DWORD*)(qword_140C66650 + 4 * (v62 + v63)))
				goto LABEL_72;
		}
		v118 = *(_QWORD*)(v109 + 144);
		v119 = 0i64;
		if (v118)
		{
			v120 = *(_DWORD**)(v109 + 136);
			while (*v120 != *(_DWORD*)v60)
			{
				++v119;
				++v120;
				if (v119 >= v118)
					goto LABEL_151;
			}
			goto LABEL_71;
		}
	LABEL_151:
		v121 = sub_14018B280(24i64, 0);
		if (v121 != (int*)-16i64)
			*((_QWORD*)v121 + 2) = v109;
		*(_QWORD*)v121 = v8;
		*((_QWORD*)v121 + 1) = *((_QWORD*)v8 + 1);
		**((_QWORD**)v8 + 1) = v121;
		*((_QWORD*)v8 + 1) = v121;
		goto LABEL_71;
	}
LABEL_72:
	if (*(int**)v8 != v8)
	{
		sub_140558E90((__int64)v154);
		v8 = v155;
	}
	for (m = *(int**)v8; m != v8; m = *(int**)m)
	{
		v70 = *((_QWORD*)m + 2);
		v71 = **(_DWORD**)(v70 + 8);
		v72 = sub_1405582B0(v3, &v159, 8, v70, 1, 0);
		sub_1405564F0(v3, 1, (int*)v72[1], 8, v71, 0, 0);
		v73 = v160;
		if (v160)
			sub_14018B900((__int64)v160, 0);
		v74 = 0;
		v75 = 332i64;
		do
		{
			v76 = *(_DWORD*)(v75 + *(_QWORD*)(v70 + 8));
			if (!v76)
				break;
			v77 = sub_14034BDD0((__int64)v73, v76);
			if (!v77 || !*v77)
				break;
			v78 = sub_1405582B0(v3, &v159, 13, v70, 1, v74);
			sub_1405564F0(v3, 4, (int*)v78[1], 13, v71, 0, v74);
			v73 = v160;
			if (v160)
				sub_14018B900((__int64)v160, 0);
			++v74;
			v75 += 4i64;
		} while (v74 < 5);
		v79 = sub_1405582B0(v3, &v159, 12, v70, 1, 0);
		sub_1405564F0(v3, 4, (int*)v79[1], 9, v71, 0, 0);
		if (v160)
			sub_14018B900((__int64)v160, 0);
	}
	v80 = *(int**)v8;
	while (v80 != v8)
	{
		v81 = (__int64)v80;
		v80 = *(int**)v80;
		sub_14018B900(v81, 0);
	}
	v82 = v151;
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	v83 = *(_QWORD*)(v82 + 96);
	v84 = 0i64;
	if (*(_DWORD*)(qword_140C66650 + 4 * v83))
	{
		do
		{
			v85 = *(_DWORD*)(qword_140C66650 + 4 * (v83 + v84));
			if (v85)
			{
				v86 = *(_DWORD*)(v3 + 20);
				if (!v86 || v86 == v85)
				{
					v87 = qword_140C65B80;
					LODWORD(v150) = *(_DWORD*)(qword_140C66650 + 4 * (v83 + v84));
					v88 = (*(__int64(__fastcall**)(__int64*))(qword_140C65B80 + 32))(&v150);
					v89 = *(_QWORD**)(*(_QWORD*)(v87 + 24) + 8 * (v88 % *(_QWORD*)(v87 + 16)));
					if (v89)
					{
						while (v88 != *v89 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v87 + 40))(&v150, v89 + 2))
						{
							v89 = (_QWORD*)v89[1];
							if (!v89)
								goto LABEL_187;
						}
						v122 = v89 + 3;
						if (v122)
						{
							v123 = *v122;
							if (v123)
							{
								if (!*(_DWORD*)(v3 + 8))
									goto LABEL_170;
								v124 = *(unsigned int**)(v123 + 8);
								v125 = v124[3];
								if ((v125 & 8) != 0 && (v125 & 0x10000) != 0)
								{
									v126 = *v124;
									v127 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
									v128 = v127;
									v129 = *(_QWORD*)(v127 + 8);
									while (v129)
									{
										if (*(_DWORD*)(v129 + 32) < v126)
										{
											v129 = *(_QWORD*)(v129 + 24);
										}
										else
										{
											v128 = v129;
											v129 = *(_QWORD*)(v129 + 16);
										}
									}
									if (v128 == v127 || v126 < *(_DWORD*)(v128 + 32))
									{
										v161[0] = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
										v130 = v161;
									}
									else
									{
										v158[0] = v128;
										v130 = v158;
									}
									v131 = *v130;
									if (v131 != v127 && *(_DWORD*)(v131 + 36) != 7)
									{
									LABEL_170:
										if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v123 + 8)) == 1)
										{
											v132 = 0;
											v133 = (_QWORD**)(*(_QWORD*)(v3 + 112) + 8i64);
											while (1)
											{
												v134 = (_QWORD*)**v133;
												if (v134 != *v133)
													break;
											LABEL_177:
												++v132;
												v133 += 2;
												if (v132 >= 0xB)
												{
													if ((!*(_DWORD*)(v3 + 8)
														|| (v138 = *(_DWORD*)(*(_QWORD*)(v123 + 8) + 12i64), (v138 & 8) != 0)
														|| (v138 & 0x10000) != 0)
														&& (v139 = (int*)(qword_140C66650 + 4i64 * *(_QWORD*)(v151 + 88)), (v140 = *v139) != 0))
													{
														while (v140 != v85)
														{
															v140 = v139[1];
															++v139;
															if (!v140)
																goto LABEL_184;
														}
													}
													else
													{
													LABEL_184:
														v141 = sub_14018B280(24i64, 0);
														if (v141 != (int*)-16i64)
															*((_QWORD*)v141 + 2) = v123;
														*(_QWORD*)v141 = v8;
														*((_QWORD*)v141 + 1) = *((_QWORD*)v8 + 1);
														**((_QWORD**)v8 + 1) = v141;
														*((_QWORD*)v8 + 1) = v141;
													}
													goto LABEL_187;
												}
											}
											while (1)
											{
												v135 = v134[2];
												v136 = *(_DWORD*)(v135 + 56);
												if (v136 <= 0xD)
												{
													v137 = 11712;
													if (_bittest(&v137, v136))
													{
														if (*(_DWORD*)(v135 + 60) == v85)
															break;
													}
												}
												v134 = (_QWORD*)*v134;
												if (v134 == *v133)
													goto LABEL_177;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		LABEL_187:
			++v84;
			v83 = *(_QWORD*)(v151 + 96);
		} while (*(_DWORD*)(qword_140C66650 + 4 * (v83 + v84)));
	}
	if (*(int**)v8 != v8)
	{
		sub_140558E90((__int64)v154);
		v8 = v155;
	}
	for (n = *(int**)v8; n != v8; n = *(int**)n)
	{
		v143 = *((_QWORD*)n + 2);
		v144 = **(_DWORD**)(v143 + 8);
		v145 = sub_1405582B0(v3, &v156, 8, v143, 0, 0);
		sub_1405564F0(v3, 1, (int*)v145[1], 8, v144, 0, 0);
		if (v157)
			sub_14018B900(v157, 0);
		v146 = sub_1405582B0(v3, &v156, 12, v143, 0, 0);
		sub_1405564F0(v3, 4, (int*)v146[1], 9, v144, 0, 0);
		if (v157)
			sub_14018B900(v157, 0);
	}
	v147 = *(int**)v8;
	while (v147 != v8)
	{
		v148 = (__int64)v147;
		v147 = *(int**)v147;
		sub_14018B900(v148, 0);
	}
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	sub_14018B900((__int64)v8, 0);
}
// 14055584B: variable 'v51' is possibly undefined
// 140555A8B: variable 'v73' is possibly undefined
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C66650: using guessed type __int64 qword_140C66650;
// 140555350: using guessed type char var_A0[8];

