//----- (000000014028E140) ----------------------------------------------------
__int64 __fastcall sub_14028E140(__int64* a1, unsigned int a2, int a3, int* a4, unsigned int a5, int* a6)
{
	__int64 v6; // rax
	__int64 v8; // r13
	__int64 v10; // rcx
	unsigned int v12; // edi
	__int64 v13; // rbx
	int v14; // eax
	__int64 v15; // rdx
	__int64 v16; // r8
	int v17; // r11d
	int v18; // r9d
	int v19; // ebx
	int v20; // r10d
	int v21; // edx
	_DWORD* v22; // rcx
	int v23; // r8d
	__int64 v24; // r8
	_DWORD* v25; // rbx
	__int64 v26; // r11
	unsigned int v27; // r9d
	__int64 v28; // rax
	_DWORD* v29; // r8
	int v30; // ecx
	unsigned int v31; // eax
	unsigned int v32; // r9d
	unsigned int v33; // r9d
	unsigned int v34; // eax
	int v35; // ecx
	int v36; // edx
	unsigned int v37; // eax
	unsigned int v38; // edx
	int v39; // ecx
	int v40; // ebx
	_DWORD* v41; // r8
	int v42; // ecx
	unsigned int v43; // eax
	unsigned int v44; // r9d
	unsigned int v45; // r9d
	unsigned int v46; // eax
	int v47; // ecx
	int v48; // edx
	unsigned int v49; // eax
	unsigned int v50; // edx
	int v51; // ecx
	int v52; // ebx
	__int64 v53; // rcx
	_DWORD* v54; // rbx
	unsigned int v55; // r9d
	int v56; // eax
	unsigned int i; // r14d
	__int64 v58; // rax
	_DWORD* v59; // r8
	int v60; // ecx
	unsigned int v61; // eax
	unsigned int v62; // r9d
	unsigned int v63; // r9d
	int v64; // ecx
	_DWORD* v65; // rdx
	unsigned int v66; // eax
	int v67; // ebx
	_DWORD* v68; // r8
	int v69; // ecx
	unsigned int v70; // eax
	unsigned int v71; // r9d
	unsigned int v72; // r9d
	int v73; // ecx
	_DWORD* v74; // rdx
	int v75; // ecx
	unsigned int v76; // eax
	unsigned int v77; // eax
	int v78; // ebx
	__int64 v79; // rdx
	__int64 v80; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v81; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v82; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v83; // [rsp+68h] [rbp-98h] BYREF
	__int64 v84; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v85; // [rsp+78h] [rbp-88h]
	unsigned int v86; // [rsp+7Ch] [rbp-84h]
	int v87; // [rsp+80h] [rbp-80h]
	int v88; // [rsp+84h] [rbp-7Ch]
	__int64 v89; // [rsp+88h] [rbp-78h] BYREF
	__int64 v90; // [rsp+90h] [rbp-70h] BYREF
	__int64 v91; // [rsp+98h] [rbp-68h] BYREF
	__int64 v92; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v93; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v94; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v95; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v96; // [rsp+C0h] [rbp-40h]
	__int64(__fastcall * *v97)(); // [rsp+C8h] [rbp-38h] BYREF
	const wchar_t* v98; // [rsp+D0h] [rbp-30h]
	LPVOID lpTlsValue; // [rsp+D8h] [rbp-28h]
	__int64 v100; // [rsp+E0h] [rbp-20h]
	__int64(__fastcall * *TlsValue)(); // [rsp+E8h] [rbp-18h] BYREF
	__int64 v102; // [rsp+F0h] [rbp-10h]
	LPVOID Value; // [rsp+F8h] [rbp-8h]
	unsigned int v104[4]; // [rsp+100h] [rbp+0h] BYREF
	unsigned int v105; // [rsp+110h] [rbp+10h] BYREF
	unsigned int v106; // [rsp+114h] [rbp+14h]
	unsigned int v107; // [rsp+118h] [rbp+18h]
	unsigned int v108[4]; // [rsp+120h] [rbp+20h] BYREF
	unsigned int v109[4]; // [rsp+130h] [rbp+30h] BYREF
	unsigned int v110[4]; // [rsp+140h] [rbp+40h] BYREF
	unsigned int v111[4]; // [rsp+150h] [rbp+50h] BYREF
	unsigned int v112; // [rsp+160h] [rbp+60h] BYREF
	unsigned int v113; // [rsp+164h] [rbp+64h]
	unsigned int v114; // [rsp+168h] [rbp+68h]
	unsigned int v115[4]; // [rsp+170h] [rbp+70h] BYREF
	__int64 v116; // [rsp+180h] [rbp+80h] BYREF
	int v117; // [rsp+188h] [rbp+88h]
	int v118; // [rsp+18Ch] [rbp+8Ch]
	__int64 v119; // [rsp+190h] [rbp+90h] BYREF
	int v120; // [rsp+198h] [rbp+98h]
	int v121; // [rsp+19Ch] [rbp+9Ch]
	int v122[3]; // [rsp+1A0h] [rbp+A0h] BYREF
	int v123; // [rsp+1ACh] [rbp+ACh]
	int v124[4]; // [rsp+1B0h] [rbp+B0h] BYREF
	int v125[3]; // [rsp+1C0h] [rbp+C0h] BYREF
	int v126; // [rsp+1CCh] [rbp+CCh]
	__int64 v127; // [rsp+1D0h] [rbp+D0h] BYREF
	int v128; // [rsp+1D8h] [rbp+D8h]
	int v129; // [rsp+1DCh] [rbp+DCh]
	int v130[4]; // [rsp+1E0h] [rbp+E0h] BYREF
	__int64 v131; // [rsp+1F0h] [rbp+F0h] BYREF
	int v132; // [rsp+1F8h] [rbp+F8h]
	int v133; // [rsp+1FCh] [rbp+FCh]
	__int64 v134; // [rsp+200h] [rbp+100h] BYREF
	__int64 v135; // [rsp+208h] [rbp+108h] BYREF
	unsigned int v136; // [rsp+210h] [rbp+110h] BYREF
	int* v137; // [rsp+218h] [rbp+118h]
	unsigned int v138; // [rsp+220h] [rbp+120h] BYREF
	int* v139; // [rsp+228h] [rbp+128h]
	unsigned int v140; // [rsp+230h] [rbp+130h] BYREF
	int* v141; // [rsp+238h] [rbp+138h]
	unsigned int v142; // [rsp+240h] [rbp+140h] BYREF
	int* v143; // [rsp+248h] [rbp+148h]
	__int64 v144[4]; // [rsp+250h] [rbp+150h] BYREF
	__int64 v145[4]; // [rsp+270h] [rbp+170h] BYREF
	int v146[4]; // [rsp+290h] [rbp+190h] BYREF
	int v147[3]; // [rsp+2A0h] [rbp+1A0h] BYREF
	int v148; // [rsp+2ACh] [rbp+1ACh]
	__int64 v149; // [rsp+2B8h] [rbp+1B8h]

	v6 = *a1;
	v81 = (__int64)a4;
	v8 = a3;
	v146[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v6 + 32))(a1, v146);
	v10 = a1[15];
	if (!v10)
		return 2147942487i64;
	v12 = 0;
	if (a1[9])
	{
		v102 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v13 = a1[9];
		v144[0] = (__int64)TlsValue;
		v144[1] = v102;
		v97 = &off_140B5E648;
		v144[2] = (__int64)Value;
		v98 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v97);
		v100 = v13;
		v145[1] = (__int64)v98;
		v97 = &off_140B5E638;
		v145[3] = v13;
		v145[0] = (__int64)&off_140B5E638;
		v81 = 0x141DE44A0i64;
		v145[2] = (__int64)lpTlsValue;
		LODWORD(v13) = sub_1401971E0(&dword_140C8A3D8, 14, &v81, v145, v144);
		v97 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v13)
			DebugBreak();
		return 2147500037i64;
	}
	v80 = 0i64;
	v14 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v10 + 144i64))(v10, a2, &v80);
	if (v14 < 0)
		goto LABEL_53;
	v14 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v80 + 96i64))(v80, v147);
	if (v14 < 0)
		goto LABEL_53;
	v15 = (unsigned int)v149;
	v16 = HIDWORD(v149);
	v95 = 0i64;
	v96 = v149;
	if (!a6 || !*(_QWORD*)a6 && *((_QWORD*)a6 + 1) == v96)
	{
		if (v148)
		{
			if ((*(int(__fastcall**)(__int64, unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v80 + 104i64))(
				v80,
				&v142,
				0i64,
				0i64) >= 0)
			{
				v133 = *((_DWORD*)a1 + 12);
				v104[0] = v142;
				v68 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v133);
				v131 = v149;
				v69 = v68[5];
				v70 = v68[7] + 1;
				v71 = HIDWORD(v149) + v68[4];
				v132 = 1;
				v72 = v71 >> v69;
				v73 = v68[8];
				v127 = v149;
				v104[1] = v142 * v72;
				v128 = 1;
				v104[2] = v142 * v72 * (v70 >> v73);
				v74 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v8);
				v75 = v74[5];
				v76 = v74[7] + 1;
				LODWORD(v68) = HIDWORD(v149) + v74[4];
				v129 = v8;
				v77 = v76 >> v74[8];
				v106 = a5 * ((unsigned int)v68 >> v75);
				v105 = a5;
				v107 = v106 * v77;
				v78 = sub_1402645D0(v143, (int*)&v131, v104, (int*)v81, &v127, &v105);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v80 + 112i64))(v80);
				if (v78 >= 0)
					goto LABEL_97;
			}
		}
		else
		{
			v53 = *(_QWORD*)(a1[2] + 6616);
			v54 = (_DWORD*)((char*)&unk_140AE5200 + 44 * *((int*)a1 + 12));
			if (v53)
			{
				if ((_DWORD)v8 == *((_DWORD*)a1 + 12) && ((unsigned int)v149 & v54[1]) == 0 && (HIDWORD(v149) & v54[4]) == 0)
				{
					v55 = v54[9];
					if (((v55 - 1) & a5) == 0)
					{
						v92 = 0i64;
						v134 = v81;
						v89 = 0i64;
						if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, __int64*, __int64*))(*(_QWORD*)v53 + 184i64))(
							v53,
							*v54 * (a5 / v55),
							HIDWORD(v149),
							1i64,
							0,
							v147[0],
							2,
							&v92,
							&v134) >= 0
							&& (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v92 + 144i64))(v92, 0i64, &v89) >= 0
							&& (*(int(__fastcall**)(_QWORD, __int64, __int64*, __int64, _QWORD))(**(_QWORD**)(a1[2] + 6616)
								+ 240i64))(
									*(_QWORD*)(a1[2] + 6616),
									v89,
									&v95,
									v80,
									0i64) >= 0)
						{
							if (v89)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v89 + 16i64))(v89);
							if (v92)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v92 + 16i64))(v92);
							goto LABEL_97;
						}
						if (v89)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v89 + 16i64))(v89);
						if (v92)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v92 + 16i64))(v92);
						v15 = (unsigned int)v149;
						v16 = HIDWORD(v149);
					}
				}
			}
			v56 = v54[1];
			for (i = 0; ; ++i)
			{
				v88 = v16;
				v87 = v15;
				if ((v56 & (unsigned int)v15) == 0 && ((unsigned int)v16 & v54[4]) == 0)
					break;
				v15 = (unsigned int)(2 * v15);
				v16 = (unsigned int)(2 * v16);
			}
			v58 = a1[2];
			v94 = 0i64;
			v83 = 0i64;
			if ((*(int(__fastcall**)(_QWORD, __int64, __int64, _QWORD, _DWORD, int, int, __int64*, _QWORD))(**(_QWORD**)(v58 + 6608) + 184i64))(
				*(_QWORD*)(v58 + 6608),
				v15,
				v16,
				i + 1,
				0,
				v147[0],
				2,
				&v94,
				0i64) >= 0
				&& (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v94 + 144i64))(v94, i, &v83) >= 0
				&& (*(int(__fastcall**)(__int64, unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v83 + 104i64))(
					v83,
					&v140,
					0i64,
					0i64) >= 0)
			{
				v118 = *((_DWORD*)a1 + 12);
				v59 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v118);
				v110[0] = v140;
				v60 = v59[5];
				v61 = v59[7] + 1;
				v62 = HIDWORD(v149) + v59[4];
				v116 = v149;
				v63 = v62 >> v60;
				v64 = v59[8];
				v110[1] = v140 * v63;
				v117 = 1;
				v119 = v149;
				v110[2] = v140 * v63 * (v61 >> v64);
				v65 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v8);
				v66 = (unsigned int)(v65[7] + 1) >> v65[8];
				v113 = a5 * ((unsigned int)(HIDWORD(v149) + v65[4]) >> v65[5]);
				v120 = 1;
				v121 = v8;
				v114 = v113 * v66;
				v112 = a5;
				v67 = sub_1402645D0(v141, (int*)&v116, v110, (int*)v81, &v119, &v112);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v83 + 112i64))(v83);
				if (v67 >= 0
					&& (*(int(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1[2] + 6608) + 240i64))(
						*(_QWORD*)(a1[2] + 6608),
						v83,
						0i64,
						v80,
						0i64) >= 0)
				{
					if (v83)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v83 + 16i64))(v83);
					if (v94)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v94 + 16i64))(v94);
					goto LABEL_97;
				}
			}
			if (v83)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v83 + 16i64))(v83);
			if (v94)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v94 + 16i64))(v94);
		}
		v14 = D3DXLoadSurfaceFromMemory(v80, 0i64, &v95, v81, dword_140AE7B30[v8], a5, 0i64, &v95, 1, 0);
		if (v14 < 0)
			goto LABEL_53;
		goto LABEL_97;
	}
	v17 = *a6;
	v18 = a6[2];
	if (*a6 > v18)
		goto LABEL_58;
	v19 = a6[1];
	v20 = a6[3];
	if (v19 > v20)
		goto LABEL_58;
	if (v17 < 0)
		goto LABEL_58;
	if (v18 > (int)v149)
		goto LABEL_58;
	if (v19 < 0)
		goto LABEL_58;
	if (v20 > SHIDWORD(v149))
		goto LABEL_58;
	v21 = *((_DWORD*)a1 + 12);
	v22 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v21);
	if (((v17 | v18) & v22[1]) != 0
		|| ((v19 | v20) & v22[4]) != 0
		|| (v23 = a6[3],
			v84 = qword_140C77760,
			v24 = (unsigned int)(v23 - v19),
			v85 = v18 - v17,
			v86 = v24,
			v25 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v8),
			((v18 - v17) & v25[1]) != 0)
		|| ((unsigned int)v24 & v25[4]) != 0)
	{
	LABEL_58:
		v14 = -2147024809;
		goto LABEL_53;
	}
	if (v148)
	{
		if ((*(int(__fastcall**)(__int64, unsigned int*, int*, _QWORD))(*(_QWORD*)v80 + 104i64))(v80, &v136, a6, 0i64) >= 0)
		{
			v126 = *((_DWORD*)a1 + 12);
			v111[0] = v136;
			v41 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v126);
			v42 = v41[5];
			v43 = v41[7] + 1;
			v44 = v86 + v41[4];
			v125[0] = v85;
			v45 = v44 >> v42;
			v46 = v43 >> v41[8];
			v47 = v25[5];
			v48 = v25[4];
			v111[1] = v136 * v45;
			v125[1] = v86;
			v111[2] = v136 * v45 * v46;
			v49 = v25[7] + 1;
			v125[2] = 1;
			v50 = (v86 + v48) >> v47;
			v51 = v25[8];
			v130[0] = v85;
			v108[1] = a5 * v50;
			v130[1] = v86;
			v130[2] = 1;
			v108[2] = a5 * v50 * (v49 >> v51);
			v130[3] = v8;
			v108[0] = a5;
			v52 = sub_1402645D0(v137, v125, v111, (int*)v81, v130, v108);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v80 + 112i64))(v80);
			if (v52 >= 0)
				goto LABEL_97;
		}
	}
	else
	{
		v26 = *(_QWORD*)(a1[2] + 6616);
		if (v26)
		{
			if ((_DWORD)v8 == v21)
			{
				v27 = v22[9];
				if (((v27 - 1) & a5) == 0)
				{
					v91 = 0i64;
					v135 = v81;
					v90 = 0i64;
					if ((*(int(__fastcall**)(__int64, _QWORD, __int64, __int64, _DWORD, int, int, __int64*, __int64*))(*(_QWORD*)v26 + 184i64))(
						v26,
						*v22 * (a5 / v27),
						v24,
						1i64,
						0,
						v147[0],
						2,
						&v91,
						&v135) >= 0
						&& (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v91 + 144i64))(v91, 0i64, &v90) >= 0
						&& (*(int(__fastcall**)(_QWORD, __int64, __int64*, __int64, int*))(**(_QWORD**)(a1[2] + 6616) + 240i64))(
							*(_QWORD*)(a1[2] + 6616),
							v90,
							&v84,
							v80,
							a6) >= 0)
					{
						if (v90)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v90 + 16i64))(v90);
						if (v91)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v91 + 16i64))(v91);
						goto LABEL_97;
					}
					if (v90)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v90 + 16i64))(v90);
					if (v91)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v91 + 16i64))(v91);
				}
			}
		}
		v28 = a1[2];
		v93 = 0i64;
		v82 = 0i64;
		if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, int, int, __int64*, _QWORD))(**(_QWORD**)(v28 + 6608) + 184i64))(
			*(_QWORD*)(v28 + 6608),
			v85,
			v86,
			1i64,
			0,
			v147[0],
			2,
			&v93,
			0i64) >= 0
			&& (*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v93 + 144i64))(v93, 0i64, &v82) >= 0
			&& (*(int(__fastcall**)(__int64, unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v82 + 104i64))(
				v82,
				&v138,
				0i64,
				0i64) >= 0)
		{
			v123 = *((_DWORD*)a1 + 12);
			v115[0] = v138;
			v29 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v123);
			v30 = v29[5];
			v31 = v29[7] + 1;
			v32 = v86 + v29[4];
			v122[0] = v85;
			v33 = v32 >> v30;
			v34 = v31 >> v29[8];
			v35 = v25[5];
			v36 = v25[4];
			v115[1] = v138 * v33;
			v122[1] = v86;
			v115[2] = v138 * v33 * v34;
			v37 = v25[7] + 1;
			v122[2] = 1;
			v38 = (v86 + v36) >> v35;
			v39 = v25[8];
			v124[0] = v85;
			v109[1] = a5 * v38;
			v124[1] = v86;
			v124[2] = 1;
			v109[2] = a5 * v38 * (v37 >> v39);
			v124[3] = v8;
			v109[0] = a5;
			v40 = sub_1402645D0(v139, v122, v115, (int*)v81, v124, v109);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v82 + 112i64))(v82);
			if (v40 >= 0
				&& (*(int(__fastcall**)(_QWORD, __int64, __int64*, __int64, int*))(**(_QWORD**)(a1[2] + 6608) + 240i64))(
					*(_QWORD*)(a1[2] + 6608),
					v82,
					&v84,
					v80,
					a6) >= 0)
			{
				if (v82)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v82 + 16i64))(v82);
				if (v93)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v93 + 16i64))(v93);
				goto LABEL_97;
			}
		}
		if (v82)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v82 + 16i64))(v82);
		if (v93)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v93 + 16i64))(v93);
	}
	v14 = D3DXLoadSurfaceFromMemory(v80, 0i64, a6, v81, dword_140AE7B30[v8], a5, 0i64, &v84, 1, 0);
	if (v14 >= 0)
	{
	LABEL_97:
		v79 = a1[2] + 48i64 * *((int*)a1 + 13);
		_InterlockedIncrement((volatile signed __int32*)(v79 + 756));
		_InterlockedExchangeAdd((volatile signed __int32*)(v79 + 760), *((_DWORD*)a1 + 34));
		*((_DWORD*)a1 + 24) = 1;
		goto LABEL_54;
	}
LABEL_53:
	v12 = v14;
LABEL_54:
	if (v80)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v80 + 16i64))(v80);
	return v12;
}
// 140C65708: invalid function type has been ignored
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140AE7B30: using guessed type int dword_140AE7B30[28];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65708: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromMemory)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C8A3D8: using guessed type _DWORD dword_140C8A3D8;
// 14028E140: using guessed type int var_80[4];
// 14028E140: using guessed type int var_70[3];

