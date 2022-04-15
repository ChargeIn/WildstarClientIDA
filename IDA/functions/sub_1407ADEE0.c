//----- (00000001407ADEE0) ----------------------------------------------------
void __fastcall sub_1407ADEE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	const __m128i* v6; // r14
	__int64 v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rcx
	_QWORD* v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rax
	_QWORD* v15; // r12
	__int64 v16; // rcx
	_QWORD* v17; // rax
	_QWORD* v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rdi
	__int64 v22; // rax
	__int64 v23; // r14
	__int64 i; // rbx
	__int64 v25; // rax
	int* v26; // rax
	__int64 v27; // rax
	__int64 v28; // rax
	unsigned int v29; // r12d
	int* v30; // r13
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 j; // rdi
	__int64 v34; // rax
	int* v35; // rax
	__int64 v36; // rax
	__int64 v37; // r15
	bool v38; // zf
	__int64 v39; // rdi
	__int64 v40; // rax
	int* v41; // rax
	__int64 v42; // rax
	int* v43; // rdi
	__int64 v44; // rax
	__int64 v45; // r15
	__int64 v46; // rdi
	__int64 v47; // rax
	int* v48; // rax
	__int64 v49; // rax
	int* v50; // rdi
	__int64 v51; // rax
	int* v52; // rdi
	__int64 v53; // rax
	void(__fastcall * v54)(__int64, _QWORD, _QWORD); // rax
	unsigned int v55; // edi
	__int64 v56; // r15
	__int64 v57; // rdi
	__int64 v58; // rax
	int* v59; // rax
	__int64 v60; // rax
	unsigned int v61; // edi
	__int64 v62; // r15
	__int64 v63; // rdi
	__int64 v64; // rax
	int* v65; // rax
	__int64 v66; // rax
	__int64 v67; // rcx
	__int64 v68; // rax
	__int64 v69; // rax
	__int64 v70; // rcx
	__int64 v71; // rcx
	__int64 v72; // rax
	int* v73; // r12
	__int64 v74; // rcx
	__int64 v75; // rax
	__int64 v76; // rax
	__int64 v77; // rcx
	__int64 v78; // rcx
	__int64 v79; // rax
	__int64 v80; // rcx
	__int64 v81; // r8
	__int64 v82; // rax
	int* v83; // rbx
	__int64 v84; // rcx
	int k; // eax
	int v86; // eax
	int n; // eax
	int ii; // eax
	__int64 v89; // rcx
	__int64* v90; // rax
	__int64* v91; // rax
	__int64 v92; // rcx
	int* v93; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v94; // [rsp+30h] [rbp-D8h]
	__int64 v95; // [rsp+38h] [rbp-D0h]
	__int64 v96; // [rsp+40h] [rbp-C8h]
	const __m128i* v97; // [rsp+48h] [rbp-C0h]
	__int64(__fastcall * *v98)(); // [rsp+58h] [rbp-B0h] BYREF
	__int64 v99; // [rsp+60h] [rbp-A8h]
	__int64 v100; // [rsp+68h] [rbp-A0h]
	__int64 v101; // [rsp+70h] [rbp-98h]
	__int64 v102; // [rsp+78h] [rbp-90h]
	_QWORD* v103; // [rsp+88h] [rbp-80h]
	_QWORD* v104; // [rsp+90h] [rbp-78h]
	__int64 v105; // [rsp+98h] [rbp-70h]
	__int64 v106; // [rsp+A0h] [rbp-68h]
	int v107; // [rsp+B4h] [rbp-54h]
	__int64 v108; // [rsp+C0h] [rbp-48h]
	__int64 v109; // [rsp+C8h] [rbp-40h]
	__int64(__fastcall * *v110)(); // [rsp+D8h] [rbp-30h] BYREF
	char* v111; // [rsp+E0h] [rbp-28h]
	char v112; // [rsp+E8h] [rbp-20h] BYREF
	int v113; // [rsp+13Ch] [rbp+34h]
	__int64 v114; // [rsp+140h] [rbp+38h]
	__int128 v115; // [rsp+148h] [rbp+40h]
	__int64(__fastcall * *v116)(); // [rsp+158h] [rbp+50h]
	char* v117; // [rsp+160h] [rbp+58h]
	char v118; // [rsp+168h] [rbp+60h] BYREF
	int v119; // [rsp+1BCh] [rbp+B4h]
	__int64 v120; // [rsp+1C0h] [rbp+B8h]
	__int128 v121; // [rsp+1C8h] [rbp+C0h]
	__int64(__fastcall * *v122)(); // [rsp+1D8h] [rbp+D0h]
	char* v123; // [rsp+1E0h] [rbp+D8h]
	char v124; // [rsp+1E8h] [rbp+E0h] BYREF
	int v125; // [rsp+23Ch] [rbp+134h]
	__int64 v126; // [rsp+240h] [rbp+138h]
	__int128 v127; // [rsp+248h] [rbp+140h]
	__int64(__fastcall * *m)(); // [rsp+258h] [rbp+150h] BYREF
	char* v129; // [rsp+260h] [rbp+158h]
	char v130; // [rsp+268h] [rbp+160h] BYREF
	int v131; // [rsp+2BCh] [rbp+1B4h]
	__int64 v132; // [rsp+2C0h] [rbp+1B8h]
	__int128 v133; // [rsp+2C8h] [rbp+1C0h]
	int v134[100]; // [rsp+2D8h] [rbp+1D0h] BYREF

	v96 = a1;
	v95 = a3;
	v6 = (const __m128i*)a2;
	v97 = (const __m128i*)a2;
	sub_1401A72E0((__int64)&v98);
	v7 = ((__int64(__fastcall*)(__int64(__fastcall***)()))m[2])(&m);
	v8 = (_QWORD*)v7;
	if (v7)
	{
		*(_QWORD*)(v7 + 16) = 0i64;
		*(_QWORD*)(v7 + 8) = &v98;
		*(_DWORD*)(v7 + 24) = 0;
		*(_QWORD*)(v7 + 32) = 0i64;
		*(_QWORD*)(v7 + 40) = 0i64;
		*(_QWORD*)(v7 + 48) = 0i64;
		*(_QWORD*)(v7 + 56) = 0i64;
		*(_QWORD*)(v7 + 64) = 0i64;
		*(_QWORD*)(v7 + 72) = 0i64;
		*(_QWORD*)v7 = off_140B5ED50;
		*(_QWORD*)(v7 + 80) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	v8[10] = &m;
	sub_1401A4C50((__int64)(v8 + 3), (int*)L"xml version=\"1.0\" encoding=\"UTF-8\"");
	if (v8[1] == v99)
	{
		v9 = v8[2];
		if (v9)
		{
			v10 = *(_QWORD**)(v9 + 48);
			if (v8 == v10)
				*(_QWORD*)(v9 + 48) = v10[9];
			v11 = *(_QWORD**)(v9 + 56);
			if (v8 == v11)
				*(_QWORD*)(v9 + 56) = v11[8];
			v12 = v8[8];
			if (v12)
				*(_QWORD*)(v12 + 72) = v8[9];
			v13 = v8[9];
			if (v13)
				*(_QWORD*)(v13 + 64) = v8[8];
			v8[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v8[10] + 32i64))(v8[10]);
		}
		if (v104)
		{
			v104[9] = v8;
			v8[8] = v104;
			v104 = v8;
		}
		else
		{
			v104 = v8;
			v103 = v8;
			v8[8] = 0i64;
		}
		v8[9] = 0i64;
		v8[2] = &v98;
	}
	v14 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v110[2])(&v110);
	v15 = (_QWORD*)v14;
	v93 = (int*)v14;
	if (v14)
	{
		*(_QWORD*)(v14 + 16) = 0i64;
		*(_QWORD*)(v14 + 8) = &v98;
		*(_DWORD*)(v14 + 24) = 0;
		*(_QWORD*)(v14 + 32) = 0i64;
		*(_QWORD*)(v14 + 40) = 0i64;
		*(_QWORD*)(v14 + 48) = 0i64;
		*(_QWORD*)(v14 + 56) = 0i64;
		*(_QWORD*)(v14 + 64) = 0i64;
		*(_QWORD*)(v14 + 72) = 0i64;
		*(_QWORD*)(v14 + 80) = 0i64;
		*(_QWORD*)v14 = off_140B5EBA0;
		*(_DWORD*)(v14 + 88) = 0;
		*(_QWORD*)(v14 + 96) = 0i64;
	}
	else
	{
		v15 = 0i64;
		v93 = 0i64;
	}
	v15[10] = &v110;
	sub_1401A4C50((__int64)(v15 + 3), (int*)L"InputBindings");
	if (v15[1] == v99)
	{
		v16 = v15[2];
		if (v16)
		{
			v17 = *(_QWORD**)(v16 + 48);
			if (v15 == v17)
				*(_QWORD*)(v16 + 48) = v17[9];
			v18 = *(_QWORD**)(v16 + 56);
			if (v15 == v18)
				*(_QWORD*)(v16 + 56) = v18[8];
			v19 = v15[8];
			if (v19)
				*(_QWORD*)(v19 + 72) = v15[9];
			v20 = v15[9];
			if (v20)
				*(_QWORD*)(v20 + 64) = v15[8];
			v15[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v15[10] + 32i64))(v15[10]);
		}
		if (v104)
		{
			v104[9] = v15;
			v15[8] = v104;
			v104 = v15;
		}
		else
		{
			v104 = v15;
			v103 = v15;
			v15[8] = 0i64;
		}
		v15[9] = 0i64;
		v15[2] = &v98;
	}
	if (a3)
	{
		v21 = a4 + 156;
		v94 = v21;
		do
		{
			v22 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v110[2])(&v110);
			v23 = v22;
			if (v22)
			{
				*(_QWORD*)(v22 + 16) = 0i64;
				*(_QWORD*)(v22 + 8) = &v98;
				*(_DWORD*)(v22 + 24) = 0;
				*(_QWORD*)(v22 + 32) = 0i64;
				*(_QWORD*)(v22 + 40) = 0i64;
				*(_QWORD*)(v22 + 48) = 0i64;
				*(_QWORD*)(v22 + 56) = 0i64;
				*(_QWORD*)(v22 + 64) = 0i64;
				*(_QWORD*)(v22 + 72) = 0i64;
				*(_QWORD*)(v22 + 80) = 0i64;
				*(_QWORD*)v22 = off_140B5EBA0;
				*(_DWORD*)(v22 + 88) = 0;
				*(_QWORD*)(v22 + 96) = 0i64;
			}
			else
			{
				v23 = 0i64;
			}
			*(_QWORD*)(v23 + 80) = &v110;
			if ((*(_DWORD*)(v23 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v23 + 32), 0);
			*(_DWORD*)(v23 + 24) = 0;
			*(_QWORD*)(v23 + 32) = 0i64;
			*(_QWORD*)(v23 + 40) = 0i64;
			for (i = 0i64; aInput_2[i]; ++i)
				;
			v25 = 2 * (i + 1);
			if (!is_mul_ok(i + 1, 2ui64))
				v25 = -1i64;
			v26 = sub_14018B280(v25, 0);
			*(_QWORD*)(v23 + 32) = v26;
			sub_1407DB590(v26, (int*)L"Input", 2 * i + 2);
			v27 = *(_QWORD*)(v23 + 32);
			*(_DWORD*)(v23 + 24) = 512;
			*(_QWORD*)(v23 + 40) = v27 + 2 * i;
			v28 = sub_1401A6C70(v23, (int*)L"Name");
			sub_1401A4C50(v28 + 32, (int*)(v21 - 88));
			v29 = 0;
			v30 = (int*)v21;
			do
			{
				if (*v30)
				{
					v31 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v110[2])(&v110);
					v32 = v31;
					if (v31)
					{
						*(_QWORD*)(v31 + 16) = 0i64;
						*(_QWORD*)(v31 + 8) = &v98;
						*(_DWORD*)(v31 + 24) = 0;
						*(_QWORD*)(v31 + 32) = 0i64;
						*(_QWORD*)(v31 + 40) = 0i64;
						*(_QWORD*)(v31 + 48) = 0i64;
						*(_QWORD*)(v31 + 56) = 0i64;
						*(_QWORD*)(v31 + 64) = 0i64;
						*(_QWORD*)(v31 + 72) = 0i64;
						*(_QWORD*)v31 = off_140B5EBA0;
						*(_QWORD*)(v31 + 80) = 0i64;
						*(_DWORD*)(v31 + 88) = 0;
						*(_QWORD*)(v31 + 96) = 0i64;
					}
					else
					{
						v32 = 0i64;
					}
					*(_QWORD*)(v32 + 80) = &v110;
					if ((*(_DWORD*)(v32 + 24) & 0x200) != 0)
						sub_14018B900(*(_QWORD*)(v32 + 32), 0);
					*(_DWORD*)(v32 + 24) = 0;
					*(_QWORD*)(v32 + 32) = 0i64;
					*(_QWORD*)(v32 + 40) = 0i64;
					for (j = 0i64; aKey_3[j]; ++j)
						;
					v34 = 2 * (j + 1);
					if (!is_mul_ok(j + 1, 2ui64))
						v34 = -1i64;
					v35 = sub_14018B280(v34, 0);
					*(_QWORD*)(v32 + 32) = v35;
					sub_1407DB590(v35, (int*)L"Key", 2 * j + 2);
					v36 = *(_QWORD*)(v32 + 32);
					*(_DWORD*)(v32 + 24) = 512;
					*(_QWORD*)(v32 + 40) = v36 + 2 * j;
					v37 = sub_1401A6C70(v32, (int*)L"Order");
					sub_1401A4C20(v134, 0xC8ui64, (__int64)L"%d", v29);
					if ((*(_DWORD*)(v37 + 32) & 0x200) != 0)
						sub_14018B900(*(_QWORD*)(v37 + 40), 0);
					v38 = LOWORD(v134[0]) == 0;
					*(_DWORD*)(v37 + 32) = 0;
					*(_QWORD*)(v37 + 40) = 0i64;
					*(_QWORD*)(v37 + 48) = 0i64;
					v39 = 0i64;
					if (!v38)
					{
						do
							++v39;
						while (*((_WORD*)v134 + v39));
					}
					v40 = 2 * (v39 + 1);
					if (!is_mul_ok(v39 + 1, 2ui64))
						v40 = -1i64;
					v41 = sub_14018B280(v40, 0);
					*(_QWORD*)(v37 + 40) = v41;
					sub_1407DB590(v41, v134, 2 * v39 + 2);
					v42 = *(_QWORD*)(v37 + 40);
					*(_DWORD*)(v37 + 32) = 512;
					*(_QWORD*)(v37 + 48) = v42 + 2 * v39;
					v43 = (int*)off_140B52DA8[*v30];
					v44 = sub_1401A6C70(v32, (int*)L"Device");
					sub_1401A4C50(v44 + 32, v43);
					LODWORD(v43) = v30[2];
					v45 = sub_1401A6C70(v32, (int*)L"Code");
					sub_1401A4C20(v134, 0xC8ui64, (__int64)L"%u", (unsigned int)v43);
					if ((*(_DWORD*)(v45 + 32) & 0x200) != 0)
						sub_14018B900(*(_QWORD*)(v45 + 40), 0);
					v38 = LOWORD(v134[0]) == 0;
					*(_DWORD*)(v45 + 32) = 0;
					*(_QWORD*)(v45 + 40) = 0i64;
					*(_QWORD*)(v45 + 48) = 0i64;
					v46 = 0i64;
					if (!v38)
					{
						do
							++v46;
						while (*((_WORD*)v134 + v46));
					}
					v47 = 2 * (v46 + 1);
					if (!is_mul_ok(v46 + 1, 2ui64))
						v47 = -1i64;
					v48 = sub_14018B280(v47, 0);
					*(_QWORD*)(v45 + 40) = v48;
					sub_1407DB590(v48, v134, 2 * v46 + 2);
					v49 = *(_QWORD*)(v45 + 40);
					*(_DWORD*)(v45 + 32) = 512;
					*(_QWORD*)(v45 + 48) = v49 + 2 * v46;
					v50 = (int*)off_140B52E00[v30[3]];
					v51 = sub_1401A6C70(v32, (int*)L"EventType");
					sub_1401A4C50(v51 + 32, v50);
					v52 = (int*)*(&off_140B52DC0 + (unsigned int)v30[1]);
					v53 = sub_1401A6C70(v32, (int*)L"MetaKeys");
					sub_1401A4C50(v53 + 32, v52);
					v54 = *(void(__fastcall**)(__int64, _QWORD, _QWORD))(v96 + 72);
					if (v54)
					{
						v54(v32, (unsigned int)v30[4], (unsigned int)v30[5]);
					}
					else
					{
						v55 = v30[4];
						v56 = sub_1401A6C70(v32, (int*)L"State");
						sub_1401A4C20(v134, 0xC8ui64, (__int64)L"%u", v55);
						if ((*(_DWORD*)(v56 + 32) & 0x200) != 0)
							sub_14018B900(*(_QWORD*)(v56 + 40), 0);
						v38 = LOWORD(v134[0]) == 0;
						*(_DWORD*)(v56 + 32) = 0;
						*(_QWORD*)(v56 + 40) = 0i64;
						*(_QWORD*)(v56 + 48) = 0i64;
						v57 = 0i64;
						if (!v38)
						{
							do
								++v57;
							while (*((_WORD*)v134 + v57));
						}
						v58 = 2 * (v57 + 1);
						if (!is_mul_ok(v57 + 1, 2ui64))
							v58 = -1i64;
						v59 = sub_14018B280(v58, 0);
						*(_QWORD*)(v56 + 40) = v59;
						sub_1407DB590(v59, v134, 2 * v57 + 2);
						v60 = *(_QWORD*)(v56 + 40);
						*(_DWORD*)(v56 + 32) = 512;
						*(_QWORD*)(v56 + 48) = v60 + 2 * v57;
						v61 = v30[5];
						v62 = sub_1401A6C70(v32, (int*)L"StateMask");
						sub_1401A4C20(v134, 0xC8ui64, (__int64)L"%u", v61);
						if ((*(_DWORD*)(v62 + 32) & 0x200) != 0)
							sub_14018B900(*(_QWORD*)(v62 + 40), 0);
						v38 = LOWORD(v134[0]) == 0;
						*(_DWORD*)(v62 + 32) = 0;
						*(_QWORD*)(v62 + 40) = 0i64;
						*(_QWORD*)(v62 + 48) = 0i64;
						v63 = 0i64;
						if (!v38)
						{
							do
								++v63;
							while (*((_WORD*)v134 + v63));
						}
						v64 = 2 * (v63 + 1);
						if (!is_mul_ok(v63 + 1, 2ui64))
							v64 = -1i64;
						v65 = sub_14018B280(v64, 0);
						*(_QWORD*)(v62 + 40) = v65;
						sub_1407DB590(v65, v134, 2 * v63 + 2);
						v66 = *(_QWORD*)(v62 + 40);
						*(_DWORD*)(v62 + 32) = 512;
						*(_QWORD*)(v62 + 48) = v66 + 2 * v63;
					}
					if (*(_QWORD*)(v32 + 8) == *(_QWORD*)(v23 + 8))
					{
						v67 = *(_QWORD*)(v32 + 16);
						if (v67)
						{
							v68 = *(_QWORD*)(v67 + 48);
							if (v32 == v68)
								*(_QWORD*)(v67 + 48) = *(_QWORD*)(v68 + 72);
							v69 = *(_QWORD*)(v67 + 56);
							if (v32 == v69)
								*(_QWORD*)(v67 + 56) = *(_QWORD*)(v69 + 64);
							v70 = *(_QWORD*)(v32 + 64);
							if (v70)
								*(_QWORD*)(v70 + 72) = *(_QWORD*)(v32 + 72);
							v71 = *(_QWORD*)(v32 + 72);
							if (v71)
								*(_QWORD*)(v71 + 64) = *(_QWORD*)(v32 + 64);
							*(_QWORD*)(v32 + 16) = 0i64;
						}
						else
						{
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v32 + 80) + 32i64))(*(_QWORD*)(v32 + 80));
						}
						v72 = *(_QWORD*)(v23 + 56);
						if (v72)
						{
							*(_QWORD*)(v72 + 72) = v32;
							*(_QWORD*)(v32 + 64) = *(_QWORD*)(v23 + 56);
							*(_QWORD*)(v23 + 56) = v32;
						}
						else
						{
							*(_QWORD*)(v23 + 56) = v32;
							*(_QWORD*)(v23 + 48) = v32;
							*(_QWORD*)(v32 + 64) = 0i64;
						}
						*(_QWORD*)(v32 + 72) = 0i64;
						*(_QWORD*)(v32 + 16) = v23;
					}
				}
				++v29;
				v30 += 7;
			} while ((unsigned __int64)(int)v29 < 8);
			v73 = v93;
			if (*(_QWORD*)(v23 + 8) == *((_QWORD*)v93 + 1))
			{
				v74 = *(_QWORD*)(v23 + 16);
				if (v74)
				{
					v75 = *(_QWORD*)(v74 + 48);
					if (v23 == v75)
						*(_QWORD*)(v74 + 48) = *(_QWORD*)(v75 + 72);
					v76 = *(_QWORD*)(v74 + 56);
					if (v23 == v76)
						*(_QWORD*)(v74 + 56) = *(_QWORD*)(v76 + 64);
					v77 = *(_QWORD*)(v23 + 64);
					if (v77)
						*(_QWORD*)(v77 + 72) = *(_QWORD*)(v23 + 72);
					v78 = *(_QWORD*)(v23 + 72);
					if (v78)
						*(_QWORD*)(v78 + 64) = *(_QWORD*)(v23 + 64);
					*(_QWORD*)(v23 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v23 + 80) + 32i64))(*(_QWORD*)(v23 + 80));
				}
				v79 = *((_QWORD*)v73 + 7);
				if (v79)
				{
					*(_QWORD*)(v79 + 72) = v23;
					*(_QWORD*)(v23 + 64) = *((_QWORD*)v73 + 7);
					*((_QWORD*)v73 + 7) = v23;
				}
				else
				{
					*((_QWORD*)v73 + 7) = v23;
					*((_QWORD*)v73 + 6) = v23;
					*(_QWORD*)(v23 + 64) = 0i64;
				}
				*(_QWORD*)(v23 + 72) = 0i64;
				*(_QWORD*)(v23 + 16) = v73;
			}
			v21 = v94 + 380;
			v38 = v95-- == 1;
			v94 += 380i64;
		} while (!v38);
		v6 = v97;
	}
	if (!v107 && v6)
	{
		v93 = 0i64;
		if ((int)sub_1401A7FC0((__int64)&v98, &v93) >= 0)
		{
			v83 = v93;
			sub_1401B6F30(v80, v6, v81, (__int64)v93);
			if (!v83)
				goto LABEL_131;
			v82 = *(_QWORD*)v83;
		}
		else
		{
			if (!v93)
				goto LABEL_131;
			v82 = *(_QWORD*)v93;
		}
		(*(void (**)(void))(v82 + 8))();
	}
LABEL_131:
	v98 = off_140B5EB10;
	sub_1401A59A0((__int64)&v98);
	v84 = v108;
	v107 = 0;
	v108 = 0i64;
	if (v84)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v84 - 16) + 8i64))(v84 - 16);
	sub_14018B900(v109, 0);
	v109 = 0i64;
	m = off_140B5EA18;
	for (k = v131; v131; k = v131)
	{
		v131 = k - 1;
		sub_14018B900(*(_QWORD*)&v129[8 * k - 8], 0);
	}
	v132 = 0i64;
	v133 = 0i64;
	if (v129 != &v130)
		sub_14018B900((__int64)v129, 0);
	v122 = off_140B5EA48;
	v86 = v125;
	for (m = &off_140B5EAD8; v125; v86 = v125)
	{
		v125 = v86 - 1;
		sub_14018B900(*(_QWORD*)&v123[8 * v86 - 8], 0);
	}
	v126 = 0i64;
	v127 = 0i64;
	if (v123 != &v124)
		sub_14018B900((__int64)v123, 0);
	v122 = &off_140B5EAD8;
	v116 = off_140B5EA78;
	for (n = v119; v119; n = v119)
	{
		v119 = n - 1;
		sub_14018B900(*(_QWORD*)&v117[8 * n - 8], 0);
	}
	v120 = 0i64;
	v121 = 0i64;
	if (v117 != &v118)
		sub_14018B900((__int64)v117, 0);
	v116 = &off_140B5EAD8;
	v110 = off_140B5EAA8;
	for (ii = v113; v113; ii = v113)
	{
		v113 = ii - 1;
		sub_14018B900(*(_QWORD*)&v111[8 * ii - 8], 0);
	}
	v114 = 0i64;
	v115 = 0i64;
	if (v111 != &v112)
		sub_14018B900((__int64)v111, 0);
	v110 = &off_140B5EAD8;
	if (v108)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v108 - 16) + 8i64))(v108 - 16);
	v98 = off_140B5EDE0;
	sub_1401A59A0((__int64)&v98);
	v89 = v100;
	if (v100)
	{
		v90 = *(__int64**)(v100 + 48);
		if (&v98 == (__int64(__fastcall***)())v90)
			*(_QWORD*)(v100 + 48) = v90[9];
		v91 = *(__int64**)(v89 + 56);
		if (&v98 == (__int64(__fastcall***)())v91)
			*(_QWORD*)(v89 + 56) = v91[8];
		v92 = v105;
		if (v105)
		{
			*(_QWORD*)(v105 + 72) = v106;
			v92 = v105;
		}
		if (v106)
			*(_QWORD*)(v106 + 64) = v92;
		v100 = 0i64;
	}
	if ((v101 & 0x200) != 0)
		sub_14018B900(v102, 0);
}
// 1407AE92B: variable 'v80' is possibly undefined
// 1407AE92B: variable 'v81' is possibly undefined
// 1409E41B4: using guessed type wchar_t aU_9[3];
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A452D0: using guessed type wchar_t aXmlVersion10En[35];
// 140B52B90: using guessed type wchar_t aInputbindings[14];
// 140B52BB0: using guessed type wchar_t aInput_2[6];
// 140B52C48: using guessed type wchar_t aKey_3[4];
// 140B52C80: using guessed type wchar_t aOrder_0[6];
// 140B52C90: using guessed type wchar_t aDevice[7];
// 140B52CA0: using guessed type wchar_t aCode[5];
// 140B52CB0: using guessed type wchar_t aEventtype[10];
// 140B52CC8: using guessed type wchar_t aMetakeys[9];
// 140B52CE0: using guessed type wchar_t aState[6];
// 140B52CF0: using guessed type wchar_t aStatemask[10];
// 140B52DA8: using guessed type wchar_t *off_140B52DA8[3];
// 140B52DC0: using guessed type void *off_140B52DC0;
// 140B52E00: using guessed type wchar_t *off_140B52E00[6];
// 140B5EA18: using guessed type __int64 (__fastcall *off_140B5EA18[25])();
// 140B5EA48: using guessed type __int64 (__fastcall *off_140B5EA48[19])();
// 140B5EA78: using guessed type __int64 (__fastcall *off_140B5EA78[13])();
// 140B5EAA8: using guessed type __int64 (__fastcall *off_140B5EAA8[7])();
// 140B5EAD8: using guessed type __int64 (__fastcall *off_140B5EAD8)();
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B5ED50: using guessed type __int64 (__fastcall *off_140B5ED50[17])();
// 140B5EDE0: using guessed type __int64 (__fastcall *off_140B5EDE0[12])();

