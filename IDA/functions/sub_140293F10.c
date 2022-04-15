//----- (0000000140293F10) ----------------------------------------------------
__int64 __fastcall sub_140293F10(__int64* a1, int a2, unsigned int a3, int a4, int* a5, unsigned int a6, int* a7)
{
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r13
	__int64 v12; // rcx
	unsigned int v14; // edi
	__int64 v15; // rbx
	int v16; // eax
	__int64 v17; // rdx
	__int64 v18; // r8
	int v19; // r11d
	int v20; // r9d
	int v21; // ebx
	int v22; // r10d
	int v23; // edx
	_DWORD* v24; // rcx
	int v25; // r8d
	__int64 v26; // r8
	_DWORD* v27; // rbx
	__int64 v28; // r11
	unsigned int v29; // r9d
	__int64 v30; // rax
	_DWORD* v31; // r8
	int v32; // ecx
	unsigned int v33; // eax
	unsigned int v34; // r9d
	unsigned int v35; // r9d
	unsigned int v36; // eax
	int v37; // ecx
	int v38; // edx
	unsigned int v39; // eax
	unsigned int v40; // edx
	int v41; // ecx
	int v42; // ebx
	_DWORD* v43; // r8
	int v44; // ecx
	unsigned int v45; // eax
	unsigned int v46; // r9d
	unsigned int v47; // r9d
	unsigned int v48; // eax
	int v49; // ecx
	int v50; // edx
	unsigned int v51; // eax
	unsigned int v52; // edx
	int v53; // ecx
	int v54; // ebx
	__int64 v55; // rcx
	_DWORD* v56; // rbx
	unsigned int v57; // r9d
	int v58; // eax
	unsigned int i; // r14d
	__int64 v60; // rax
	_DWORD* v61; // r8
	int v62; // ecx
	unsigned int v63; // eax
	unsigned int v64; // r9d
	unsigned int v65; // r9d
	int v66; // ecx
	_DWORD* v67; // rdx
	unsigned int v68; // eax
	int v69; // ebx
	_DWORD* v70; // r8
	int v71; // ecx
	unsigned int v72; // eax
	unsigned int v73; // r9d
	unsigned int v74; // r9d
	int v75; // ecx
	_DWORD* v76; // rdx
	int v77; // ecx
	unsigned int v78; // eax
	unsigned int v79; // eax
	int v80; // ebx
	__int64 v81; // rdx
	__int64 v82; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v83; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v84; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v85; // [rsp+68h] [rbp-98h] BYREF
	__int64 v86; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v87; // [rsp+78h] [rbp-88h]
	unsigned int v88; // [rsp+7Ch] [rbp-84h]
	int v89; // [rsp+80h] [rbp-80h]
	int v90; // [rsp+84h] [rbp-7Ch]
	__int64 v91; // [rsp+88h] [rbp-78h] BYREF
	__int64 v92; // [rsp+90h] [rbp-70h] BYREF
	__int64 v93; // [rsp+98h] [rbp-68h] BYREF
	__int64 v94; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v95; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v96; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v97; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v98; // [rsp+C0h] [rbp-40h]
	__int64(__fastcall * *v99)(); // [rsp+C8h] [rbp-38h] BYREF
	const wchar_t* v100; // [rsp+D0h] [rbp-30h]
	LPVOID lpTlsValue; // [rsp+D8h] [rbp-28h]
	__int64 v102; // [rsp+E0h] [rbp-20h]
	__int64(__fastcall * *TlsValue)(); // [rsp+E8h] [rbp-18h] BYREF
	__int64 v104; // [rsp+F0h] [rbp-10h]
	LPVOID Value; // [rsp+F8h] [rbp-8h]
	unsigned int v106[4]; // [rsp+100h] [rbp+0h] BYREF
	unsigned int v107; // [rsp+110h] [rbp+10h] BYREF
	unsigned int v108; // [rsp+114h] [rbp+14h]
	unsigned int v109; // [rsp+118h] [rbp+18h]
	unsigned int v110[4]; // [rsp+120h] [rbp+20h] BYREF
	unsigned int v111[4]; // [rsp+130h] [rbp+30h] BYREF
	unsigned int v112[4]; // [rsp+140h] [rbp+40h] BYREF
	unsigned int v113[4]; // [rsp+150h] [rbp+50h] BYREF
	unsigned int v114; // [rsp+160h] [rbp+60h] BYREF
	unsigned int v115; // [rsp+164h] [rbp+64h]
	unsigned int v116; // [rsp+168h] [rbp+68h]
	unsigned int v117[4]; // [rsp+170h] [rbp+70h] BYREF
	__int64 v118; // [rsp+180h] [rbp+80h] BYREF
	int v119; // [rsp+188h] [rbp+88h]
	int v120; // [rsp+18Ch] [rbp+8Ch]
	__int64 v121; // [rsp+190h] [rbp+90h] BYREF
	int v122; // [rsp+198h] [rbp+98h]
	int v123; // [rsp+19Ch] [rbp+9Ch]
	int v124[3]; // [rsp+1A0h] [rbp+A0h] BYREF
	int v125; // [rsp+1ACh] [rbp+ACh]
	int v126[4]; // [rsp+1B0h] [rbp+B0h] BYREF
	int v127[3]; // [rsp+1C0h] [rbp+C0h] BYREF
	int v128; // [rsp+1CCh] [rbp+CCh]
	__int64 v129; // [rsp+1D0h] [rbp+D0h] BYREF
	int v130; // [rsp+1D8h] [rbp+D8h]
	int v131; // [rsp+1DCh] [rbp+DCh]
	int v132[4]; // [rsp+1E0h] [rbp+E0h] BYREF
	__int64 v133; // [rsp+1F0h] [rbp+F0h] BYREF
	int v134; // [rsp+1F8h] [rbp+F8h]
	int v135; // [rsp+1FCh] [rbp+FCh]
	__int64 v136; // [rsp+200h] [rbp+100h] BYREF
	__int64 v137; // [rsp+208h] [rbp+108h] BYREF
	unsigned int v138; // [rsp+210h] [rbp+110h] BYREF
	int* v139; // [rsp+218h] [rbp+118h]
	unsigned int v140; // [rsp+220h] [rbp+120h] BYREF
	int* v141; // [rsp+228h] [rbp+128h]
	unsigned int v142; // [rsp+230h] [rbp+130h] BYREF
	int* v143; // [rsp+238h] [rbp+138h]
	unsigned int v144; // [rsp+240h] [rbp+140h] BYREF
	int* v145; // [rsp+248h] [rbp+148h]
	__int64 v146[4]; // [rsp+250h] [rbp+150h] BYREF
	__int64 v147[4]; // [rsp+270h] [rbp+170h] BYREF
	int v148[4]; // [rsp+290h] [rbp+190h] BYREF
	int v149[3]; // [rsp+2A0h] [rbp+1A0h] BYREF
	int v150; // [rsp+2ACh] [rbp+1ACh]
	__int64 v151; // [rsp+2B8h] [rbp+1B8h]

	v7 = a2;
	v83 = (__int64)a5;
	v8 = *a1;
	v9 = a4;
	v148[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v8 + 32))(a1, v148);
	v12 = a1[15];
	if (!v12)
		return 2147942487i64;
	v14 = 0;
	if (a1[9])
	{
		v104 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v15 = a1[9];
		v146[0] = (__int64)TlsValue;
		v146[1] = v104;
		v99 = &off_140B5E648;
		v146[2] = (__int64)Value;
		v100 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v99);
		v102 = v15;
		v147[1] = (__int64)v100;
		v99 = &off_140B5E638;
		v147[3] = v15;
		v147[0] = (__int64)&off_140B5E638;
		v83 = 0x141DE4E60i64;
		v147[2] = (__int64)lpTlsValue;
		LODWORD(v15) = sub_1401971E0(&dword_140C8A42C, 14, &v83, v147, v146);
		v99 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v15)
			DebugBreak();
		return 2147500037i64;
	}
	v82 = 0i64;
	v16 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64*))(*(_QWORD*)v12 + 144i64))(
		v12,
		(unsigned int)dword_140AE7B00[v7],
		a3,
		&v82);
	if (v16 < 0)
		goto LABEL_53;
	v16 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v82 + 96i64))(v82, v149);
	if (v16 < 0)
		goto LABEL_53;
	v17 = (unsigned int)v151;
	v18 = HIDWORD(v151);
	v97 = 0i64;
	v98 = v151;
	if (!a7 || !*(_QWORD*)a7 && *((_QWORD*)a7 + 1) == v98)
	{
		if (v150)
		{
			if ((*(int(__fastcall**)(__int64, unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v82 + 104i64))(
				v82,
				&v144,
				0i64,
				0i64) >= 0)
			{
				v135 = *((_DWORD*)a1 + 12);
				v106[0] = v144;
				v70 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v135);
				v133 = v151;
				v71 = v70[5];
				v72 = v70[7] + 1;
				v73 = HIDWORD(v151) + v70[4];
				v134 = 1;
				v74 = v73 >> v71;
				v75 = v70[8];
				v129 = v151;
				v106[1] = v144 * v74;
				v130 = 1;
				v106[2] = v144 * v74 * (v72 >> v75);
				v76 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v9);
				v77 = v76[5];
				v78 = v76[7] + 1;
				LODWORD(v70) = HIDWORD(v151) + v76[4];
				v131 = v9;
				v79 = v78 >> v76[8];
				v108 = a6 * ((unsigned int)v70 >> v77);
				v107 = a6;
				v109 = v108 * v79;
				v80 = sub_1402645D0(v145, (int*)&v133, v106, (int*)v83, &v129, &v107);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v82 + 112i64))(v82);
				if (v80 >= 0)
					goto LABEL_97;
			}
		}
		else
		{
			v55 = *(_QWORD*)(a1[2] + 6616);
			v56 = (_DWORD*)((char*)&unk_140AE5200 + 44 * *((int*)a1 + 12));
			if (v55)
			{
				if ((_DWORD)v9 == *((_DWORD*)a1 + 12) && ((unsigned int)v151 & v56[1]) == 0 && (HIDWORD(v151) & v56[4]) == 0)
				{
					v57 = v56[9];
					if (((v57 - 1) & a6) == 0)
					{
						v94 = 0i64;
						v136 = v83;
						v91 = 0i64;
						if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, __int64*, __int64*))(*(_QWORD*)v55 + 184i64))(
							v55,
							*v56 * (a6 / v57),
							HIDWORD(v151),
							1i64,
							0,
							v149[0],
							2,
							&v94,
							&v136) >= 0
							&& (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v94 + 144i64))(v94, 0i64, &v91) >= 0
							&& (*(int(__fastcall**)(_QWORD, __int64, __int64*, __int64, _QWORD))(**(_QWORD**)(a1[2] + 6616)
								+ 240i64))(
									*(_QWORD*)(a1[2] + 6616),
									v91,
									&v97,
									v82,
									0i64) >= 0)
						{
							if (v91)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v91 + 16i64))(v91);
							if (v94)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v94 + 16i64))(v94);
							goto LABEL_97;
						}
						if (v91)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v91 + 16i64))(v91);
						if (v94)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v94 + 16i64))(v94);
						v17 = (unsigned int)v151;
						v18 = HIDWORD(v151);
					}
				}
			}
			v58 = v56[1];
			for (i = 0; ; ++i)
			{
				v90 = v18;
				v89 = v17;
				if ((v58 & (unsigned int)v17) == 0 && ((unsigned int)v18 & v56[4]) == 0)
					break;
				v17 = (unsigned int)(2 * v17);
				v18 = (unsigned int)(2 * v18);
			}
			v60 = a1[2];
			v96 = 0i64;
			v85 = 0i64;
			if ((*(int(__fastcall**)(_QWORD, __int64, __int64, _QWORD, _DWORD, int, int, __int64*, _QWORD))(**(_QWORD**)(v60 + 6608) + 184i64))(
				*(_QWORD*)(v60 + 6608),
				v17,
				v18,
				i + 1,
				0,
				v149[0],
				2,
				&v96,
				0i64) >= 0
				&& (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v96 + 144i64))(v96, i, &v85) >= 0
				&& (*(int(__fastcall**)(__int64, unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v85 + 104i64))(
					v85,
					&v142,
					0i64,
					0i64) >= 0)
			{
				v120 = *((_DWORD*)a1 + 12);
				v61 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v120);
				v112[0] = v142;
				v62 = v61[5];
				v63 = v61[7] + 1;
				v64 = HIDWORD(v151) + v61[4];
				v118 = v151;
				v65 = v64 >> v62;
				v66 = v61[8];
				v112[1] = v142 * v65;
				v119 = 1;
				v121 = v151;
				v112[2] = v142 * v65 * (v63 >> v66);
				v67 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v9);
				v68 = (unsigned int)(v67[7] + 1) >> v67[8];
				v115 = a6 * ((unsigned int)(HIDWORD(v151) + v67[4]) >> v67[5]);
				v122 = 1;
				v123 = v9;
				v116 = v115 * v68;
				v114 = a6;
				v69 = sub_1402645D0(v143, (int*)&v118, v112, (int*)v83, &v121, &v114);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v85 + 112i64))(v85);
				if (v69 >= 0
					&& (*(int(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1[2] + 6608) + 240i64))(
						*(_QWORD*)(a1[2] + 6608),
						v85,
						0i64,
						v82,
						0i64) >= 0)
				{
					if (v85)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v85 + 16i64))(v85);
					if (v96)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v96 + 16i64))(v96);
					goto LABEL_97;
				}
			}
			if (v85)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v85 + 16i64))(v85);
			if (v96)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v96 + 16i64))(v96);
		}
		v16 = D3DXLoadSurfaceFromMemory(v82, 0i64, &v97, v83, dword_140AE7B30[v9], a6, 0i64, &v97, 1, 0);
		if (v16 < 0)
			goto LABEL_53;
		goto LABEL_97;
	}
	v19 = *a7;
	v20 = a7[2];
	if (*a7 > v20)
		goto LABEL_58;
	v21 = a7[1];
	v22 = a7[3];
	if (v21 > v22)
		goto LABEL_58;
	if (v19 < 0)
		goto LABEL_58;
	if (v20 > (int)v151)
		goto LABEL_58;
	if (v21 < 0)
		goto LABEL_58;
	if (v22 > SHIDWORD(v151))
		goto LABEL_58;
	v23 = *((_DWORD*)a1 + 12);
	v24 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v23);
	if (((v19 | v20) & v24[1]) != 0
		|| ((v21 | v22) & v24[4]) != 0
		|| (v25 = a7[3],
			v86 = qword_140C77760,
			v26 = (unsigned int)(v25 - v21),
			v87 = v20 - v19,
			v88 = v26,
			v27 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v9),
			((v20 - v19) & v27[1]) != 0)
		|| ((unsigned int)v26 & v27[4]) != 0)
	{
	LABEL_58:
		v16 = -2147024809;
		goto LABEL_53;
	}
	if (v150)
	{
		if ((*(int(__fastcall**)(__int64, unsigned int*, int*, _QWORD))(*(_QWORD*)v82 + 104i64))(v82, &v138, a7, 0i64) >= 0)
		{
			v128 = *((_DWORD*)a1 + 12);
			v113[0] = v138;
			v43 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v128);
			v44 = v43[5];
			v45 = v43[7] + 1;
			v46 = v88 + v43[4];
			v127[0] = v87;
			v47 = v46 >> v44;
			v48 = v45 >> v43[8];
			v49 = v27[5];
			v50 = v27[4];
			v113[1] = v138 * v47;
			v127[1] = v88;
			v113[2] = v138 * v47 * v48;
			v51 = v27[7] + 1;
			v127[2] = 1;
			v52 = (v88 + v50) >> v49;
			v53 = v27[8];
			v132[0] = v87;
			v110[1] = a6 * v52;
			v132[1] = v88;
			v132[2] = 1;
			v110[2] = a6 * v52 * (v51 >> v53);
			v132[3] = v9;
			v110[0] = a6;
			v54 = sub_1402645D0(v139, v127, v113, (int*)v83, v132, v110);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v82 + 112i64))(v82);
			if (v54 >= 0)
				goto LABEL_97;
		}
	}
	else
	{
		v28 = *(_QWORD*)(a1[2] + 6616);
		if (v28)
		{
			if ((_DWORD)v9 == v23)
			{
				v29 = v24[9];
				if (((v29 - 1) & a6) == 0)
				{
					v93 = 0i64;
					v137 = v83;
					v92 = 0i64;
					if ((*(int(__fastcall**)(__int64, _QWORD, __int64, __int64, _DWORD, int, int, __int64*, __int64*))(*(_QWORD*)v28 + 184i64))(
						v28,
						*v24 * (a6 / v29),
						v26,
						1i64,
						0,
						v149[0],
						2,
						&v93,
						&v137) >= 0
						&& (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v93 + 144i64))(v93, 0i64, &v92) >= 0
						&& (*(int(__fastcall**)(_QWORD, __int64, __int64*, __int64, int*))(**(_QWORD**)(a1[2] + 6616) + 240i64))(
							*(_QWORD*)(a1[2] + 6616),
							v92,
							&v86,
							v82,
							a7) >= 0)
					{
						if (v92)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v92 + 16i64))(v92);
						if (v93)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v93 + 16i64))(v93);
						goto LABEL_97;
					}
					if (v92)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v92 + 16i64))(v92);
					if (v93)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v93 + 16i64))(v93);
				}
			}
		}
		v30 = a1[2];
		v95 = 0i64;
		v84 = 0i64;
		if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, int, int, __int64*, _QWORD))(**(_QWORD**)(v30 + 6608) + 184i64))(
			*(_QWORD*)(v30 + 6608),
			v87,
			v88,
			1i64,
			0,
			v149[0],
			2,
			&v95,
			0i64) >= 0
			&& (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v95 + 144i64))(v95, 0i64, &v84) >= 0
			&& (*(int(__fastcall**)(__int64, unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v84 + 104i64))(
				v84,
				&v140,
				0i64,
				0i64) >= 0)
		{
			v125 = *((_DWORD*)a1 + 12);
			v117[0] = v140;
			v31 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v125);
			v32 = v31[5];
			v33 = v31[7] + 1;
			v34 = v88 + v31[4];
			v124[0] = v87;
			v35 = v34 >> v32;
			v36 = v33 >> v31[8];
			v37 = v27[5];
			v38 = v27[4];
			v117[1] = v140 * v35;
			v124[1] = v88;
			v117[2] = v140 * v35 * v36;
			v39 = v27[7] + 1;
			v124[2] = 1;
			v40 = (v88 + v38) >> v37;
			v41 = v27[8];
			v126[0] = v87;
			v111[1] = a6 * v40;
			v126[1] = v88;
			v126[2] = 1;
			v111[2] = a6 * v40 * (v39 >> v41);
			v126[3] = v9;
			v111[0] = a6;
			v42 = sub_1402645D0(v141, v124, v117, (int*)v83, v126, v111);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v84 + 112i64))(v84);
			if (v42 >= 0
				&& (*(int(__fastcall**)(_QWORD, __int64, __int64*, __int64, int*))(**(_QWORD**)(a1[2] + 6608) + 240i64))(
					*(_QWORD*)(a1[2] + 6608),
					v84,
					&v86,
					v82,
					a7) >= 0)
			{
				if (v84)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v84 + 16i64))(v84);
				if (v95)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v95 + 16i64))(v95);
				goto LABEL_97;
			}
		}
		if (v84)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v84 + 16i64))(v84);
		if (v95)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v95 + 16i64))(v95);
	}
	v16 = D3DXLoadSurfaceFromMemory(v82, 0i64, a7, v83, dword_140AE7B30[v9], a6, 0i64, &v86, 1, 0);
	if (v16 >= 0)
	{
	LABEL_97:
		v81 = a1[2] + 48i64 * *((int*)a1 + 13);
		_InterlockedIncrement((volatile signed __int32*)(v81 + 756));
		_InterlockedExchangeAdd((volatile signed __int32*)(v81 + 760), *((_DWORD*)a1 + 34));
		*((_DWORD*)a1 + 24) = 1;
		goto LABEL_54;
	}
LABEL_53:
	v14 = v16;
LABEL_54:
	if (v82)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v82 + 16i64))(v82);
	return v14;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140AE7B00: using guessed type int dword_140AE7B00[6];
// 140AE7B30: using guessed type int dword_140AE7B30[28];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65708: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromMemory)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C8A42C: using guessed type _DWORD dword_140C8A42C;
// 140293F10: using guessed type int var_80[4];
// 140293F10: using guessed type int var_70[3];

