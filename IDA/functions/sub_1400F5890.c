//----- (00000001400F5890) ----------------------------------------------------
_QWORD* __fastcall sub_1400F5890(__int64 a1, __int64 a2, int* a3, __int64 a4, __int64 a5, int a6, int a7, int* a8)
{
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // r12
	__int64 v11; // rbp
	__int64 v12; // rdi
	const wchar_t* v13; // rbx
	wchar_t* v14; // rax
	int v15; // ecx
	bool v16; // zf
	int* v17; // rbx
	int* v18; // rsi
	__int64 v19; // rdi
	int* v20; // rax
	int* v21; // rax
	int* v22; // rsi
	__int64 v23; // rdi
	int* v24; // rax
	unsigned __int64 v25; // rdi
	int* v26; // rbp
	unsigned __int64 v27; // rdi
	__int64 v28; // r14
	__int64 v29; // rdi
	__int64 v30; // r12
	int* v31; // r13
	__int64 v32; // r15
	int* v33; // rax
	int* v34; // rsi
	unsigned __int64 v35; // rdi
	__int64 v36; // rbp
	__int64 v37; // rdi
	const wchar_t* v38; // rbx
	wchar_t* v39; // rax
	int v40; // ecx
	bool v41; // zf
	__m128i* v42; // rbx
	int* v43; // rsi
	__int64 v44; // rdi
	int* v45; // rax
	int* v46; // rax
	int* v47; // rsi
	unsigned __int64 v48; // rdi
	int* v49; // rax
	unsigned __int64 v50; // rdi
	int* v51; // rbp
	unsigned __int64 v52; // rdi
	__int64 v53; // r14
	__int64 v54; // rdi
	__int64 v55; // r12
	__m128i* v56; // r13
	__int64 v57; // r15
	int* v58; // rax
	__m128i* v59; // rsi
	unsigned __int64 v60; // rdi
	int* v61; // rdi
	int* v62; // r13
	__int64 v63; // rax
	__int64 v64; // rbx
	unsigned __int64 v65; // rbx
	int* v66; // rsi
	__int64 v67; // rax
	__int64 v68; // r9
	__int64 v69; // rax
	unsigned __int64 v70; // r15
	int* v71; // rdi
	__int64 v72; // rcx
	unsigned __int64 v73; // rdi
	__int64 v74; // rax
	int* v75; // rdi
	__int64* p_i; // rax
	int* v77; // rbp
	int* v78; // r14
	unsigned __int64 v79; // rbx
	__int64 v80; // rbx
	int* v81; // rax
	int* v82; // r8
	signed __int64 v83; // rcx
	__int64* v84; // rax
	char* v85; // rbx
	int* v86; // rcx
	char* v87; // rdi
	unsigned __int64 v88; // rax
	signed __int64 v89; // rbx
	__int64 v90; // rax
	unsigned __int64 v91; // r15
	unsigned __int64 v92; // r12
	__int64 v93; // rdi
	_QWORD* v94; // r14
	char v95; // bl
	wchar_t* v96; // rbp
	__int64 v97; // rsi
	__int64 v98; // rdi
	const wchar_t* v99; // rbx
	wchar_t* v100; // rax
	int v101; // ecx
	bool v102; // zf
	_WORD* v103; // rcx
	unsigned __int64 v104; // rdx
	unsigned __int64 v105; // rax
	__int64 v106; // r10
	__int64 v107; // rbx
	_QWORD* v108; // rsi
	__int64 v109; // rdi
	const wchar_t* v110; // rbx
	wchar_t* v111; // rax
	int v112; // ecx
	bool v113; // zf
	__int64 v114; // rbp
	__int64 v115; // rdi
	__int64 j; // rbx
	__int64 v117; // rcx
	__int64 v119; // [rsp+30h] [rbp-98h]
	__int64 v120; // [rsp+38h] [rbp-90h] BYREF
	__int64 v121; // [rsp+40h] [rbp-88h] BYREF
	__int64 v122; // [rsp+48h] [rbp-80h]
	__int64 v123; // [rsp+50h] [rbp-78h]
	__int64 v124; // [rsp+58h] [rbp-70h]
	char v125[8]; // [rsp+60h] [rbp-68h] BYREF
	int* v126; // [rsp+68h] [rbp-60h]
	int* v127; // [rsp+70h] [rbp-58h]
	__int64 v128; // [rsp+78h] [rbp-50h]
	unsigned __int64 i; // [rsp+D8h] [rbp+10h] BYREF
	int* v131; // [rsp+E0h] [rbp+18h]
	__int64 v132; // [rsp+E8h] [rbp+20h]

	v132 = a4;
	v131 = a3;
	if (!a2)
		return 0i64;
	v8 = sub_1401A5AE0(a2, L"Forms");
	if (!v8)
		return 0i64;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	v119 = v9;
	if (!v9)
		return 0i64;
	v10 = 0i64;
	if (a7)
	{
		v11 = sub_1401A5AE0(v9, L"SpriteFile");
		for (i = v11; v11; i = v11)
		{
			v12 = *(_QWORD*)(v11 + 96);
			if (!v12)
				goto LABEL_18;
			while (1)
			{
				v13 = L"Name";
				v14 = (wchar_t*)sub_1401A4F40(v12 + 8);
				if (v14 == L"Name")
					break;
				v15 = 0;
				if (!*v14)
					goto LABEL_16;
				do
				{
					if (!*v13 || *v14 != *v13)
						break;
					v16 = v15 == 0x7FFFFFFF;
					if (v15 == 0x7FFFFFFF)
						goto LABEL_14;
					++v14;
					++v13;
					++v15;
				} while (*v14);
				v16 = v15 == 0x7FFFFFFF;
			LABEL_14:
				if (v16)
					break;
				if (!*v14)
				{
				LABEL_16:
					if (!*v13)
						break;
				}
				v12 = *(_QWORD*)(v12 + 56);
				if (!v12)
					goto LABEL_18;
			}
			v21 = (int*)sub_1401A4F40(v12 + 32);
			v22 = v21;
			if (v21)
			{
				v23 = 0i64;
				if (*(_WORD*)v21)
				{
					do
						++v23;
					while (*((_WORD*)v21 + v23));
				}
				v24 = sub_14018B280(2 * v23 + 18, 0);
				if (v24)
				{
					*(_QWORD*)v24 = off_140B55060;
					*((_QWORD*)v24 + 1) = v23;
				}
				else
				{
					v24 = 0i64;
				}
				v17 = v24 + 4;
				v25 = 2 * v23;
				sub_1407DB590(v24 + 4, v22, v25);
				*(_WORD*)((char*)v17 + v25) = 0;
			}
			else
			{
			LABEL_18:
				v17 = 0i64;
			}
			v18 = a8;
			if (a8 && *(_WORD*)a8)
			{
				v19 = 0i64;
				do
					++v19;
				while (*((_WORD*)a8 + v19));
				v20 = sub_14018B280(2 * v19 + 18, 0);
				if (v20)
				{
					*(_QWORD*)v20 = off_140B55060;
					*((_QWORD*)v20 + 1) = v19;
				}
				else
				{
					v20 = 0i64;
				}
				v26 = v20 + 4;
				v27 = 2 * v19;
				sub_1407DB590(v20 + 4, v18, v27);
				*(_WORD*)((char*)v26 + v27) = 0;
				v28 = 0i64;
				do
					v16 = *((_WORD*)&unk_1409D442C + ++v28) == 0;
				while (!v16);
				v29 = *((_QWORD*)v26 - 1);
				v30 = v29 + v28;
				v120 = *((_QWORD*)v17 - 1);
				v31 = v17;
				v32 = v120 + v29 + v28;
				v33 = sub_14018B280(2 * v32 + 18, 0);
				if (v33)
				{
					*((_QWORD*)v33 + 1) = v32;
					*(_QWORD*)v33 = off_140B55060;
				}
				v34 = v33 + 4;
				v35 = 2 * v29;
				sub_1407DB590(v33 + 4, v26, v35);
				sub_1407DB590((int*)((char*)v34 + v35), (int*)&unk_1409D442C, 2 * v28);
				sub_1407DB590((int*)((char*)v34 + 2 * v30), v17, 2 * v120);
				v10 = 0i64;
				v17 = v34;
				*((_WORD*)v34 + v32) = 0;
				if (v31)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v31 - 2) + 8i64))(v31 - 4);
				(*(void(__fastcall**)(int*))(*((_QWORD*)v26 - 2) + 8i64))(v26 - 4);
				v11 = i;
			}
			sub_140109290((__int64*)(*(_QWORD*)(a1 + 8) + 240i64), (WCHAR*)v17, 0i64);
			if (v17)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
			v11 = sub_1401A5BC0(v11, L"SpriteFile");
		}
		v36 = sub_1401A5AE0(v119, L"TemplateFile");
		for (i = v36; v36; i = v36)
		{
			v37 = *(_QWORD*)(v36 + 96);
			if (!v37)
				goto LABEL_56;
			while (1)
			{
				v38 = L"Name";
				v39 = (wchar_t*)sub_1401A4F40(v37 + 8);
				if (v39 == L"Name")
					break;
				v40 = 0;
				if (!*v39)
					goto LABEL_54;
				do
				{
					if (!*v38 || *v39 != *v38)
						break;
					v41 = v40 == 0x7FFFFFFF;
					if (v40 == 0x7FFFFFFF)
						goto LABEL_52;
					++v39;
					++v38;
					++v40;
				} while (*v39);
				v41 = v40 == 0x7FFFFFFF;
			LABEL_52:
				if (v41)
					break;
				if (!*v39)
				{
				LABEL_54:
					if (!*v38)
						break;
				}
				v37 = *(_QWORD*)(v37 + 56);
				if (!v37)
					goto LABEL_56;
			}
			v46 = (int*)sub_1401A4F40(v37 + 32);
			v47 = v46;
			if (v46)
			{
				v48 = 0i64;
				if (*(_WORD*)v46)
				{
					do
						++v48;
					while (*((_WORD*)v46 + v48));
				}
				v49 = sub_14018B280(2 * v48 + 18, 0);
				if (v49)
				{
					*(_QWORD*)v49 = off_140B55060;
					*((_QWORD*)v49 + 1) = v48;
				}
				else
				{
					v49 = 0i64;
				}
				v42 = (__m128i*)(v49 + 4);
				v50 = v48;
				sub_1407DB590(v49 + 4, v47, v50 * 2);
				v42->m128i_i16[v50] = 0;
			}
			else
			{
			LABEL_56:
				v42 = 0i64;
			}
			v43 = a8;
			if (a8 && *(_WORD*)a8)
			{
				v44 = 0i64;
				do
					++v44;
				while (*((_WORD*)a8 + v44));
				v45 = sub_14018B280(2 * v44 + 18, 0);
				if (v45)
				{
					*(_QWORD*)v45 = off_140B55060;
					*((_QWORD*)v45 + 1) = v44;
				}
				else
				{
					v45 = 0i64;
				}
				v51 = v45 + 4;
				v52 = 2 * v44;
				sub_1407DB590(v45 + 4, v43, v52);
				*(_WORD*)((char*)v51 + v52) = 0;
				v53 = 0i64;
				do
					v16 = *(_WORD*)&asc_1409D4464[2 * v53++ + 2] == 0;
				while (!v16);
				v54 = *((_QWORD*)v51 - 1);
				v55 = v53 + v54;
				v120 = v42[-1].m128i_i64[1];
				v56 = v42;
				v57 = v120 + v53 + v54;
				v58 = sub_14018B280(2 * v57 + 18, 0);
				if (v58)
				{
					*((_QWORD*)v58 + 1) = v57;
					*(_QWORD*)v58 = off_140B55060;
				}
				v59 = (__m128i*)(v58 + 4);
				v60 = 2 * v54;
				sub_1407DB590(v58 + 4, v51, v60);
				sub_1407DB590((int*)((char*)v59->m128i_i32 + v60), (int*)"\\", 2 * v53);
				sub_1407DB590((int*)((char*)v59->m128i_i32 + 2 * v55), v42->m128i_i32, 2 * v120);
				v10 = 0i64;
				v42 = v59;
				v59->m128i_i16[v57] = 0;
				if (v56)
					(*(void(__fastcall**)(__m128i*))(v56[-1].m128i_i64[0] + 8))(v56 - 1);
				(*(void(__fastcall**)(int*))(*((_QWORD*)v51 - 2) + 8i64))(v51 - 4);
				v36 = i;
			}
			sub_14010DD80(*(_QWORD***)(*(_QWORD*)(a1 + 8) + 368i64), v42);
			if (v42)
				(*(void(__fastcall**)(__m128i*))(v42[-1].m128i_i64[0] + 8))(v42 - 1);
			v36 = sub_1401A5BC0(v36, L"TemplateFile");
		}
	}
	v61 = v131;
	v62 = 0i64;
	v120 = 0i64;
	v63 = 0i64;
	if (*(_WORD*)v131)
	{
		do
			++v63;
		while (*((_WORD*)v131 + v63));
	}
	v64 = (2 * v63) >> 1;
	if ((unsigned __int64)(v64 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v62 = sub_14018B280(2 * (v64 + 1), 0);
		v120 = (__int64)v62;
	}
	v65 = 2 * v64;
	sub_1407DB590(v62, v61, v65);
	v66 = (int*)((char*)v62 + v65);
	if ((int*)((char*)v62 + v65))
		*(_WORD*)v66 = 0;
	v67 = 0i64;
	v68 = 0i64;
	v123 = 0i64;
	v124 = 0i64;
	v122 = 0i64;
	if (v62 == v66)
		goto LABEL_159;
	do
	{
		v69 = (char*)v66 - (char*)v62;
		v70 = ((char*)v66 - (char*)v62) >> 1;
		if (!v70)
		{
		LABEL_105:
			if (v70)
			{
				v74 = v69 >> 3;
				v75 = v62;
				if (v74 > 0)
				{
					while (*(_WORD*)v75 != 46)
					{
						v75 = (int*)((char*)v75 + 2);
						if (*(_WORD*)v75 == 46)
							break;
						v75 = (int*)((char*)v75 + 2);
						if (*(_WORD*)v75 == 46)
							break;
						v75 = (int*)((char*)v75 + 2);
						if (*(_WORD*)v75 == 46)
							break;
						--v74;
						v75 = (int*)((char*)v75 + 2);
						if (v74 <= 0)
							goto LABEL_112;
					}
				LABEL_120:
					if (v75 != v66)
					{
						v73 = ((char*)v75 - (char*)v62) >> 1;
						goto LABEL_123;
					}
					goto LABEL_122;
				}
			LABEL_112:
				if (((char*)v66 - (char*)v75) >> 1 != 1)
				{
					if (((char*)v66 - (char*)v75) >> 1 != 2)
					{
						if (((char*)v66 - (char*)v75) >> 1 != 3)
							goto LABEL_122;
						if (*(_WORD*)v75 == 46)
							goto LABEL_120;
						v75 = (int*)((char*)v75 + 2);
					}
					if (*(_WORD*)v75 == 46)
						goto LABEL_120;
					v75 = (int*)((char*)v75 + 2);
				}
				if (*(_WORD*)v75 == 46)
					goto LABEL_120;
			}
		LABEL_122:
			v73 = -1i64;
			goto LABEL_123;
		}
		v71 = v62;
		v72 = v69 >> 3;
		if (v69 >> 3 > 0)
		{
			while (*(_WORD*)v71 != 58)
			{
				v71 = (int*)((char*)v71 + 2);
				if (*(_WORD*)v71 == 58)
					break;
				v71 = (int*)((char*)v71 + 2);
				if (*(_WORD*)v71 == 58)
					break;
				v71 = (int*)((char*)v71 + 2);
				if (*(_WORD*)v71 == 58)
					break;
				--v72;
				v71 = (int*)((char*)v71 + 2);
				if (v72 <= 0)
					goto LABEL_95;
			}
			goto LABEL_103;
		}
	LABEL_95:
		if (((char*)v66 - (char*)v71) >> 1 != 1)
		{
			if (((char*)v66 - (char*)v71) >> 1 != 2)
			{
				if (((char*)v66 - (char*)v71) >> 1 != 3)
					goto LABEL_105;
				if (*(_WORD*)v71 == 58)
					goto LABEL_103;
				v71 = (int*)((char*)v71 + 2);
			}
			if (*(_WORD*)v71 == 58)
				goto LABEL_103;
			v71 = (int*)((char*)v71 + 2);
		}
		if (*(_WORD*)v71 != 58)
			goto LABEL_105;
	LABEL_103:
		if (v71 == v66)
			goto LABEL_105;
		v73 = ((char*)v71 - (char*)v62) >> 1;
		if (v73 == -1i64)
			goto LABEL_105;
	LABEL_123:
		p_i = (__int64*)&i;
		if (v70 >= v73)
			p_i = &v120;
		v120 = v73;
		i = ((char*)v66 - (char*)v62) >> 1;
		v77 = (int*)((char*)v62 + 2 * *p_i);
		v78 = 0i64;
		v126 = 0i64;
		v128 = 0i64;
		v79 = (((char*)v77 - (char*)v62) >> 1) + 1;
		if (v79 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v80 = 2 * v79;
			v81 = sub_14018B280(v80, 0);
			v68 = v123;
			v78 = v81;
			v126 = v81;
			v128 = (__int64)v81 + v80;
		}
		v82 = v78;
		if (v62 != v77)
		{
			v83 = (char*)v62 - (char*)v78;
			do
			{
				if (v82)
					*(_WORD*)v82 = *(_WORD*)((char*)v82 + v83);
				v82 = (int*)((char*)v82 + 2);
			} while ((int*)((char*)v82 + v83) != v77);
		}
		v127 = v82;
		if (v82)
			*(_WORD*)v82 = 0;
		if (v68 == v10)
		{
			sub_1400F8CF0(&v121, (char*)v68, (__int64)v125);
			v10 = v124;
		}
		else
		{
			if (v68)
			{
				*(_QWORD*)(v68 + 8) = 0i64;
				*(_QWORD*)(v68 + 16) = 0i64;
				*(_QWORD*)(v68 + 24) = 0i64;
				sub_14001C1B0((_QWORD*)v68, v78, (__int64)v82);
				v68 = v123;
			}
			v123 = v68 + 32;
		}
		if (v73 >= v70)
		{
			if (v62 != v66)
			{
				*(_WORD*)v62 = 0;
				v66 = v62;
			}
		}
		else
		{
			v120 = -1i64;
			v84 = (__int64*)&i;
			i = v70 - (v73 + 1);
			if (i == -1i64)
				v84 = &v120;
			v85 = (char*)v62 + 2 * v73 + 2;
			v86 = 0i64;
			v87 = (char*)v62 + 2 * v73 + 2 * *v84 + 2;
			v88 = ((v87 - v85) >> 1) + 1;
			if (v88 <= 0x7FFFFFFFFFFFFFFEi64)
				v86 = sub_14018B280(2 * v88, 0);
			v66 = v86;
			if (v85 != v87)
			{
				v89 = v85 - (char*)v86;
				do
				{
					if (v66)
						*(_WORD*)v66 = *(_WORD*)((char*)v66 + v89);
					v66 = (int*)((char*)v66 + 2);
				} while ((char*)v66 + v89 != v87);
			}
			if (v66)
				*(_WORD*)v66 = 0;
			v90 = (__int64)v62;
			v62 = v86;
			if (v90)
				sub_14018B900(v90, 0);
		}
		if (v78)
			sub_14018B900((__int64)v78, 0);
		v68 = v123;
	} while (v62 != v66);
	v67 = v122;
	v120 = (__int64)v62;
LABEL_159:
	v91 = 0i64;
	v92 = (v68 - v67) >> 5;
	if (!v92)
		goto LABEL_208;
	v93 = v119;
	v94 = (_QWORD*)(v67 + 8);
	do
	{
		v95 = 0;
		v96 = L"Control";
		if (!v91)
			v96 = L"Form";
		LOBYTE(i) = 0;
		v97 = sub_1401A5AE0(v93, v96);
		if (v97)
		{
			do
			{
				v98 = *(_QWORD*)(v97 + 96);
				if (v98)
				{
					while (1)
					{
						v99 = L"Name";
						v100 = (wchar_t*)sub_1401A4F40(v98 + 8);
						if (v100 == L"Name")
							break;
						v101 = 0;
						if (*v100)
						{
							do
							{
								if (!*v99 || *v100 != *v99)
									break;
								v102 = v101 == 0x7FFFFFFF;
								if (v101 == 0x7FFFFFFF)
									goto LABEL_172;
								++v100;
								++v99;
								++v101;
							} while (*v100);
							v102 = v101 == 0x7FFFFFFF;
						LABEL_172:
							if (v102)
								break;
						}
						if (!*v100 && !*v99)
							break;
						v98 = *(_QWORD*)(v98 + 56);
						if (!v98)
							goto LABEL_176;
					}
					v103 = (_WORD*)sub_1401A4F40(v98 + 32);
				}
				else
				{
				LABEL_176:
					v103 = 0i64;
				}
				v104 = 0i64;
				if (*v103)
				{
					do
						++v104;
					while (v103[v104]);
				}
				if ((__int64)(v94[1] - *v94) >> 1 == v104)
				{
					v105 = 0i64;
					if (!v104)
					{
					LABEL_184:
						v93 = v97;
						v119 = v97;
						v95 = 1;
						goto LABEL_188;
					}
					v106 = *v94 - (_QWORD)v103;
					while (*(_WORD*)((char*)v103 + v106) == *v103)
					{
						++v105;
						++v103;
						if (v105 >= v104)
							goto LABEL_184;
					}
				}
				v97 = sub_1401A5BC0(v97, v96);
			} while (v97);
			v95 = i;
			v93 = v119;
		}
	LABEL_188:
		++v91;
		v94 += 4;
	} while (v91 < v92);
	v62 = (int*)v120;
	if (v95)
	{
		v107 = a5;
		v108 = (_QWORD*)(**(__int64(__fastcall***)(__int64, __int64, __int64, __int64, bool, int))a1)(
			a1,
			v132,
			a5,
			v93,
			v92 > 1,
			a6);
		if (v108)
		{
			if (!v107)
			{
				v109 = *(_QWORD*)(v93 + 96);
				if (v109)
				{
					while (1)
					{
						v110 = L"Overlapped";
						v111 = (wchar_t*)sub_1401A4F40(v109 + 8);
						if (v111 == L"Overlapped")
							break;
						v112 = 0;
						if (*v111)
						{
							do
							{
								if (!*v110 || *v111 != *v110)
									break;
								v113 = v112 == 0x7FFFFFFF;
								if (v112 == 0x7FFFFFFF)
									goto LABEL_200;
								++v111;
								++v110;
								++v112;
							} while (*v111);
							v113 = v112 == 0x7FFFFFFF;
						LABEL_200:
							if (v113)
								break;
						}
						if (!*v111 && !*v110)
							break;
						v109 = *(_QWORD*)(v109 + 56);
						if (!v109)
							goto LABEL_206;
					}
				}
				else
				{
				LABEL_206:
					v108[82] |= 0x100000ui64;
				}
			}
			(*(void(__fastcall**)(_QWORD*))(*v108 + 8i64))(v108);
		}
	}
	else
	{
	LABEL_208:
		v108 = 0i64;
	}
	v114 = v122;
	v115 = v123;
	for (j = v122; j != v115; j += 32i64)
	{
		v117 = *(_QWORD*)(j + 8);
		if (v117)
			sub_14018B900(v117, 0);
	}
	if (v114)
		sub_14018B900(v114, 0);
	if (v62)
		sub_14018B900((__int64)v62, 0);
	return v108;
}
// 1400F5A2D: conditional instruction was optimized away because rdi.8!=0
// 1400F5CCD: conditional instruction was optimized away because rdi.8!=0
// 1400F637A: conditional instruction was optimized away because rdi.8!=0
// 1400F63A2: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1400F64AF: conditional instruction was optimized away because rdi.8!=0
// 140A195C0: using guessed type wchar_t aOverlapped[11];
// 140A31730: using guessed type wchar_t aSpritefile[11];
// 140A31748: using guessed type wchar_t aForms[6];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A317A0: using guessed type wchar_t aForm[5];
// 140A317B0: using guessed type wchar_t aTemplatefile[13];
// 140A317D0: using guessed type wchar_t aControl[8];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 1400F5890: using guessed type char var_68[8];

