#include "../winhttp.h"

//----- (0000000140490AE0) ----------------------------------------------------
__int64 __fastcall sub_140490AE0(_QWORD* a1)
{
	__int64 v2; // rdi
	int* v3; // rax
	__int64 v4; // rax
	__int64 k; // rcx
	unsigned int v6; // eax
	unsigned int v7; // r15d
	unsigned int i; // r14d
	__int64 v9; // rax
	_DWORD* v10; // rbx
	unsigned int v11; // edi
	__int64 v12; // rax
	unsigned int v13; // r10d
	__int64 v14; // rsi
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // r9
	__int64 v19; // rcx
	__int64 v20; // rdx
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 v23; // rax
	unsigned int v24; // eax
	int* v25; // rdi
	int* v26; // rax
	__int64 v27; // rdx
	unsigned int v28; // ecx
	__int64 v29; // rax
	__int64 v30; // rbx
	int* v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rax
	unsigned int v34; // r12d
	unsigned int j; // r15d
	__int64 v36; // rax
	__int64 v37; // rdi
	unsigned int v38; // ebx
	__int64 v39; // rax
	__int64 v40; // r8
	__int64 v41; // rax
	__int64* v42; // rax
	__int64 v43; // rax
	__int64 v44; // rbx
	int* v45; // rax
	int* v46; // r14
	__int64 v47; // r8
	__int64 v48; // rcx
	unsigned int v49; // edx
	int* v50; // rax
	unsigned int v51; // ecx
	__int64 v52; // rdx
	__int64 v53; // rax
	__int64 v54; // rbx
	int* v55; // rcx
	__int64 v56; // rax
	__int64 v57; // rax
	unsigned int* v58; // rax
	unsigned int v59; // edi
	unsigned int v60; // ecx
	__int64 v61; // rax
	__int64 v62; // rcx
	__int64 v63; // r8
	signed int v64; // edx
	__int64 v65; // rax
	__int64 v66; // rsi
	unsigned __int64 v67; // rbx
	int v68; // ecx
	bool v69; // cl
	int v70; // eax
	bool v71; // al
	int* v72; // rcx
	__int64 v73; // rax
	__int64 v74; // rax
	__int64 v75; // rdx
	__int64 v76; // rax
	__int64 v77; // rcx
	unsigned int v78; // eax
	unsigned int v79; // r13d
	unsigned int v80; // r15d
	__int64 v81; // rax
	__int64 v82; // rdi
	__int64 v83; // rdx
	int* v84; // rbx
	__int64 v85; // rax
	int* v86; // rsi
	__int64 v87; // rdi
	int* v88; // rax
	int* v89; // r14
	int* v90; // rdx
	_QWORD* v91; // r15
	__int64 v92; // rax
	__int64 v93; // rbx
	__int64 v94; // rax
	__int64 m; // rax
	__int64 n; // rax
	unsigned int v97; // eax
	unsigned int v98; // r13d
	unsigned int ii; // r12d
	__int64 v100; // rax
	int* v101; // rsi
	int v102; // ecx
	int v103; // ecx
	__int64 v104; // rax
	_QWORD* v105; // rcx
	int* v106; // rdx
	__int64 v107; // rax
	unsigned int v108; // ebx
	__int64 v109; // rax
	__int64 v110; // r9
	int v111; // edx
	__int64 v112; // r8
	__int64 v113; // rcx
	__int64 v114; // rax
	__int64* v115; // rax
	__int64 v116; // rax
	_QWORD* v117; // rdi
	int* v118; // rdx
	__int64 v119; // rdx
	int v120; // ecx
	__int64 v121; // rax
	int* v122; // rbx
	int* v123; // rdx
	__int64 v124; // rbx
	__int64 v125; // r8
	int* v126; // rax
	__int64 v127; // rcx
	unsigned int v128; // ecx
	__int64 v129; // rdx
	int* v130; // rbx
	__int64 v131; // rax
	__int64 v132; // rdi
	int* v133; // rax
	int* v134; // r14
	int* v135; // rdx
	__int64 v136; // rcx
	int* v138; // [rsp+20h] [rbp-49h] BYREF
	int* v139; // [rsp+28h] [rbp-41h] BYREF
	int* v140; // [rsp+30h] [rbp-39h] BYREF
	__int64 v141; // [rsp+38h] [rbp-31h]
	__int64 v142; // [rsp+40h] [rbp-29h]
	int v143; // [rsp+48h] [rbp-21h] BYREF
	int* v144; // [rsp+50h] [rbp-19h]
	__int64 v145; // [rsp+58h] [rbp-11h]
	__int64 v146; // [rsp+60h] [rbp-9h]
	__int64 v147; // [rsp+68h] [rbp-1h]
	int* v148; // [rsp+70h] [rbp+7h] BYREF
	unsigned __int64 v150; // [rsp+D8h] [rbp+6Fh] BYREF
	int* v151; // [rsp+E0h] [rbp+77h] BYREF
	__int64 v152; // [rsp+E8h] [rbp+7Fh] BYREF

	v2 = 4i64;
	do
	{
		v3 = sub_14018B280(48i64, 0);
		v145 = 0i64;
		v144 = v3;
		*(_BYTE*)v3 = 0;
		*((_QWORD*)v144 + 1) = 0i64;
		*((_QWORD*)v144 + 2) = v144;
		*((_QWORD*)v144 + 3) = v144;
		v4 = a1[3];
		if (v4 == a1[4])
		{
			sub_140494140(a1 + 1, a1[3], (__int64)&v143);
		}
		else
		{
			if (v4)
				sub_14048B2A0(a1[3], (__int64)&v143);
			a1[3] += 32i64;
		}
		sub_140008410((__int64)&v143);
		sub_14018B900((__int64)v144, 0);
		--v2;
	} while (v2);
	if (qword_140C63838)
	{
		v6 = qword_140C63838(off_140A6BB70, qword_140C63858);
	}
	else
	{
		if (dword_140C6405C)
		{
			v7 = 0;
			goto LABEL_16;
		}
		if ((int)sub_14021C6E0() < 0)
		{
			v7 = 0;
			goto LABEL_16;
		}
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65408 + 40i64))(qword_140C65408);
	}
	v7 = v6;
LABEL_16:
	for (i = 0; i < v7; ++i)
	{
		if (qword_140C63848)
		{
			v9 = qword_140C63848(off_140A6BB70, i, qword_140C63858);
		}
		else
		{
			if (dword_140C6405C || (int)sub_14021C6E0() < 0)
				continue;
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65408 + 32i64))(qword_140C65408, i);
		}
		v10 = (_DWORD*)v9;
		if (v9 && *(_DWORD*)(v9 + 20) < 4u)
		{
			v11 = *(_DWORD*)(v9 + 16);
			if (qword_140C63840)
			{
				v12 = qword_140C63840(off_140A6E3E8, v11, qword_140C63858);
				goto LABEL_29;
			}
			if (!dword_140C64634 && (int)sub_14024D920() >= 0)
			{
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v11);
			LABEL_29:
				if (v12)
				{
					v13 = v10[5];
					v14 = a1[2] + 32i64 * v13;
					v15 = *(_QWORD*)(v14 + 8);
					v16 = v15;
					v17 = *(_QWORD*)(v15 + 8);
					while (v17)
					{
						if (*(_DWORD*)(v17 + 32) < *v10)
						{
							v17 = *(_QWORD*)(v17 + 24);
						}
						else
						{
							v16 = v17;
							v17 = *(_QWORD*)(v17 + 16);
						}
					}
					if (v16 == v15 || *v10 < *(_DWORD*)(v16 + 32))
					{
						v151 = *(int**)(v14 + 8);
						k = (__int64)&v151;
					}
					else
					{
						v150 = v16;
						k = (__int64)&v150;
					}
					if (*(_QWORD*)k == v15)
					{
						v18 = a1[6];
						v19 = v18;
						v20 = *(_QWORD*)(v18 + 8);
						v21 = v20;
						while (v21)
						{
							if (*(_DWORD*)(v21 + 32) < v10[4])
							{
								v21 = *(_QWORD*)(v21 + 24);
							}
							else
							{
								v19 = v21;
								v21 = *(_QWORD*)(v21 + 16);
							}
						}
						if (v19 == v18 || v10[4] < *(_DWORD*)(v19 + 32))
						{
							v138 = (int*)a1[6];
							v22 = (__int64*)&v138;
						}
						else
						{
							v152 = v19;
							v22 = &v152;
						}
						v23 = *v22;
						if (v23 != v18
							&& (k = *(_QWORD*)(v23 + 40), *(_DWORD*)(*(_QWORD*)k + 20i64) == v13)
							&& *(_DWORD*)(*(_QWORD*)k + 12i64) == v10[3])
						{
							while (v20)
							{
								if (*(_DWORD*)(v20 + 32) < v10[4])
									v20 = *(_QWORD*)(v20 + 24);
								else
									v20 = *(_QWORD*)(v20 + 16);
							}
						}
						else
						{
							v25 = sub_14018B280(72i64, 0);
							if (v25)
							{
								v26 = sub_14018B280(48i64, 0);
								*((_QWORD*)v25 + 2) = v26;
								*((_QWORD*)v25 + 3) = 0i64;
								*(_BYTE*)v26 = 0;
								*(_QWORD*)(*((_QWORD*)v25 + 2) + 8i64) = 0i64;
								*(_QWORD*)(*((_QWORD*)v25 + 2) + 16i64) = *((_QWORD*)v25 + 2);
								*(_QWORD*)(*((_QWORD*)v25 + 2) + 24i64) = *((_QWORD*)v25 + 2);
								*((_QWORD*)v25 + 6) = 0i64;
								*((_QWORD*)v25 + 7) = 0i64;
								*((_QWORD*)v25 + 8) = 0i64;
							}
							else
							{
								v25 = 0i64;
							}
							*(_QWORD*)v25 = v10;
							*(_QWORD*)sub_140055BE0(v14, v10) = v25;
							v27 = a1[6];
							v28 = *(_DWORD*)(*(_QWORD*)v25 + 16i64);
							v29 = *(_QWORD*)(v27 + 8);
							v30 = v27;
							LODWORD(v140) = v28;
							while (v29)
							{
								v30 = v29;
								if (v28 >= *(_DWORD*)(v29 + 32))
									v29 = *(_QWORD*)(v29 + 24);
								else
									v29 = *(_QWORD*)(v29 + 16);
							}
							if (v30 == v27 || v28 < *(_DWORD*)(v30 + 32))
							{
								v31 = sub_14018B280(48i64, 0);
								if (v31 != (int*)-32i64)
								{
									*((_QWORD*)v31 + 4) = v140;
									*((_QWORD*)v31 + 5) = v25;
								}
								*(_QWORD*)(v30 + 16) = v31;
								v33 = a1[6];
								if (v30 == v33)
								{
									*(_QWORD*)(v33 + 8) = v31;
									*(_QWORD*)(a1[6] + 24i64) = v31;
								}
								else if (v30 == *(_QWORD*)(v33 + 16))
								{
									*(_QWORD*)(v33 + 16) = v31;
								}
							}
							else
							{
								v31 = sub_14018B280(48i64, 0);
								if (v31 != (int*)-32i64)
								{
									*((_QWORD*)v31 + 4) = v140;
									*((_QWORD*)v31 + 5) = v25;
								}
								*(_QWORD*)(v30 + 24) = v31;
								v32 = a1[6];
								if (v30 == *(_QWORD*)(v32 + 24))
									*(_QWORD*)(v32 + 24) = v31;
							}
							*((_QWORD*)v31 + 1) = v30;
							*((_QWORD*)v31 + 2) = 0i64;
							*((_QWORD*)v31 + 3) = 0i64;
							sub_1400081C0((__int64)v31, (_QWORD*)(a1[6] + 8i64));
							++a1[7];
						}
					}
				}
			}
		}
	}
	if (qword_140C63838)
	{
		v24 = qword_140C63838(off_140A6BDA0, qword_140C63858);
	}
	else
	{
		if (dword_140C64EC8)
		{
			v34 = 0;
			goto LABEL_87;
		}
		if ((int)sub_14021F160() < 0)
		{
			v34 = 0;
			goto LABEL_87;
		}
		v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64E80 + 40i64))(qword_140C64E80);
	}
	v34 = v24;
LABEL_87:
	for (j = 0; j < v34; ++j)
	{
		if (qword_140C63848)
		{
			v36 = qword_140C63848(off_140A6BDA0, j, qword_140C63858);
		}
		else
		{
			if (dword_140C64EC8 || (int)sub_14021F160() < 0)
				continue;
			v36 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E80 + 32i64))(qword_140C64E80, j);
		}
		v37 = v36;
		if (v36)
		{
			v38 = *(_DWORD*)(v36 + 32);
			if (qword_140C63840)
			{
				v39 = qword_140C63840(off_140A6BB70, v38, qword_140C63858);
				goto LABEL_99;
			}
			if (!dword_140C6405C && (int)sub_14021C6E0() >= 0)
			{
				v39 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65408 + 24i64))(qword_140C65408, v38);
			LABEL_99:
				if (!v39)
					continue;
				k = *(unsigned int*)(v39 + 20);
				if ((unsigned int)k >= 4)
					continue;
				v40 = *(_QWORD*)(a1[2] + 32i64 * (unsigned int)k + 8);
				k = v40;
				v41 = *(_QWORD*)(v40 + 8);
				while (v41)
				{
					if (*(_DWORD*)(v41 + 32) < *(_DWORD*)(v37 + 32))
					{
						v41 = *(_QWORD*)(v41 + 24);
					}
					else
					{
						k = v41;
						v41 = *(_QWORD*)(v41 + 16);
					}
				}
				if (k == v40 || *(_DWORD*)(v37 + 32) < *(_DWORD*)(k + 32))
				{
					v152 = v40;
					v42 = &v152;
				}
				else
				{
					v151 = (int*)k;
					v42 = (__int64*)&v151;
				}
				v43 = *v42;
				if (v43 == v40)
					continue;
				v44 = *(_QWORD*)(v43 + 40);
				v45 = sub_14018B280(40i64, 0);
				v46 = v45;
				if (v45)
				{
					*((_QWORD*)v45 + 2) = 0i64;
					*((_QWORD*)v45 + 3) = 0i64;
					*((_QWORD*)v45 + 4) = 0i64;
					*(_QWORD*)v45 = v37;
				}
				else
				{
					v46 = 0i64;
				}
				v47 = *(_QWORD*)(v44 + 16);
				v48 = *(_QWORD*)(v47 + 8);
				v49 = **(_DWORD**)v46;
				v50 = (int*)v47;
				while (v48)
				{
					if (*(_DWORD*)(v48 + 32) < v49)
					{
						v48 = *(_QWORD*)(v48 + 24);
					}
					else
					{
						v50 = (int*)v48;
						v48 = *(_QWORD*)(v48 + 16);
					}
				}
				if (v50 == (int*)v47 || v49 < v50[8])
				{
					LODWORD(v140) = **(_DWORD**)v46;
					v141 = 0i64;
					v138 = v50;
					sub_140055C60(v44 + 8, &v139, (__int64*)&v138, &v140);
					v50 = v139;
				}
				*((_QWORD*)v50 + 5) = v46;
				v51 = *(_DWORD*)(v37 + 4);
				if (v51)
				{
					v52 = a1[14];
					LODWORD(v148) = *(_DWORD*)(v37 + 4);
					v53 = *(_QWORD*)(v52 + 8);
					v54 = v52;
					while (v53)
					{
						v54 = v53;
						if (v51 >= *(_DWORD*)(v53 + 32))
							v53 = *(_QWORD*)(v53 + 24);
						else
							v53 = *(_QWORD*)(v53 + 16);
					}
					if (v54 == v52 || v51 < *(_DWORD*)(v54 + 32))
					{
						v55 = sub_14018B280(48i64, 0);
						if (v55 != (int*)-32i64)
						{
							*((_QWORD*)v55 + 4) = v148;
							*((_QWORD*)v55 + 5) = v46;
						}
						*(_QWORD*)(v54 + 16) = v55;
						v57 = a1[14];
						if (v54 == v57)
						{
							*(_QWORD*)(v57 + 8) = v55;
							*(_QWORD*)(a1[14] + 24i64) = v55;
						}
						else if (v54 == *(_QWORD*)(v57 + 16))
						{
							*(_QWORD*)(v57 + 16) = v55;
						}
					}
					else
					{
						v55 = sub_14018B280(48i64, 0);
						if (v55 != (int*)-32i64)
						{
							*((_QWORD*)v55 + 4) = v148;
							*((_QWORD*)v55 + 5) = v46;
						}
						*(_QWORD*)(v54 + 24) = v55;
						v56 = a1[14];
						if (v54 == *(_QWORD*)(v56 + 24))
							*(_QWORD*)(v56 + 24) = v55;
					}
					*((_QWORD*)v55 + 1) = v54;
					*((_QWORD*)v55 + 2) = 0i64;
					*((_QWORD*)v55 + 3) = 0i64;
					sub_1400081C0((__int64)v55, (_QWORD*)(a1[14] + 8i64));
					++a1[15];
				}
				v58 = *(unsigned int**)v46;
				if (*(_QWORD*)v46)
					v59 = v58[5];
				else
					v59 = 0;
				v60 = v58[3];
				if (v60 == 27)
				{
					if (qword_140C63840)
					{
						v61 = qword_140C63840(off_140A6BBE0, v59, qword_140C63858);
					LABEL_157:
						if (v61)
							v59 = *(_DWORD*)(v61 + 4);
						goto LABEL_159;
					}
					if (dword_140C65148 || (int)sub_14021CF60() < 0)
						goto LABEL_159;
					v62 = qword_140C64720;
				}
				else
				{
					if (v60 != 21)
						goto LABEL_159;
					if (qword_140C63840)
					{
						v61 = qword_140C63840(off_140A6BFD0, v59, qword_140C63858);
						goto LABEL_157;
					}
					if (dword_140C64500 || (int)sub_140221BE0() < 0)
					{
					LABEL_159:
						v63 = a1[34];
						v64 = *(_DWORD*)(*(_QWORD*)v46 + 12i64);
						v65 = *(_QWORD*)(v63 + 8);
						v66 = v63;
						v150 = __PAIR64__(v59, v64);
						v67 = __PAIR64__(v59, v64);
						while (v65)
						{
							v68 = *(_DWORD*)(v65 + 32);
							v66 = v65;
							if (v64 == v68)
								v69 = v59 < *(_DWORD*)(v65 + 36);
							else
								v69 = v64 < v68;
							if (v69)
								v65 = *(_QWORD*)(v65 + 16);
							else
								v65 = *(_QWORD*)(v65 + 24);
						}
						if (v66 == v63
							|| ((v70 = *(_DWORD*)(v66 + 32), v64 == v70) ? (v71 = v59 < *(_DWORD*)(v66 + 36)) : (v71 = v64 < v70),
								v71))
						{
							v72 = sub_14018B280(48i64, 0);
							if (v72 != (int*)-32i64)
							{
								*((_QWORD*)v72 + 4) = v67;
								*((_QWORD*)v72 + 5) = v46;
							}
							*(_QWORD*)(v66 + 16) = v72;
							v74 = a1[34];
							if (v66 == v74)
							{
								*(_QWORD*)(v74 + 8) = v72;
								*(_QWORD*)(a1[34] + 24i64) = v72;
							}
							else if (v66 == *(_QWORD*)(v74 + 16))
							{
								*(_QWORD*)(v74 + 16) = v72;
							}
						}
						else
						{
							v72 = sub_14018B280(48i64, 0);
							if (v72 != (int*)-32i64)
							{
								*((_QWORD*)v72 + 4) = v67;
								*((_QWORD*)v72 + 5) = v46;
							}
							*(_QWORD*)(v66 + 24) = v72;
							v73 = a1[34];
							if (v66 == *(_QWORD*)(v73 + 24))
								*(_QWORD*)(v73 + 24) = v72;
						}
						*((_QWORD*)v72 + 1) = v66;
						*((_QWORD*)v72 + 2) = 0i64;
						*((_QWORD*)v72 + 3) = 0i64;
						sub_1400081C0((__int64)v72, (_QWORD*)(a1[34] + 8i64));
						++a1[35];
						(*(void(__fastcall**)(_QWORD*, int*))(*a1 + 24i64))(a1, v46);
						continue;
					}
					v62 = qword_140C64300;
				}
				v61 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v62 + 24i64))(v62, v59);
				goto LABEL_157;
			}
		}
	}
	v75 = a1[6];
	v76 = *(_QWORD*)(v75 + 16);
	while (v76 != v75)
	{
		v77 = *(_QWORD*)(v76 + 24);
		if (v77)
		{
			v76 = *(_QWORD*)(v76 + 24);
			for (k = *(_QWORD*)(v77 + 16); k; k = *(_QWORD*)(k + 16))
				v76 = k;
		}
		else
		{
			for (k = *(_QWORD*)(v76 + 8); v76 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
				v76 = k;
			if (*(_QWORD*)(v76 + 24) != k)
				v76 = k;
		}
	}
	if (qword_140C63838)
	{
		v78 = qword_140C63838(off_140A6BD68, qword_140C63858);
	}
	else
	{
		if (dword_140C638B8)
		{
			v79 = 0;
			goto LABEL_202;
		}
		if ((int)sub_14021ED20() < 0)
		{
			v79 = 0;
			goto LABEL_202;
		}
		v78 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65628 + 40i64))(qword_140C65628);
	}
	v79 = v78;
LABEL_202:
	v80 = 0;
	if (v79)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C638B8 && (int)sub_14021ED20() >= 0)
			{
				v81 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65628 + 32i64))(qword_140C65628, v80);
				goto LABEL_208;
			}
		LABEL_226:
			if (++v80 >= v79)
				goto LABEL_227;
		}
		v81 = qword_140C63848(off_140A6BD68, v80, qword_140C63858);
	LABEL_208:
		v82 = v81;
		if (v81)
		{
			k = *(unsigned int*)(v81 + 4);
			if ((unsigned int)k < 4)
			{
				v83 = a1[10];
				v84 = (int*)v83;
				v85 = *(_QWORD*)(v83 + 8);
				while (v85)
				{
					if (*(_DWORD*)(v85 + 32) < (int)k)
					{
						v85 = *(_QWORD*)(v85 + 24);
					}
					else
					{
						v84 = (int*)v85;
						v85 = *(_QWORD*)(v85 + 16);
					}
				}
				if (v84 == (int*)v83 || (int)k < v84[8])
				{
					LODWORD(v140) = k;
					v142 = 0i64;
					v141 = 0i64;
					v150 = (unsigned __int64)v84;
					sub_140494310((__int64)(a1 + 9), &v151, (__int64*)&v150, (int*)&v140);
					v84 = v151;
				}
				v86 = sub_14018B280(40i64, 0);
				if (v86)
				{
					*((_QWORD*)v86 + 2) = 0i64;
					*((_QWORD*)v86 + 3) = 0i64;
					*((_QWORD*)v86 + 4) = 0i64;
					*(_QWORD*)v86 = v82;
				}
				else
				{
					v86 = 0i64;
				}
				v87 = *((_QWORD*)v84 + 6);
				v88 = sub_14018DB00(*((_QWORD*)v84 + 5), v87 + 1, 8i64);
				v89 = v88;
				*(_QWORD*)&v88[2 * v87] = v86;
				v90 = (int*)*((_QWORD*)v84 + 5);
				if (v90 != v88)
				{
					sub_1407DB590(v88, v90, 8i64 * *((_QWORD*)v84 + 6));
					k = *((_QWORD*)v84 + 5);
					if (k)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(k - 16) + 8i64))(k - 16);
					*((_QWORD*)v84 + 5) = v89;
				}
				*((_QWORD*)v84 + 6) = v87 + 1;
			}
		}
		goto LABEL_226;
	}
LABEL_227:
	v91 = a1;
	v92 = a1[10];
	v93 = *(_QWORD*)(v92 + 16);
	if (v93 != v92)
	{
		do
		{
			sub_140494940(k, *(__int64**)(v93 + 40), *(_QWORD*)(v93 + 48));
			v94 = *(_QWORD*)(v93 + 24);
			if (v94)
			{
				v93 = *(_QWORD*)(v93 + 24);
				for (m = *(_QWORD*)(v94 + 16); m; m = *(_QWORD*)(m + 16))
					v93 = m;
			}
			else
			{
				for (n = *(_QWORD*)(v93 + 8); v93 == *(_QWORD*)(n + 24); n = *(_QWORD*)(n + 8))
					v93 = n;
				if (*(_QWORD*)(v93 + 24) != n)
					v93 = n;
			}
		} while (v93 != a1[10]);
	}
	if (qword_140C63838)
	{
		v97 = qword_140C63838(off_140A6BDD8, qword_140C63858);
	}
	else
	{
		if (dword_140C64B5C)
		{
			v98 = 0;
			goto LABEL_245;
		}
		if ((int)sub_14021F5A0() < 0)
		{
			v98 = 0;
			goto LABEL_245;
		}
		v97 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A70 + 40i64))(qword_140C64A70);
	}
	v98 = v97;
LABEL_245:
	for (ii = 0; ii < v98; ++ii)
	{
		if (qword_140C63848)
		{
			v100 = qword_140C63848(off_140A6BDD8, ii, qword_140C63858);
		}
		else
		{
			if (dword_140C64B5C || (int)sub_14021F5A0() < 0)
				goto LABEL_325;
			v100 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A70 + 32i64))(qword_140C64A70, ii);
		}
		v101 = (int*)v100;
		if (v100)
		{
			v102 = *(_DWORD*)(v100 + 4);
			if (v102)
			{
				v103 = v102 - 1;
				if (v103)
				{
					if (v103 == 1)
					{
						v104 = sub_140491BD0((__int64)v91, *(_DWORD*)(v100 + 8));
						if (v104)
						{
							v105 = (_QWORD*)(v104 + 40);
						LABEL_257:
							v106 = (int*)v105[2];
							v151 = v101;
							if (v106 == (int*)v105[3])
							{
								sub_1400B9430(v105, v106, &v151);
							}
							else
							{
								if (v106)
									*(_QWORD*)v106 = v101;
								v105[2] += 8i64;
							}
						}
					}
				}
				else
				{
					v107 = sub_140491C60((__int64)v91, *(_DWORD*)(v100 + 8));
					if (v107)
					{
						v105 = (_QWORD*)(v107 + 8);
						goto LABEL_257;
					}
				}
			LABEL_311:
				v128 = v101[10];
				if (v128)
				{
					v129 = v91[38];
					v130 = (int*)v129;
					v131 = *(_QWORD*)(v129 + 8);
					while (v131)
					{
						if (*(_DWORD*)(v131 + 32) < v128)
						{
							v131 = *(_QWORD*)(v131 + 24);
						}
						else
						{
							v130 = (int*)v131;
							v131 = *(_QWORD*)(v131 + 16);
						}
					}
					if (v130 == (int*)v129 || v128 < v130[8])
					{
						v143 = v101[10];
						v145 = 0i64;
						v144 = 0i64;
						v151 = v130;
						sub_140494520((__int64)(v91 + 37), &v140, (__int64*)&v151, &v143);
						v130 = v140;
					}
					v132 = *((_QWORD*)v130 + 6);
					v133 = sub_14018DB00(*((_QWORD*)v130 + 5), v132 + 1, 8i64);
					v134 = v133;
					*(_QWORD*)&v133[2 * v132] = v101;
					v135 = (int*)*((_QWORD*)v130 + 5);
					if (v135 != v133)
					{
						sub_1407DB590(v133, v135, 8i64 * *((_QWORD*)v130 + 6));
						v136 = *((_QWORD*)v130 + 5);
						if (v136)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v136 - 16) + 8i64))(v136 - 16);
						*((_QWORD*)v130 + 5) = v134;
					}
					*((_QWORD*)v130 + 6) = v132 + 1;
				}
				goto LABEL_325;
			}
			v108 = *(_DWORD*)(v100 + 8);
			if (qword_140C63840)
			{
				v109 = qword_140C63840(off_140A6BD68, v108, qword_140C63858);
			}
			else
			{
				if (dword_140C638B8 || (int)sub_14021ED20() < 0)
					goto LABEL_311;
				v109 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65628 + 24i64))(qword_140C65628, v108);
			}
			if (v109)
			{
				v110 = *(unsigned int*)(v109 + 8);
				v111 = *(_DWORD*)(v109 + 4);
				if ((_DWORD)v110)
				{
					v112 = v91[10];
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
						v139 = (int*)v91[10];
						v115 = (__int64*)&v139;
					}
					else
					{
						v152 = v113;
						v115 = &v152;
					}
					v116 = *v115;
					if (v116 != v112 && (unsigned __int64)(v110 - 1) < *(_QWORD*)(v116 + 48))
					{
						v117 = *(_QWORD**)(*(_QWORD*)(v116 + 40) + 8 * (v110 - 1));
						if (v117)
						{
							v118 = (int*)v117[3];
							v151 = v101;
							if (v118 == (int*)v117[4])
							{
								sub_1400B9430(v117 + 1, v118, &v151);
							}
							else
							{
								if (v118)
									*(_QWORD*)v118 = v101;
								v117[3] += 8i64;
							}
							if (v101[3])
							{
								v119 = v91[42];
								v120 = *(_DWORD*)(*v117 + 4i64);
								v121 = *(_QWORD*)(v119 + 8);
								v122 = (int*)v119;
								while (v121)
								{
									if (*(_DWORD*)(v121 + 32) < v120)
									{
										v121 = *(_QWORD*)(v121 + 24);
									}
									else
									{
										v122 = (int*)v121;
										v121 = *(_QWORD*)(v121 + 16);
									}
								}
								if (v122 == (int*)v119 || v120 < v122[8])
								{
									v143 = *(_DWORD*)(*v117 + 4i64);
									v145 = 0i64;
									v147 = 0i64;
									sub_1407DB590(0i64, 0i64, 0i64);
									v146 = 0i64;
									v151 = v122;
									sub_140494730((__int64)(v91 + 41), &v138, (__int64*)&v151, &v143);
									v122 = v138;
								}
								v123 = (int*)*((_QWORD*)v122 + 7);
								if (v123 == *((int**)v122 + 8))
								{
									sub_14017B140((_QWORD*)v122 + 5, v123, v101 + 3);
								}
								else
								{
									if (v123)
										*v123 = v101[3];
									*((_QWORD*)v122 + 7) += 4i64;
								}
								v91 = a1;
								v124 = *v117;
								v125 = a1[46];
								v126 = (int*)v125;
								v127 = *(_QWORD*)(v125 + 8);
								while (v127)
								{
									if (*(_DWORD*)(v127 + 32) < (unsigned int)v101[3])
									{
										v127 = *(_QWORD*)(v127 + 24);
									}
									else
									{
										v126 = (int*)v127;
										v127 = *(_QWORD*)(v127 + 16);
									}
								}
								if (v126 == (int*)v125 || v101[3] < (unsigned int)v126[8])
								{
									v150 = (unsigned int)v101[3];
									v151 = v126;
									sub_140032B30((__int64)(a1 + 45), &v148, (__int64*)&v151, &v150);
									v126 = v148;
								}
								v126[9] = *(_DWORD*)(v124 + 8);
							}
						}
					}
				}
			}
			goto LABEL_311;
		}
	LABEL_325:
		v91 = a1;
	}
	return 0i64;
}
// 140490E50: conditional instruction was optimized away because rax.8==0
// 14049110F: conditional instruction was optimized away because rax.8==0
// 1404912A1: conditional instruction was optimized away because rax.8==0
// 140491598: variable 'k' is possibly undefined
// 140A6BB70: using guessed type wchar_t *off_140A6BB70[2];
// 140A6BBE0: using guessed type wchar_t *off_140A6BBE0[2];
// 140A6BD68: using guessed type wchar_t *off_140A6BD68[2];
// 140A6BDA0: using guessed type wchar_t *off_140A6BDA0[2];
// 140A6BDD8: using guessed type wchar_t *off_140A6BDD8[2];
// 140A6BFD0: using guessed type wchar_t *off_140A6BFD0[2];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638B8: using guessed type int dword_140C638B8;
// 140C6405C: using guessed type int dword_140C6405C;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64300: using guessed type __int64 qword_140C64300;
// 140C64500: using guessed type int dword_140C64500;
// 140C64634: using guessed type int dword_140C64634;
// 140C64720: using guessed type __int64 qword_140C64720;
// 140C64A70: using guessed type __int64 qword_140C64A70;
// 140C64B5C: using guessed type int dword_140C64B5C;
// 140C64E80: using guessed type __int64 qword_140C64E80;
// 140C64EC8: using guessed type int dword_140C64EC8;
// 140C65148: using guessed type int dword_140C65148;
// 140C65408: using guessed type __int64 qword_140C65408;
// 140C65628: using guessed type __int64 qword_140C65628;

