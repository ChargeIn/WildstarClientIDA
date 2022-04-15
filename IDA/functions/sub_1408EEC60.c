//----- (00000001408EEC60) ----------------------------------------------------
__int64 __fastcall sub_1408EEC60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
	__int64 v6; // rdx
	int* v7; // r15
	int v8; // ecx
	__int64 v9; // rax
	__int64 v10; // r12
	int v11; // ebx
	bool v12; // cc
	__int64 v13; // rax
	int v14; // edx
	__int64 v15; // r14
	int v16; // edx
	int v17; // edx
	int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // rsi
	__int64 v21; // rdx
	int v22; // edi
	unsigned __int64 v23; // rcx
	__int64 v24; // rax
	void* v25; // rsp
	int* v26; // r9
	__int64 v27; // rcx
	int v28; // edx
	__int64 v29; // rax
	int v30; // ebx
	__int64 v31; // r11
	__int64 v32; // rax
	int v33; // ecx
	__int64 v34; // rsi
	__int64 v35; // rdx
	char* v36; // rcx
	__int64 v37; // rdi
	__int64 v38; // r9
	__int64 v39; // r10
	__int64 v40; // r8
	_BYTE* v41; // rdx
	_BYTE* v42; // rax
	__int64 v43; // rbx
	unsigned int v44; // r10d
	__int64 v45; // r11
	char* v46; // r9
	unsigned int v47; // r8d
	int v48; // eax
	int v49; // r9d
	int v50; // edx
	int v51; // r12d
	unsigned __int8 v52; // r14
	_QWORD* v53; // rbx
	__int64 v54; // r8
	int v55; // eax
	int v56; // ebx
	int v57; // edx
	int v58; // edx
	__int64 v59; // rsi
	unsigned __int64 v60; // rcx
	__int64 v61; // rax
	void* v62; // rsp
	int v63; // ecx
	int v64; // r10d
	__int64 i; // rax
	int v66; // ecx
	__int64 v67; // r9
	__int64 v68; // rdx
	int v69; // r15d
	int v70; // r14d
	__int64 v71; // rbx
	int v72; // eax
	int v73; // r8d
	__int64 v74; // rdi
	__int64 v75; // rdx
	char* v76; // rcx
	unsigned int v77; // r10d
	char* v78; // r9
	__int64 v79; // r11
	unsigned int v80; // r8d
	int v81; // esi
	int v82; // edi
	__int64 v83; // rcx
	int v84; // eax
	int v86; // [rsp+30h] [rbp+0h] BYREF
	int v87; // [rsp+34h] [rbp+4h]
	int v88; // [rsp+38h] [rbp+8h]
	__int64 v89; // [rsp+40h] [rbp+10h]
	__int64 v90; // [rsp+48h] [rbp+18h]
	__int64 v91; // [rsp+50h] [rbp+20h]
	__int64 v92; // [rsp+58h] [rbp+28h]
	__int64 v93; // [rsp+60h] [rbp+30h]
	__int64 v94; // [rsp+68h] [rbp+38h]
	__int64 v95; // [rsp+70h] [rbp+40h]
	__int64 v96[13]; // [rsp+78h] [rbp+48h] BYREF
	int v98; // [rsp+F8h] [rbp+C8h]

	v6 = *(_QWORD*)(a1 + 32);
	v7 = (int*)a1;
	v8 = *(_DWORD*)(a2 + 32);
	v9 = *(_QWORD*)(v6 + 64);
	v10 = *(int*)(v9 + 72i64 * *(unsigned __int8*)(a2 + 37));
	v11 = 0;
	v12 = *(_DWORD*)a2 < 2;
	v94 = v9 + 72i64 * *(unsigned __int8*)(a2 + 37);
	v13 = v7[37];
	v95 = v6;
	v14 = *(_DWORD*)(v6 + 4 * v13);
	v88 = v8;
	v98 = v10;
	v15 = v10;
	v93 = v10;
	if (!v12)
	{
		v56 = *(_DWORD*)(a2 + 24);
		v57 = (a5 * v14) >> 1;
		if (*(_DWORD*)(a2 + 28) < v57)
			v57 = *(_DWORD*)(a2 + 28);
		v58 = v57 - v56;
		if (v58 <= 0)
			return 0i64;
		v59 = v58 / v8;
		v60 = (int)v10 * (((int)v59 + (int)v10 - 1) / (int)v10);
		v61 = v60 + 15;
		if (v60 + 15 <= v60)
			v61 = 0xFFFFFFFFFFFFFF0i64;
		v62 = alloca(v61 & 0xFFFFFFFFFFFFFFF0ui64);
		v63 = 0;
		v64 = v56 / a5;
		v86 = v56 / a5;
		for (i = 0i64; i < a5; ++v63)
		{
			if (*(_DWORD*)(a4 + 4 * i))
				break;
			++i;
		}
		if (v63 == a5)
			return 0i64;
		v66 = 0;
		v67 = 0i64;
		v87 = 0;
		v89 = 0i64;
		v68 = v59;
		v90 = v59;
		v69 = v88 / a5;
		if (*(char*)(a2 + 38) <= 0)
			return 0i64;
		while (1)
		{
			v70 = 0;
			v71 = 0i64;
			if (v68 > 0)
			{
				v72 = v10;
				v73 = __ROL4__(1, v66);
				v88 = v73;
				while (1)
				{
					if (!v66)
					{
						v74 = v93;
						*((_BYTE*)&v86 + v93 + v71 - 1) = 1;
						if (v74 - 2 >= 0)
						{
							v75 = v74 - 1;
							v76 = (char*)&v86 + v71 + v74 - 2;
							do
							{
								--v76;
								v76[1] = v76[2] * *(_BYTE*)(a2 + 36);
								--v75;
							} while (v75);
						}
						v77 = sub_1408EFB10(v94, (int*)a1);
						if (v74 > 0)
						{
							v78 = (char*)&v86 + v71;
							v79 = v74;
							do
							{
								v80 = *v78++;
								*(v78 - 1) = v77 / v80;
								v77 -= v80 * (char)(v77 / v80);
								--v79;
							} while (v79);
						}
						v64 = v86;
						v67 = v89;
						LOBYTE(v73) = v88;
						v68 = v90;
						v72 = v74;
					}
					v81 = 0;
					if (v72 > 0)
						break;
				LABEL_79:
					v67 = v89;
					v66 = v87;
					v64 = v86;
					if (v71 >= v68)
						goto LABEL_80;
				}
				v82 = v64 + v69 * v70;
				while (v71 < v68)
				{
					v83 = *((char*)&v86 + v71);
					if (((unsigned __int8)v73 & *(_BYTE*)(v83 + *(_QWORD*)(a2 + 8))) != 0)
					{
						sub_1408EFFC0(
							(int*)(*(_QWORD*)(v95 + 64) + 72i64 * *(unsigned __int8*)(*(_QWORD*)(a2 + 16) + 8 * v83 + v67)),
							a3,
							v82,
							(int*)a1,
							v69,
							-8);
						v68 = v90;
						LOBYTE(v73) = v88;
					}
					v72 = v10;
					v67 = v89;
					++v81;
					++v70;
					v82 += v69;
					++v71;
					if (v81 >= (int)v10)
						goto LABEL_79;
				}
			LABEL_80:
				v67 = v89;
				v66 = v87;
				v64 = v86;
			}
			v84 = *(char*)(a2 + 38);
			++v66;
			++v67;
			v87 = v66;
			v89 = v67;
			if (v66 >= v84)
				return 0i64;
		}
	}
	v16 = v14 >> 1;
	if (*(_DWORD*)(a2 + 28) < v16)
		v16 = *(_DWORD*)(a2 + 28);
	v17 = v16 - *(_DWORD*)(a2 + 24);
	if (v17 <= 0)
		return 0i64;
	v18 = v17 / v8;
	v19 = 0i64;
	v20 = v18;
	if (a5 <= 0i64)
		return 0i64;
	v21 = a3;
	do
	{
		if (*(_DWORD*)(a4 + 4 * v19))
		{
			++v11;
			v21 += 8i64;
			*(_QWORD*)(v21 - 8) = *(_QWORD*)(a3 + 8 * v19);
		}
		++v19;
	} while (v19 < a5);
	if (!v11)
		return 0i64;
	v22 = v10 * ((v18 + (int)v10 - 1) / (int)v10);
	v23 = v11 * v22;
	v24 = v23 + 15;
	if (v23 + 15 <= v23)
		v24 = 0xFFFFFFFFFFFFFF0i64;
	v25 = alloca(v24 & 0xFFFFFFFFFFFFFFF0ui64);
	v26 = &v86;
	v27 = 1i64;
	v92 = v11;
	v96[0] = (__int64)&v86;
	if (v11 > 1i64)
	{
		v28 = v22;
		do
		{
			v29 = v28;
			++v27;
			v28 += v22;
			v96[v27 - 1] = (__int64)v26 + v29;
			v26 = (int*)v96[0];
		} while (v27 < v11);
	}
	v30 = 0;
	v31 = 0i64;
	v32 = v20;
	v86 = 0;
	v91 = 0i64;
	v90 = v20;
	if (*(char*)(a2 + 38) <= 0)
		return 0i64;
	while (1)
	{
		v33 = 0;
		v34 = 0i64;
		v87 = 0;
		if (v32 > 0)
			break;
	LABEL_51:
		v55 = *(char*)(a2 + 38);
		++v30;
		++v31;
		v86 = v30;
		v91 = v31;
		if (v30 >= v55)
			return 0i64;
		LODWORD(v10) = v98;
		v32 = v90;
		v26 = (int*)v96[0];
	}
	while (v30)
	{
		v37 = v92;
	LABEL_36:
		v48 = 0;
		LODWORD(v89) = 0;
		if ((int)v10 > 0)
		{
			v49 = v88;
			v50 = v98;
			v51 = v88 * v33;
			while (v34 < v90)
			{
				v52 = __ROL4__(1, v30);
				if (v37 > 0)
				{
					v53 = (_QWORD*)a3;
					do
					{
						v54 = *(char*)(*(_QWORD*)((char*)v53 + (_QWORD)v96 - a3) + v34);
						if ((v52 & *(_BYTE*)(v54 + *(_QWORD*)(a2 + 8))) != 0)
						{
							sub_1408EFE10(
								(int*)(*(_QWORD*)(v95 + 64) + 72i64 * *(unsigned __int8*)(*(_QWORD*)(a2 + 16) + 8 * v54 + v31)),
								*v53 + 4i64 * (v51 + *(_DWORD*)(a2 + 24)),
								(int*)a1,
								v49,
								-8);
							v49 = v88;
						}
						v31 = v91;
						++v53;
						--v37;
					} while (v37);
					v48 = v89;
					v37 = v92;
					v50 = v98;
					v30 = v86;
				}
				v31 = v91;
				++v48;
				v33 = v87 + 1;
				v51 += v49;
				++v34;
				++v87;
				LODWORD(v89) = v48;
				if (v48 >= v50)
				{
					v15 = v93;
					v7 = (int*)a1;
					LODWORD(v10) = v93;
					goto LABEL_47;
				}
			}
			v15 = v93;
			v7 = (int*)a1;
			goto LABEL_51;
		}
	LABEL_47:
		v31 = v91;
		v26 = (int*)v96[0];
		if (v34 >= v90)
			goto LABEL_51;
	}
	*((_BYTE*)v26 + v15 + v34 - 1) = 1;
	if (v15 - 2 >= 0)
	{
		v35 = v15 - 1;
		v36 = (char*)v26 + v34 + v15 - 2;
		do
		{
			--v36;
			v36[1] = v36[2] * *(_BYTE*)(a2 + 36);
			--v35;
		} while (v35);
	}
	v37 = v92;
	v38 = 1i64;
	if (v92 > 1)
	{
		v39 = v15 - 1;
		do
		{
			v40 = v15 - 1;
			if (v39 >= 0)
			{
				v41 = (_BYTE*)(v39 + v34 + v96[v38]);
				v42 = (_BYTE*)(v39 + v34 + v96[v38 - 1]);
				do
				{
					--v40;
					*v41-- = *v42--;
				} while (v40 >= 0);
			}
			++v38;
		} while (v38 < v37);
	}
	v43 = 0i64;
	if (v37 <= 0)
	{
	LABEL_35:
		v30 = v86;
		v33 = v87;
		goto LABEL_36;
	}
	while (1)
	{
		v44 = sub_1408EFB10(v94, v7);
		if (v7[4] < 0)
			return 0i64;
		if (v15 > 0)
		{
			v45 = v15;
			v46 = (char*)(v34 + v96[v43]);
			do
			{
				v47 = *v46++;
				*(v46 - 1) = v44 / v47;
				v44 -= v47 * (char)(v44 / v47);
				--v45;
			} while (v45);
		}
		if (++v43 >= v37)
		{
			v31 = v91;
			goto LABEL_35;
		}
	}
}
// 1408EEC60: using guessed type __int64 var_68[13];

