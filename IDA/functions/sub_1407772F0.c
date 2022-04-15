//----- (00000001407772F0) ----------------------------------------------------
__int64 __fastcall sub_1407772F0(_QWORD* a1, __int64 a2)
{
	_QWORD* v2; // rbx
	__int64 v3; // r14
	int* v4; // rax
	int* v5; // rax
	__int64 v6; // rax
	__int64 v7; // r9
	int* v8; // rax
	bool v9; // zf
	__m128i* v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rbx
	unsigned __int64 v13; // rbx
	int* v14; // rax
	__int64 v15; // r12
	__int64 v16; // rcx
	__int64 v17; // rcx
	int v18; // eax
	int v19; // edi
	__int64 v20; // rax
	int* v21; // rbx
	__int64 v22; // rax
	__int64 v23; // r15
	__int64 v24; // rax
	unsigned int v25; // r12d
	__int64 v26; // rax
	int* v27; // rdi
	int* v28; // rsi
	__int64 v29; // rax
	__int64 v30; // rbx
	unsigned __int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // rax
	int* v34; // rdi
	int* v35; // rsi
	__int64 v36; // rax
	__int64 v37; // rbx
	unsigned __int64 v38; // rbx
	__int64 v39; // rax
	__int64 v40; // rax
	int* v41; // rdi
	int* v42; // rsi
	__int64 v43; // rax
	__int64 v44; // rbx
	unsigned __int64 v45; // rbx
	__int64 v46; // rax
	_WORD* v47; // rax
	__int64 v48; // rcx
	__int64 v49; // r14
	__int64 v50; // r13
	__int64 v51; // rbx
	__int64 v52; // rax
	int* v53; // rdi
	int* v54; // rsi
	__int64 v55; // rax
	__int64 v56; // rbx
	unsigned __int64 v57; // rbx
	char* v58; // rbx
	int* v59; // rax
	__int64 v60; // r15
	int* v61; // rsi
	__int64 v62; // rdi
	int* v63; // rcx
	unsigned __int64 v64; // rbx
	__int64 v65; // rax
	unsigned __int64 v66; // r14
	__int64 v67; // rcx
	int* v68; // rax
	int* v69; // rdi
	int* v70; // r12
	int* v71; // r15
	int* v72; // rbx
	unsigned __int64 v73; // rdx
	__int64* v74; // rax
	__int64 v75; // rcx
	__int64* v76; // rax
	__int64 v77; // r12
	int* v78; // rax
	__int64 v79; // r15
	int* v80; // rbx
	signed __int64 v81; // rdx
	int v82; // edx
	__int64 v83; // r8
	int* v84; // rax
	__int64 v85; // rcx
	__int64 v86; // rdx
	int v87; // eax
	__int64* v88; // rbx
	__int64 v89; // rax
	int v91; // [rsp+40h] [rbp-C0h] BYREF
	int* v92; // [rsp+48h] [rbp-B8h] BYREF
	unsigned int v93; // [rsp+50h] [rbp-B0h]
	__int64 v94; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v95; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v96; // [rsp+68h] [rbp-98h]
	int* v97; // [rsp+70h] [rbp-90h]
	int* v98; // [rsp+78h] [rbp-88h]
	int* v99; // [rsp+80h] [rbp-80h]
	unsigned __int64 v100; // [rsp+88h] [rbp-78h] BYREF
	_QWORD* v101; // [rsp+90h] [rbp-70h]
	unsigned __int64 v102; // [rsp+98h] [rbp-68h]
	__m128i* v103; // [rsp+A0h] [rbp-60h]
	__int64 v104; // [rsp+A8h] [rbp-58h]
	char v105[8]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v106; // [rsp+B8h] [rbp-48h]
	__int64 v107; // [rsp+C0h] [rbp-40h]
	__int64 v108; // [rsp+C8h] [rbp-38h]
	int* v109; // [rsp+D0h] [rbp-30h]
	_QWORD* v110; // [rsp+D8h] [rbp-28h]
	int* v111; // [rsp+E0h] [rbp-20h] BYREF
	_QWORD v112[3]; // [rsp+E8h] [rbp-18h] BYREF
	char v113[92]; // [rsp+100h] [rbp+0h] BYREF
	int v114; // [rsp+15Ch] [rbp+5Ch]
	__int64 v115; // [rsp+168h] [rbp+68h]
	__int64 v116; // [rsp+170h] [rbp+70h]
	int v117[132]; // [rsp+380h] [rbp+280h] BYREF

	a1[1] = a2;
	v2 = a1 + 3;
	v3 = (__int64)a1;
	v101 = a1;
	*a1 = &off_140B76650;
	v110 = a1 + 3;
	v4 = sub_14018B280(48i64, 0);
	v2[1] = v4;
	v2[2] = 0i64;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(v2[1] + 8i64) = 0i64;
	*(_QWORD*)(v2[1] + 16i64) = v2[1];
	*(_QWORD*)(v2[1] + 24i64) = v2[1];
	v5 = sub_14018B280(48i64, 0);
	*(_QWORD*)(v3 + 64) = v5;
	*(_QWORD*)v5 = v5;
	*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8i64) = *(_QWORD*)(v3 + 64);
	v6 = *(_QWORD*)&qword_140C63788;
	v7 = *(_QWORD*)&qword_140C63788 + 2684i64;
	*(_DWORD*)(v3 + 72) = 1;
	*(_DWORD*)(v3 + 16) = 0;
	if ((int)sub_14001B370(v117, 260i64, L"%s\\%s\\%s\\%s", v7, L"NCSOFT", *(_QWORD*)(v6 + 4896), L"LocalMacros.xml") >= 0
		&& LOWORD(v117[0]))
	{
		v8 = v117;
		do
		{
			v9 = *((_WORD*)v8 + 1) == 0;
			v8 = (int*)((char*)v8 + 2);
		} while (!v9);
	}
	v10 = 0i64;
	v103 = 0i64;
	v11 = 0i64;
	if (LOWORD(v117[0]))
	{
		do
			++v11;
		while (*((_WORD*)v117 + v11));
	}
	v12 = (2 * v11) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v10 = (__m128i*)sub_14018B280(2 * (v12 + 1), 0);
		v103 = v10;
	}
	v13 = 2 * v12;
	sub_1407DB590(v10->m128i_i32, v117, v13);
	if (&v10->m128i_i8[v13])
		v10->m128i_i16[v13 / 2] = 0;
	v14 = sub_14018B280(16i64, 0);
	v15 = (__int64)v14;
	v109 = v14;
	if (v14)
		*(_WORD*)v14 = 0;
	sub_1401A72E0((__int64)v113);
	sub_1401A59A0((__int64)v113);
	v16 = v115;
	v114 = 0;
	v115 = 0i64;
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	sub_14018B900(v116, 0);
	v116 = 0i64;
	v92 = 0i64;
	v18 = sub_1401B6D00(v17, v10, (__int64*)&v92);
	if (v18 >= 0)
	{
		v21 = v92;
		v19 = sub_1401A7C70((__int64)v113, (__int64)v92);
		if (v21)
		{
			v20 = *(_QWORD*)v21;
			goto LABEL_20;
		}
	}
	else
	{
		v19 = sub_1401A81B0((__int64)v113, v18, (__int64)v10);
		if (v92)
		{
			v20 = *(_QWORD*)v92;
		LABEL_20:
			(*(void (**)(void))(v20 + 8))();
		}
	}
	if (v19 >= 0 && (v22 = sub_1401A5AE0((__int64)v113, L"Macros")) != 0)
	{
		v23 = sub_1401A5AE0(v22, L"Macro");
		v104 = v23;
		if (v23)
		{
			do
			{
				v24 = sub_1401A6B80(v23, L"Name");
				if (v24)
				{
					v26 = sub_1401A4F40(v24 + 32);
					v25 = 0;
				}
				else
				{
					v25 = 0;
					v26 = 0i64;
				}
				v27 = (int*)&unk_1409F9B0C;
				v28 = 0i64;
				if (v26)
					v27 = (int*)v26;
				v99 = 0i64;
				v29 = 0i64;
				if (*(_WORD*)v27)
				{
					do
						++v29;
					while (*((_WORD*)v27 + v29));
				}
				v30 = (2 * v29) >> 1;
				if ((unsigned __int64)(v30 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v28 = sub_14018B280(2 * (v30 + 1), 0);
					v99 = v28;
				}
				v31 = 2 * v30;
				sub_1407DB590(v28, v27, v31);
				if ((int*)((char*)v28 + v31))
					*(_WORD*)((char*)v28 + v31) = 0;
				v32 = sub_1401A6B80(v23, L"Character");
				if (v32)
					v33 = sub_1401A4F40(v32 + 32);
				else
					v33 = 0i64;
				v34 = (int*)&unk_1409F9DA4;
				v35 = 0i64;
				if (v33)
					v34 = (int*)v33;
				v97 = 0i64;
				v36 = 0i64;
				if (*(_WORD*)v34)
				{
					do
						++v36;
					while (*((_WORD*)v34 + v36));
				}
				v37 = (2 * v36) >> 1;
				if ((unsigned __int64)(v37 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v35 = sub_14018B280(2 * (v37 + 1), 0);
					v97 = v35;
				}
				v38 = 2 * v37;
				sub_1407DB590(v35, v34, v38);
				if ((int*)((char*)v35 + v38))
					*(_WORD*)((char*)v35 + v38) = 0;
				v39 = sub_1401A6B80(v23, L"Sprite");
				if (v39)
					v40 = sub_1401A4F40(v39 + 32);
				else
					v40 = 0i64;
				v41 = (int*)&unk_1409F9D44;
				v42 = 0i64;
				if (v40)
					v41 = (int*)v40;
				v98 = 0i64;
				v43 = 0i64;
				if (*(_WORD*)v41)
				{
					do
						++v43;
					while (*((_WORD*)v41 + v43));
				}
				v44 = (2 * v43) >> 1;
				if ((unsigned __int64)(v44 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v42 = sub_14018B280(2 * (v44 + 1), 0);
					v98 = v42;
				}
				v45 = 2 * v44;
				sub_1407DB590(v42, v41, v45);
				if ((int*)((char*)v42 + v45))
					*(_WORD*)((char*)v42 + v45) = 0;
				v91 = 0;
				v46 = sub_1401A6B80(v23, L"ID");
				if (v46)
				{
					v47 = (_WORD*)sub_1401A4F40(v46 + 32);
					sub_1407DF428(v47, (__int64)L"%d", &v91);
				}
				if (!v91)
					v91 = *(_DWORD*)(v3 + 72);
				v48 = *(_QWORD*)(v23 + 48);
				v49 = 0i64;
				v96 = 0i64;
				v50 = 0i64;
				v95 = 0i64;
				if (v48
					&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v48 + 16i64))(v48)
					&& (v51 = *(_QWORD*)(v23 + 48), !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v51 + 48i64))(v51)))
				{
					v52 = sub_1401A4F40(v51 + 24);
				}
				else
				{
					v52 = 0i64;
				}
				v53 = (int*)&unk_1409F9D1C;
				v54 = 0i64;
				if (v52)
					v53 = (int*)v52;
				v92 = 0i64;
				v55 = 0i64;
				if (*(_WORD*)v53)
				{
					do
						++v55;
					while (*((_WORD*)v53 + v55));
				}
				v56 = (2 * v55) >> 1;
				if ((unsigned __int64)(v56 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v54 = sub_14018B280(2 * (v56 + 1), 0);
					v92 = v54;
				}
				v57 = 2 * v56;
				sub_1407DB590(v54, v53, v57);
				v58 = (char*)v54 + v57;
				if (v58)
					*(_WORD*)v58 = 0;
				v59 = sub_14018B280(2i64, 0);
				v60 = (__int64)v59 + 2;
				v61 = v59;
				v108 = (__int64)v59 + 2;
				v106 = (__int64)v59;
				sub_1407DB590(v59, dword_1409F9CF4, 0i64);
				v62 = (__int64)v61;
				v107 = (__int64)v61;
				if (v61)
					*(_WORD*)v61 = 0;
				v63 = v92;
				v93 = 0;
				v64 = (v58 - (char*)v92) >> 1;
				v102 = v64;
				if (v64)
				{
					v65 = 0i64;
					do
					{
						v66 = *((unsigned __int16*)v63 + v65);
						if ((unsigned __int16)v66 <= 0x3Bu && (v67 = 0x800000000002400i64, _bittest64(&v67, v66)))
						{
							if ((v62 - (__int64)v61) >> 1)
								sub_140554170(&v95, (__int64)v105);
							if (v61 != (int*)v62)
							{
								sub_1407DB590(v61, (int*)v62, 2ui64);
								v62 -= 2 * ((v62 - (__int64)v61) >> 1);
								v107 = v62;
							}
							v64 = v102;
						}
						else
						{
							v73 = (v62 - (__int64)v61) >> 1;
							if (v73 || (_WORD)v66 != 9 && (_WORD)v66 != 32)
							{
								if (v62 + 2 == v60)
								{
									v94 = (v62 - (__int64)v61) >> 1;
									v100 = 1i64;
									v74 = (__int64*)&v100;
									if (v73)
										v74 = &v94;
									v75 = *v74;
									v94 = (v62 - (__int64)v61) >> 1;
									v76 = &v94;
									v100 = v73 + v75;
									if (v73 + v75 >= v73)
										v76 = (__int64*)&v100;
									v77 = 2 * (*v76 + 1);
									v78 = sub_14018B280(v77, 0);
									v79 = (__int64)v78;
									v80 = v78;
									if (v61 != (int*)v62)
									{
										v81 = (char*)v61 - (char*)v78;
										do
										{
											if (v80)
												*(_WORD*)v80 = *(_WORD*)((char*)v80 + v81);
											v80 = (int*)((char*)v80 + 2);
										} while ((int*)((char*)v80 + v81) != (int*)v62);
									}
									if (v80)
										*(_WORD*)v80 = 0;
									if (v61)
										sub_14018B900((__int64)v61, 0);
									v61 = (int*)v79;
									v106 = v79;
									v60 = v77 + v79;
									v25 = v93;
									v62 = (__int64)v80;
									v64 = v102;
									v108 = v60;
								}
								if (v62 != -2)
									*(_WORD*)(v62 + 2) = 0;
								*(_WORD*)v62 = v66;
								v107 = v62 + 2;
								v62 += 2i64;
							}
						}
						v63 = v92;
						v65 = ++v25;
						v93 = v25;
					} while (v25 < v64);
					v49 = v96;
					v50 = v95;
				}
				if ((v62 - (__int64)v61) >> 1)
				{
					sub_140554170(&v95, (__int64)v105);
					v49 = v96;
					v50 = v95;
				}
				v68 = sub_14018B280(120i64, 0);
				v69 = v98;
				v70 = v99;
				v71 = v97;
				if (v68)
					v72 = (int*)sub_140776F80((__int64)v68, v91, v97, v99, v98, &v95);
				else
					v72 = 0i64;
				v82 = *v72;
				v83 = v110[1];
				v84 = (int*)v83;
				v85 = *(_QWORD*)(v83 + 8);
				while (v85)
				{
					if (*(_DWORD*)(v85 + 32) < v82)
					{
						v85 = *(_QWORD*)(v85 + 24);
					}
					else
					{
						v84 = (int*)v85;
						v85 = *(_QWORD*)(v85 + 16);
					}
				}
				if (v84 == (int*)v83 || v82 < v84[8])
				{
					LODWORD(v112[0]) = *v72;
					v112[1] = 0i64;
					v94 = (__int64)v84;
					sub_14004F0D0((__int64)v110, &v111, &v94, v112);
					v84 = v111;
				}
				v86 = (__int64)v101;
				*((_QWORD*)v84 + 5) = v72;
				v87 = *(_DWORD*)(v86 + 72);
				if (v87 < ++v91)
					v87 = v91;
				*(_DWORD*)(v86 + 72) = v87;
				if (v61)
					sub_14018B900((__int64)v61, 0);
				if (v92)
					sub_14018B900((__int64)v92, 0);
				if (v49)
				{
					v88 = (__int64*)(v50 + 8);
					do
					{
						if (*v88)
							sub_14018B900(*v88, 0);
						v88 += 4;
						--v49;
					} while (v49);
				}
				if (v50)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v50 - 16) + 8i64))(v50 - 16);
				if (v69)
					sub_14018B900((__int64)v69, 0);
				if (v71)
					sub_14018B900((__int64)v71, 0);
				if (v70)
					sub_14018B900((__int64)v70, 0);
				v89 = sub_1401A5BC0(v104, L"Macro");
				v3 = (__int64)v101;
				v23 = v89;
				v104 = v89;
			} while (v89);
			v10 = v103;
			v15 = (__int64)v109;
		}
		sub_1401A76A0((__int64)v113);
	}
	else
	{
		sub_1401A76A0((__int64)v113);
	}
	if (v15)
		sub_14018B900(v15, 0);
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return v3;
}
// 1407774DC: variable 'v17' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 1409F9CF4: using guessed type int dword_1409F9CF4[10];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140B4F268: using guessed type wchar_t aName_34[5];
// 140B4F278: using guessed type wchar_t aMacro_0[6];
// 140B4F288: using guessed type wchar_t aMacro[6];
// 140B4F298: using guessed type wchar_t aMacros[7];
// 140B4F2A8: using guessed type wchar_t aLocalmacrosXml[16];
// 140B4F358: using guessed type wchar_t aId_28[3];
// 140B4F360: using guessed type wchar_t aSprite_3[7];
// 140B4F370: using guessed type wchar_t aCharacter_9[10];
// 140B76650: using guessed type __int64 (__fastcall *off_140B76650)();
// 1407772F0: using guessed type char var_510[8];

