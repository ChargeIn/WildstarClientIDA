//----- (00000001407786A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1407786A0(__int64 a1)
{
	int* v2; // rax
	bool v3; // zf
	__m128i* v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	int* v8; // rax
	__int64 v9; // r15
	__int64 v10; // rax
	_QWORD* v11; // rbx
	__int64 v12; // rcx
	_QWORD* v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rax
	_QWORD* v18; // r14
	__int64 v19; // rcx
	_QWORD* v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rcx
	_QWORD* v24; // rax
	_QWORD* v25; // rbx
	__int64 v26; // r15
	__int64 v27; // rax
	__int64 v28; // rsi
	__int64 v29; // rdi
	__int64 v30; // rax
	int* v31; // rax
	__int64 v32; // rax
	int* v33; // rdi
	__int64 v34; // rax
	int* v35; // rdi
	__int64 v36; // rax
	int* v37; // rdi
	__int64 v38; // rax
	__int64 v39; // r13
	__int64 v40; // rdi
	__int64 v41; // rax
	int* v42; // rax
	__int64 v43; // rax
	int* v44; // rax
	int* v45; // r12
	unsigned int v46; // edi
	__int64 v47; // rax
	__int64 v48; // rax
	__int64 v49; // rax
	_QWORD* v50; // rdi
	__int64 v51; // rcx
	_QWORD* v52; // rax
	_QWORD* v53; // rax
	__int64 v54; // rcx
	__int64 v55; // rcx
	__int64 v56; // rax
	__int64 v57; // rcx
	__int64 v58; // rax
	__int64 v59; // rax
	__int64 v60; // rcx
	__int64 v61; // rcx
	__int64 v62; // rax
	__int64 v63; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	int v66; // edi
	__int64 v67; // rcx
	__int64 v68; // r8
	int* v69; // rbx
	__int64 v70; // rcx
	int k; // eax
	int v72; // eax
	int n; // eax
	int ii; // eax
	__int64 v75; // rcx
	__int64* v76; // rax
	__int64* v77; // rax
	__int64 v78; // rcx
	__m128i* v80; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v81; // [rsp+50h] [rbp-B8h]
	int* v82; // [rsp+58h] [rbp-B0h]
	__int64 v83; // [rsp+60h] [rbp-A8h] BYREF
	int* v84; // [rsp+68h] [rbp-A0h]
	int* v85; // [rsp+70h] [rbp-98h]
	int* v86; // [rsp+78h] [rbp-90h]
	__int64(__fastcall * *v87)(); // [rsp+88h] [rbp-80h] BYREF
	__int64 v88; // [rsp+90h] [rbp-78h]
	__int64 v89; // [rsp+98h] [rbp-70h]
	int v90; // [rsp+A0h] [rbp-68h]
	__int128 v91; // [rsp+A8h] [rbp-60h]
	_QWORD* v92; // [rsp+B8h] [rbp-50h]
	_QWORD* v93; // [rsp+C0h] [rbp-48h]
	__int64 v94; // [rsp+C8h] [rbp-40h]
	__int64 v95; // [rsp+D0h] [rbp-38h]
	int v96; // [rsp+E4h] [rbp-24h]
	__int64 v97; // [rsp+F0h] [rbp-18h]
	__int64 v98; // [rsp+F8h] [rbp-10h]
	__int64(__fastcall * *v99)(); // [rsp+108h] [rbp+0h] BYREF
	char* v100; // [rsp+110h] [rbp+8h]
	char v101; // [rsp+118h] [rbp+10h] BYREF
	int v102; // [rsp+16Ch] [rbp+64h]
	__int64 v103; // [rsp+170h] [rbp+68h]
	__int128 v104; // [rsp+178h] [rbp+70h]
	__int64(__fastcall * *v105)(); // [rsp+188h] [rbp+80h]
	char* v106; // [rsp+190h] [rbp+88h]
	char v107; // [rsp+198h] [rbp+90h] BYREF
	int v108; // [rsp+1ECh] [rbp+E4h]
	__int64 v109; // [rsp+1F0h] [rbp+E8h]
	__int128 v110; // [rsp+1F8h] [rbp+F0h]
	__int64(__fastcall * *v111)(); // [rsp+208h] [rbp+100h] BYREF
	char* v112; // [rsp+210h] [rbp+108h]
	char v113; // [rsp+218h] [rbp+110h] BYREF
	int v114; // [rsp+26Ch] [rbp+164h]
	__int64 v115; // [rsp+270h] [rbp+168h]
	__int128 v116; // [rsp+278h] [rbp+170h]
	__int64(__fastcall * *m)(); // [rsp+288h] [rbp+180h] BYREF
	char* v118; // [rsp+290h] [rbp+188h]
	char v119; // [rsp+298h] [rbp+190h] BYREF
	int v120; // [rsp+2ECh] [rbp+1E4h]
	__int64 v121; // [rsp+2F0h] [rbp+1E8h]
	__int128 v122; // [rsp+2F8h] [rbp+1F0h]
	int v123[132]; // [rsp+308h] [rbp+200h] BYREF
	int v124[100]; // [rsp+518h] [rbp+410h] BYREF

	v81 = a1;
	if ((int)sub_14001B370(
		v123,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 2684i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"LocalMacros.xml") >= 0
		&& LOWORD(v123[0]))
	{
		v2 = v123;
		do
		{
			v3 = *((_WORD*)v2 + 1) == 0;
			v2 = (int*)((char*)v2 + 2);
		} while (!v3);
	}
	v4 = 0i64;
	v80 = 0i64;
	v5 = 0i64;
	if (LOWORD(v123[0]))
	{
		do
			++v5;
		while (*((_WORD*)v123 + v5));
	}
	v6 = (2 * v5) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v4 = (__m128i*)sub_14018B280(2 * (v6 + 1), 0);
		v80 = v4;
	}
	v7 = 2 * v6;
	sub_1407DB590(v4->m128i_i32, v123, v7);
	if (&v4->m128i_i8[v7])
		v4->m128i_i16[v7 / 2] = 0;
	v8 = sub_14018B280(16i64, 0);
	v9 = (__int64)v8;
	v82 = v8;
	if (v8)
		*(_WORD*)v8 = 0;
	sub_1401A72E0((__int64)&v87);
	v10 = ((__int64(__fastcall*)(__int64(__fastcall***)()))m[2])(&m);
	v11 = (_QWORD*)v10;
	if (v10)
	{
		*(_QWORD*)(v10 + 16) = 0i64;
		*(_QWORD*)(v10 + 8) = &v87;
		*(_DWORD*)(v10 + 24) = 0;
		*(_QWORD*)(v10 + 32) = 0i64;
		*(_QWORD*)(v10 + 40) = 0i64;
		*(_QWORD*)(v10 + 48) = 0i64;
		*(_QWORD*)(v10 + 56) = 0i64;
		*(_QWORD*)(v10 + 64) = 0i64;
		*(_QWORD*)(v10 + 72) = 0i64;
		*(_QWORD*)v10 = off_140B5ED50;
		*(_QWORD*)(v10 + 80) = 0i64;
	}
	else
	{
		v11 = 0i64;
	}
	v11[10] = &m;
	sub_1401A4C50((__int64)(v11 + 3), (int*)L"xml version=\"1.0\" encoding=\"UTF-8\"");
	if (v11[1] == v88)
	{
		v12 = v11[2];
		if (v12)
		{
			v13 = *(_QWORD**)(v12 + 48);
			if (v11 == v13)
				*(_QWORD*)(v12 + 48) = v13[9];
			v14 = *(_QWORD**)(v12 + 56);
			if (v11 == v14)
				*(_QWORD*)(v12 + 56) = v14[8];
			v15 = v11[8];
			if (v15)
				*(_QWORD*)(v15 + 72) = v11[9];
			v16 = v11[9];
			if (v16)
				*(_QWORD*)(v16 + 64) = v11[8];
			v11[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v11[10] + 32i64))(v11[10]);
		}
		if (v93)
		{
			v93[9] = v11;
			v11[8] = v93;
			v93 = v11;
		}
		else
		{
			v93 = v11;
			v92 = v11;
			v11[8] = 0i64;
		}
		v11[9] = 0i64;
		v11[2] = &v87;
	}
	v17 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v99[2])(&v99);
	v18 = (_QWORD*)v17;
	if (v17)
	{
		*(_QWORD*)(v17 + 16) = 0i64;
		*(_QWORD*)(v17 + 8) = &v87;
		*(_DWORD*)(v17 + 24) = 0;
		*(_QWORD*)(v17 + 32) = 0i64;
		*(_QWORD*)(v17 + 40) = 0i64;
		*(_QWORD*)(v17 + 48) = 0i64;
		*(_QWORD*)(v17 + 56) = 0i64;
		*(_QWORD*)(v17 + 64) = 0i64;
		*(_QWORD*)(v17 + 72) = 0i64;
		*(_QWORD*)(v17 + 80) = 0i64;
		*(_QWORD*)v17 = off_140B5EBA0;
		*(_DWORD*)(v17 + 88) = 0;
		*(_QWORD*)(v17 + 96) = 0i64;
	}
	else
	{
		v18 = 0i64;
	}
	v18[10] = &v99;
	sub_1401A4C50((__int64)(v18 + 3), (int*)L"Macros");
	if (v18[1] == v88)
	{
		v19 = v18[2];
		if (v19)
		{
			v20 = *(_QWORD**)(v19 + 48);
			if (v18 == v20)
				*(_QWORD*)(v19 + 48) = v20[9];
			v21 = *(_QWORD**)(v19 + 56);
			if (v18 == v21)
				*(_QWORD*)(v19 + 56) = v21[8];
			v22 = v18[8];
			if (v22)
				*(_QWORD*)(v22 + 72) = v18[9];
			v23 = v18[9];
			if (v23)
				*(_QWORD*)(v23 + 64) = v18[8];
			v18[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v18[10] + 32i64))(v18[10]);
		}
		if (v93)
		{
			v93[9] = v18;
			v18[8] = v93;
			v93 = v18;
		}
		else
		{
			v93 = v18;
			v92 = v18;
			v18[8] = 0i64;
		}
		v18[9] = 0i64;
		v18[2] = &v87;
	}
	v24 = *(_QWORD**)(a1 + 32);
	v25 = (_QWORD*)v24[2];
	if (v25 != v24)
	{
		do
		{
			v26 = v25[5];
			v27 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v99[2])(&v99);
			v28 = v27;
			if (v27)
			{
				*(_QWORD*)(v27 + 16) = 0i64;
				*(_QWORD*)(v27 + 8) = &v87;
				*(_DWORD*)(v27 + 24) = 0;
				*(_QWORD*)(v27 + 32) = 0i64;
				*(_QWORD*)(v27 + 40) = 0i64;
				*(_QWORD*)(v27 + 48) = 0i64;
				*(_QWORD*)(v27 + 56) = 0i64;
				*(_QWORD*)(v27 + 64) = 0i64;
				*(_QWORD*)(v27 + 72) = 0i64;
				*(_QWORD*)v27 = off_140B5EBA0;
				*(_QWORD*)(v27 + 80) = 0i64;
				*(_DWORD*)(v27 + 88) = 0;
				*(_QWORD*)(v27 + 96) = 0i64;
			}
			else
			{
				v28 = 0i64;
			}
			*(_QWORD*)(v28 + 80) = &v99;
			if ((*(_DWORD*)(v28 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v28 + 32), 0);
			*(_DWORD*)(v28 + 24) = 0;
			*(_QWORD*)(v28 + 32) = 0i64;
			*(_QWORD*)(v28 + 40) = 0i64;
			v29 = 0i64;
			do
				v3 = aMacro_1[++v29] == 0;
			while (!v3);
			v30 = 2 * (v29 + 1);
			if (!is_mul_ok(v29 + 1, 2ui64))
				v30 = -1i64;
			v31 = sub_14018B280(v30, 0);
			*(_QWORD*)(v28 + 32) = v31;
			sub_1407DB590(v31, (int*)L"Macro", 2 * v29 + 2);
			v32 = *(_QWORD*)(v28 + 32);
			*(_DWORD*)(v28 + 24) = 512;
			*(_QWORD*)(v28 + 40) = v32 + 2 * v29;
			v33 = *(int**)(v26 + 16);
			v34 = sub_1401A6C70(v28, (int*)L"Name");
			sub_1401A4C50(v34 + 32, v33);
			v35 = *(int**)(v26 + 48);
			v36 = sub_1401A6C70(v28, (int*)L"Sprite");
			sub_1401A4C50(v36 + 32, v35);
			v37 = *(int**)(v26 + 80);
			v38 = sub_1401A6C70(v28, (int*)L"Character");
			sub_1401A4C50(v38 + 32, v37);
			LODWORD(v37) = *(_DWORD*)v26;
			v39 = sub_1401A6C70(v28, (int*)L"ID");
			sub_1401A4C20(v124, 0xC8ui64, (__int64)L"%d", (unsigned int)v37);
			if ((*(_DWORD*)(v39 + 32) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v39 + 40), 0);
			v40 = 0i64;
			*(_DWORD*)(v39 + 32) = 0;
			*(_QWORD*)(v39 + 40) = 0i64;
			*(_QWORD*)(v39 + 48) = 0i64;
			if (LOWORD(v124[0]))
			{
				do
					++v40;
				while (*((_WORD*)v124 + v40));
			}
			v41 = 2 * (v40 + 1);
			if (!is_mul_ok(v40 + 1, 2ui64))
				v41 = -1i64;
			v42 = sub_14018B280(v41, 0);
			*(_QWORD*)(v39 + 40) = v42;
			sub_1407DB590(v42, v124, 2 * v40 + 2);
			v43 = *(_QWORD*)(v39 + 40);
			*(_DWORD*)(v39 + 32) = 512;
			*(_QWORD*)(v39 + 48) = v43 + 2 * v40;
			v44 = sub_14018B280(16i64, 0);
			v45 = v44;
			v84 = v44;
			v85 = v44;
			v86 = v44 + 4;
			if (v44)
				*(_WORD*)v44 = 0;
			v46 = 0;
			if (*(_QWORD*)(v26 + 112))
			{
				v47 = 0i64;
				do
				{
					sub_14001C310(
						&v83,
						*(int**)(*(_QWORD*)(v26 + 104) + 32 * v47 + 8),
						*(int**)(*(_QWORD*)(v26 + 104) + 32 * v47 + 16));
					v48 = 0i64;
					do
						v3 = *(_WORD*)&asc_1409F9DC4[2 * v48++ + 2] == 0;
					while (!v3);
					sub_14001C310(&v83, (int*)";", (int*)&asc_1409F9DC4[2 * v48]);
					v47 = ++v46;
				} while ((unsigned __int64)v46 < *(_QWORD*)(v26 + 112));
				v45 = v84;
			}
			v49 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v111[2])(&v111);
			v50 = (_QWORD*)v49;
			if (v49)
			{
				*(_QWORD*)(v49 + 16) = 0i64;
				*(_QWORD*)(v49 + 8) = &v87;
				*(_DWORD*)(v49 + 24) = 0;
				*(_QWORD*)(v49 + 32) = 0i64;
				*(_QWORD*)(v49 + 40) = 0i64;
				*(_QWORD*)(v49 + 48) = 0i64;
				*(_QWORD*)(v49 + 56) = 0i64;
				*(_QWORD*)(v49 + 64) = 0i64;
				*(_QWORD*)(v49 + 72) = 0i64;
				*(_QWORD*)v49 = off_140B5EE70;
				*(_QWORD*)(v49 + 80) = 0i64;
				*(_BYTE*)(v49 + 88) = 0;
			}
			else
			{
				v50 = 0i64;
			}
			v50[10] = &v111;
			sub_1401A4C50((__int64)(v50 + 3), v45);
			if (v50[1] == *(_QWORD*)(v28 + 8))
			{
				v51 = v50[2];
				if (v51)
				{
					v52 = *(_QWORD**)(v51 + 48);
					if (v50 == v52)
						*(_QWORD*)(v51 + 48) = v52[9];
					v53 = *(_QWORD**)(v51 + 56);
					if (v50 == v53)
						*(_QWORD*)(v51 + 56) = v53[8];
					v54 = v50[8];
					if (v54)
						*(_QWORD*)(v54 + 72) = v50[9];
					v55 = v50[9];
					if (v55)
						*(_QWORD*)(v55 + 64) = v50[8];
					v50[2] = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v50[10] + 32i64))(v50[10]);
				}
				v56 = *(_QWORD*)(v28 + 56);
				if (v56)
				{
					*(_QWORD*)(v56 + 72) = v50;
					v50[8] = *(_QWORD*)(v28 + 56);
					*(_QWORD*)(v28 + 56) = v50;
				}
				else
				{
					*(_QWORD*)(v28 + 56) = v50;
					*(_QWORD*)(v28 + 48) = v50;
					v50[8] = 0i64;
				}
				v50[9] = 0i64;
				v50[2] = v28;
			}
			if (*(_QWORD*)(v28 + 8) == v18[1])
			{
				v57 = *(_QWORD*)(v28 + 16);
				if (v57)
				{
					v58 = *(_QWORD*)(v57 + 48);
					if (v28 == v58)
						*(_QWORD*)(v57 + 48) = *(_QWORD*)(v58 + 72);
					v59 = *(_QWORD*)(v57 + 56);
					if (v28 == v59)
						*(_QWORD*)(v57 + 56) = *(_QWORD*)(v59 + 64);
					v60 = *(_QWORD*)(v28 + 64);
					if (v60)
						*(_QWORD*)(v60 + 72) = *(_QWORD*)(v28 + 72);
					v61 = *(_QWORD*)(v28 + 72);
					if (v61)
						*(_QWORD*)(v61 + 64) = *(_QWORD*)(v28 + 64);
					*(_QWORD*)(v28 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v28 + 80) + 32i64))(*(_QWORD*)(v28 + 80));
				}
				v62 = v18[7];
				if (v62)
				{
					*(_QWORD*)(v62 + 72) = v28;
					*(_QWORD*)(v28 + 64) = v18[7];
					v18[7] = v28;
				}
				else
				{
					v18[7] = v28;
					v18[6] = v28;
					*(_QWORD*)(v28 + 64) = 0i64;
				}
				*(_QWORD*)(v28 + 72) = 0i64;
				*(_QWORD*)(v28 + 16) = v18;
			}
			if (v45)
				sub_14018B900((__int64)v45, 0);
			v63 = v25[3];
			if (v63)
			{
				v25 = (_QWORD*)v25[3];
				for (i = *(_QWORD**)(v63 + 16); i; i = (_QWORD*)i[2])
					v25 = i;
			}
			else
			{
				for (j = v25[1]; v25 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v25 = (_QWORD*)j;
				if (v25[3] != j)
					v25 = (_QWORD*)j;
			}
		} while (v25 != *(_QWORD**)(v81 + 32));
		v4 = v80;
		v9 = (__int64)v82;
	}
	v66 = v96;
	if (!v96)
	{
		if (v4)
		{
			v80 = 0i64;
			v66 = sub_1401A7FC0((__int64)&v87, (int**)&v80);
			if (v66 >= 0)
			{
				v69 = (int*)v80;
				v66 = sub_1401B6F30(v67, v4, v68, (__int64)v80);
				if (v66 >= 0)
				{
					if (v69)
						(*(void(__fastcall**)(int*))(*(_QWORD*)v69 + 8i64))(v69);
					v66 = 0;
				}
				else if (v69)
				{
					(*(void(__fastcall**)(int*))(*(_QWORD*)v69 + 8i64))(v69);
				}
			}
			else if (v80)
			{
				(*(void(__fastcall**)(__m128i*))(v80->m128i_i64[0] + 8))(v80);
			}
		}
		else
		{
			v66 = -1603862524;
		}
	}
	v87 = off_140B5EB10;
	sub_1401A59A0((__int64)&v87);
	v70 = v97;
	v96 = 0;
	v97 = 0i64;
	if (v70)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v70 - 16) + 8i64))(v70 - 16);
	sub_14018B900(v98, 0);
	v98 = 0i64;
	m = off_140B5EA18;
	for (k = v120; v120; k = v120)
	{
		v120 = k - 1;
		sub_14018B900(*(_QWORD*)&v118[8 * k - 8], 0);
	}
	v121 = 0i64;
	v122 = 0i64;
	if (v118 != &v119)
		sub_14018B900((__int64)v118, 0);
	v111 = off_140B5EA48;
	v72 = v114;
	for (m = &off_140B5EAD8; v114; v72 = v114)
	{
		v114 = v72 - 1;
		sub_14018B900(*(_QWORD*)&v112[8 * v72 - 8], 0);
	}
	v115 = 0i64;
	v116 = 0i64;
	if (v112 != &v113)
		sub_14018B900((__int64)v112, 0);
	v111 = &off_140B5EAD8;
	v105 = off_140B5EA78;
	for (n = v108; v108; n = v108)
	{
		v108 = n - 1;
		sub_14018B900(*(_QWORD*)&v106[8 * n - 8], 0);
	}
	v109 = 0i64;
	v110 = 0i64;
	if (v106 != &v107)
		sub_14018B900((__int64)v106, 0);
	v105 = &off_140B5EAD8;
	v99 = off_140B5EAA8;
	for (ii = v102; v102; ii = v102)
	{
		v102 = ii - 1;
		sub_14018B900(*(_QWORD*)&v100[8 * ii - 8], 0);
	}
	v103 = 0i64;
	v104 = 0i64;
	if (v100 != &v101)
		sub_14018B900((__int64)v100, 0);
	v99 = &off_140B5EAD8;
	if (v97)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v97 - 16) + 8i64))(v97 - 16);
	v87 = off_140B5EDE0;
	sub_1401A59A0((__int64)&v87);
	v75 = v89;
	if (v89)
	{
		v76 = *(__int64**)(v89 + 48);
		if (&v87 == (__int64(__fastcall***)())v76)
			*(_QWORD*)(v89 + 48) = v76[9];
		v77 = *(__int64**)(v75 + 56);
		if (&v87 == (__int64(__fastcall***)())v77)
			*(_QWORD*)(v75 + 56) = v77[8];
		v78 = v94;
		if (v94)
		{
			*(_QWORD*)(v94 + 72) = v95;
			v78 = v94;
		}
		if (v95)
			*(_QWORD*)(v95 + 64) = v78;
		v89 = 0i64;
	}
	if ((v90 & 0x200) != 0)
		sub_14018B900(v91, 0);
	v90 = 0;
	v91 = 0i64;
	if (v9)
		sub_14018B900(v9, 0);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return v66 >= 0;
}
// 140778F3E: variable 'v67' is possibly undefined
// 140778F3E: variable 'v68' is possibly undefined
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A452D0: using guessed type wchar_t aXmlVersion10En[35];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140B4F2C8: using guessed type wchar_t aCharacter_10[10];
// 140B4F2E0: using guessed type wchar_t aSprite_4[7];
// 140B4F2F0: using guessed type wchar_t aName_35[5];
// 140B4F300: using guessed type wchar_t aMacro_1[6];
// 140B4F310: using guessed type wchar_t aMacros_0[7];
// 140B4F320: using guessed type wchar_t aLocalmacrosXml_0[16];
// 140B4F384: using guessed type wchar_t aId_29[3];
// 140B5EA18: using guessed type __int64 (__fastcall *off_140B5EA18[25])();
// 140B5EA48: using guessed type __int64 (__fastcall *off_140B5EA48[19])();
// 140B5EA78: using guessed type __int64 (__fastcall *off_140B5EA78[13])();
// 140B5EAA8: using guessed type __int64 (__fastcall *off_140B5EAA8[7])();
// 140B5EAD8: using guessed type __int64 (__fastcall *off_140B5EAD8)();
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B5ED50: using guessed type __int64 (__fastcall *off_140B5ED50[17])();
// 140B5EDE0: using guessed type __int64 (__fastcall *off_140B5EDE0[12])();
// 140B5EE70: using guessed type __int64 (__fastcall *off_140B5EE70[17])();

