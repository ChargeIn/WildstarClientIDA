#include "../winhttp.h"

//----- (0000000140497390) ----------------------------------------------------
__int64 __fastcall sub_140497390(int** a1)
{
	__int64 v1; // r13
	int** v2; // r15
	unsigned int v3; // eax
	unsigned int v4; // r14d
	unsigned int v5; // esi
	int v6; // r12d
	__int64 v7; // rax
	_DWORD* v8; // rdi
	unsigned int v9; // ebx
	__int64 v10; // rax
	bool v11; // zf
	__int64 v12; // rax
	unsigned int v13; // ecx
	__int64 v14; // rax
	__int64 v15; // rbx
	unsigned int v16; // eax
	unsigned int v17; // r12d
	unsigned int i; // r14d
	__int64 v19; // rax
	unsigned int* v20; // rbx
	__int64 v21; // r8
	unsigned int v22; // edx
	__int64 v23; // rax
	__int64 v24; // rcx
	unsigned __int64* v25; // rax
	unsigned __int64 v26; // rax
	_QWORD* v27; // rdi
	unsigned int v28; // esi
	__int64 v29; // rax
	_DWORD** v30; // rsi
	__int64 v31; // r9
	__int64 v32; // rdx
	unsigned int v33; // r8d
	int* v34; // rcx
	__int64 v35; // r9
	unsigned int v36; // r8d
	__int64 v37; // rcx
	__int64 v38; // rbx
	bool v39; // al
	__int64 v40; // rdx
	__int64 j; // rax
	__int64 v42; // rax
	int* v43; // rcx
	int* v44; // rax
	int* v45; // rax
	unsigned int v46; // eax
	unsigned int v47; // r14d
	unsigned int k; // esi
	_DWORD* v49; // rax
	_DWORD* v50; // rdi
	int* v51; // r9
	unsigned int v52; // r8d
	bool v53; // al
	int* v54; // rdx
	int* v55; // rbx
	int* v56; // rcx
	int* m; // rax
	int* v58; // rax
	int* v59; // rcx
	int* v60; // rax
	int* v61; // rax
	int* v62; // rax
	__int64 v63; // rbx
	__int64 v64; // rax
	__int64 n; // rax
	__int64 ii; // rax
	unsigned int v67; // eax
	unsigned int v68; // edi
	unsigned int v69; // ebx
	__int64 v70; // rax
	_DWORD* v71; // rcx
	unsigned int v72; // edx
	unsigned int v73; // eax
	unsigned int v74; // eax
	unsigned int v75; // eax
	unsigned int v76; // edi
	unsigned int v77; // ebx
	int* v78; // rax
	int* v79; // rdx
	int v80; // r8d
	__int64 v81; // r9
	unsigned int v82; // r8d
	__int64 v83; // rax
	__int64 v84; // rcx
	unsigned __int64* v85; // rax
	unsigned __int64 v86; // rax
	__int64 v87; // rcx
	int* v88; // rax
	_QWORD* v89; // rcx
	int v90; // eax
	__int64 v91; // r9
	unsigned int v92; // eax
	unsigned int v93; // edi
	unsigned int v94; // ebx
	__int64 v95; // rax
	int* v96; // r8
	__int64 v97; // r9
	unsigned int v98; // edx
	__int64 v99; // rax
	__int64 v100; // rcx
	unsigned __int64* v101; // rax
	unsigned __int64 v102; // rax
	__int64 v103; // rcx
	int* v104; // rdx
	_QWORD* v105; // rcx
	int v106; // eax
	__int64 v107; // rax
	int* v108; // r14
	unsigned int v109; // edx
	__int64 v110; // r8
	__int64 v111; // rcx
	__int64 v112; // rax
	unsigned __int64* v113; // rax
	unsigned __int64 v114; // rax
	__int64 v115; // rsi
	int v116; // edi
	__int64 v117; // rbx
	int* v118; // rax
	int* v119; // r15
	int* v120; // rdx
	__int64 v121; // rcx
	__int64 v123; // [rsp+20h] [rbp-49h]
	__int64 v124; // [rsp+28h] [rbp-41h]
	int* v125; // [rsp+30h] [rbp-39h] BYREF
	int* v126[2]; // [rsp+38h] [rbp-31h] BYREF
	int* v127[2]; // [rsp+48h] [rbp-21h] BYREF
	unsigned __int64 v128; // [rsp+58h] [rbp-11h] BYREF
	_DWORD* v129; // [rsp+60h] [rbp-9h]
	unsigned __int64 v130; // [rsp+68h] [rbp-1h] BYREF
	_DWORD* v131; // [rsp+70h] [rbp+7h]
	unsigned __int64 v133; // [rsp+D8h] [rbp+6Fh] BYREF
	__int64 v134; // [rsp+E0h] [rbp+77h]
	unsigned __int64 v135; // [rsp+E8h] [rbp+7Fh] BYREF

	LODWORD(v1) = 0;
	v2 = a1;
	v134 = 0i64;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6C3F8, qword_140C63858);
	}
	else
	{
		if (dword_140C63E2C)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140226CA0() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63BE0 + 40i64))(qword_140C63BE0);
	}
	v4 = v3;
LABEL_9:
	v5 = 0;
	if (v4)
	{
		v6 = 2378;
		while (1)
		{
			if (qword_140C63848)
			{
				v7 = qword_140C63848(off_140A6C3F8, v5, qword_140C63858);
			}
			else
			{
				if (dword_140C63E2C || (int)sub_140226CA0() < 0)
					goto LABEL_37;
				v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BE0 + 32i64))(qword_140C63BE0, v5);
			}
			v8 = (_DWORD*)v7;
			if (!v7)
				goto LABEL_37;
			v9 = *(_DWORD*)(v7 + 4);
			if (*(_DWORD*)(v7 + 24) != 16)
				break;
			if (qword_140C63840)
			{
				v12 = qword_140C63840(off_140A6E180, v9, qword_140C63858);
			}
			else
			{
				if (dword_140C64698 || (int)sub_14024AA60() < 0)
				{
				LABEL_36:
					v15 = (*((__int64(__fastcall**)(int**)) * v2 + 3))(v2);
					(*(void(__fastcall**)(__int64, _DWORD*))(*(_QWORD*)v15 + 8i64))(v15, v8);
					LODWORD(v128) = *v8;
					v129 = (_DWORD*)v15;
					sub_140055F80((__int64)(v2 + 1), (__int64)&v130, &v128);
					goto LABEL_37;
				}
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(qword_140C63C08, v9);
			}
			if (!v12)
				goto LABEL_36;
			v13 = *(_DWORD*)(v12 + 20);
			if (v13 > 0xB || !_bittest(&v6, v13))
				goto LABEL_36;
			v14 = sub_14020FD40(v8[9]);
			if (v14)
			{
				v11 = (*(_BYTE*)(v14 + 12) & 0x40) == 0;
			LABEL_35:
				if (!v11)
					goto LABEL_36;
			}
		LABEL_37:
			if (++v5 >= v4)
				goto LABEL_38;
		}
		if (qword_140C63840)
		{
			v10 = qword_140C63840(off_140A6E180, v9, qword_140C63858);
		}
		else
		{
			if (dword_140C64698 || (int)sub_14024AA60() < 0)
				goto LABEL_37;
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(qword_140C63C08, v9);
		}
		if (!v10)
			goto LABEL_37;
		v11 = (*((unsigned int(__fastcall**)(int**, _QWORD)) * v2 + 2))(v2, (unsigned int)v8[1]) == 0;
		goto LABEL_35;
	}
LABEL_38:
	if (qword_140C63838)
	{
		v16 = qword_140C63838(off_140A6C510, qword_140C63858);
	}
	else
	{
		if (dword_140C638C4)
		{
			v17 = 0;
			goto LABEL_46;
		}
		if ((int)sub_1402281E0() < 0)
		{
			v17 = 0;
			goto LABEL_46;
		}
		v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64890 + 40i64))(qword_140C64890);
	}
	v17 = v16;
LABEL_46:
	for (i = 0; i < v17; ++i)
	{
		if (qword_140C63848)
		{
			v19 = qword_140C63848(off_140A6C510, i, qword_140C63858);
		}
		else
		{
			if (dword_140C638C4 || (int)sub_1402281E0() < 0)
				continue;
			v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64890 + 32i64))(qword_140C64890, i);
		}
		v20 = (unsigned int*)v19;
		if (!v19)
			continue;
		v21 = (__int64)v2[2];
		v22 = *(_DWORD*)(v19 + 4);
		v23 = *(_QWORD*)(v21 + 8);
		v24 = v21;
		while (v23)
		{
			if (*(_DWORD*)(v23 + 32) < v22)
			{
				v23 = *(_QWORD*)(v23 + 24);
			}
			else
			{
				v24 = v23;
				v23 = *(_QWORD*)(v23 + 16);
			}
		}
		if (v24 == v21 || v22 < *(_DWORD*)(v24 + 32))
		{
			v135 = (unsigned __int64)v2[2];
			v25 = &v135;
		}
		else
		{
			v133 = v24;
			v25 = &v133;
		}
		v26 = *v25;
		if (v26 == v21)
			continue;
		v27 = *(_QWORD**)(v26 + 40);
		if (!v27 || (*(unsigned int(__fastcall**)(_QWORD*))(*v27 + 40i64))(v27) == 16 && !v20[16] && v20[10] != 5)
			continue;
		if (v20[10] != 33)
			goto LABEL_74;
		v28 = v20[12];
		if (qword_140C63840)
		{
			v29 = qword_140C63840(off_140A6C2E0, v28, qword_140C63858);
		}
		else
		{
			if (dword_140C647D0 || (int)sub_140225760() < 0)
				continue;
			v29 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64208 + 24i64))(qword_140C64208, v28);
		}
		if (v29)
		{
		LABEL_74:
			v30 = (_DWORD**)(*((__int64(__fastcall**)(int**)) * v2 + 4))(v2);
			(*((void(__fastcall**)(_DWORD**, _QWORD*, unsigned int*)) * v30 + 1))(v30, v27, v20);
			v31 = v27[3];
			v32 = *(_QWORD*)(v31 + 8);
			v33 = *v30[1];
			v34 = (int*)v31;
			while (v32)
			{
				if (*(_DWORD*)(v32 + 32) < v33)
				{
					v32 = *(_QWORD*)(v32 + 24);
				}
				else
				{
					v34 = (int*)v32;
					v32 = *(_QWORD*)(v32 + 16);
				}
			}
			if (v34 == (int*)v31 || v33 < v34[8])
			{
				LODWORD(v130) = *v30[1];
				v125 = v34;
				v131 = 0i64;
				sub_140055C60((__int64)(v27 + 2), v126, (__int64*)&v125, &v130);
				v34 = v126[0];
			}
			*((_QWORD*)v34 + 5) = v30;
			(*((void(__fastcall**)(int**, _DWORD**)) * v2 + 5))(v2, v30);
			v35 = (__int64)v2[6];
			v36 = *v20;
			v37 = *(_QWORD*)(v35 + 8);
			LODWORD(v128) = *v20;
			v129 = v30;
			v38 = v35;
			v39 = 1;
			while (v37)
			{
				v38 = v37;
				v39 = v36 < *(_DWORD*)(v37 + 32);
				if (v36 >= *(_DWORD*)(v37 + 32))
					v37 = *(_QWORD*)(v37 + 24);
				else
					v37 = *(_QWORD*)(v37 + 16);
			}
			v40 = v38;
			if (!v39)
				goto LABEL_99;
			if (v38 != *(_QWORD*)(v35 + 16))
			{
				if (*(_BYTE*)v38 || *(_QWORD*)(*(_QWORD*)(v38 + 8) + 8i64) != v38)
				{
					v40 = *(_QWORD*)(v38 + 16);
					if (v40)
					{
						for (j = *(_QWORD*)(v40 + 24); j; j = *(_QWORD*)(j + 24))
							v40 = j;
					}
					else
					{
						v40 = *(_QWORD*)(v38 + 8);
						if (v38 == *(_QWORD*)(v40 + 16))
						{
							do
							{
								v42 = v40;
								v40 = *(_QWORD*)(v40 + 8);
							} while (v42 == *(_QWORD*)(v40 + 16));
						}
					}
				}
				else
				{
					v40 = *(_QWORD*)(v38 + 24);
				}
			LABEL_99:
				if (*(_DWORD*)(v40 + 32) < v36)
				{
					if (v38 == v35 || v36 < *(_DWORD*)(v38 + 32))
					{
						v43 = sub_14018B280(48i64, 0);
						if (v43 != (int*)-32i64)
						{
							*((_QWORD*)v43 + 4) = v128;
							*((_QWORD*)v43 + 5) = v30;
						}
						*(_QWORD*)(v38 + 16) = v43;
						v45 = v2[6];
						if ((int*)v38 == v45)
						{
							*((_QWORD*)v45 + 1) = v43;
							*((_QWORD*)v2[6] + 3) = v43;
						}
						else if (v38 == *((_QWORD*)v45 + 2))
						{
							*((_QWORD*)v45 + 2) = v43;
						}
					}
					else
					{
						v43 = sub_14018B280(48i64, 0);
						if (v43 != (int*)-32i64)
						{
							*((_QWORD*)v43 + 4) = v128;
							*((_QWORD*)v43 + 5) = v30;
						}
						*(_QWORD*)(v38 + 24) = v43;
						v44 = v2[6];
						if (v38 == *((_QWORD*)v44 + 3))
							*((_QWORD*)v44 + 3) = v43;
					}
					*((_QWORD*)v43 + 1) = v38;
					*((_QWORD*)v43 + 2) = 0i64;
					*((_QWORD*)v43 + 3) = 0i64;
					sub_1400081C0((__int64)v43, (_QWORD*)v2[6] + 1);
					v2[7] = (int*)((char*)v2[7] + 1);
				}
				continue;
			}
			sub_140055E80((__int64)(v2 + 5), v127, v37, v38, &v128);
		}
	}
	if (qword_140C63838)
	{
		v46 = qword_140C63838(off_140A6C5F0, qword_140C63858);
	}
	else
	{
		if (dword_140C64BD8)
		{
			v47 = 0;
			goto LABEL_122;
		}
		if ((int)sub_1402292E0() < 0)
		{
			v47 = 0;
			goto LABEL_122;
		}
		v46 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63888 + 40i64))(qword_140C63888);
	}
	v47 = v46;
LABEL_122:
	for (k = 0; k < v47; ++k)
	{
		if (qword_140C63848)
		{
			v49 = (_DWORD*)qword_140C63848(off_140A6C5F0, k, qword_140C63858);
		}
		else
		{
			if (dword_140C64BD8 || (int)sub_1402292E0() < 0)
				continue;
			v49 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63888 + 32i64))(
				qword_140C63888,
				k);
		}
		v50 = v49;
		if (v49)
		{
			v51 = v2[10];
			v52 = *v49;
			v53 = 1;
			v54 = (int*)*((_QWORD*)v51 + 1);
			LODWORD(v128) = v52;
			v55 = v51;
			while (v54)
			{
				v55 = v54;
				v53 = v52 < v54[8];
				if (v52 >= v54[8])
					v54 = (int*)*((_QWORD*)v54 + 3);
				else
					v54 = (int*)*((_QWORD*)v54 + 2);
			}
			v56 = v55;
			if (v53)
			{
				if (v55 == *((int**)v51 + 2))
					goto LABEL_146;
				if (*(_BYTE*)v55 || *(int**)(*((_QWORD*)v55 + 1) + 8i64) != v55)
				{
					v56 = (int*)*((_QWORD*)v55 + 2);
					if (v56)
					{
						for (m = (int*)*((_QWORD*)v56 + 3); m; m = (int*)*((_QWORD*)m + 3))
							v56 = m;
					}
					else
					{
						v56 = (int*)*((_QWORD*)v55 + 1);
						if (v55 == *((int**)v56 + 2))
						{
							do
							{
								v58 = v56;
								v56 = (int*)*((_QWORD*)v56 + 1);
							} while (v58 == *((int**)v56 + 2));
						}
					}
				}
				else
				{
					v56 = (int*)*((_QWORD*)v55 + 3);
				}
			}
			if (v56[8] < v52)
			{
			LABEL_146:
				if (v55 == v51 || v52 < v55[8])
				{
					v59 = sub_14018B280(48i64, 0);
					if (v59 != (int*)-32i64)
					{
						*((_QWORD*)v59 + 4) = v128;
						*((_QWORD*)v59 + 5) = v50;
					}
					*((_QWORD*)v55 + 2) = v59;
					v61 = v2[10];
					if (v55 == v61)
					{
						*((_QWORD*)v61 + 1) = v59;
						*((_QWORD*)v2[10] + 3) = v59;
					}
					else if (v55 == *((int**)v61 + 2))
					{
						*((_QWORD*)v61 + 2) = v59;
					}
				}
				else
				{
					v59 = sub_14018B280(48i64, 0);
					if (v59 != (int*)-32i64)
					{
						*((_QWORD*)v59 + 4) = v128;
						*((_QWORD*)v59 + 5) = v50;
					}
					*((_QWORD*)v55 + 3) = v59;
					v60 = v2[10];
					if (v55 == *((int**)v60 + 3))
						*((_QWORD*)v60 + 3) = v59;
				}
				*((_QWORD*)v59 + 1) = v55;
				*((_QWORD*)v59 + 2) = 0i64;
				*((_QWORD*)v59 + 3) = 0i64;
				sub_1400081C0((__int64)v59, (_QWORD*)v2[10] + 1);
				v2[11] = (int*)((char*)v2[11] + 1);
			}
		}
	}
	v62 = v2[2];
	v63 = *((_QWORD*)v62 + 2);
	if ((int*)v63 != v62)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v63 + 40) + 48i64))(*(_QWORD*)(v63 + 40));
			v64 = *(_QWORD*)(v63 + 24);
			if (v64)
			{
				v63 = *(_QWORD*)(v63 + 24);
				for (n = *(_QWORD*)(v64 + 16); n; n = *(_QWORD*)(n + 16))
					v63 = n;
			}
			else
			{
				for (ii = *(_QWORD*)(v63 + 8); v63 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v63 = ii;
				if (*(_QWORD*)(v63 + 24) != ii)
					v63 = ii;
			}
		} while ((int*)v63 != v2[2]);
	}
	if (qword_140C63838)
	{
		v67 = qword_140C63838(off_140A6C430, qword_140C63858);
	}
	else
	{
		if (dword_140C63A84)
		{
			v68 = 0;
			goto LABEL_178;
		}
		if ((int)sub_1402270E0() < 0)
		{
			v68 = 0;
			goto LABEL_178;
		}
		v67 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64738 + 40i64))(qword_140C64738);
	}
	v68 = v67;
LABEL_178:
	v69 = 0;
	if (v68)
	{
		while (!qword_140C63848)
		{
			if (dword_140C63A84)
			{
				v71 = 0i64;
			}
			else
			{
				if ((int)sub_1402270E0() >= 0)
				{
					v70 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64738 + 32i64))(qword_140C64738, v69);
					goto LABEL_186;
				}
				v71 = 0i64;
			}
		LABEL_187:
			v72 = v71[3];
			if (v72 < 6)
			{
				v73 = v71[2];
				if (v73)
				{
					v133 = __PAIR64__(v72, v73);
					v131 = v71;
					v130 = __PAIR64__(v72, v73);
					sub_1404990F0((__int64)(v2 + 17), (__int64)v127, (unsigned int*)&v130);
				}
				else
				{
					v74 = v71[1];
					v129 = v71;
					v135 = __PAIR64__(v72, v74);
					v128 = __PAIR64__(v72, v74);
					sub_1403AE510((__int64)(v2 + 13), (__int64)v126, (int*)&v128);
				}
			}
			if (++v69 >= v68)
				goto LABEL_192;
		}
		v70 = qword_140C63848(off_140A6C430, v69, qword_140C63858);
	LABEL_186:
		v71 = (_DWORD*)v70;
		goto LABEL_187;
	}
LABEL_192:
	if (qword_140C63838)
	{
		v75 = qword_140C63838(off_140A6C628, qword_140C63858);
	}
	else
	{
		if (dword_140C64EFC)
		{
			v76 = 0;
			goto LABEL_200;
		}
		if ((int)sub_140229720() < 0)
		{
			v76 = 0;
			goto LABEL_200;
		}
		v75 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64DA0 + 40i64))(qword_140C64DA0);
	}
	v76 = v75;
LABEL_200:
	v77 = 0;
	if (v76)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C64EFC && (int)sub_140229720() >= 0)
			{
				v78 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64DA0 + 32i64))(
					qword_140C64DA0,
					v77);
			LABEL_206:
				v79 = v78;
				if (v78)
				{
					v80 = v78[2];
					switch (v80)
					{
					case 7:
					case 35:
					case 36:
					case 100:
					case 114:
					case 129:
					case 130:
					case 131:
					case 137:
					case 162:
					case 166:
					case 167:
					case 181:
					case 191:
						v81 = (__int64)v2[2];
						v82 = v78[1];
						v83 = *(_QWORD*)(v81 + 8);
						v84 = v81;
						while (v83)
						{
							if (*(_DWORD*)(v83 + 32) < v82)
							{
								v83 = *(_QWORD*)(v83 + 24);
							}
							else
							{
								v84 = v83;
								v83 = *(_QWORD*)(v83 + 16);
							}
						}
						if (v84 == v81 || v82 < *(_DWORD*)(v84 + 32))
						{
							v135 = (unsigned __int64)v2[2];
							v85 = &v135;
						}
						else
						{
							v133 = v84;
							v85 = &v133;
						}
						v86 = *v85;
						if (v86 != v81)
						{
							v87 = *(_QWORD*)(v86 + 40);
							if (v87)
							{
								v88 = *(int**)(v87 + 64);
								v89 = (_QWORD*)(v87 + 48);
								v126[0] = v79;
								if (v88 == (int*)v89[3])
								{
									sub_1400B9430(v89, v88, v126);
								}
								else
								{
									if (v88)
										*(_QWORD*)v88 = v79;
									v89[2] += 8i64;
								}
							}
						}
						break;
					default:
						v90 = *v78;
						v91 = (unsigned int)v79[1];
						LODWORD(v124) = v80;
						v126[0] = (int*)0x141E03570i64;
						LODWORD(v123) = v90;
						sub_1401A2E50(0x40u, 0, v126, v91, v123, v124);
						break;
					}
				}
			}
			if (++v77 >= v76)
				goto LABEL_226;
		}
		v78 = (int*)qword_140C63848(off_140A6C628, v77, qword_140C63858);
		goto LABEL_206;
	}
LABEL_226:
	if (qword_140C63838)
	{
		v92 = qword_140C63838(off_140A6C660, qword_140C63858);
	}
	else
	{
		if (dword_140C63D4C)
		{
			v93 = 0;
			goto LABEL_234;
		}
		if ((int)sub_140229B60() < 0)
		{
			v93 = 0;
			goto LABEL_234;
		}
		v92 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C649A8 + 40i64))(qword_140C649A8);
	}
	v93 = v92;
LABEL_234:
	v94 = 0;
	if (v93)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C63D4C && (int)sub_140229B60() >= 0)
			{
				v95 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C649A8 + 32i64))(qword_140C649A8, v94);
			LABEL_240:
				v96 = (int*)v95;
				if (v95)
				{
					v97 = (__int64)v2[2];
					v98 = *(_DWORD*)(v95 + 4);
					v99 = *(_QWORD*)(v97 + 8);
					v100 = v97;
					while (v99)
					{
						if (*(_DWORD*)(v99 + 32) < v98)
						{
							v99 = *(_QWORD*)(v99 + 24);
						}
						else
						{
							v100 = v99;
							v99 = *(_QWORD*)(v99 + 16);
						}
					}
					if (v100 == v97 || v98 < *(_DWORD*)(v100 + 32))
					{
						v135 = (unsigned __int64)v2[2];
						v101 = &v135;
					}
					else
					{
						v133 = v100;
						v101 = &v133;
					}
					v102 = *v101;
					if (v102 != v97)
					{
						v103 = *(_QWORD*)(v102 + 40);
						if (v103)
						{
							v104 = *(int**)(v103 + 96);
							v105 = (_QWORD*)(v103 + 80);
							v126[0] = v96;
							if (v104 == (int*)v105[3])
							{
								sub_1400B9430(v105, v104, v126);
							}
							else
							{
								if (v104)
									*(_QWORD*)v104 = v96;
								v105[2] += 8i64;
							}
						}
					}
				}
			}
			if (++v94 >= v93)
				goto LABEL_258;
		}
		v95 = qword_140C63848(off_140A6C660, v94, qword_140C63858);
		goto LABEL_240;
	}
LABEL_258:
	if (qword_140C63838)
	{
		v106 = qword_140C63838(off_140A6DAB8, qword_140C63858);
	}
	else if (dword_140C63C54)
	{
		v106 = 0;
	}
	else if ((int)sub_1402426A0() >= 0)
	{
		v106 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653C0 + 40i64))(qword_140C653C0);
	}
	else
	{
		v106 = 0;
	}
	LODWORD(v133) = v106;
	if (v106)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C63C54 && (int)sub_1402426A0() >= 0)
			{
				v107 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653C0 + 32i64))(
					qword_140C653C0,
					(unsigned int)v1);
			LABEL_271:
				v108 = (int*)v107;
				if (v107)
				{
					v109 = *(_DWORD*)(v107 + 16);
					if (v109)
					{
						v110 = (__int64)v2[6];
						v111 = v110;
						v112 = *(_QWORD*)(v110 + 8);
						while (v112)
						{
							if (*(_DWORD*)(v112 + 32) < v109)
							{
								v112 = *(_QWORD*)(v112 + 24);
							}
							else
							{
								v111 = v112;
								v112 = *(_QWORD*)(v112 + 16);
							}
						}
						if (v111 == v110 || v109 < *(_DWORD*)(v111 + 32))
						{
							v126[0] = v2[6];
							v113 = (unsigned __int64*)v126;
						}
						else
						{
							v135 = v111;
							v113 = &v135;
						}
						v114 = *v113;
						if (v114 != v110)
						{
							v115 = *(_QWORD*)(v114 + 40);
							v116 = *v108;
							v117 = *(_QWORD*)(v115 + 32);
							v118 = sub_14018DB00(*(_QWORD*)(v115 + 24), v117 + 1, 4i64);
							v119 = v118;
							v118[v117] = v116;
							v120 = *(int**)(v115 + 24);
							if (v120 != v118)
							{
								sub_1407DB590(v118, v120, 4i64 * *(_QWORD*)(v115 + 32));
								v121 = *(_QWORD*)(v115 + 24);
								if (v121)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v121 - 16) + 8i64))(v121 - 16);
								*(_QWORD*)(v115 + 24) = v119;
							}
							v2 = a1;
							*(_QWORD*)(v115 + 32) = v117 + 1;
							sub_1400BD4A0((__int64)(a1 + 21), v108, v108 + 4);
						}
					}
					LODWORD(v1) = v134;
				}
			}
			v1 = (unsigned int)(v1 + 1);
			v134 = v1;
			if ((unsigned int)v1 >= (unsigned int)v133)
				return 0i64;
		}
		v107 = qword_140C63848(off_140A6DAB8, (unsigned int)v1, qword_140C63858);
		goto LABEL_271;
	}
	return 0i64;
}
// 14049785F: conditional instruction was optimized away because rcx.8==0
// 140497A5F: conditional instruction was optimized away because rdx.8==0
// 140497E01: variable 'v123' is possibly undefined
// 140497E01: variable 'v124' is possibly undefined
// 140A6C2E0: using guessed type wchar_t *off_140A6C2E0[2];
// 140A6C3F8: using guessed type wchar_t *off_140A6C3F8[2];
// 140A6C430: using guessed type wchar_t *off_140A6C430[2];
// 140A6C510: using guessed type wchar_t *off_140A6C510[2];
// 140A6C5F0: using guessed type wchar_t *off_140A6C5F0[2];
// 140A6C628: using guessed type wchar_t *off_140A6C628[2];
// 140A6C660: using guessed type wchar_t *off_140A6C660[2];
// 140A6DAB8: using guessed type wchar_t *off_140A6DAB8[2];
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63888: using guessed type __int64 qword_140C63888;
// 140C638C4: using guessed type int dword_140C638C4;
// 140C63A84: using guessed type int dword_140C63A84;
// 140C63BE0: using guessed type __int64 qword_140C63BE0;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C63C54: using guessed type int dword_140C63C54;
// 140C63D4C: using guessed type int dword_140C63D4C;
// 140C63E2C: using guessed type int dword_140C63E2C;
// 140C64208: using guessed type __int64 qword_140C64208;
// 140C64698: using guessed type int dword_140C64698;
// 140C64738: using guessed type __int64 qword_140C64738;
// 140C647D0: using guessed type int dword_140C647D0;
// 140C64890: using guessed type __int64 qword_140C64890;
// 140C649A8: using guessed type __int64 qword_140C649A8;
// 140C64BD8: using guessed type int dword_140C64BD8;
// 140C64DA0: using guessed type __int64 qword_140C64DA0;
// 140C64EFC: using guessed type int dword_140C64EFC;
// 140C653C0: using guessed type __int64 qword_140C653C0;

