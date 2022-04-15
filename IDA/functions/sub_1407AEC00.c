//----- (00000001407AEC00) ----------------------------------------------------
void __fastcall sub_1407AEC00(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	const __m128i* v3; // r14
	__int64 v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	_QWORD* v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	_QWORD* v12; // r12
	__int64 v13; // rcx
	_QWORD* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rcx
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rdi
	__int64 v20; // rax
	__int64 v21; // r14
	__int64 i; // rbx
	__int64 v23; // rax
	int* v24; // rax
	__int64 v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rax
	int* v28; // r13
	int v29; // ebx
	__int64 v30; // rax
	__int64 v31; // rbx
	__int64 j; // rdi
	__int64 v33; // rax
	int* v34; // rax
	__int64 v35; // rax
	__int64 v36; // r15
	bool v37; // zf
	__int64 v38; // rdi
	__int64 v39; // rax
	int* v40; // rax
	__int64 v41; // rax
	int* v42; // rdi
	__int64 v43; // rax
	__int64 v44; // r15
	__int64 v45; // rdi
	__int64 v46; // rax
	int* v47; // rax
	__int64 v48; // rax
	int* v49; // rdi
	__int64 v50; // rax
	int* v51; // rdi
	__int64 v52; // rax
	void(__fastcall * v53)(__int64, _QWORD, _QWORD); // rax
	unsigned int v54; // edi
	__int64 v55; // r15
	__int64 v56; // rdi
	__int64 v57; // rax
	int* v58; // rax
	__int64 v59; // rax
	unsigned int v60; // edi
	__int64 v61; // r15
	__int64 v62; // rdi
	__int64 v63; // rax
	int* v64; // rax
	__int64 v65; // rax
	__int64 v66; // rcx
	__int64 v67; // rax
	__int64 v68; // rax
	__int64 v69; // rcx
	__int64 v70; // rcx
	__int64 v71; // rax
	__int64 v72; // r12
	__int64 v73; // rcx
	__int64 v74; // rax
	__int64 v75; // rax
	__int64 v76; // rcx
	__int64 v77; // rcx
	__int64 v78; // rax
	__int64 v79; // rcx
	__int64 v80; // r8
	__int64 v81; // rax
	int* v82; // rbx
	__int64 v83; // rcx
	int k; // eax
	int v85; // eax
	int n; // eax
	int ii; // eax
	__int64 v88; // rcx
	__int64* v89; // rax
	__int64* v90; // rax
	__int64 v91; // rcx
	int* v92; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v93; // [rsp+30h] [rbp-D8h]
	unsigned __int64 v94; // [rsp+38h] [rbp-D0h]
	__int64 v95; // [rsp+40h] [rbp-C8h]
	unsigned __int64 v96; // [rsp+48h] [rbp-C0h]
	const __m128i* v97; // [rsp+50h] [rbp-B8h]
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

	v2 = a1;
	v93 = a1;
	v3 = (const __m128i*)a2;
	v97 = (const __m128i*)a2;
	sub_1401A72E0((__int64)&v98);
	v4 = ((__int64(__fastcall*)(__int64(__fastcall***)()))m[2])(&m);
	v5 = (_QWORD*)v4;
	if (v4)
	{
		*(_QWORD*)(v4 + 16) = 0i64;
		*(_QWORD*)(v4 + 8) = &v98;
		*(_DWORD*)(v4 + 24) = 0;
		*(_QWORD*)(v4 + 32) = 0i64;
		*(_QWORD*)(v4 + 40) = 0i64;
		*(_QWORD*)(v4 + 48) = 0i64;
		*(_QWORD*)(v4 + 56) = 0i64;
		*(_QWORD*)(v4 + 64) = 0i64;
		*(_QWORD*)(v4 + 72) = 0i64;
		*(_QWORD*)v4 = off_140B5ED50;
		*(_QWORD*)(v4 + 80) = 0i64;
	}
	else
	{
		v5 = 0i64;
	}
	v5[10] = &m;
	sub_1401A4C50((__int64)(v5 + 3), (int*)L"xml version=\"1.0\" encoding=\"UTF-8\"");
	if (v5[1] == v99)
	{
		v6 = v5[2];
		if (v6)
		{
			v7 = *(_QWORD**)(v6 + 48);
			if (v5 == v7)
				*(_QWORD*)(v6 + 48) = v7[9];
			v8 = *(_QWORD**)(v6 + 56);
			if (v5 == v8)
				*(_QWORD*)(v6 + 56) = v8[8];
			v9 = v5[8];
			if (v9)
				*(_QWORD*)(v9 + 72) = v5[9];
			v10 = v5[9];
			if (v10)
				*(_QWORD*)(v10 + 64) = v5[8];
			v5[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[10] + 32i64))(v5[10]);
		}
		if (v104)
		{
			v104[9] = v5;
			v5[8] = v104;
			v104 = v5;
		}
		else
		{
			v104 = v5;
			v103 = v5;
			v5[8] = 0i64;
		}
		v5[9] = 0i64;
		v5[2] = &v98;
	}
	v11 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v110[2])(&v110);
	v12 = (_QWORD*)v11;
	v95 = v11;
	if (v11)
	{
		*(_QWORD*)(v11 + 16) = 0i64;
		*(_QWORD*)(v11 + 8) = &v98;
		*(_DWORD*)(v11 + 24) = 0;
		*(_QWORD*)(v11 + 32) = 0i64;
		*(_QWORD*)(v11 + 40) = 0i64;
		*(_QWORD*)(v11 + 48) = 0i64;
		*(_QWORD*)(v11 + 56) = 0i64;
		*(_QWORD*)(v11 + 64) = 0i64;
		*(_QWORD*)(v11 + 72) = 0i64;
		*(_QWORD*)(v11 + 80) = 0i64;
		*(_QWORD*)v11 = off_140B5EBA0;
		*(_DWORD*)(v11 + 88) = 0;
		*(_QWORD*)(v11 + 96) = 0i64;
	}
	else
	{
		v12 = 0i64;
		v95 = 0i64;
	}
	v12[10] = &v110;
	sub_1401A4C50((__int64)(v12 + 3), (int*)L"InputBindings");
	if (v12[1] == v99)
	{
		v13 = v12[2];
		if (v13)
		{
			v14 = *(_QWORD**)(v13 + 48);
			if (v12 == v14)
				*(_QWORD*)(v13 + 48) = v14[9];
			v15 = *(_QWORD**)(v13 + 56);
			if (v12 == v15)
				*(_QWORD*)(v13 + 56) = v15[8];
			v16 = v12[8];
			if (v16)
				*(_QWORD*)(v16 + 72) = v12[9];
			v17 = v12[9];
			if (v17)
				*(_QWORD*)(v17 + 64) = v12[8];
			v12[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v12[10] + 32i64))(v12[10]);
		}
		if (v104)
		{
			v104[9] = v12;
			v12[8] = v104;
			v104 = v12;
		}
		else
		{
			v104 = v12;
			v103 = v12;
			v12[8] = 0i64;
		}
		v12[9] = 0i64;
		v12[2] = &v98;
	}
	v18 = *(_QWORD*)(v2 + 144);
	v19 = 0i64;
	v94 = 0i64;
	v96 = v18;
	if (v18)
	{
		do
		{
			v20 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v110[2])(&v110);
			v21 = v20;
			if (v20)
			{
				*(_QWORD*)(v20 + 16) = 0i64;
				*(_QWORD*)(v20 + 8) = &v98;
				*(_DWORD*)(v20 + 24) = 0;
				*(_QWORD*)(v20 + 32) = 0i64;
				*(_QWORD*)(v20 + 40) = 0i64;
				*(_QWORD*)(v20 + 48) = 0i64;
				*(_QWORD*)(v20 + 56) = 0i64;
				*(_QWORD*)(v20 + 64) = 0i64;
				*(_QWORD*)(v20 + 72) = 0i64;
				*(_QWORD*)(v20 + 80) = 0i64;
				*(_QWORD*)v20 = off_140B5EBA0;
				*(_DWORD*)(v20 + 88) = 0;
				*(_QWORD*)(v20 + 96) = 0i64;
			}
			else
			{
				v21 = 0i64;
			}
			*(_QWORD*)(v21 + 80) = &v110;
			if ((*(_DWORD*)(v21 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v21 + 32), 0);
			*(_DWORD*)(v21 + 24) = 0;
			*(_QWORD*)(v21 + 32) = 0i64;
			*(_QWORD*)(v21 + 40) = 0i64;
			for (i = 0i64; aInput_2[i]; ++i)
				;
			v23 = 2 * (i + 1);
			if (!is_mul_ok(i + 1, 2ui64))
				v23 = -1i64;
			v24 = sub_14018B280(v23, 0);
			*(_QWORD*)(v21 + 32) = v24;
			sub_1407DB590(v24, (int*)L"Input", 2 * i + 2);
			v25 = *(_QWORD*)(v21 + 32);
			*(_DWORD*)(v21 + 24) = 512;
			*(_QWORD*)(v21 + 40) = v25 + 2 * i;
			v26 = *(_QWORD*)(*(_QWORD*)(v2 + 136) + 8 * v19);
			v27 = sub_1401A6C70(v21, (int*)L"Name");
			sub_1401A4C50(v27 + 32, (int*)(v26 + 68));
			v28 = (int*)(v26 + 156);
			v29 = 0;
			LODWORD(v92) = 0;
			do
			{
				if (*v28)
				{
					v30 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v110[2])(&v110);
					v31 = v30;
					if (v30)
					{
						*(_QWORD*)(v30 + 16) = 0i64;
						*(_QWORD*)(v30 + 8) = &v98;
						*(_DWORD*)(v30 + 24) = 0;
						*(_QWORD*)(v30 + 32) = 0i64;
						*(_QWORD*)(v30 + 40) = 0i64;
						*(_QWORD*)(v30 + 48) = 0i64;
						*(_QWORD*)(v30 + 56) = 0i64;
						*(_QWORD*)(v30 + 64) = 0i64;
						*(_QWORD*)(v30 + 72) = 0i64;
						*(_QWORD*)v30 = off_140B5EBA0;
						*(_QWORD*)(v30 + 80) = 0i64;
						*(_DWORD*)(v30 + 88) = 0;
						*(_QWORD*)(v30 + 96) = 0i64;
					}
					else
					{
						v31 = 0i64;
					}
					*(_QWORD*)(v31 + 80) = &v110;
					if ((*(_DWORD*)(v31 + 24) & 0x200) != 0)
						sub_14018B900(*(_QWORD*)(v31 + 32), 0);
					*(_DWORD*)(v31 + 24) = 0;
					*(_QWORD*)(v31 + 32) = 0i64;
					*(_QWORD*)(v31 + 40) = 0i64;
					for (j = 0i64; aKey_3[j]; ++j)
						;
					v33 = 2 * (j + 1);
					if (!is_mul_ok(j + 1, 2ui64))
						v33 = -1i64;
					v34 = sub_14018B280(v33, 0);
					*(_QWORD*)(v31 + 32) = v34;
					sub_1407DB590(v34, (int*)L"Key", 2 * j + 2);
					v35 = *(_QWORD*)(v31 + 32);
					*(_DWORD*)(v31 + 24) = 512;
					*(_QWORD*)(v31 + 40) = v35 + 2 * j;
					v36 = sub_1401A6C70(v31, (int*)L"Order");
					sub_1401A4C20(v134, 0xC8ui64, (__int64)L"%d", (unsigned int)v92);
					if ((*(_DWORD*)(v36 + 32) & 0x200) != 0)
						sub_14018B900(*(_QWORD*)(v36 + 40), 0);
					v37 = LOWORD(v134[0]) == 0;
					*(_DWORD*)(v36 + 32) = 0;
					*(_QWORD*)(v36 + 40) = 0i64;
					*(_QWORD*)(v36 + 48) = 0i64;
					v38 = 0i64;
					if (!v37)
					{
						do
							++v38;
						while (*((_WORD*)v134 + v38));
					}
					v39 = 2 * (v38 + 1);
					if (!is_mul_ok(v38 + 1, 2ui64))
						v39 = -1i64;
					v40 = sub_14018B280(v39, 0);
					*(_QWORD*)(v36 + 40) = v40;
					sub_1407DB590(v40, v134, 2 * v38 + 2);
					v41 = *(_QWORD*)(v36 + 40);
					*(_DWORD*)(v36 + 32) = 512;
					*(_QWORD*)(v36 + 48) = v41 + 2 * v38;
					v42 = (int*)off_140B52DA8[*v28];
					v43 = sub_1401A6C70(v31, (int*)L"Device");
					sub_1401A4C50(v43 + 32, v42);
					LODWORD(v42) = v28[2];
					v44 = sub_1401A6C70(v31, (int*)L"Code");
					sub_1401A4C20(v134, 0xC8ui64, (__int64)L"%u", (unsigned int)v42);
					if ((*(_DWORD*)(v44 + 32) & 0x200) != 0)
						sub_14018B900(*(_QWORD*)(v44 + 40), 0);
					v37 = LOWORD(v134[0]) == 0;
					*(_DWORD*)(v44 + 32) = 0;
					*(_QWORD*)(v44 + 40) = 0i64;
					*(_QWORD*)(v44 + 48) = 0i64;
					v45 = 0i64;
					if (!v37)
					{
						do
							++v45;
						while (*((_WORD*)v134 + v45));
					}
					v46 = 2 * (v45 + 1);
					if (!is_mul_ok(v45 + 1, 2ui64))
						v46 = -1i64;
					v47 = sub_14018B280(v46, 0);
					*(_QWORD*)(v44 + 40) = v47;
					sub_1407DB590(v47, v134, 2 * v45 + 2);
					v48 = *(_QWORD*)(v44 + 40);
					*(_DWORD*)(v44 + 32) = 512;
					*(_QWORD*)(v44 + 48) = v48 + 2 * v45;
					v49 = (int*)off_140B52E00[v28[3]];
					v50 = sub_1401A6C70(v31, (int*)L"EventType");
					sub_1401A4C50(v50 + 32, v49);
					v51 = (int*)*(&off_140B52DC0 + (unsigned int)v28[1]);
					v52 = sub_1401A6C70(v31, (int*)L"MetaKeys");
					sub_1401A4C50(v52 + 32, v51);
					v53 = *(void(__fastcall**)(__int64, _QWORD, _QWORD))(v93 + 72);
					if (v53)
					{
						v53(v31, (unsigned int)v28[4], (unsigned int)v28[5]);
					}
					else
					{
						v54 = v28[4];
						v55 = sub_1401A6C70(v31, (int*)L"State");
						sub_1401A4C20(v134, 0xC8ui64, (__int64)L"%u", v54);
						if ((*(_DWORD*)(v55 + 32) & 0x200) != 0)
							sub_14018B900(*(_QWORD*)(v55 + 40), 0);
						v37 = LOWORD(v134[0]) == 0;
						*(_DWORD*)(v55 + 32) = 0;
						*(_QWORD*)(v55 + 40) = 0i64;
						*(_QWORD*)(v55 + 48) = 0i64;
						v56 = 0i64;
						if (!v37)
						{
							do
								++v56;
							while (*((_WORD*)v134 + v56));
						}
						v57 = 2 * (v56 + 1);
						if (!is_mul_ok(v56 + 1, 2ui64))
							v57 = -1i64;
						v58 = sub_14018B280(v57, 0);
						*(_QWORD*)(v55 + 40) = v58;
						sub_1407DB590(v58, v134, 2 * v56 + 2);
						v59 = *(_QWORD*)(v55 + 40);
						*(_DWORD*)(v55 + 32) = 512;
						*(_QWORD*)(v55 + 48) = v59 + 2 * v56;
						v60 = v28[5];
						v61 = sub_1401A6C70(v31, (int*)L"StateMask");
						sub_1401A4C20(v134, 0xC8ui64, (__int64)L"%u", v60);
						if ((*(_DWORD*)(v61 + 32) & 0x200) != 0)
							sub_14018B900(*(_QWORD*)(v61 + 40), 0);
						v37 = LOWORD(v134[0]) == 0;
						*(_DWORD*)(v61 + 32) = 0;
						*(_QWORD*)(v61 + 40) = 0i64;
						*(_QWORD*)(v61 + 48) = 0i64;
						v62 = 0i64;
						if (!v37)
						{
							do
								++v62;
							while (*((_WORD*)v134 + v62));
						}
						v63 = 2 * (v62 + 1);
						if (!is_mul_ok(v62 + 1, 2ui64))
							v63 = -1i64;
						v64 = sub_14018B280(v63, 0);
						*(_QWORD*)(v61 + 40) = v64;
						sub_1407DB590(v64, v134, 2 * v62 + 2);
						v65 = *(_QWORD*)(v61 + 40);
						*(_DWORD*)(v61 + 32) = 512;
						*(_QWORD*)(v61 + 48) = v65 + 2 * v62;
					}
					if (*(_QWORD*)(v31 + 8) == *(_QWORD*)(v21 + 8))
					{
						v66 = *(_QWORD*)(v31 + 16);
						if (v66)
						{
							v67 = *(_QWORD*)(v66 + 48);
							if (v31 == v67)
								*(_QWORD*)(v66 + 48) = *(_QWORD*)(v67 + 72);
							v68 = *(_QWORD*)(v66 + 56);
							if (v31 == v68)
								*(_QWORD*)(v66 + 56) = *(_QWORD*)(v68 + 64);
							v69 = *(_QWORD*)(v31 + 64);
							if (v69)
								*(_QWORD*)(v69 + 72) = *(_QWORD*)(v31 + 72);
							v70 = *(_QWORD*)(v31 + 72);
							if (v70)
								*(_QWORD*)(v70 + 64) = *(_QWORD*)(v31 + 64);
							*(_QWORD*)(v31 + 16) = 0i64;
						}
						else
						{
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v31 + 80) + 32i64))(*(_QWORD*)(v31 + 80));
						}
						v71 = *(_QWORD*)(v21 + 56);
						if (v71)
						{
							*(_QWORD*)(v71 + 72) = v31;
							*(_QWORD*)(v31 + 64) = *(_QWORD*)(v21 + 56);
							*(_QWORD*)(v21 + 56) = v31;
						}
						else
						{
							*(_QWORD*)(v21 + 56) = v31;
							*(_QWORD*)(v21 + 48) = v31;
							*(_QWORD*)(v31 + 64) = 0i64;
						}
						*(_QWORD*)(v31 + 72) = 0i64;
						*(_QWORD*)(v31 + 16) = v21;
					}
					v29 = (int)v92;
				}
				++v29;
				v28 += 7;
				LODWORD(v92) = v29;
			} while ((unsigned __int64)v29 < 8);
			v72 = v95;
			if (*(_QWORD*)(v21 + 8) == *(_QWORD*)(v95 + 8))
			{
				v73 = *(_QWORD*)(v21 + 16);
				if (v73)
				{
					v74 = *(_QWORD*)(v73 + 48);
					if (v21 == v74)
						*(_QWORD*)(v73 + 48) = *(_QWORD*)(v74 + 72);
					v75 = *(_QWORD*)(v73 + 56);
					if (v21 == v75)
						*(_QWORD*)(v73 + 56) = *(_QWORD*)(v75 + 64);
					v76 = *(_QWORD*)(v21 + 64);
					if (v76)
						*(_QWORD*)(v76 + 72) = *(_QWORD*)(v21 + 72);
					v77 = *(_QWORD*)(v21 + 72);
					if (v77)
						*(_QWORD*)(v77 + 64) = *(_QWORD*)(v21 + 64);
					*(_QWORD*)(v21 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v21 + 80) + 32i64))(*(_QWORD*)(v21 + 80));
				}
				v78 = *(_QWORD*)(v72 + 56);
				if (v78)
				{
					*(_QWORD*)(v78 + 72) = v21;
					*(_QWORD*)(v21 + 64) = *(_QWORD*)(v72 + 56);
					*(_QWORD*)(v72 + 56) = v21;
				}
				else
				{
					*(_QWORD*)(v72 + 56) = v21;
					*(_QWORD*)(v72 + 48) = v21;
					*(_QWORD*)(v21 + 64) = 0i64;
				}
				*(_QWORD*)(v21 + 72) = 0i64;
				*(_QWORD*)(v21 + 16) = v72;
			}
			v2 = v93;
			v19 = v94 + 1;
			v94 = v19;
		} while (v19 < v96);
		v3 = v97;
	}
	if (!v107 && v3)
	{
		v92 = 0i64;
		if ((int)sub_1401A7FC0((__int64)&v98, &v92) >= 0)
		{
			v82 = v92;
			sub_1401B6F30(v79, v3, v80, (__int64)v92);
			if (!v82)
				goto LABEL_131;
			v81 = *(_QWORD*)v82;
		}
		else
		{
			if (!v92)
				goto LABEL_131;
			v81 = *(_QWORD*)v92;
		}
		(*(void (**)(void))(v81 + 8))();
	}
LABEL_131:
	v98 = off_140B5EB10;
	sub_1401A59A0((__int64)&v98);
	v83 = v108;
	v107 = 0;
	v108 = 0i64;
	if (v83)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v83 - 16) + 8i64))(v83 - 16);
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
	v85 = v125;
	for (m = &off_140B5EAD8; v125; v85 = v125)
	{
		v125 = v85 - 1;
		sub_14018B900(*(_QWORD*)&v123[8 * v85 - 8], 0);
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
	v88 = v100;
	if (v100)
	{
		v89 = *(__int64**)(v100 + 48);
		if (&v98 == (__int64(__fastcall***)())v89)
			*(_QWORD*)(v100 + 48) = v89[9];
		v90 = *(__int64**)(v88 + 56);
		if (&v98 == (__int64(__fastcall***)())v90)
			*(_QWORD*)(v88 + 56) = v90[8];
		v91 = v105;
		if (v105)
		{
			*(_QWORD*)(v105 + 72) = v106;
			v91 = v105;
		}
		if (v106)
			*(_QWORD*)(v106 + 64) = v91;
		v100 = 0i64;
	}
	if ((v101 & 0x200) != 0)
		sub_14018B900(v102, 0);
}
// 1407AF665: variable 'v79' is possibly undefined
// 1407AF665: variable 'v80' is possibly undefined
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

