//----- (00000001401380C0) ----------------------------------------------------
void __fastcall sub_1401380C0(__int64 a1, const __m128i* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	int v6; // eax
	int v7; // edi
	__int64 v8; // rbx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rdi
	int v12; // ecx
	wchar_t* v13; // rax
	const wchar_t* v14; // rdx
	bool v15; // zf
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64* v18; // rax
	__int64* v19; // rax
	__int64 v20; // rcx
	int* v21; // r14
	__int64 v22; // rax
	_WORD* v23; // rax
	__int64 v24; // r13
	__int64 v25; // rax
	_WORD* v26; // rax
	__int64 v27; // rax
	__int64 v28; // rax
	int* v29; // rdi
	int* v30; // rsi
	__int64 v31; // rax
	__int64 v32; // rbx
	unsigned __int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rax
	int* v36; // rdi
	int* v37; // r12
	__int64 v38; // rax
	__int64 v39; // rbx
	unsigned __int64 v40; // rbx
	__int64 v41; // rax
	_WORD* v42; // rax
	__int64 v43; // rax
	_WORD* v44; // rax
	int* v45; // rax
	__int64 v46; // r15
	__int64 v47; // rdi
	const wchar_t* v48; // rbx
	wchar_t* v49; // rax
	int v50; // edx
	bool v51; // zf
	__int64 v52; // rdi
	const wchar_t* v53; // rbx
	wchar_t* v54; // rax
	int v55; // edx
	bool v56; // zf
	_WORD* v57; // rax
	__int64 v58; // rax
	int* v59; // rdi
	__int64 v60; // rsi
	_WORD* v61; // rax
	int* v62; // rax
	int* v63; // rax
	__int64 v64; // rbx
	__int64 v65; // rcx
	__int64 v66; // rdi
	int v67; // [rsp+48h] [rbp-C0h] BYREF
	int v68; // [rsp+4Ch] [rbp-BCh] BYREF
	int v69; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v70; // [rsp+58h] [rbp-B0h] BYREF
	int* v71; // [rsp+60h] [rbp-A8h]
	__int64 v72; // [rsp+68h] [rbp-A0h]
	int* v73; // [rsp+78h] [rbp-90h]
	__int64 i; // [rsp+80h] [rbp-88h]
	char v75[8]; // [rsp+88h] [rbp-80h] BYREF
	int* v76; // [rsp+90h] [rbp-78h]
	_WORD* v77; // [rsp+98h] [rbp-70h]
	__int64 v78; // [rsp+A0h] [rbp-68h]
	__int64 v79[2]; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v80; // [rsp+B8h] [rbp-50h]
	int v81; // [rsp+C0h] [rbp-48h]
	__int64 v82; // [rsp+C8h] [rbp-40h]
	__int64 v83; // [rsp+D8h] [rbp-30h]
	__int64 v84; // [rsp+E8h] [rbp-20h]
	__int64 v85; // [rsp+F0h] [rbp-18h]
	int v86; // [rsp+104h] [rbp-4h]
	__int64 v87; // [rsp+110h] [rbp+8h]
	__int64 v88; // [rsp+118h] [rbp+10h]
	char v89[128]; // [rsp+128h] [rbp+20h] BYREF
	char v90[128]; // [rsp+1A8h] [rbp+A0h] BYREF
	char v91[128]; // [rsp+228h] [rbp+120h] BYREF
	char v92[120]; // [rsp+2A8h] [rbp+1A0h] BYREF
	int v94; // [rsp+378h] [rbp+270h] BYREF
	__int64 v95; // [rsp+380h] [rbp+278h] BYREF

	sub_1401A72E0((__int64)v79);
	sub_1401A59A0((__int64)v79);
	v4 = v87;
	v86 = 0;
	v87 = 0i64;
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	sub_14018B900(v88, 0);
	v88 = 0i64;
	v95 = 0i64;
	v6 = sub_1401B6D00(v5, a2, &v95);
	if (v6 >= 0)
	{
		v8 = v95;
		v7 = sub_1401A7C70((__int64)v79, v95);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	}
	else
	{
		v7 = sub_1401A81B0((__int64)v79, v6, (__int64)a2);
		if (v95)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v95 + 8i64))(v95);
	}
	if (v7 < 0)
		goto LABEL_25;
	v9 = v83;
	if (!v83)
		goto LABEL_25;
	while (1)
	{
		v10 = (**(__int64(__fastcall***)(__int64))v9)(v9);
		v11 = v10;
		if (!v10)
			goto LABEL_24;
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 48i64))(v10))
		{
			v12 = 0;
			v13 = 0i64;
		}
		else
		{
			v13 = (wchar_t*)sub_1401A4F40(v11 + 24);
			v12 = 0;
		}
		v14 = L"Addons";
		if (v13 == L"Addons")
			goto LABEL_42;
		if (*v13)
			break;
	LABEL_23:
		if (!*v14)
			goto LABEL_42;
	LABEL_24:
		v9 = *(_QWORD*)(v9 + 72);
		if (!v9)
			goto LABEL_25;
	}
	do
	{
		if (!*v14 || *v13 != *v14)
			break;
		v15 = v12 == 0x7FFFFFFF;
		if (v12 == 0x7FFFFFFF)
			goto LABEL_21;
		++v13;
		++v14;
		++v12;
	} while (*v13);
	v15 = v12 == 0x7FFFFFFF;
LABEL_21:
	if (!v15)
	{
		if (*v13)
			goto LABEL_24;
		goto LABEL_23;
	}
LABEL_42:
	v21 = 0i64;
	if (v11)
	{
		v94 = 0;
		v22 = sub_1401A6B80(v11, L"APIVersion");
		if (v22)
		{
			v23 = (_WORD*)sub_1401A4F40(v22 + 32);
			sub_1407DF428(v23, (__int64)L"%d", &v94);
		}
		if (v94 >= *(_DWORD*)(a1 + 72))
		{
			v24 = sub_1401A5AE0(v11, L"Addon");
			for (i = v24; v24; i = v24)
			{
				v68 = 2;
				v25 = sub_1401A6B80(v24, L"LoadOnStart");
				if (v25)
				{
					v26 = (_WORD*)sub_1401A4F40(v25 + 32);
					sub_1407DF428(v26, (__int64)L"%d", &v68);
				}
				v27 = sub_1401A6B80(v24, L"Folder");
				if (v27)
					v28 = sub_1401A4F40(v27 + 32);
				else
					v28 = 0i64;
				v29 = (int*)&unk_1409D90EC;
				v30 = 0i64;
				if (v28)
					v29 = (int*)v28;
				v73 = 0i64;
				v31 = 0i64;
				if (*(_WORD*)v29)
				{
					do
						++v31;
					while (*((_WORD*)v29 + v31));
				}
				v32 = (2 * v31) >> 1;
				if ((unsigned __int64)(v32 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v30 = sub_14018B280(2 * (v32 + 1), 0);
					v73 = v30;
				}
				v33 = 2 * v32;
				sub_1407DB590(v30, v29, v33);
				if ((int*)((char*)v30 + v33))
					*(_WORD*)((char*)v30 + v33) = 0;
				v34 = sub_1401A6B80(v24, L"SubLoc");
				if (v34)
					v35 = sub_1401A4F40(v34 + 32);
				else
					v35 = 0i64;
				v36 = (int*)&unk_1409D9014;
				v37 = 0i64;
				if (v35)
					v36 = (int*)v35;
				v38 = 0i64;
				if (*(_WORD*)v36)
				{
					do
						++v38;
					while (*((_WORD*)v36 + v38));
				}
				v39 = (2 * v38) >> 1;
				if ((unsigned __int64)(v39 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v37 = sub_14018B280(2 * (v39 + 1), 0);
				v40 = 2 * v39;
				sub_1407DB590(v37, v36, v40);
				if ((int*)((char*)v37 + v40))
					*(_WORD*)((char*)v37 + v40) = 0;
				v67 = 0;
				v41 = sub_1401A6B80(v24, L"Carbine");
				if (v41)
				{
					v42 = (_WORD*)sub_1401A4F40(v41 + 32);
					sub_1407DF428(v42, (__int64)L"%d", &v67);
				}
				v69 = 0;
				v43 = sub_1401A6B80(v24, L"IgnoreVersionForceLoad");
				if (v43)
				{
					v44 = (_WORD*)sub_1401A4F40(v43 + 32);
					sub_1407DF428(v44, (__int64)L"%d", &v69);
				}
				v45 = sub_14018B280(72i64, 0);
				v72 = 0i64;
				v71 = v45;
				*(_BYTE*)v45 = 0;
				*((_QWORD*)v71 + 1) = 0i64;
				*((_QWORD*)v71 + 2) = v71;
				*((_QWORD*)v71 + 3) = v71;
				v46 = sub_1401A5AE0(v24, L"LoadCondition");
				if (v46)
				{
					do
					{
						v47 = *(_QWORD*)(v46 + 96);
						if (v47)
						{
							while (1)
							{
								v48 = L"Condition";
								v49 = (wchar_t*)sub_1401A4F40(v47 + 8);
								if (v49 == L"Condition")
									break;
								v50 = 0;
								if (!*v49)
									goto LABEL_86;
								do
								{
									if (!*v48 || *v49 != *v48)
										break;
									v51 = v50 == 0x7FFFFFFF;
									if (v50 == 0x7FFFFFFF)
										goto LABEL_84;
									++v49;
									++v48;
									++v50;
								} while (*v49);
								v51 = v50 == 0x7FFFFFFF;
							LABEL_84:
								if (v51)
									break;
								if (!*v49)
								{
								LABEL_86:
									if (!*v48)
										break;
								}
								v47 = *(_QWORD*)(v47 + 56);
								if (!v47)
									goto LABEL_90;
							}
							v21 = (int*)sub_1401A4F40(v47 + 32);
						}
					LABEL_90:
						v52 = *(_QWORD*)(v46 + 96);
						LODWORD(v95) = 2;
						if (v52)
						{
							while (1)
							{
								v53 = L"LoadOnStart";
								v54 = (wchar_t*)sub_1401A4F40(v52 + 8);
								if (v54 == L"LoadOnStart")
									break;
								v55 = 0;
								if (*v54)
								{
									do
									{
										if (!*v53 || *v54 != *v53)
											break;
										v56 = v55 == 0x7FFFFFFF;
										if (v55 == 0x7FFFFFFF)
											goto LABEL_98;
										++v54;
										++v53;
										++v55;
									} while (*v54);
									v56 = v55 == 0x7FFFFFFF;
								LABEL_98:
									if (v56)
										break;
								}
								if (!*v54 && !*v53)
									break;
								v52 = *(_QWORD*)(v52 + 56);
								if (!v52)
									goto LABEL_104;
							}
							v57 = (_WORD*)sub_1401A4F40(v52 + 32);
							sub_1407DF428(v57, (__int64)L"%d", &v95);
						}
					LABEL_104:
						if (v21 && *(_WORD*)v21)
						{
							v58 = 0i64;
							v59 = 0i64;
							v76 = 0i64;
							v78 = 0i64;
							do
								v15 = *((_WORD*)v21 + ++v58) == 0;
							while (!v15);
							v60 = (2 * v58) >> 1;
							if ((unsigned __int64)(v60 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							{
								v59 = sub_14018B280(2 * (v60 + 1), 0);
								v76 = v59;
								v78 = (__int64)v59 + 2 * v60 + 2;
							}
							sub_1407DB590(v59, v21, 2 * v60);
							v61 = (_WORD*)v59 + v60;
							v77 = v61;
							if (v61)
								*v61 = 0;
							v62 = sub_140044B90((__int64)&v70, (__int64)v75);
							*v62 = v95;
							if (v59)
								sub_14018B900((__int64)v59, 0);
						}
						v21 = 0i64;
						v46 = sub_1401A5BC0(v46, L"LoadCondition");
					} while (v46);
					v24 = i;
					v30 = v73;
				}
				sub_1401395D0(a1, v37, v30, v67 != 0, v68, v69 != 0, (__int64)&v70);
				if (v72)
				{
					v63 = v71;
					v64 = *((_QWORD*)v71 + 1);
					if (v64)
					{
						do
						{
							sub_140044CA0((__int64)&v70, *(_QWORD**)(v64 + 24));
							v65 = *(_QWORD*)(v64 + 40);
							v66 = *(_QWORD*)(v64 + 16);
							if (v65)
								sub_14018B900(v65, 0);
							sub_14018B900(v64, 0);
							v64 = v66;
						} while (v66);
						v63 = v71;
					}
					*((_QWORD*)v63 + 2) = v63;
					*((_QWORD*)v71 + 1) = 0i64;
					*((_QWORD*)v71 + 3) = v71;
					v72 = 0i64;
				}
				sub_14018B900((__int64)v71, 0);
				if (v37)
					sub_14018B900((__int64)v37, 0);
				if (v30)
					sub_14018B900((__int64)v30, 0);
				v24 = sub_1401A5BC0(v24, L"Addon");
			}
		}
	}
LABEL_25:
	v79[0] = (__int64)off_140B5EB10;
	sub_1401A59A0((__int64)v79);
	v16 = v87;
	v86 = 0;
	v87 = 0i64;
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	sub_14018B900(v88, 0);
	v88 = 0i64;
	sub_1401A8EC0((__int64)v92);
	sub_1401A8F80((__int64)v91);
	sub_1401A9040((__int64)v90);
	sub_1401A9130((__int64)v89);
	if (v87)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v87 - 16) + 8i64))(v87 - 16);
	v79[0] = (__int64)off_140B5EDE0;
	sub_1401A59A0((__int64)v79);
	v17 = v80;
	if (v80)
	{
		v18 = *(__int64**)(v80 + 48);
		if (v79 == v18)
			*(_QWORD*)(v80 + 48) = v18[9];
		v19 = *(__int64**)(v17 + 56);
		if (v79 == v19)
			*(_QWORD*)(v17 + 56) = v19[8];
		v20 = v84;
		if (v84)
		{
			*(_QWORD*)(v84 + 72) = v85;
			v20 = v84;
		}
		if (v85)
			*(_QWORD*)(v85 + 64) = v20;
		v80 = 0i64;
	}
	if ((v81 & 0x200) != 0)
		sub_14018B900(v82, 0);
}
// 140138697: conditional instruction was optimized away because rdi.8!=0
// 140138727: conditional instruction was optimized away because rdi.8!=0
// 14013813D: variable 'v5' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A22670: using guessed type wchar_t aFolder_0[7];
// 140A22738: using guessed type wchar_t aApiversion[11];
// 140A22750: using guessed type wchar_t aIgnoreversionf[23];
// 140A22A10: using guessed type wchar_t aSubloc[7];
// 140A32CF0: using guessed type wchar_t aAddons_2[7];
// 140A32D28: using guessed type wchar_t aAddon[6];
// 140A32DD8: using guessed type wchar_t aLoadonstart[12];
// 140A32E20: using guessed type wchar_t aLoadcondition[14];
// 140A32E60: using guessed type wchar_t aCarbine[8];
// 140A32E70: using guessed type wchar_t aCondition[10];
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();
// 140B5EDE0: using guessed type __int64 (__fastcall *off_140B5EDE0[12])();
// 1401380C0: using guessed type char var_B0[120];
// 1401380C0: using guessed type char var_130[128];
// 1401380C0: using guessed type char var_1B0[128];
// 1401380C0: using guessed type char var_230[128];
// 1401380C0: using guessed type char var_2D0[8];

