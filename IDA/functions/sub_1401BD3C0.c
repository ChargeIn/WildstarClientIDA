//----- (00000001401BD3C0) ----------------------------------------------------
__int64 __fastcall sub_1401BD3C0(
	unsigned int* a1,
	__int64 a2,
	_QWORD* a3,
	__int64 a4,
	unsigned __int64 a5,
	unsigned __int64 a6)
{
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rbp
	__int64 v8; // rsi
	unsigned int* v9; // rbx
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rbx
	int** v12; // rsi
	int* v13; // rdi
	unsigned __int64 v14; // rax
	unsigned __int64 v15; // rdi
	int* v16; // rbx
	unsigned __int64 v17; // rbp
	int* v18; // rax
	int* v19; // rbp
	unsigned __int64 v20; // rdi
	int* v21; // rax
	int* v22; // rbx
	__int64 v23; // rdi
	unsigned __int64 v24; // r10
	__int64 v25; // rbp
	char* v26; // r8
	char v27; // r9
	char v28; // al
	unsigned __int64 v29; // rdi
	int* v30; // rax
	int* v31; // rbx
	unsigned __int64 v32; // rbx
	int* v33; // rax
	int* v34; // rsi
	int* v35; // rbp
	unsigned __int64 v36; // rax
	int* v37; // rdi
	unsigned __int64 v38; // rbp
	int* v39; // rax
	int* v40; // rbx
	__int64 v41; // rcx
	_QWORD* v42; // rbx
	char* v43; // rdi
	__int64 i; // rdi
	unsigned __int64 v45; // rcx
	__int64 v46; // rax
	int* v47; // rax
	unsigned __int64 v48; // r8
	unsigned __int64 v49; // rbx
	__int64 v50; // r11
	__int64 v51; // rdx
	int* v52; // rbp
	unsigned int* v53; // r10
	unsigned __int64 v54; // rcx
	int v55; // ecx
	char* v56; // r9
	char* j; // r10
	char v58; // dl
	char v59; // al
	int v60; // r8d
	int v61; // ecx
	__int64 v62; // rcx
	int v63; // edi
	__int64 v64; // rcx
	int* v65; // rax
	int* v66; // rbx
	char* v67; // rax
	__int64 v68; // rax
	__int64 v69; // rcx
	unsigned __int64 v70; // rdx
	__int64 v71; // r8
	_QWORD* v72; // rdx
	__int64 v73; // rcx
	__int64 v74; // rax
	int* v75; // rax
	unsigned __int64 v76; // rdx
	unsigned __int64 v77; // rbp
	__int64 v78; // r11
	__int64 v79; // r8
	int* v80; // rsi
	unsigned __int64 v81; // rcx
	int* v82; // rdi
	int v83; // ecx
	char* v84; // r9
	char* k; // r10
	char v86; // dl
	char v87; // al
	int v88; // r8d
	int v89; // ecx
	__int64 v90; // rcx
	unsigned __int64 v91; // rbx
	__int64 v92; // rdx
	__int64 v93; // r8
	char* v94; // rdi
	int* v95; // r11
	char* v96; // r9
	__int64 v97; // r10
	char v98; // r8
	char v99; // al
	__int64 v100; // rbx
	_QWORD* v101; // rcx
	_QWORD* v102; // rdx
	__int64 v103; // rax
	__int64 v104; // rcx
	unsigned __int64 v105; // rdx
	__int64 v106; // r8
	_QWORD* v107; // rdx
	__int64 v108; // rax
	unsigned __int64 v109; // rbp
	int* v110; // rdi
	__int64 v111; // rsi
	__int64 v112; // rbx
	int* v113; // rdx
	unsigned __int64 v114; // rbx
	unsigned __int64 v115; // rbp
	__int64 v116; // rsi
	__int64 v117; // rbx
	int* v118; // rdx
	unsigned __int64 v119; // rbx
	unsigned __int64 v120; // rsi
	_QWORD* v121; // rbx
	int* v123; // [rsp+30h] [rbp-88h]
	unsigned __int64 v124; // [rsp+30h] [rbp-88h]
	__int64 v125; // [rsp+30h] [rbp-88h]
	unsigned __int64 v126; // [rsp+38h] [rbp-80h]
	unsigned __int64 v127; // [rsp+38h] [rbp-80h]
	unsigned __int64 v128; // [rsp+40h] [rbp-78h]
	unsigned __int64 v129; // [rsp+48h] [rbp-70h]
	__int64 v130; // [rsp+48h] [rbp-70h]
	__int64 v131; // [rsp+48h] [rbp-70h]
	unsigned __int64 v132; // [rsp+50h] [rbp-68h]
	int* v133; // [rsp+58h] [rbp-60h]
	int** v134; // [rsp+60h] [rbp-58h]
	int* v135; // [rsp+60h] [rbp-58h]
	__int64 v136; // [rsp+60h] [rbp-58h]
	int* v137; // [rsp+60h] [rbp-58h]
	__int64 v138; // [rsp+68h] [rbp-50h]
	unsigned __int64 v139; // [rsp+70h] [rbp-48h]
	unsigned __int64 v140; // [rsp+78h] [rbp-40h]
	__int64 v141; // [rsp+78h] [rbp-40h]
	unsigned __int64 v142; // [rsp+80h] [rbp-38h]
	__int64 v143; // [rsp+88h] [rbp-30h]
	_QWORD* v146; // [rsp+D0h] [rbp+18h]
	__int64 v147; // [rsp+D8h] [rbp+20h]
	__int64 v148; // [rsp+E0h] [rbp+28h]
	int* v149; // [rsp+E0h] [rbp+28h]
	__int64 v150; // [rsp+E8h] [rbp+30h]

	v147 = a4;
	v146 = a3;
	v6 = 0i64;
	v7 = 0i64;
	v8 = 0i64;
	v9 = a1;
	v10 = a5;
	v132 = 0i64;
	v133 = 0i64;
	v128 = 0i64;
	v138 = 0i64;
	if (a5 < a6)
	{
		while (1)
		{
			v11 = 0i64;
			v12 = (int**)(*a3 + 56i64 * *(_QWORD*)(*(_QWORD*)(a4 + 16) + 8 * v10));
			v13 = *v12;
			v14 = *((_QWORD*)*v12 - 1);
			if (v14)
			{
				while (*((_BYTE*)v13 + v11) != 92)
				{
					if (++v11 >= v14)
						goto LABEL_7;
				}
				v17 = v11;
				if (v11 >= v14)
					v17 = *((_QWORD*)*v12 - 1);
				v18 = sub_14018B280(v17 + 17, 0);
				if (v18)
				{
					*((_QWORD*)v18 + 1) = v17;
					*(_QWORD*)v18 = off_140B55060;
				}
				v123 = v18 + 4;
				sub_1407DB590(v18 + 4, v13, v17);
				*((_BYTE*)v123 + v17) = 0;
				v19 = *v12;
				v140 = a5;
				v20 = *((_QWORD*)*v12 - 1) - (v11 + 1);
				v129 = v11 + 1;
				v21 = sub_14018B280(v20 + 17, 0);
				if (v21)
				{
					*((_QWORD*)v21 + 1) = v20;
					*(_QWORD*)v21 = off_140B55060;
				}
				v22 = v21 + 4;
				sub_1407DB590(v21 + 4, (int*)((char*)v19 + v129), v20);
				*((_BYTE*)v22 + v20) = 0;
				*v12 = v22;
				if (v19)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v19 - 2) + 8i64))(v19 - 4);
				v23 = a5;
				v139 = a5 + 1;
				if (a5 + 1 < a6)
				{
					while (1)
					{
						v24 = *((_QWORD*)v123 - 1);
						v25 = *(_QWORD*)(*v146 + 56i64 * *(_QWORD*)(*(_QWORD*)(v147 + 16) + 8 * v23 + 8));
						v134 = (int**)(*v146 + 56i64 * *(_QWORD*)(*(_QWORD*)(v147 + 16) + 8 * v23 + 8));
						if (v24)
							break;
					LABEL_30:
						if (*(_BYTE*)(v24 + v25) == 92)
						{
							v29 = *(_QWORD*)(v25 - 8) - v129;
							v30 = sub_14018B280(v29 + 17, 0);
							if (v30)
							{
								*((_QWORD*)v30 + 1) = v29;
								*(_QWORD*)v30 = off_140B55060;
							}
							v31 = v30 + 4;
							sub_1407DB590(v30 + 4, (int*)(v129 + v25), v29);
							*((_BYTE*)v31 + v29) = 0;
							*v134 = v31;
							if (v25)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
							v23 = ++a5;
							if (++v139 < a6)
								continue;
						}
						goto LABEL_36;
					}
					v26 = *(char**)(*v146 + 56i64 * *(_QWORD*)(*(_QWORD*)(v147 + 16) + 8 * v23 + 8));
					while (1)
					{
						v27 = *v26;
						if ((unsigned __int8)(*v26 - 65) <= 0x19u)
							v27 += 32;
						v28 = v26[(_QWORD)v123 - v25];
						if ((unsigned __int8)(v28 - 65) <= 0x19u)
							v28 += 32;
						if (v27 != v28)
							break;
						if (*v26)
						{
							if ((unsigned __int64)&(++v26)[-v25] < v24)
								continue;
						}
						goto LABEL_30;
					}
				}
			LABEL_36:
				if (v123)
				{
					v32 = 0i64;
					if (*(_BYTE*)v123)
					{
						do
							++v32;
						while (*((_BYTE*)v123 + v32));
					}
					v33 = sub_14018B280(v32 + 17, 0);
					if (v33)
					{
						*((_QWORD*)v33 + 1) = v32;
						*(_QWORD*)v33 = off_140B55060;
					}
					v34 = v33 + 4;
					sub_1407DB590(v33 + 4, v123, v32);
					*((_BYTE*)v34 + v32) = 0;
				}
				else
				{
					v34 = 0i64;
				}
				v142 = v128 + 1;
				v35 = sub_14018DB00(v138, v128 + 1, 24i64);
				v135 = v35;
				v36 = v128;
				v37 = &v35[6 * v128];
				if (v37)
				{
					if (v34)
					{
						v38 = *((_QWORD*)v34 - 1);
						v39 = sub_14018B280(v38 + 17, 0);
						if (v39)
						{
							*((_QWORD*)v39 + 1) = v38;
							*(_QWORD*)v39 = off_140B55060;
						}
						v40 = v39 + 4;
						sub_1407DB590(v39 + 4, v34, v38);
						*((_BYTE*)v40 + v38) = 0;
						v35 = v135;
						*(_QWORD*)v37 = v40;
					}
					else
					{
						*(_QWORD*)v37 = 0i64;
					}
					*((_QWORD*)v37 + 1) = v140;
					*((_QWORD*)v37 + 2) = a5 + 1;
					v36 = v128;
				}
				v41 = v138;
				if ((int*)v138 != v35)
				{
					if (v36)
					{
						v42 = (_QWORD*)v138;
						v43 = (char*)v35 - v138;
						do
						{
							if ((_QWORD*)((char*)v42 + (_QWORD)v43))
							{
								sub_1401C0670((int**)((char*)v42 + (_QWORD)v43), (__int64)v42);
								v36 = v128;
							}
							if (*v42)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v42 - 16i64) + 8i64))(*v42 - 16i64);
								v36 = v128;
							}
							v42 += 3;
							v128 = --v36;
						} while (v36);
						v41 = v138;
					}
					if (v41)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v41 - 16) + 8i64))(v41 - 16);
					v138 = (__int64)v35;
				}
				v7 = v142;
				v128 = v142;
				if (v34)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v34 - 2) + 8i64))(v34 - 4);
				if (v123)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v123 - 2) + 8i64))(v123 - 4);
				v6 = v132;
			}
			else
			{
			LABEL_7:
				v15 = v6 + 1;
				v16 = sub_14018DB00((__int64)v133, v6 + 1, 8i64);
				*(_QWORD*)&v16[2 * v132] = a5;
				if (v133 != v16)
				{
					sub_1407DB590(v16, v133, 8 * v132);
					if (v133)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v133 - 2) + 8i64))(v133 - 4);
					v133 = v16;
				}
				v6 = v15;
				v132 = v15;
			}
			v10 = a5 + 1;
			a5 = v10;
			if (v10 >= a6)
				break;
			a4 = v147;
			a3 = v146;
		}
		v9 = a1;
		v8 = v138;
	}
	i = 0i64;
	v150 = 0i64;
	if (v7)
	{
		v45 = v7 + *((_QWORD*)v9 + 2);
		v46 = 16 * v45;
		if (!is_mul_ok(v45, 0x10ui64))
			v46 = -1i64;
		v47 = sub_14018B280(v46, 0);
		v48 = 0i64;
		v49 = 0i64;
		v50 = 0i64;
		v51 = 0i64;
		v136 = (__int64)v47;
		v52 = v47;
		v126 = 0i64;
		v124 = 0i64;
		v148 = 0i64;
		for (i = 0i64; ; v150 = i)
		{
			v53 = a1;
			v130 = v50;
			v54 = *((_QWORD*)a1 + 2);
			if (v48 < v54)
				goto LABEL_77;
			if (v49 >= v128)
			{
				v9 = a1;
				v69 = *((_QWORD*)a1 + 1);
				*((_QWORD*)a1 + 2) = v50;
				sub_14018B900(v69, 0);
				v70 = 16i64 * *((_QWORD*)a1 + 2);
				*((_QWORD*)a1 + 1) = v136;
				*((_QWORD*)a1 + 1) = sub_14018C320(v136, v70, 0);
				goto LABEL_114;
			}
			if (v48 < v54)
			{
			LABEL_77:
				if (v49 < v128)
				{
					v56 = *(char**)v8;
					for (j = *(char**)(v51 + *((_QWORD*)a1 + 1)); ; ++j)
					{
						v58 = *v56;
						if ((unsigned __int8)(*v56 - 65) <= 0x19u)
							v58 += 32;
						v59 = *j;
						if ((unsigned __int8)(*j - 65) <= 0x19u)
							v59 += 32;
						v60 = v58 - v59;
						if (v58 != v59)
							break;
						if (!*v56)
							goto LABEL_90;
						++v56;
					}
					if (v60 < 0)
					{
						v51 = v148;
						v48 = v126;
						v53 = a1;
						v55 = 0;
						goto LABEL_92;
					}
					v55 = 1;
					if (v60 <= 0)
						LABEL_90:
					v55 = 2;
					v53 = a1;
					v48 = v126;
					v51 = v148;
				}
				else
				{
					v55 = 1;
				}
			}
			else
			{
				v55 = 0;
			}
		LABEL_92:
			if (v55)
			{
				v61 = v55 - 1;
				if (!v61)
				{
					v64 = *((_QWORD*)v53 + 1);
					++v48;
					v51 += 16i64;
					v126 = v48;
					v148 = v51;
					*(_QWORD*)v52 = *(_QWORD*)(v64 + v51 - 16);
					*((_QWORD*)v52 + 1) = *(_QWORD*)(v64 + v51 - 8);
					goto LABEL_104;
				}
				if (v61 != 1)
					goto LABEL_104;
				v62 = *((_QWORD*)v53 + 1);
				*(_QWORD*)v52 = *(_QWORD*)(v62 + v51);
				*((_QWORD*)v52 + 1) = *(_QWORD*)(v62 + v51 + 8);
				v63 = sub_1401BD3C0(*((_QWORD*)v52 + 1), a2, (_DWORD)v146, v147, *(_QWORD*)(v8 + 8), *(_QWORD*)(v8 + 16));
				if (v63 < 0)
					goto LABEL_184;
				++v49;
				v48 = v126 + 1;
				v8 += 24i64;
				v51 = v148 + 16;
				v148 += 16i64;
				++v126;
			}
			else
			{
				v65 = sub_14018B280(56i64, 0);
				v66 = v65;
				if (v65)
				{
					*v65 = 0;
					*((_QWORD*)v65 + 1) = 0i64;
					*((_QWORD*)v65 + 2) = 0i64;
					*((_QWORD*)v65 + 3) = 0i64;
					*((_QWORD*)v65 + 4) = 0i64;
					*((_QWORD*)v65 + 5) = 0i64;
					*((_QWORD*)v65 + 6) = 0i64;
				}
				else
				{
					v66 = 0i64;
				}
				v63 = sub_1401BD3C0((_DWORD)v66, a2, (_DWORD)v146, v147, *(_QWORD*)(v8 + 8), *(_QWORD*)(v8 + 16));
				if (v63 < 0)
					goto LABEL_184;
				v67 = *(char**)v8;
				v51 = v148;
				v48 = v126;
				*((_QWORD*)v52 + 1) = v66;
				*(_QWORD*)v52 = v67;
				v49 = v124 + 1;
				v8 += 24i64;
			}
			v50 = v130;
			v124 = v49;
		LABEL_104:
			v68 = 0i64;
			if (**(_BYTE**)v52)
			{
				do
					++v68;
				while (*(_BYTE*)(v68 + *(_QWORD*)v52));
			}
			++v50;
			i = v68 + v150 + 1;
			v52 += 4;
		}
	}
	v71 = *((_QWORD*)v9 + 2);
	if (v71)
	{
		v72 = (_QWORD*)*((_QWORD*)v9 + 1);
		do
		{
			v73 = 0i64;
			if (*(_BYTE*)*v72)
			{
				do
					++v73;
				while (*(_BYTE*)(v73 + *v72));
			}
			v72 += 2;
			i += v73 + 1;
			--v71;
		} while (v71);
		v150 = i;
	}
LABEL_114:
	if (v132)
	{
		v74 = 56 * (v132 + *((_QWORD*)v9 + 4));
		if (!is_mul_ok(v132 + *((_QWORD*)v9 + 4), 0x38ui64))
			v74 = -1i64;
		v75 = sub_14018B280(v74, 0);
		v9 = a1;
		v76 = 0i64;
		v77 = 0i64;
		v78 = 0i64;
		v79 = 0i64;
		v143 = (__int64)v75;
		v80 = v75;
		v137 = v75;
		v127 = 0i64;
		v125 = 0i64;
		while (1)
		{
			v81 = *((_QWORD*)v9 + 4);
			v131 = v78;
			if (v76 < v81)
				goto LABEL_122;
			if (v77 >= v132)
			{
				v104 = *((_QWORD*)v9 + 3);
				*((_QWORD*)v9 + 4) = v78;
				sub_14018B900(v104, 0);
				v105 = 56i64 * *((_QWORD*)v9 + 4);
				*((_QWORD*)v9 + 3) = v143;
				*((_QWORD*)v9 + 3) = sub_14018C320(v143, v105, 0);
				goto LABEL_172;
			}
			if (v76 < v81)
			{
			LABEL_122:
				v82 = v133;
				if (v77 < v132)
				{
					v84 = *(char**)(56i64 * *(_QWORD*)(*(_QWORD*)(v147 + 16) + 8i64 * *(_QWORD*)&v133[2 * v77]) + *v146);
					for (k = *(char**)(v79 + *((_QWORD*)v9 + 3)); ; ++k)
					{
						v86 = *v84;
						if ((unsigned __int8)(*v84 - 65) <= 0x19u)
							v86 += 32;
						v87 = *k;
						if ((unsigned __int8)(*k - 65) <= 0x19u)
							v87 += 32;
						v88 = v86 - v87;
						if (v86 != v87)
							break;
						if (!*v84)
							goto LABEL_135;
						++v84;
					}
					if (v88 < 0)
					{
						v83 = 0;
						goto LABEL_136;
					}
					v83 = 1;
					if (v88 <= 0)
						LABEL_135:
					v83 = 2;
				LABEL_136:
					v76 = v127;
					v79 = v125;
				}
				else
				{
					v83 = 1;
				}
			}
			else
			{
				v82 = v133;
				v83 = 0;
			}
			if (v83)
			{
				v89 = v83 - 1;
				if (!v89)
				{
					++v76;
					v101 = (_QWORD*)(v79 + *((_QWORD*)v9 + 3));
					v79 += 56i64;
					v127 = v76;
					v125 = v79;
					*(_QWORD*)v80 = *v101;
					*((_QWORD*)v80 + 1) = v101[1];
					*((_QWORD*)v80 + 2) = v101[2];
					*((_QWORD*)v80 + 3) = v101[3];
					*((_QWORD*)v80 + 4) = v101[4];
					*((_QWORD*)v80 + 5) = v101[5];
					*((_QWORD*)v80 + 6) = v101[6];
					goto LABEL_162;
				}
				if (v89 != 1)
					goto LABEL_162;
				v90 = *((_QWORD*)v9 + 3);
				v91 = v77 + 1;
				v141 = v79 + v90;
				*(_QWORD*)v80 = *(_QWORD*)(v79 + v90);
				*((_QWORD*)v80 + 1) = *(_QWORD*)(v79 + v90 + 8);
				*((_QWORD*)v80 + 2) = *(_QWORD*)(v79 + v90 + 16);
				*((_QWORD*)v80 + 3) = *(_QWORD*)(v79 + v90 + 24);
				*((_QWORD*)v80 + 4) = *(_QWORD*)(v79 + v90 + 32);
				*((_QWORD*)v80 + 5) = *(_QWORD*)(v79 + v90 + 40);
				*((_QWORD*)v80 + 6) = *(_QWORD*)(v79 + v90 + 48);
				v92 = *(_QWORD*)(v147 + 16);
				v93 = *v146;
				if (v77 + 1 < v132)
				{
					v94 = *(char**)(56i64 * *(_QWORD*)(v92 + 8i64 * *(_QWORD*)&v82[2 * v77]) + v93);
					v95 = &v133[2 * v77 + 2];
				LABEL_142:
					v96 = v94;
					v97 = *(_QWORD*)(56i64 * *(_QWORD*)(v92 + 8i64 * *(_QWORD*)v95) + v93) - (_QWORD)v94;
					while (1)
					{
						v98 = *v96;
						if ((unsigned __int8)(*v96 - 65) <= 0x19u)
							v98 += 32;
						v99 = v96[v97];
						if ((unsigned __int8)(v99 - 65) <= 0x19u)
							v99 += 32;
						if (v98 != v99)
							break;
						if (!*v96)
						{
							v93 = *v146;
							++v91;
							++v77;
							v95 += 2;
							if (v91 < v132)
								goto LABEL_142;
							break;
						}
						++v96;
					}
					v80 = v137;
					v93 = *v146;
					v82 = v133;
				}
				v100 = v93 + 56i64 * *(_QWORD*)(v92 + 8i64 * *(_QWORD*)&v82[2 * v77]);
				if (*(_QWORD*)(v100 + 32) != *(_QWORD*)(v141 + 32)
					|| *(_QWORD*)(v100 + 40) != *(_QWORD*)(v141 + 40)
					|| *(_DWORD*)(v100 + 48) != *(_DWORD*)(v141 + 48))
				{
					sub_1401C01E0(a2, v141 + 32);
					sub_1401C0090(a2, v100 + 32);
				}
				if ((unsigned int)sub_1407E6AF0((unsigned __int64*)(v100 + 8), v141 + 8, 0x30ui64))
				{
					*((_QWORD*)v80 + 1) = *(_QWORD*)(v100 + 8);
					*((_QWORD*)v80 + 2) = *(_QWORD*)(v100 + 16);
					*((_QWORD*)v80 + 3) = *(_QWORD*)(v100 + 24);
					*((_QWORD*)v80 + 4) = *(_QWORD*)(v100 + 32);
					*((_QWORD*)v80 + 5) = *(_QWORD*)(v100 + 40);
					*((_QWORD*)v80 + 6) = *(_QWORD*)(v100 + 48);
				}
				v9 = a1;
				v76 = v127 + 1;
				v79 = v125 + 56;
				v125 += 56i64;
				++v127;
			}
			else
			{
				v102 = (_QWORD*)(*v146 + 56i64 * *(_QWORD*)(*(_QWORD*)(v147 + 16) + 8i64 * *(_QWORD*)&v82[2 * v77]) + 32);
				*(_QWORD*)v80 = *(_QWORD*)(*v146
					+ 56i64 * *(_QWORD*)(*(_QWORD*)(v147 + 16) + 8i64 * *(_QWORD*)&v82[2 * v77]));
				*((_QWORD*)v80 + 1) = *(v102 - 3);
				*((_QWORD*)v80 + 2) = *(v102 - 2);
				*((_QWORD*)v80 + 3) = *(v102 - 1);
				*((_QWORD*)v80 + 4) = *v102;
				*((_QWORD*)v80 + 5) = v102[1];
				*((_QWORD*)v80 + 6) = v102[2];
				sub_1401C0090(a2, (__int64)v102);
				v76 = v127;
				v79 = v125;
			}
			v78 = v131;
			++v77;
		LABEL_162:
			v103 = 0i64;
			if (**(_BYTE**)v80)
			{
				do
					++v103;
				while (*(_BYTE*)(v103 + *(_QWORD*)v80));
			}
			++v78;
			i = v103 + v150 + 1;
			v80 += 14;
			v137 = v80;
			v150 = i;
		}
	}
	v106 = *((_QWORD*)v9 + 4);
	if (v106)
	{
		v107 = (_QWORD*)*((_QWORD*)v9 + 3);
		do
		{
			v108 = 0i64;
			if (*(_BYTE*)*v107)
			{
				do
					++v108;
				while (*(_BYTE*)(v108 + *v107));
			}
			v107 += 7;
			i += v108 + 1;
			--v106;
		} while (v106);
		v150 = i;
	}
LABEL_172:
	v109 = 0i64;
	v149 = sub_14018B280(i, 0);
	v110 = v149;
	if (*((_QWORD*)v9 + 2))
	{
		v111 = 0i64;
		do
		{
			v112 = 0i64;
			v113 = *(int**)(v111 + *((_QWORD*)a1 + 1));
			if (*(_BYTE*)v113)
			{
				do
					++v112;
				while (*((_BYTE*)v113 + v112));
			}
			v114 = v112 + 1;
			sub_1407DB590(v110, v113, v114);
			++v109;
			v111 += 16i64;
			*(_QWORD*)(v111 + *((_QWORD*)a1 + 1) - 16) = v110;
			v110 = (int*)((char*)v110 + v114);
			v9 = a1;
		} while (v109 < *((_QWORD*)a1 + 2));
	}
	v115 = 0i64;
	if (*((_QWORD*)v9 + 4))
	{
		v116 = 0i64;
		do
		{
			v117 = 0i64;
			v118 = *(int**)(v116 + *((_QWORD*)a1 + 3));
			if (*(_BYTE*)v118)
			{
				do
					++v117;
				while (*((_BYTE*)v118 + v117));
			}
			v119 = v117 + 1;
			sub_1407DB590(v110, v118, v119);
			++v115;
			v116 += 56i64;
			*(_QWORD*)(v116 + *((_QWORD*)a1 + 3) - 56) = v110;
			v110 = (int*)((char*)v110 + v119);
			v9 = a1;
		} while (v115 < *((_QWORD*)a1 + 4));
	}
	sub_14018B900(*((_QWORD*)v9 + 5), 0);
	*((_QWORD*)v9 + 5) = v149;
	*((_QWORD*)v9 + 6) = v150;
	v63 = sub_1401BD1F0(v9, a2);
	if (v63 >= 0)
		v63 = 0;
LABEL_184:
	v120 = v128;
	if (v128)
	{
		v121 = (_QWORD*)v138;
		do
		{
			if (*v121)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v121 - 16i64) + 8i64))(*v121 - 16i64);
			v121 += 3;
			--v120;
		} while (v120);
	}
	if (v138)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v138 - 16) + 8i64))(v138 - 16);
	if (v133)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v133 - 2) + 8i64))(v133 - 4);
	return (unsigned int)v63;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

